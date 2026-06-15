/*
 * XREFs of ?InitializeAPORemote@CAPOWrapperSrv@@UEAAJPEBGPEAU_GUID@@U2@HHHPEAU__MIDL___MIDL_itf_audioenginepolicy_0000_0010_0002@@@Z @ 0x140015B90
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize@CAPOWrapperSrv@@UEAAJIPEAE@Z @ 0x140015410 (-Initialize@CAPOWrapperSrv@@UEAAJIPEAE@Z.c)
 *     ?QueryInterface@CSystemEffectWrapper@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140016340 (-QueryInterface@CSystemEffectWrapper@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?FillAPOInitSystemEffectsStructure@@YAJPEAUIMMDevice@@PEAU_GUID@@U2@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEAUAPOInitSystemEffects2@@@Z @ 0x1400165E0 (-FillAPOInitSystemEffectsStructure@@YAJPEAUIMMDevice@@PEAU_GUID@@U2@HW4__MIDL___MIDL_itf_audioen.c)
 *     __security_check_cookie @ 0x14001CE40 (__security_check_cookie.c)
 *     memset @ 0x14001DC2C (memset.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     _TlgCreateSz @ 0x1400365A0 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x140036628 (_TlgWrite.c)
 */

__int64 __fastcall CAPOWrapperSrv::InitializeAPORemote(
        CAPOWrapperSrv *this,
        const unsigned __int16 *a2,
        struct _GUID *a3,
        struct _GUID *a4,
        int a5,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a6,
        int a7,
        struct __MIDL___MIDL_itf_audioenginepolicy_0000_0010_0002 *a8)
{
  CSystemEffectWrapper *v12; // rcx
  __int64 (__fastcall *v13)(CSystemEffectWrapper *__hidden, const struct _GUID *, void **); // rax
  int v14; // eax
  CAPOWrapperSrv *v15; // rcx
  __int64 (__fastcall *v16)(CAPOWrapperSrv *, __int64, unsigned __int8 *); // rax
  int v17; // eax
  CSystemEffectWrapper *v18; // r9
  __int64 v19; // rcx
  __int64 (__fastcall *v20)(CSystemEffectWrapper *__hidden, const struct _GUID *, void **); // rax
  unsigned __int8 v21; // al
  unsigned int v22; // edi
  void *v24; // rbx
  __int64 v25; // rcx
  __int64 v26; // rax
  LPCGUID v27; // r8
  LPCGUID v28; // r9
  HRESULT v29; // [rsp+30h] [rbp-D0h] BYREF
  void *v30; // [rsp+38h] [rbp-C8h] BYREF
  struct _GUID v31; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v32; // [rsp+50h] [rbp-B0h] BYREF
  struct IMMDevice *v33; // [rsp+58h] [rbp-A8h] BYREF
  LPVOID ppv; // [rsp+60h] [rbp-A0h] BYREF
  struct APOInitSystemEffects2 v35; // [rsp+70h] [rbp-90h] BYREF
  _BYTE pData[56]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v37; // [rsp+108h] [rbp+8h]
  HRESULT *v38; // [rsp+110h] [rbp+10h]
  __int64 v39; // [rsp+118h] [rbp+18h]

