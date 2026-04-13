/*
 * XREFs of ?GetActivityStoresForSupportedWebAccounts@CDPActivityHelper@MobilityExperience@@YA?AV?$vector@V?$com_ptr_t@VICDPActivityStore@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VICDPActivityStore@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@PEAU?$IVectorView@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@Windows@@@Z @ 0x18004A8E0
 * Callers:
 *     _lambda_8e4e9cc2004ae5ecc1ef9233f35a06b9_::operator() @ 0x18004B79C (_lambda_8e4e9cc2004ae5ecc1ef9233f35a06b9_--operator().c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003310 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Xlen@?$vector@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V?$allocator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@2@@std@@IEBAXXZ @ 0x180036DEC (-_Xlen@-$vector@V-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V-$all.c)
 *     ?TryGetSupportedCDPAccountFromWebAccount@CDPActivityHelper@MobilityExperience@@YA?AV?$com_ptr_t@VICDPAccount@@Uerr_exception_policy@wil@@@wil@@PEAUIWebAccount@Credentials@Security@Windows@@@Z @ 0x18004A5DC (-TryGetSupportedCDPAccountFromWebAccount@CDPActivityHelper@MobilityExperience@@YA-AV-$com_ptr_t@.c)
 *     ?_Reallocate@?$vector@V?$com_ptr_t@VICDPActivityStore@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VICDPActivityStore@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@IEAAX_K@Z @ 0x18004E7B8 (-_Reallocate@-$vector@V-$com_ptr_t@VICDPActivityStore@@Uerr_exception_policy@wil@@@wil@@V-$alloc.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6 #try_helpers=1
_QWORD *__fastcall MobilityExperience::CDPActivityHelper::GetActivityStoresForSupportedWebAccounts(
        _QWORD *a1,
        __int64 a2)
{
  int v4; // eax
  int v5; // r15d
  unsigned int v6; // r14d
  __int64 i; // rdx
  __int64 v8; // rcx
  int v9; // eax
  wil::details::in1diag3 *v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rcx
  int v13; // r14d
  unsigned int v14; // eax
  bool v15; // cl
  wil::details::in1diag3 *v16; // r10
  __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  bool v19; // al
  __int64 v20; // r9
  __int64 v21; // r15
  __int64 v22; // rdx
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // r9
  unsigned __int64 v25; // r8
  __int64 v26; // rcx
  __int64 v27; // rdx
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // r9
  unsigned __int64 v30; // r8
  __int64 v31; // rcx
  __int64 v33; // [rsp+28h] [rbp-80h] BYREF
  __int64 v34; // [rsp+30h] [rbp-78h]
  unsigned int v35; // [rsp+38h] [rbp-70h]
  __int64 v36; // [rsp+40h] [rbp-68h] BYREF
  __int64 v37; // [rsp+48h] [rbp-60h] BYREF
  _QWORD *v38; // [rsp+50h] [rbp-58h]
  __int64 v39; // [rsp+58h] [rbp-50h]
  __int64 v40; // [rsp+60h] [rbp-48h]
  int v41; // [rsp+68h] [rbp-40h]
  __int64 v42; // [rsp+70h] [rbp-38h]
  __int64 v43; // [rsp+78h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  int v45; // [rsp+C0h] [rbp+18h]
  int v46; // [rsp+C8h] [rbp+20h] BYREF

  v43 = -2LL;
  v38 = a1;
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v34 = a2;
  v35 = 0;
  v36 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)a2 + 56LL))(a2, &v46);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x4C6,
      (__int64)"internal\\sdk\\inc\\wil\\winrt.h",
      (const char *)(unsigned int)v4);
LABEL_56:
    wil::details::in1diag3::Throw_Hr(
      v10,
      (void *)0x163B,
      (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
      (const char *)(unsigned int)v9);
LABEL_57:
    wil::details::in1diag3::Throw_Hr(
      v16,
      (void *)0x45,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\cdpactivityhelper.h",
      (const char *)v14);
LABEL_58:
    std::vector<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>::_Xlen();
  }
  v40 = a2;
  v5 = v46;
  v45 = v46;
  v41 = v46;
  v42 = 0LL;
  v6 = 3;
  for ( i = v35; (_DWORD)i != v5; i = ++v35 )
  {
    v8 = v36;
    if ( v36 )
    {
      v36 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      i = v35;
    }
    v9 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v34 + 48LL))(v34, i, &v36);
    v10 = retaddr;
    if ( v9 < 0 )
      goto LABEL_56;
    v11 = v36;
    v39 = v36;
    if ( v36 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 8LL))(v36);
    MobilityExperience::CDPActivityHelper::TryGetSupportedCDPAccountFromWebAccount(&v37, v11);
    v12 = v37;
    if ( v37 )
    {
      v13 = v6 | 4;
      v33 = 0LL;
      v14 = CDPGetActivityStoreForAccount(v37, &v33);
      v15 = (int)(v14 + 0x80000000) >= 0 && v14 != -2147221243;
      v16 = retaddr;
      if ( v15 )
        goto LABEL_57;
      v17 = v33;
      if ( v33 )
      {
        v18 = a1[1];
        v19 = (unsigned __int64)&v33 < v18 && *a1 <= (unsigned __int64)&v33;
        v20 = v38[2];
        if ( v19 )
        {
          v21 = ((__int64)&v33 - *a1) >> 3;
          if ( v18 == v20 && !((__int64)(v20 - v18) >> 3) )
          {
            v22 = (__int64)(v18 - *a1) >> 3;
            if ( v22 == 0x1FFFFFFFFFFFFFFFLL )
              goto LABEL_58;
            v23 = v22 + 1;
            v24 = (v20 - *a1) >> 3;
            v25 = 0LL;
            if ( 0x1FFFFFFFFFFFFFFFLL - (v24 >> 1) >= v24 )
              v25 = v24 + (v24 >> 1);
            if ( v25 >= v23 )
              v23 = v25;
            std::vector<wil::com_ptr_t<ICDPActivityStore,wil::err_exception_policy>>::_Reallocate(a1, v23);
          }
          v26 = *(_QWORD *)(*a1 + 8 * v21);
          *(_QWORD *)a1[1] = v26;
          if ( v26 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 8LL))(v26);
          v5 = v45;
LABEL_42:
          v17 = v33;
        }
        else
        {
          if ( v18 == v20 && !((__int64)(v20 - v18) >> 3) )
          {
            v27 = (__int64)(v18 - *a1) >> 3;
            if ( v27 == 0x1FFFFFFFFFFFFFFFLL )
              std::vector<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>::_Xlen();
            v28 = v27 + 1;
            v29 = (v20 - *a1) >> 3;
            v30 = 0LL;
            if ( 0x1FFFFFFFFFFFFFFFLL - (v29 >> 1) >= v29 )
              v30 = v29 + (v29 >> 1);
            if ( v30 >= v28 )
              v28 = v30;
            std::vector<wil::com_ptr_t<ICDPActivityStore,wil::err_exception_policy>>::_Reallocate(a1, v28);
            v17 = v33;
          }
          *(_QWORD *)a1[1] = v17;
          v17 = v33;
          if ( v33 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 8LL))(v33);
            goto LABEL_42;
          }
        }
        a1[1] += 8LL;
      }
      v6 = v13 & 0xFFFFFFFB;
      if ( v17 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
      v12 = v37;
    }
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  v31 = v36;
  if ( v36 )
  {
    v36 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
  }
  return a1;
}
