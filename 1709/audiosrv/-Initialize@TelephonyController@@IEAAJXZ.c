/*
 * XREFs of ?Initialize@TelephonyController@@IEAAJXZ @ 0x1800EDC74
 * Callers:
 *     ?CreateInstance@TelephonyController@@SAJPEAPEAUITelephonyController@@@Z @ 0x1800ED4A4 (-CreateInstance@TelephonyController@@SAJPEAPEAUITelephonyController@@@Z.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180030BA4 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?RemoveAll@?$CAtlMap@IV?$CComPtr@UIKsControl@@@ATL@@V?$CElementTraits@I@2@V?$CElementTraits@V?$CComPtr@UIKsControl@@@ATL@@@2@@ATL@@QEAAXXZ @ 0x1800EC4F0 (-RemoveAll@-$CAtlMap@IV-$CComPtr@UIKsControl@@@ATL@@V-$CElementTraits@I@2@V-$CElementTraits@V-$C.c)
 *     ?GetProviderId@TelephonyController@@AEAAJPEAUIKsControl@@PEAI@Z @ 0x1800ED75C (-GetProviderId@TelephonyController@@AEAAJPEAUIKsControl@@PEAI@Z.c)
 *     ?NewNode@?$CAtlList@IV?$CElementTraits@I@ATL@@@ATL@@AEAAPEAVCNode@12@IPEAV312@0@Z @ 0x1800EE750 (-NewNode@-$CAtlList@IV-$CElementTraits@I@ATL@@@ATL@@AEAAPEAVCNode@12@IPEAV312@0@Z.c)
 *     ?RemoveAll@?$CAtlList@U_tagKSTOPOLOGY_ENDPOINTIDPAIR@@VRoutingPairsTraits@@@ATL@@QEAAXXZ @ 0x1800EEA18 (-RemoveAll@-$CAtlList@U_tagKSTOPOLOGY_ENDPOINTIDPAIR@@VRoutingPairsTraits@@@ATL@@QEAAXXZ.c)
 *     ?SetAt@?$CAtlMap@IV?$CComPtr@UITelephonyControllerCallInstance@@@ATL@@V?$CElementTraits@I@2@V?$CElementTraits@V?$CComPtr@UITelephonyControllerCallInstance@@@ATL@@@2@@ATL@@QEAAPEAU__POSITION@@IAEBV?$CComPtr@UITelephonyControllerCallInstance@@@2@@Z @ 0x1800EEC34 (-SetAt@-$CAtlMap@IV-$CComPtr@UITelephonyControllerCallInstance@@@ATL@@V-$CElementTraits@I@2@V-$C.c)
 */

