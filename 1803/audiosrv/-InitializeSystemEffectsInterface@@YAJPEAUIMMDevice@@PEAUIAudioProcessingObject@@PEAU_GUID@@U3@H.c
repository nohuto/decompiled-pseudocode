/*
 * XREFs of ?InitializeSystemEffectsInterface@@YAJPEAUIMMDevice@@PEAUIAudioProcessingObject@@PEAU_GUID@@U3@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18010B034
 * Callers:
 *     ?Initialize@CCompositeSystemEffect@@UEAAJPEAUIMMDevice@@U_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18002C760 (-Initialize@CCompositeSystemEffect@@UEAAJPEAUIMMDevice@@U_GUID@@HW4__MIDL___MIDL_itf_audioengine.c)
 * Callees:
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800617E0 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?FillAPOInitSystemEffectsStructure@@YAJPEAUIMMDevice@@PEAU_GUID@@U2@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEAUAPOInitSystemEffects2@@@Z @ 0x18010A760 (-FillAPOInitSystemEffectsStructure@@YAJPEAUIMMDevice@@PEAU_GUID@@U2@HW4__MIDL___MIDL_itf_audioen.c)
 *     McTemplateU0jjt @ 0x18010B2E0 (McTemplateU0jjt.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall InitializeSystemEffectsInterface(
        struct IMMDevice *a1,
        struct IAudioProcessingObject *a2,
        struct _GUID *a3,
        struct _GUID *a4,
        BOOL a5,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a6,
        struct IAudioSystemEffects2 **a7)
{
  __int64 v11; // rax
  GUID *v12; // rcx
  int v13; // ebx
  struct APOInitSystemEffects2 *v14; // r8
  __int64 v15; // rdx
  GUID *v16; // r9
  struct IAudioSystemEffects2 *v17; // rax
  struct IAudioSystemEffects2 *v19; // [rsp+30h] [rbp-C1h] BYREF
  _QWORD v20[3]; // [rsp+38h] [rbp-B9h] BYREF
  struct _GUID v21; // [rsp+50h] [rbp-A1h] BYREF
  struct APOInitSystemEffects2 v22; // [rsp+60h] [rbp-91h] BYREF
  __int128 v23; // [rsp+C0h] [rbp-31h] BYREF
  int v24; // [rsp+D0h] [rbp-21h]
  IPropertyStore *pAPOEndpointProperties; // [rsp+D8h] [rbp-19h]
  IPropertyStore *pAPOSystemEffectsProperties; // [rsp+E0h] [rbp-11h]
  void *pReserved; // [rsp+E8h] [rbp-9h]
  IMMDeviceCollection *pDeviceCollection; // [rsp+F0h] [rbp-1h]

  v20[1] = -2LL;
  v20[0] = 0LL;
  v19 = 0LL;
  memset_0(&v22, 0, sizeof(v22));
  v11 = *(_QWORD *)&a4->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
  if ( *(_QWORD *)&a4->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
    v11 = *(_QWORD *)a4->Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
  v12 = &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
  if ( v11 )
    v12 = a4;
  *a4 = *v12;
  if ( a7 )
    *a7 = 0LL;
  v13 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, struct IAudioSystemEffects2 **))a2->lpVtbl->QueryInterface)(
          a2,
          &GUID_bafe99d2_7436_44ce_9e0e_4d89afbfff56,
          &v19);
  if ( v13 < 0 )
  {
    if ( a7 )
      goto LABEL_24;
    if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, _QWORD *))a2->lpVtbl->QueryInterface)(
           a2,
           &GUID_5fa00f27_add6_499a_8a9d_6b98521fa75b,
           v20) < 0 )
      goto LABEL_23;
  }
  v21 = *a4;
  v13 = FillAPOInitSystemEffectsStructure(a1, a3, &v21, a5, a6, &v22);
  if ( v13 < 0 )
    goto LABEL_24;
  if ( v19 )
  {
    v14 = &v22;
    v15 = 88LL;
LABEL_15:
    v13 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, __int64, struct APOInitSystemEffects2 *))a2->lpVtbl->Initialize)(
            a2,
            v15,
            v14);
    goto LABEL_16;
  }
  if ( v20[0] )
  {
    memset_0((char *)&v23 + 4, 0, 0x34uLL);
    v23 = *(_OWORD *)&v22.APOInit.cbSize;
    v24 = *(_DWORD *)&v22.APOInit.clsid.Data4[4];
    v15 = 56LL;
    LODWORD(v23) = 56;
    pAPOEndpointProperties = v22.pAPOEndpointProperties;
    pAPOSystemEffectsProperties = v22.pAPOSystemEffectsProperties;
    pReserved = v22.pReserved;
    pDeviceCollection = v22.pDeviceCollection;
    v14 = (struct APOInitSystemEffects2 *)&v23;
    goto LABEL_15;
  }
LABEL_16:
  if ( v13 < 0 )
    goto LABEL_24;
  if ( (Microsoft_Windows_AudioEnableBits & 0x200) != 0 )
  {
    v16 = &GUID_00000000_0000_0000_0000_000000000000;
    if ( v19 )
      v16 = a4;
    McTemplateU0jjt(v19, a5 & (unsigned int)-(v19 != 0LL), a3, v16, v19 != 0LL && a5);
  }
  if ( a7 )
  {
    v17 = v19;
    v19 = 0LL;
    *a7 = v17;
  }
LABEL_23:
  v13 = 0;
LABEL_24:
  if ( v22.pAPOEndpointProperties )
  {
    ((void (__fastcall *)(IPropertyStore *))v22.pAPOEndpointProperties->lpVtbl->Release)(v22.pAPOEndpointProperties);
    v22.pAPOEndpointProperties = 0LL;
  }
  if ( v22.pAPOSystemEffectsProperties )
  {
    ((void (__fastcall *)(IPropertyStore *))v22.pAPOSystemEffectsProperties->lpVtbl->Release)(v22.pAPOSystemEffectsProperties);
    v22.pAPOSystemEffectsProperties = 0LL;
  }
  if ( v22.pDeviceCollection )
  {
    ((void (__fastcall *)(IMMDeviceCollection *))v22.pDeviceCollection->lpVtbl->Release)(v22.pDeviceCollection);
    v22.pDeviceCollection = 0LL;
  }
  if ( v19 )
    ((void (__fastcall *)(struct IAudioSystemEffects2 *))v19->lpVtbl->Release)(v19);
  if ( v20[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v20[0] + 16LL))(v20[0]);
  return (unsigned int)v13;
}
