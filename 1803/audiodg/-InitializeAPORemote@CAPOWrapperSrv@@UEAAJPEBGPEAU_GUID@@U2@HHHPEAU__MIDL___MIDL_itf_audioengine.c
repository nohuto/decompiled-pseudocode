/*
 * XREFs of ?InitializeAPORemote@CAPOWrapperSrv@@UEAAJPEBGPEAU_GUID@@U2@HHHPEAU__MIDL___MIDL_itf_audioenginepolicy_0000_0010_0002@@@Z @ 0x1400130F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize@CAPOWrapperSrv@@UEAAJIPEAE@Z @ 0x140013050 (-Initialize@CAPOWrapperSrv@@UEAAJIPEAE@Z.c)
 *     ?QueryInterface@CSystemEffectWrapper@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140013E40 (-QueryInterface@CSystemEffectWrapper@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?FillAPOInitSystemEffectsStructure@@YAJPEAUIMMDevice@@PEAU_GUID@@U2@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEAUAPOInitSystemEffects2@@@Z @ 0x140014090 (-FillAPOInitSystemEffectsStructure@@YAJPEAUIMMDevice@@PEAU_GUID@@U2@HW4__MIDL___MIDL_itf_audioen.c)
 *     __security_check_cookie @ 0x14001BC70 (__security_check_cookie.c)
 *     memset_0 @ 0x14001C9A0 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x140033578 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     _TlgWrite @ 0x140034DB0 (_TlgWrite.c)
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
  const GUID *v12; // r9
  CSystemEffectWrapper *v13; // rcx
  __int64 (__fastcall *v14)(CSystemEffectWrapper *__hidden, const struct _GUID *, void **); // rax
  int Interface; // eax
  CAPOWrapperSrv *v16; // rcx
  __int64 (__fastcall *v17)(CAPOWrapperSrv *, __int64, unsigned __int8 *); // rax
  int v18; // eax
  CSystemEffectWrapper *v19; // rax
  __int64 v20; // rcx
  int v21; // eax
  unsigned int v22; // ebx
  __int64 v24; // rax
  HRESULT v25; // [rsp+30h] [rbp-D0h] BYREF
  struct IUnknown *v26; // [rsp+38h] [rbp-C8h] BYREF
  struct _GUID v27; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v28; // [rsp+50h] [rbp-B0h] BYREF
  struct IMMDevice *v29; // [rsp+58h] [rbp-A8h] BYREF
  LPVOID ppv; // [rsp+60h] [rbp-A0h] BYREF
  struct APOInitSystemEffects2 v31; // [rsp+70h] [rbp-90h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+D0h] [rbp-30h] BYREF
  int v33; // [rsp+E0h] [rbp-20h]
  IPropertyStore *pAPOEndpointProperties; // [rsp+E8h] [rbp-18h]
  IPropertyStore *pAPOSystemEffectsProperties; // [rsp+F0h] [rbp-10h]
  __int64 pReserved; // [rsp+F8h] [rbp-8h]
  void *pDeviceCollection; // [rsp+100h] [rbp+0h]
  __int64 v38; // [rsp+108h] [rbp+8h]
  HRESULT *v39; // [rsp+110h] [rbp+10h]
  __int64 v40; // [rsp+118h] [rbp+18h]

  v25 = 0;
  ppv = 0LL;
  v29 = 0LL;
  v28 = 0LL;
  v26 = 0LL;
  memset_0(&v31, 0, sizeof(v31));
  if ( !a2 )
    return 2147942487LL;
  if ( !*((_QWORD *)this + 11) )
    return 2147942414LL;
  *(_DWORD *)a8 = 0;
  v25 = CoCreateInstance(
          &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
          0LL,
          0x17u,
          &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
          &ppv);
  if ( v25 < 0 )
    goto LABEL_46;
  v25 = (*(__int64 (__fastcall **)(LPVOID, const unsigned __int16 *, struct IMMDevice **))(*(_QWORD *)ppv + 40LL))(
          ppv,
          a2,
          &v29);
  if ( v25 < 0 )
    goto LABEL_46;
  v13 = (CSystemEffectWrapper *)*((_QWORD *)this + 11);
  v14 = **(__int64 (__fastcall ***)(CSystemEffectWrapper *__hidden, const struct _GUID *, void **))v13;
  if ( v14 == CSystemEffectWrapper::QueryInterface )
    Interface = CSystemEffectWrapper::QueryInterface(v13, &GUID_bafe99d2_7436_44ce_9e0e_4d89afbfff56, (void **)&v26);
  else
    Interface = v14(v13, &GUID_bafe99d2_7436_44ce_9e0e_4d89afbfff56, (void **)&v26);
  v25 = Interface;
  if ( Interface < 0 )
  {
    if ( a7 == 1 )
      goto LABEL_21;
    v25 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 11))(
            *((_QWORD *)this + 11),
            &GUID_5fa00f27_add6_499a_8a9d_6b98521fa75b,
            &v28);
    if ( v25 < 0 )
    {
      v25 = 0;
      goto LABEL_22;
    }
  }
  v27 = *a4;
  v25 = FillAPOInitSystemEffectsStructure(v29, a3, &v27, a5, a6, &v31);
  if ( v25 < 0 )
    goto LABEL_46;
  if ( v26 )
  {
    v16 = (CAPOWrapperSrv *)((char *)this + 8);
    v17 = *(__int64 (__fastcall **)(CAPOWrapperSrv *, __int64, unsigned __int8 *))(*((_QWORD *)this + 1) + 48LL);
    if ( v17 == CAPOWrapperSrv::Initialize )
      v18 = CAPOWrapperSrv::Initialize(v16, 88LL, (unsigned __int8 *)&v31);
    else
      v18 = v17(v16, 88LL, (unsigned __int8 *)&v31);
    v25 = v18;
    if ( v18 >= 0 )
      goto LABEL_13;
LABEL_46:
    if ( (unsigned int)hProvider > 2 )
    {
      pReserved = 36LL;
      pAPOSystemEffectsProperties = (IPropertyStore *)"CAPOWrapperSrv::InitializeAPORemote";
      pDeviceCollection = &v27;
      v39 = &v25;
      v27.Data1 = 146;
      v38 = 4LL;
      v40 = 4LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_140070019, 0LL, v12, 5u, &pData);
    }
    goto LABEL_22;
  }
  if ( v28 )
  {
    memset_0((char *)&pData.Ptr + 4, 0, 0x34uLL);
    v33 = *(_DWORD *)&v31.APOInit.clsid.Data4[4];
    pAPOEndpointProperties = v31.pAPOEndpointProperties;
    pAPOSystemEffectsProperties = v31.pAPOSystemEffectsProperties;
    pReserved = (__int64)v31.pReserved;
    pDeviceCollection = v31.pDeviceCollection;
    v24 = *((_QWORD *)this + 1);
    pData = *(EVENT_DATA_DESCRIPTOR *)&v31.APOInit.cbSize;
    LODWORD(pData.Ptr) = 56;
    v25 = (*(__int64 (__fastcall **)(char *, __int64, EVENT_DATA_DESCRIPTOR *))(v24 + 48))(
            (char *)this + 8,
            56LL,
            &pData);
    if ( v25 < 0 )
      goto LABEL_46;
  }
LABEL_13:
  if ( a7 && *((struct IUnknown **)this + 12) != v26 )
    ATL::AtlComPtrAssign((struct IUnknown **)this + 12, v26);
  v19 = (CSystemEffectWrapper *)*((_QWORD *)this + 11);
  v20 = 0LL;
  *(_QWORD *)&v27.Data1 = 0LL;
  if ( !v19 )
    goto LABEL_18;
  if ( **(__int64 (__fastcall ***)(CSystemEffectWrapper *__hidden, const struct _GUID *, void **))v19 == CSystemEffectWrapper::QueryInterface )
    CSystemEffectWrapper::QueryInterface(v19, &GUID_4ceb0aab_fa19_48ed_a857_87771ae1b768, (void **)&v27);
  else
    (**(void (__fastcall ***)(CSystemEffectWrapper *, GUID *, struct _GUID *))v19)(
      v19,
      &GUID_4ceb0aab_fa19_48ed_a857_87771ae1b768,
      &v27);
  v20 = *(_QWORD *)&v27.Data1;
  if ( *(_QWORD *)&v27.Data1 )
    v21 = 1;
  else
LABEL_18:
    v21 = 0;
  *(_DWORD *)a8 = v21;
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
LABEL_21:
  if ( v25 < 0 )
    goto LABEL_46;
LABEL_22:
  if ( v31.pAPOEndpointProperties )
  {
    ((void (__fastcall *)(IPropertyStore *))v31.pAPOEndpointProperties->lpVtbl->Release)(v31.pAPOEndpointProperties);
    v31.pAPOEndpointProperties = 0LL;
  }
  if ( v31.pAPOSystemEffectsProperties )
  {
    ((void (__fastcall *)(IPropertyStore *))v31.pAPOSystemEffectsProperties->lpVtbl->Release)(v31.pAPOSystemEffectsProperties);
    v31.pAPOSystemEffectsProperties = 0LL;
  }
  if ( v31.pDeviceCollection )
  {
    ((void (__fastcall *)(IMMDeviceCollection *))v31.pDeviceCollection->lpVtbl->Release)(v31.pDeviceCollection);
    v31.pDeviceCollection = 0LL;
  }
  v22 = v25;
  if ( v26 )
    ((void (__fastcall *)(struct IUnknown *))v26->lpVtbl->Release)(v26);
  if ( v28 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
  if ( v29 )
    ((void (__fastcall *)(struct IMMDevice *))v29->lpVtbl->Release)(v29);
  if ( ppv )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  return v22;
}