// Hidden C++ exception states: #wind=19
__int64 __fastcall TelephonyController::Initialize(TelephonyController *this)
{
  int v2; // r14d
  HRESULT v3; // edi
  unsigned int v4; // esi
  void (*v5)(void); // rax
  int ProviderId; // eax
  __int64 v7; // rcx
  TelephonyController *v8; // rcx
  __int64 v9; // rax
  __int64 *v10; // rcx
  LPVOID pv; // [rsp+38h] [rbp-89h] BYREF
  LPVOID v13; // [rsp+40h] [rbp-81h] BYREF
  __int64 v14; // [rsp+48h] [rbp-79h] BYREF
  struct IKsControl *v15; // [rsp+50h] [rbp-71h] BYREF
  __int64 v16; // [rsp+58h] [rbp-69h] BYREF
  __int64 v17; // [rsp+60h] [rbp-61h] BYREF
  __int64 v18; // [rsp+68h] [rbp-59h] BYREF
  __int64 v19; // [rsp+70h] [rbp-51h] BYREF
  __int64 v20; // [rsp+78h] [rbp-49h] BYREF
  __int64 v21; // [rsp+80h] [rbp-41h] BYREF
  __int64 v22; // [rsp+88h] [rbp-39h]
  __int64 v23; // [rsp+90h] [rbp-31h] BYREF
  __int64 v24; // [rsp+98h] [rbp-29h] BYREF
  __int64 v25; // [rsp+A0h] [rbp-21h] BYREF
  __int64 v26; // [rsp+A8h] [rbp-19h] BYREF
  __int64 v27; // [rsp+B0h] [rbp-11h] BYREF
  __int64 v28; // [rsp+B8h] [rbp-9h] BYREF
  unsigned int v29; // [rsp+C0h] [rbp-1h] BYREF
  unsigned int v30; // [rsp+C4h] [rbp+3h] BYREF
  LPVOID ppv; // [rsp+C8h] [rbp+7h] BYREF
  _QWORD v32[2]; // [rsp+D0h] [rbp+Fh] BYREF
  GUID v33; // [rsp+E0h] [rbp+1Fh] BYREF

  v32[1] = -2LL;
  ppv = 0LL;
  v32[0] = 0LL;
  v29 = 0;
  v2 = 0;
  v3 = CoCreateInstance(
         &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
         0LL,
         1u,
         &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
         &ppv);
  if ( v3 < 0 )
    goto LABEL_132;
  v3 = (*(__int64 (__fastcall **)(LPVOID, __int64, __int64, _QWORD *))(*(_QWORD *)ppv + 24LL))(ppv, 2LL, 9LL, v32);
  if ( v3 < 0 )
    goto LABEL_132;
  v3 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)v32[0] + 24LL))(v32[0], &v29);
  if ( v3 < 0 )
    goto LABEL_132;
  v4 = 0;
  if ( !v29 )
  {
LABEL_134:
    v3 = -2147023728;
    goto LABEL_135;
  }
  while ( 1 )
  {
    v28 = 0LL;
    v27 = 0LL;
    v26 = 0LL;
    v15 = 0LL;
    v25 = 0LL;
    v14 = 0LL;
    v24 = 0LL;
    v23 = 0LL;
    v22 = 0LL;
    v21 = 0LL;
    v20 = 0LL;
    v19 = 0LL;
    v18 = 0LL;
    v17 = 0LL;
    v13 = 0LL;
    pv = 0LL;
    v16 = 0LL;
    v33 = GUID_00000000_0000_0000_0000_000000000000;
    v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)v32[0] + 32LL))(v32[0], v4, &v28);
    if ( v3 < 0 )
      goto LABEL_102;
    v3 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64))(*(_QWORD *)v28 + 24LL))(
           v28,
           &GUID_2a07407e_6497_4a18_9787_32f79bd0d98f,
           23LL);
    if ( v3 < 0 )
    {
      if ( v16 )
      {
        v5 = *(void (**)(void))(*(_QWORD *)v16 + 16LL);
LABEL_39:
        v5();
        goto LABEL_40;
      }
      goto LABEL_40;
    }
    ProviderId = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v22 + 32LL))(v22, 0LL, &v20);
    if ( ProviderId < 0 )
      break;
    ProviderId = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v20 + 64LL))(v20, &v19);
    if ( ProviderId < 0 )
      break;
    ProviderId = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v19)(
                   v19,
                   &GUID_ae2de0e4_5bca_4f2d_aa46_5d13f8fdb3a9,
                   &v14);
    if ( ProviderId < 0 )
      break;
    ProviderId = (*(__int64 (__fastcall **)(__int64, GUID *))(*(_QWORD *)v14 + 56LL))(v14, &v33);
    if ( ProviderId < 0 )
      break;
    v7 = *(_QWORD *)&v33.Data1 - *(_QWORD *)&GUID_686d7cc0_d903_4258_b443_3a3d3580741c.Data1;
    if ( *(_QWORD *)&v33.Data1 == *(_QWORD *)&GUID_686d7cc0_d903_4258_b443_3a3d3580741c.Data1 )
      v7 = *(_QWORD *)v33.Data4 - *(_QWORD *)GUID_686d7cc0_d903_4258_b443_3a3d3580741c.Data4;
    if ( !v7 )
    {
      v2 = 1;
      ProviderId = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v14 + 96LL))(v14, &v23);
      if ( ProviderId < 0 )
        break;
      if ( !*((_QWORD *)this + 25) )
      {
        ProviderId = (*(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v23 + 64LL))(v23, &v13);
        if ( ProviderId < 0 )
          break;
        ProviderId = (*(__int64 (__fastcall **)(LPVOID, LPVOID, __int64 *))(*(_QWORD *)ppv + 40LL))(ppv, v13, &v27);
        if ( ProviderId < 0 )
          break;
        ProviderId = (*(__int64 (__fastcall **)(__int64, GUID *, __int64, _QWORD, char *))(*(_QWORD *)v27 + 24LL))(
                       v27,
                       &GUID_28f54685_06fd_11d2_b27a_00a0c9223196,
                       23LL,
                       0LL,
                       (char *)this + 200);
        if ( ProviderId < 0 )
          break;
        if ( !*((_QWORD *)this + 25) )
          goto LABEL_71;
      }
      ProviderId = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v14 + 88LL))(v14, &v16);
      if ( ProviderId < 0 )
        break;
      ProviderId = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v16 + 32LL))(v16, 0LL, &v25);
      if ( ProviderId < 0 )
        break;
      ProviderId = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v25)(
                     v25,
                     &GUID_9c2c4058_23f5_41de_877a_df3af236a09e,
                     &v18);
      if ( ProviderId < 0 )
        break;
      ProviderId = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v18 + 64LL))(v18, &v17);
      if ( ProviderId < 0 )
        break;
      ProviderId = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v17)(
                     v17,
                     &GUID_ae2de0e4_5bca_4f2d_aa46_5d13f8fdb3a9,
                     &v24);
      if ( ProviderId < 0 )
        break;
      ProviderId = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v24 + 96LL))(v24, &v21);
      if ( ProviderId < 0 )
        break;
      ProviderId = (*(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v21 + 64LL))(v21, &pv);
      if ( ProviderId < 0 )
        break;
      ProviderId = (*(__int64 (__fastcall **)(LPVOID, LPVOID, __int64 *))(*(_QWORD *)ppv + 40LL))(ppv, pv, &v26);
      if ( ProviderId < 0 )
        break;
      ProviderId = (*(__int64 (__fastcall **)(__int64, GUID *, __int64))(*(_QWORD *)v26 + 24LL))(
                     v26,
                     &GUID_28f54685_06fd_11d2_b27a_00a0c9223196,
                     23LL);
      if ( ProviderId < 0 )
        break;
      if ( !v15 )
      {
LABEL_71:
        v3 = -2147023728;
        if ( v16 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
        CoTaskMemFree(pv);
        pv = 0LL;
        CoTaskMemFree(v13);
        v13 = 0LL;
        if ( v17 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
        if ( v18 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
        if ( v19 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
        if ( v20 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
        if ( v21 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
        if ( v22 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
        if ( v23 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
        if ( v24 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
        if ( v14 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
        if ( v25 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
        if ( v15 )
          ((void (__fastcall *)(struct IKsControl *))v15->lpVtbl->Release)(v15);
        if ( v26 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
        if ( v27 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
        if ( v28 )
          goto LABEL_131;
        goto LABEL_132;
      }
      ProviderId = TelephonyController::GetProviderId(v8, v15, &v30);
      if ( ProviderId < 0 )
        break;
      ATL::CAtlMap<unsigned int,ATL::CComPtr<ITelephonyControllerCallInstance>,ATL::CElementTraits<unsigned int>,ATL::CElementTraits<ATL::CComPtr<ITelephonyControllerCallInstance>>>::SetAt(
        (char *)this + 128,
        v30,
        &v15);
      v9 = ATL::CAtlList<unsigned int,ATL::CElementTraits<unsigned int>>::NewNode(
             (char *)this + 32,
             v30,
             *((_QWORD *)this + 5));
      v10 = (__int64 *)*((_QWORD *)this + 5);
      if ( v10 )
        *v10 = v9;
      else
        *((_QWORD *)this + 4) = v9;
      *((_QWORD *)this + 5) = v9;
    }
    if ( v16 )
    {
      v5 = *(void (**)(void))(*(_QWORD *)v16 + 16LL);
      goto LABEL_39;
    }
LABEL_40:
    CoTaskMemFree(pv);
    pv = 0LL;
    CoTaskMemFree(v13);
    v13 = 0LL;
    if ( v17 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    if ( v18 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    if ( v19 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    if ( v20 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    if ( v21 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    if ( v22 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    if ( v23 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    if ( v24 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    if ( v25 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
    if ( v15 )
      ((void (__fastcall *)(struct IKsControl *))v15->lpVtbl->Release)(v15);
    if ( v26 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
    if ( v27 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
    if ( v28 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
    if ( ++v4 >= v29 )
    {
      if ( v2 )
        goto LABEL_135;
      goto LABEL_134;
    }
  }
  v3 = ProviderId;
LABEL_102:
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  CoTaskMemFree(pv);
  pv = 0LL;
  CoTaskMemFree(v13);
  v13 = 0LL;
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  if ( v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  if ( v23 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  if ( v24 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  if ( v25 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  if ( v15 )
    ((void (__fastcall *)(struct IKsControl *))v15->lpVtbl->Release)(v15);
  if ( v26 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
  if ( v27 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
  if ( v28 )
LABEL_131:
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
LABEL_132:
  ATL::CAtlMap<unsigned int,ATL::CComPtr<IKsControl>,ATL::CElementTraits<unsigned int>,ATL::CElementTraits<ATL::CComPtr<IKsControl>>>::RemoveAll((__int64)this + 128);
  ATL::CAtlList<_tagKSTOPOLOGY_ENDPOINTIDPAIR,RoutingPairsTraits>::RemoveAll((char *)this + 32);
  if ( *((_QWORD *)this + 25) )
    ATL::AtlComPtrAssign((struct IUnknown **)this + 25, 0LL);
LABEL_135:
  if ( v32[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v32[0] + 16LL))(v32[0]);
  if ( ppv )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  return (unsigned int)v3;
}