  v29 = 0;
  ppv = 0LL;
  v33 = 0LL;
  v32 = 0LL;
  v30 = 0LL;
  memset(&v35, 0, sizeof(v35));
  if ( !a2 )
    return 2147942487LL;
  if ( !*((_QWORD *)this + 11) )
    return 2147942414LL;
  *(_DWORD *)a8 = 0;
  v29 = CoCreateInstance(
          &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
          0LL,
          0x17u,
          &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
          &ppv);
  if ( v29 < 0 )
    goto LABEL_53;
  v29 = (*(__int64 (__fastcall **)(LPVOID, const unsigned __int16 *, struct IMMDevice **))(*(_QWORD *)ppv + 40LL))(
          ppv,
          a2,
          &v33);
  if ( v29 < 0 )
    goto LABEL_53;
  v12 = (CSystemEffectWrapper *)*((_QWORD *)this + 11);
  v13 = **(__int64 (__fastcall ***)(CSystemEffectWrapper *__hidden, const struct _GUID *, void **))v12;
  if ( v13 == CSystemEffectWrapper::QueryInterface )
    v14 = CSystemEffectWrapper::QueryInterface(v12, &GUID_bafe99d2_7436_44ce_9e0e_4d89afbfff56, &v30);
  else
    v14 = v13(v12, &GUID_bafe99d2_7436_44ce_9e0e_4d89afbfff56, &v30);
  v29 = v14;
  if ( v14 < 0 )
  {
    if ( a7 == 1 )
      goto LABEL_21;
    v29 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 11))(
            *((_QWORD *)this + 11),
            &GUID_5fa00f27_add6_499a_8a9d_6b98521fa75b,
            &v32);
    if ( v29 < 0 )
    {
      v29 = 0;
      goto LABEL_22;
    }
  }
  v31 = *a4;
  v29 = FillAPOInitSystemEffectsStructure(v33, a3, &v31, a5, a6, &v35);
  if ( v29 < 0 )
    goto LABEL_53;
  if ( v30 )
  {
    v15 = (CAPOWrapperSrv *)((char *)this + 8);
    v16 = *(__int64 (__fastcall **)(CAPOWrapperSrv *, __int64, unsigned __int8 *))(*((_QWORD *)this + 1) + 48LL);
    if ( v16 == CAPOWrapperSrv::Initialize )
      v17 = CAPOWrapperSrv::Initialize(v15, 88LL, (unsigned __int8 *)&v35);
    else
      v17 = v16(v15, 88LL, (unsigned __int8 *)&v35);
    v29 = v17;
    if ( v17 >= 0 )
      goto LABEL_13;
LABEL_53:
    if ( (unsigned int)hProvider > 2 )
    {
      TlgCreateSz((PEVENT_DATA_DESCRIPTOR)&pData[32], "CAPOWrapperSrv::InitializeAPORemote");
      v31.Data1 = 154;
      *(_QWORD *)&pData[48] = &v31;
      v38 = &v29;
      v37 = 4LL;
      v39 = 4LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_14006F553, v27, v28, 5u, (EVENT_DATA_DESCRIPTOR *)pData);
    }
    goto LABEL_22;
  }
  if ( v32 )
  {
    memset(&pData[4], 0, 0x34uLL);
    *(_DWORD *)&pData[16] = *(_DWORD *)&v35.APOInit.clsid.Data4[4];
    *(_QWORD *)&pData[24] = v35.pAPOEndpointProperties;
    *(_QWORD *)&pData[32] = v35.pAPOSystemEffectsProperties;
    *(_QWORD *)&pData[40] = v35.pReserved;
    *(_QWORD *)&pData[48] = v35.pDeviceCollection;
    v26 = *((_QWORD *)this + 1);
    *(_OWORD *)pData = *(_OWORD *)&v35.APOInit.cbSize;
    *(_DWORD *)pData = 56;
    v29 = (*(__int64 (__fastcall **)(char *, __int64, _BYTE *))(v26 + 48))((char *)this + 8, 56LL, pData);
    if ( v29 < 0 )
      goto LABEL_53;
  }
LABEL_13:
  if ( a7 )
  {
    v24 = v30;
    if ( *((void **)this + 12) != v30 )
    {
      if ( v30 )
        (*(void (__fastcall **)(void *))(*(_QWORD *)v30 + 8LL))(v30);
      v25 = *((_QWORD *)this + 12);
      if ( v25 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
      *((_QWORD *)this + 12) = v24;
    }
  }
  v18 = (CSystemEffectWrapper *)*((_QWORD *)this + 11);
  v19 = 0LL;
  *(_QWORD *)&v31.Data1 = 0LL;
  if ( !v18 )
    goto LABEL_18;
  v20 = **(__int64 (__fastcall ***)(CSystemEffectWrapper *__hidden, const struct _GUID *, void **))v18;
  if ( v20 == CSystemEffectWrapper::QueryInterface )
    CSystemEffectWrapper::QueryInterface(v18, &GUID_4ceb0aab_fa19_48ed_a857_87771ae1b768, (void **)&v31);
  else
    v20(v18, &GUID_4ceb0aab_fa19_48ed_a857_87771ae1b768, (void **)&v31);
  v19 = *(_QWORD *)&v31.Data1;
  if ( *(_QWORD *)&v31.Data1 )
    v21 = 1;
  else
LABEL_18:
    v21 = 0;
  *(_DWORD *)a8 = v21;
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
LABEL_21:
  if ( v29 < 0 )
    goto LABEL_53;
LABEL_22:
  if ( v35.pAPOEndpointProperties )
  {
    ((void (__fastcall *)(IPropertyStore *))v35.pAPOEndpointProperties->lpVtbl->Release)(v35.pAPOEndpointProperties);
    v35.pAPOEndpointProperties = 0LL;
  }
  if ( v35.pAPOSystemEffectsProperties )
  {
    ((void (__fastcall *)(IPropertyStore *))v35.pAPOSystemEffectsProperties->lpVtbl->Release)(v35.pAPOSystemEffectsProperties);
    v35.pAPOSystemEffectsProperties = 0LL;
  }
  if ( v35.pDeviceCollection )
  {
    ((void (__fastcall *)(IMMDeviceCollection *))v35.pDeviceCollection->lpVtbl->Release)(v35.pDeviceCollection);
    v35.pDeviceCollection = 0LL;
  }
  v22 = v29;
  if ( v30 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v30 + 16LL))(v30);
  if ( v32 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
  if ( v33 )
    ((void (__fastcall *)(struct IMMDevice *))v33->lpVtbl->Release)(v33);
  if ( ppv )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  return v22;
}
