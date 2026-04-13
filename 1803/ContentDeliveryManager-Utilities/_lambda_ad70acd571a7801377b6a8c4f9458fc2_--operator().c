/*
 * XREFs of _lambda_ad70acd571a7801377b6a8c4f9458fc2_::operator() @ 0x180054274
 * Callers:
 *     Windows::Internal::COperationLambda0_Windows::Internal::CCallAsyncLambda__lambda_ad70acd571a7801377b6a8c4f9458fc2____Windows::Internal::CNoResult_::Run @ 0x180055BD0 (Windows--Internal--COperationLambda0_Windows--Internal--CCallAsyncLambda__lambda_ad70acd571a7801.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z @ 0x180037C48 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z.c)
 *     ??1?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180042000 (--1-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAAAAA.c)
 *     ?Destroy@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180045328 (-Destroy@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0C.c)
 *     ?StartActivity@ActionCommittedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEBG00@Z @ 0x180052240 (-StartActivity@ActionCommittedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliver.c)
 *     ?Stop@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800545AC (-Stop@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAA.c)
 *     ??A?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@@std@@QEAAAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@$$QEAV21@@Z @ 0x1800551AC (--A-$map@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V12@U-$less@V-$basic_stri.c)
 *     __security_check_cookie @ 0x1800C0A20 (__security_check_cookie.c)
 *     memset_0 @ 0x1800C1147 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall lambda_ad70acd571a7801377b6a8c4f9458fc2_::operator()(__int64 a1)
{
  __int64 v2; // rax
  const unsigned __int16 *v3; // r14
  __int64 v4; // rax
  const unsigned __int16 *v5; // rsi
  __int64 v6; // rax
  const unsigned __int16 *v7; // rdi
  const char *v8; // r9
  unsigned int v10; // [rsp+20h] [rbp-1E8h]
  void *v11[2]; // [rsp+30h] [rbp-1D8h] BYREF
  __int64 v12; // [rsp+40h] [rbp-1C8h]
  unsigned __int64 v13; // [rsp+48h] [rbp-1C0h]
  void *v14[2]; // [rsp+50h] [rbp-1B8h] BYREF
  __int64 v15; // [rsp+60h] [rbp-1A8h]
  unsigned __int64 v16; // [rsp+68h] [rbp-1A0h]
  void *v17[2]; // [rsp+70h] [rbp-198h] BYREF
  __int64 v18; // [rsp+80h] [rbp-188h]
  unsigned __int64 v19; // [rsp+88h] [rbp-180h]
  _QWORD v20[4]; // [rsp+90h] [rbp-178h] BYREF
  int v21; // [rsp+B0h] [rbp-158h]
  int *v22; // [rsp+B8h] [rbp-150h]
  int *v23; // [rsp+C0h] [rbp-148h]
  int v24; // [rsp+C8h] [rbp-140h] BYREF
  char v25; // [rsp+CCh] [rbp-13Ch]
  int v26; // [rsp+F0h] [rbp-118h] BYREF
  const char *v27; // [rsp+F8h] [rbp-110h]
  __int64 v28; // [rsp+100h] [rbp-108h]
  char v29; // [rsp+108h] [rbp-100h]
  __int64 v30; // [rsp+110h] [rbp-F8h]
  _BYTE v31[144]; // [rsp+118h] [rbp-F0h] BYREF
  __int64 v32; // [rsp+1A8h] [rbp-60h]
  __int64 v33; // [rsp+1B0h] [rbp-58h]
  __int64 v34; // [rsp+1B8h] [rbp-50h]
  __int64 v35; // [rsp+1C0h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+208h] [rbp+0h]

  v19 = 7LL;
  v18 = 0LL;
  LOWORD(v17[0]) = 0;
  std::wstring::assign(v17, (char *)L"ctx.creativeId", aCtxCreativeid[0] != 0 ? 0xE : 0);
  v2 = std::map<std::wstring,std::wstring>::operator[](*(_QWORD *)a1 + 88LL, v17);
  v3 = (const unsigned __int16 *)v2;
  if ( *(_QWORD *)(v2 + 24) >= 8uLL )
    v3 = *(const unsigned __int16 **)v2;
  v16 = 7LL;
  v15 = 0LL;
  LOWORD(v14[0]) = 0;
  std::wstring::assign(v14, (char *)L"ctx.placementId", aCtxPlacementid[0] != 0 ? 0xF : 0);
  v4 = std::map<std::wstring,std::wstring>::operator[](*(_QWORD *)a1 + 88LL, v14);
  v5 = (const unsigned __int16 *)v4;
  if ( *(_QWORD *)(v4 + 24) >= 8uLL )
    v5 = *(const unsigned __int16 **)v4;
  v13 = 7LL;
  v12 = 0LL;
  LOWORD(v11[0]) = 0;
  std::wstring::assign(v11, (char *)L"ctx.action", aCtxAction[0] != 0 ? 0xA : 0);
  v6 = std::map<std::wstring,std::wstring>::operator[](*(_QWORD *)a1 + 88LL, v11);
  v7 = (const unsigned __int16 *)v6;
  if ( *(_QWORD *)(v6 + 24) >= 8uLL )
    v7 = *(const unsigned __int16 **)v6;
  v20[1] = 0LL;
  v20[2] = v20;
  v20[3] = 0LL;
  v21 = 0;
  v22 = &v26;
  v23 = &v24;
  v24 = 0;
  v25 = 0;
  v29 = 0;
  v26 = 0;
  v27 = "ActionCommittedActivity";
  v28 = 0LL;
  v30 = 1LL;
  v32 = 0LL;
  memset_0(v31, 0, sizeof(v31));
  v33 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  v20[0] = &ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ActionCommittedActivity::`vftable';
  ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ActionCommittedActivity::StartActivity(
    (ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ActionCommittedActivity *)v20,
    v7,
    v5,
    v3);
  if ( v13 >= 8 )
    operator delete(v11[0]);
  v13 = 7LL;
  v12 = 0LL;
  LOWORD(v11[0]) = 0;
  if ( v16 >= 8 )
    operator delete(v14[0]);
  v16 = 7LL;
  v15 = 0LL;
  LOWORD(v14[0]) = 0;
  if ( v19 >= 8 )
    operator delete(v17[0]);
  v19 = 7LL;
  v18 = 0LL;
  LOWORD(v17[0]) = 0;
  try
  {
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)a1 + 72LL) + 40LL))(*(_QWORD *)(*(_QWORD *)a1 + 72LL));
  }
  catch ( ... )
  {
    v10 = wil::details::in1diag3::Return_CaughtException(
            retaddr,
            (void *)0xC8,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\targetedcontentactions.cpp",
            v8);
    v20[0] = &ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ActionCommittedActivity::`vftable';
    wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v20);
    wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v20);
    return v10;
  }
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v20);
  v20[0] = &ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ActionCommittedActivity::`vftable';
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v20);
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v20);
  return 0LL;
}
