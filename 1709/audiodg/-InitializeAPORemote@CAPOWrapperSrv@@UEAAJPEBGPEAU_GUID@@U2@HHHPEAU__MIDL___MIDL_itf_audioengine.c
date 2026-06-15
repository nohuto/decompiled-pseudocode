/*
 * XREFs of ?InitializeAPORemote@CAPOWrapperSrv@@UEAAJPEBGPEAU_GUID@@U2@HHHPEAU__MIDL___MIDL_itf_audioenginepolicy_0000_0010_0002@@@Z @ 0x140013380
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize@CAPOWrapperSrv@@UEAAJIPEAE@Z @ 0x1400138D0 (-Initialize@CAPOWrapperSrv@@UEAAJIPEAE@Z.c)
 *     ?QueryInterface@CSystemEffectWrapper@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140014170 (-QueryInterface@CSystemEffectWrapper@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?FillAPOInitSystemEffectsStructure@@YAJPEAUIMMDevice@@PEAU_GUID@@U2@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEAUAPOInitSystemEffects2@@@Z @ 0x140014460 (-FillAPOInitSystemEffectsStructure@@YAJPEAUIMMDevice@@PEAU_GUID@@U2@HW4__MIDL___MIDL_itf_audioen.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x14001BF70 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     __security_check_cookie @ 0x14001CBB0 (__security_check_cookie.c)
 *     memset @ 0x14001D9AC (memset.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 *     _TlgWrite @ 0x140036120 (_TlgWrite.c)
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
  const GUID *v12; // r8
  GUID *v13; // r9
  int v14; // ebx
  CSystemEffectWrapper *v15; // rcx
  __int64 (__fastcall *v16)(CSystemEffectWrapper *__hidden, const struct _GUID *, void **); // rax
  int Interface; // eax
  CAPOWrapperSrv *v18; // rcx
  __int64 (__fastcall *v19)(CAPOWrapperSrv *__hidden, unsigned int, unsigned __int8 *); // rax
  int v20; // eax
  __int64 v21; // rcx
  __int64 (__fastcall *v22)(CSystemEffectWrapper *__hidden, const struct _GUID *, void **); // rax
  int v23; // eax
  __int64 v25; // rax
  HRESULT v26; // [rsp+30h] [rbp-D0h] BYREF
  struct IUnknown *v27; // [rsp+38h] [rbp-C8h] BYREF
  struct _GUID v28; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v29; // [rsp+50h] [rbp-B0h] BYREF
  struct IMMDevice *v30; // [rsp+58h] [rbp-A8h] BYREF
  LPVOID ppv; // [rsp+60h] [rbp-A0h] BYREF
  struct APOInitSystemEffects2 v32; // [rsp+70h] [rbp-90h] BYREF
  _BYTE pData[56]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v34; // [rsp+108h] [rbp+8h]
  HRESULT *v35; // [rsp+110h] [rbp+10h]
  __int64 v36; // [rsp+118h] [rbp+18h]

  v26 = 0;
  ppv = 0LL;
  v30 = 0LL;
  v29 = 0LL;
  v27 = 0LL;
  memset(&v32, 0, sizeof(v32));
  if ( !a2 )
    return 2147942487LL;
  if ( !*((_QWORD *)this + 11) )
    return 2147942414LL;
  *(_DWORD *)a8 = 0;
  v26 = CoCreateInstance(
          &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
          0LL,
          0x17u,
          &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
          &ppv);
  v14 = v26;
  if ( v26 < 0 )
    goto LABEL_48;
  v26 = (*(__int64 (__fastcall **)(LPVOID, const unsigned __int16 *, struct IMMDevice **))(*(_QWORD *)ppv + 40LL))(
          ppv,
          a2,
          &v30);
  v14 = v26;
  if ( v26 < 0 )
    goto LABEL_48;
  v15 = (CSystemEffectWrapper *)*((_QWORD *)this + 11);
  v16 = **(__int64 (__fastcall ***)(CSystemEffectWrapper *__hidden, const struct _GUID *, void **))v15;
  if ( v16 == CSystemEffectWrapper::QueryInterface )
    Interface = CSystemEffectWrapper::QueryInterface(v15, &GUID_bafe99d2_7436_44ce_9e0e_4d89afbfff56, (void **)&v27);
  else
    Interface = v16(v15, &GUID_bafe99d2_7436_44ce_9e0e_4d89afbfff56, (void **)&v27);
  v14 = Interface;
  v26 = Interface;
  if ( Interface < 0 )
  {
    if ( a7 == 1 )
      goto LABEL_21;
    v26 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 11))(
            *((_QWORD *)this + 11),
            &GUID_5fa00f27_add6_499a_8a9d_6b98521fa75b,
            &v29);
    if ( v26 < 0 )
    {
      v14 = 0;
      v26 = 0;
      goto LABEL_22;
    }
  }
  v28 = *a4;
  v26 = FillAPOInitSystemEffectsStructure(v30, a3, &v28, a5, a6, &v32);
  v14 = v26;
  if ( v26 < 0 )
    goto LABEL_48;
  if ( v27 )
  {
    v18 = (CAPOWrapperSrv *)((char *)this + 8);
    v19 = *(__int64 (__fastcall **)(CAPOWrapperSrv *__hidden, unsigned int, unsigned __int8 *))(*((_QWORD *)this + 1)
                                                                                              + 48LL);
    if ( v19 == CAPOWrapperSrv::Initialize )
      v20 = CAPOWrapperSrv::Initialize(v18, 0x58u, (unsigned __int8 *)&v32);
    else
      v20 = v19(v18, 88u, (unsigned __int8 *)&v32);
    v26 = v20;
    v14 = v20;
    if ( v20 >= 0 )
      goto LABEL_13;
LABEL_48:
    if ( (unsigned int)hProvider > 2 )
    {
      *(_QWORD *)&pData[40] = 36LL;
      *(_QWORD *)&pData[32] = "CAPOWrapperSrv::InitializeAPORemote";
      *(_QWORD *)&pData[48] = &v28;
      v35 = &v26;
      v28.Data1 = 154;
      v34 = 4LL;
      v36 = 4LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1400725B4, v12, v13, 5u, (EVENT_DATA_DESCRIPTOR *)pData);
      v14 = v26;
    }
    goto LABEL_22;
  }
  if ( v29 )
  {
    memset(&pData[4], 0, 0x34uLL);
    *(_DWORD *)&pData[16] = *(_DWORD *)&v32.APOInit.clsid.Data4[4];
    *(_QWORD *)&pData[24] = v32.pAPOEndpointProperties;
    *(_QWORD *)&pData[32] = v32.pAPOSystemEffectsProperties;
    *(_QWORD *)&pData[40] = v32.pReserved;
    *(_QWORD *)&pData[48] = v32.pDeviceCollection;
    v25 = *((_QWORD *)this + 1);
    *(_OWORD *)pData = *(_OWORD *)&v32.APOInit.cbSize;
    *(_DWORD *)pData = 56;
    v26 = (*(__int64 (__fastcall **)(char *, __int64, _BYTE *))(v25 + 48))((char *)this + 8, 56LL, pData);
    v14 = v26;
    if ( v26 < 0 )
      goto LABEL_48;
  }
LABEL_13:
  if ( a7 && *((struct IUnknown **)this + 12) != v27 )
  {
    ATL::AtlComPtrAssign((struct IUnknown **)this + 12, v27);
    v14 = v26;
  }
  v13 = (GUID *)*((_QWORD *)this + 11);
  v21 = 0LL;
  *(_QWORD *)&v28.Data1 = 0LL;
  if ( !v13 )
    goto LABEL_18;
  v22 = **(__int64 (__fastcall ***)(CSystemEffectWrapper *__hidden, const struct _GUID *, void **))&v13->Data1;
  if ( v22 == CSystemEffectWrapper::QueryInterface )
    CSystemEffectWrapper::QueryInterface(
      (CSystemEffectWrapper *)v13,
      &GUID_4ceb0aab_fa19_48ed_a857_87771ae1b768,
      (void **)&v28);
  else
    v22((CSystemEffectWrapper *)v13, &GUID_4ceb0aab_fa19_48ed_a857_87771ae1b768, (void **)&v28);
  v21 = *(_QWORD *)&v28.Data1;
  v14 = v26;
  if ( *(_QWORD *)&v28.Data1 )
    v23 = 1;
  else
LABEL_18:
    v23 = 0;
  *(_DWORD *)a8 = v23;
  if ( v21 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    v14 = v26;
  }
LABEL_21:
  if ( v14 < 0 )
    goto LABEL_48;
LABEL_22:
  if ( v32.pAPOEndpointProperties )
  {
    ((void (__fastcall *)(IPropertyStore *))v32.pAPOEndpointProperties->lpVtbl->Release)(v32.pAPOEndpointProperties);
    v14 = v26;
    v32.pAPOEndpointProperties = 0LL;
  }
  if ( v32.pAPOSystemEffectsProperties )
  {
    ((void (__fastcall *)(IPropertyStore *))v32.pAPOSystemEffectsProperties->lpVtbl->Release)(v32.pAPOSystemEffectsProperties);
    v14 = v26;
    v32.pAPOSystemEffectsProperties = 0LL;
  }
  if ( v32.pDeviceCollection )
  {
    ((void (__fastcall *)(IMMDeviceCollection *))v32.pDeviceCollection->lpVtbl->Release)(v32.pDeviceCollection);
    v14 = v26;
    v32.pDeviceCollection = 0LL;
  }
  if ( v27 )
    ((void (__fastcall *)(struct IUnknown *))v27->lpVtbl->Release)(v27);
  if ( v29 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
  if ( v30 )
    ((void (__fastcall *)(struct IMMDevice *))v30->lpVtbl->Release)(v30);
  if ( ppv )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  return (unsigned int)v14;
}
