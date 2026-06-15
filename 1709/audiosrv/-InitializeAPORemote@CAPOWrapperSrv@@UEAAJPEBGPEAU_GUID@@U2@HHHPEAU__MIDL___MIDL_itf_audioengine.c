/*
 * XREFs of ?InitializeAPORemote@CAPOWrapperSrv@@UEAAJPEBGPEAU_GUID@@U2@HHHPEAU__MIDL___MIDL_itf_audioenginepolicy_0000_0010_0002@@@Z @ 0x1800DA8A0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180001690 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x18002CF70 (_TlgCreateSz.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180030BA4 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     memset @ 0x180033A5A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?FillAPOInitSystemEffectsStructure@@YAJPEAUIMMDevice@@PEAU_GUID@@U2@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEAUAPOInitSystemEffects2@@@Z @ 0x1800DC55C (-FillAPOInitSystemEffectsStructure@@YAJPEAUIMMDevice@@PEAU_GUID@@U2@HW4__MIDL___MIDL_itf_audioen.c)
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
  int v12; // ebx
  int v13; // esi
  APOInitSystemEffects2 *v14; // r8
  __int64 v15; // rdx
  void (__fastcall ***v16)(_QWORD, GUID *, struct _GUID *); // r9
  __int64 v17; // rcx
  LPCGUID v18; // r8
  LPCGUID v19; // r9
  HRESULT v21; // [rsp+30h] [rbp-D0h] BYREF
  struct IUnknown *v22; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v23; // [rsp+40h] [rbp-C0h] BYREF
  struct IMMDevice *v24; // [rsp+48h] [rbp-B8h] BYREF
  LPVOID ppv; // [rsp+50h] [rbp-B0h] BYREF
  struct _GUID v26; // [rsp+60h] [rbp-A0h] BYREF
  APOInitSystemEffects2 v27; // [rsp+70h] [rbp-90h] BYREF
  _BYTE pData[56]; // [rsp+D0h] [rbp-30h] BYREF
  int v29; // [rsp+108h] [rbp+8h]
  int v30; // [rsp+10Ch] [rbp+Ch]
  HRESULT *v31; // [rsp+110h] [rbp+10h]
  int v32; // [rsp+118h] [rbp+18h]
  int v33; // [rsp+11Ch] [rbp+1Ch]

  v21 = 0;
  ppv = 0LL;
  v24 = 0LL;
  v23 = 0LL;
  v22 = 0LL;
  memset(&v27, 0, sizeof(v27));
  if ( !a2 )
    return (unsigned int)-2147024809;
  if ( !*((_QWORD *)this + 11) )
    return (unsigned int)-2147024882;
  *(_DWORD *)a8 = 0;
  v21 = CoCreateInstance(
          &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
          0LL,
          0x17u,
          &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
          &ppv);
  v12 = v21;
  if ( v21 < 0 )
    goto LABEL_26;
  v21 = (*(__int64 (__fastcall **)(LPVOID, const unsigned __int16 *, struct IMMDevice **))(*(_QWORD *)ppv + 40LL))(
          ppv,
          a2,
          &v24);
  v12 = v21;
  if ( v21 < 0 )
    goto LABEL_26;
  v21 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct IUnknown **))this + 11))(
          *((_QWORD *)this + 11),
          &GUID_bafe99d2_7436_44ce_9e0e_4d89afbfff56,
          &v22);
  v12 = v21;
  v13 = 1;
  if ( v21 >= 0 )
    goto LABEL_11;
  if ( a7 == 1 )
    goto LABEL_25;
  v21 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 11))(
          *((_QWORD *)this + 11),
          &GUID_5fa00f27_add6_499a_8a9d_6b98521fa75b,
          &v23);
  if ( v21 >= 0 )
  {
LABEL_11:
    v26 = *a4;
    v21 = FillAPOInitSystemEffectsStructure(v24, a3, &v26, a5, a6, &v27);
    v12 = v21;
    if ( v21 < 0 )
      goto LABEL_26;
    if ( v22 )
    {
      v14 = &v27;
      v15 = 88LL;
    }
    else
    {
      if ( !v23 )
      {
LABEL_17:
        if ( a7 && *((struct IUnknown **)this + 12) != v22 )
        {
          ATL::AtlComPtrAssign((struct IUnknown **)this + 12, v22);
          v12 = v21;
        }
        v16 = (void (__fastcall ***)(_QWORD, GUID *, struct _GUID *))*((_QWORD *)this + 11);
        v17 = 0LL;
        *(_QWORD *)&v26.Data1 = 0LL;
        if ( !v16
          || ((**v16)(v16, &GUID_4ceb0aab_fa19_48ed_a857_87771ae1b768, &v26),
              v17 = *(_QWORD *)&v26.Data1,
              v12 = v21,
              !*(_QWORD *)&v26.Data1) )
        {
          v13 = 0;
        }
        *(_DWORD *)a8 = v13;
        if ( v17 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
          v12 = v21;
        }
LABEL_25:
        if ( v12 >= 0 )
          goto LABEL_28;
LABEL_26:
        if ( (unsigned int)dword_18014A3F0 > 2 )
        {
          TlgCreateSz((PEVENT_DATA_DESCRIPTOR)&pData[32], "CAPOWrapperSrv::InitializeAPORemote");
          v30 = 0;
          v33 = 0;
          *(_QWORD *)&pData[48] = &v26;
          v31 = &v21;
          v26.Data1 = 154;
          v29 = 4;
          v32 = 4;
          TlgWrite(
            (TraceLoggingHProvider)&dword_18014A3F0,
            &unk_1801122EC,
            v18,
            v19,
            5u,
            (EVENT_DATA_DESCRIPTOR *)pData);
          v12 = v21;
        }
        goto LABEL_28;
      }
      memset(&pData[4], 0, 0x34uLL);
      v14 = (APOInitSystemEffects2 *)pData;
      v15 = 56LL;
      *(_DWORD *)&pData[16] = *(_DWORD *)&v27.APOInit.clsid.Data4[4];
      *(_QWORD *)&pData[24] = v27.pAPOEndpointProperties;
      *(_QWORD *)&pData[32] = v27.pAPOSystemEffectsProperties;
      *(_QWORD *)&pData[40] = v27.pReserved;
      *(_OWORD *)pData = *(_OWORD *)&v27.APOInit.cbSize;
      *(_QWORD *)&pData[48] = v27.pDeviceCollection;
      *(_DWORD *)pData = 56;
    }
    v21 = (*(__int64 (__fastcall **)(char *, __int64, APOInitSystemEffects2 *))(*((_QWORD *)this + 1) + 48LL))(
            (char *)this + 8,
            v15,
            v14);
    v12 = v21;
    if ( v21 < 0 )
      goto LABEL_26;
    goto LABEL_17;
  }
  v12 = 0;
  v21 = 0;
LABEL_28:
  if ( v27.pAPOEndpointProperties )
  {
    ((void (__fastcall *)(IPropertyStore *))v27.pAPOEndpointProperties->lpVtbl->Release)(v27.pAPOEndpointProperties);
    v27.pAPOEndpointProperties = 0LL;
    v12 = v21;
  }
  if ( v27.pAPOSystemEffectsProperties )
  {
    ((void (__fastcall *)(IPropertyStore *))v27.pAPOSystemEffectsProperties->lpVtbl->Release)(v27.pAPOSystemEffectsProperties);
    v27.pAPOSystemEffectsProperties = 0LL;
    v12 = v21;
  }
  if ( v27.pDeviceCollection )
  {
    ((void (__fastcall *)(IMMDeviceCollection *))v27.pDeviceCollection->lpVtbl->Release)(v27.pDeviceCollection);
    v27.pDeviceCollection = 0LL;
    v12 = v21;
  }
  if ( v22 )
    ((void (__fastcall *)(struct IUnknown *))v22->lpVtbl->Release)(v22);
  if ( v23 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  if ( v24 )
    ((void (__fastcall *)(struct IMMDevice *))v24->lpVtbl->Release)(v24);
  if ( ppv )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  return (unsigned int)v12;
}
