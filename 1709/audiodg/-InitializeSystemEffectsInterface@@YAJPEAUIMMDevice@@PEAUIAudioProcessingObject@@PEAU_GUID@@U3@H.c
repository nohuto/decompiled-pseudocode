/*
 * XREFs of ?InitializeSystemEffectsInterface@@YAJPEAUIMMDevice@@PEAUIAudioProcessingObject@@PEAU_GUID@@U3@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x14000E560
 * Callers:
 *     ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x1400091F0 (-ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x140009E90 (-ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ.c)
 * Callees:
 *     ?FillAPOInitSystemEffectsStructure@@YAJPEAUIMMDevice@@PEAU_GUID@@U2@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEAUAPOInitSystemEffects2@@@Z @ 0x140014460 (-FillAPOInitSystemEffectsStructure@@YAJPEAUIMMDevice@@PEAU_GUID@@U2@HW4__MIDL___MIDL_itf_audioen.c)
 *     __security_check_cookie @ 0x14001CBB0 (__security_check_cookie.c)
 *     memset @ 0x14001D9AC (memset.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0jjt @ 0x140048D58 (McTemplateU0jjt.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall InitializeSystemEffectsInterface(
        struct IMMDevice *a1,
        struct IAudioProcessingObject *a2,
        struct _GUID *a3,
        struct _GUID *a4)
{
  __int64 v8; // rcx
  GUID *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // ebx
  APOInitSystemEffects2 *v13; // r8
  __int64 v14; // rdx
  GUID *v16; // r9
  __int64 v17; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v18[3]; // [rsp+38h] [rbp-C8h] BYREF
  struct _GUID v19; // [rsp+50h] [rbp-B0h] BYREF
  APOInitSystemEffects2 v20; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v21[56]; // [rsp+C0h] [rbp-40h] BYREF

  v18[1] = -2LL;
  v18[0] = 0LL;
  v17 = 0LL;
  memset(&v20, 0, sizeof(v20));
  v8 = *(_QWORD *)&a4->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
  if ( *(_QWORD *)&a4->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
    v8 = *(_QWORD *)a4->Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
  v9 = &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
  if ( v8 )
    v9 = a4;
  *a4 = *v9;
  if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
         a2,
         &GUID_bafe99d2_7436_44ce_9e0e_4d89afbfff56,
         &v17) < 0
    && ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, _QWORD *))a2->lpVtbl->QueryInterface)(
         a2,
         &GUID_5fa00f27_add6_499a_8a9d_6b98521fa75b,
         v18) < 0 )
  {
    goto LABEL_12;
  }
  v19 = *a4;
  v12 = FillAPOInitSystemEffectsStructure(a1, a3, &v19, 0, eHostProcessConnector, &v20);
  if ( v12 < 0 )
    goto LABEL_13;
  if ( v17 )
  {
    v13 = &v20;
    v14 = 88LL;
  }
  else
  {
    if ( !v18[0] )
      goto LABEL_10;
    memset(&v21[4], 0, 0x34uLL);
    *(_OWORD *)v21 = *(_OWORD *)&v20.APOInit.cbSize;
    *(_DWORD *)&v21[16] = *(_DWORD *)&v20.APOInit.clsid.Data4[4];
    *(_DWORD *)v21 = 56;
    *(_QWORD *)&v21[24] = v20.pAPOEndpointProperties;
    *(_QWORD *)&v21[32] = v20.pAPOSystemEffectsProperties;
    *(_QWORD *)&v21[40] = v20.pReserved;
    *(_QWORD *)&v21[48] = v20.pDeviceCollection;
    v13 = (APOInitSystemEffects2 *)v21;
    v14 = 56LL;
  }
  v12 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, __int64, APOInitSystemEffects2 *))a2->lpVtbl->Initialize)(
          a2,
          v14,
          v13);
LABEL_10:
  if ( v12 < 0 )
    goto LABEL_13;
  if ( (Microsoft_Windows_AudioEnableBits & 0x200) != 0 )
  {
    v16 = &GUID_00000000_0000_0000_0000_000000000000;
    if ( v17 )
      v16 = a4;
    McTemplateU0jjt(v11, v10, a3, v16);
  }
LABEL_12:
  v12 = 0;
LABEL_13:
  if ( v20.pAPOEndpointProperties )
  {
    ((void (__fastcall *)(IPropertyStore *))v20.pAPOEndpointProperties->lpVtbl->Release)(v20.pAPOEndpointProperties);
    v20.pAPOEndpointProperties = 0LL;
  }
  if ( v20.pAPOSystemEffectsProperties )
  {
    ((void (__fastcall *)(IPropertyStore *))v20.pAPOSystemEffectsProperties->lpVtbl->Release)(v20.pAPOSystemEffectsProperties);
    v20.pAPOSystemEffectsProperties = 0LL;
  }
  if ( v20.pDeviceCollection )
  {
    ((void (__fastcall *)(IMMDeviceCollection *))v20.pDeviceCollection->lpVtbl->Release)(v20.pDeviceCollection);
    v20.pDeviceCollection = 0LL;
  }
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  if ( v18[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v18[0] + 16LL))(v18[0]);
  return (unsigned int)v12;
}
