/*
 * XREFs of ?GetActivityStoresForSupportedWebAccounts@CDPActivityHelper@MobilityExperience@@YA?AV?$vector@V?$com_ptr_t@VICDPActivityStore@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VICDPActivityStore@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@PEAU?$IVectorView@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@Windows@@@Z @ 0x180046BFC
 * Callers:
 *     _lambda_8e4e9cc2004ae5ecc1ef9233f35a06b9_::operator() @ 0x180047AE4 (_lambda_8e4e9cc2004ae5ecc1ef9233f35a06b9_--operator().c)
 * Callees:
 *     ?OriginateError@details@wil@@YAXW4FailureType@2@J@Z @ 0x180002708 (-OriginateError@details@wil@@YAXW4FailureType@2@J@Z.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002FB0 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Xlen@?$vector@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V?$allocator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@2@@std@@IEBAXXZ @ 0x180033AFC (-_Xlen@-$vector@V-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V-$all.c)
 *     ?TryGetSupportedCDPAccountFromWebAccount@CDPActivityHelper@MobilityExperience@@YA?AV?$com_ptr_t@VICDPAccount@@Uerr_exception_policy@wil@@@wil@@PEAUIWebAccount@Credentials@Security@Windows@@@Z @ 0x180046910 (-TryGetSupportedCDPAccountFromWebAccount@CDPActivityHelper@MobilityExperience@@YA-AV-$com_ptr_t@.c)
 *     ?_Reallocate@?$vector@V?$com_ptr_t@VICDPActivityStore@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VICDPActivityStore@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@IEAAX_K@Z @ 0x18004ACA0 (-_Reallocate@-$vector@V-$com_ptr_t@VICDPActivityStore@@Uerr_exception_policy@wil@@@wil@@V-$alloc.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
_QWORD *__fastcall MobilityExperience::CDPActivityHelper::GetActivityStoresForSupportedWebAccounts(
        _QWORD *a1,
        __int64 a2)
{
  _QWORD *v3; // rsi
  int v4; // eax
  int v5; // r14d
  __int64 v6; // r15
  int v7; // r13d
  __int64 i; // rdx
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rbx
  __int64 v12; // rcx
  unsigned int v13; // eax
  unsigned int v14; // r14d
  __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  __int64 v18; // r14
  __int64 v19; // r9
  __int64 v20; // rdx
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // r9
  unsigned __int64 v23; // r8
  _QWORD *v24; // rax
  __int64 v25; // r9
  __int64 v26; // rdx
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // r9
  unsigned __int64 v29; // r8
  _QWORD *v30; // rax
  __int64 v31; // rcx
  const char *v33; // [rsp+20h] [rbp-88h]
  __int64 v34; // [rsp+20h] [rbp-88h] BYREF
  int v35; // [rsp+28h] [rbp-80h]
  __int64 v36; // [rsp+30h] [rbp-78h]
  unsigned int v37; // [rsp+38h] [rbp-70h]
  __int64 v38; // [rsp+40h] [rbp-68h] BYREF
  __int64 v39; // [rsp+48h] [rbp-60h] BYREF
  __int64 v40; // [rsp+50h] [rbp-58h]
  __int64 v41; // [rsp+58h] [rbp-50h]
  int v42; // [rsp+60h] [rbp-48h]
  __int64 v43; // [rsp+68h] [rbp-40h]
  __int64 v44; // [rsp+70h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  int v48; // [rsp+C0h] [rbp+18h]
  int v49; // [rsp+C8h] [rbp+20h] BYREF

  v44 = -2LL;
  v3 = a1;
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v35 = 1;
  v36 = a2;
  v37 = 0;
  v38 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)a2 + 56LL))(a2, &v49);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x4BE,
      (__int64)"internal\\sdk\\inc\\wil\\winrt.h",
      (const char *)(unsigned int)v4);
    __debugbreak();
  }
  v41 = a2;
  v5 = v49;
  v48 = v49;
  v42 = v49;
  v6 = 0LL;
  v43 = 0LL;
  v7 = 3;
  v35 = 3;
  for ( i = v37; (_DWORD)i != v5; i = ++v37 )
  {
    v9 = v38;
    if ( v38 )
    {
      v38 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      i = v37;
    }
    v10 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v36 + 48LL))(v36, i, &v38);
    if ( v10 < 0 )
    {
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x15FD,
        (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
        (const char *)(unsigned int)v10);
      __debugbreak();
    }
    v11 = v38;
    v40 = v38;
    if ( v38 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 8LL))(v38);
    MobilityExperience::CDPActivityHelper::TryGetSupportedCDPAccountFromWebAccount(&v39, v11);
    v12 = v39;
    if ( v39 )
    {
      try
      {
        v7 |= 4u;
        v35 = v7;
        v34 = 0LL;
        v13 = CDPGetActivityStoreForAccount(v39, &v34);
        v14 = v13;
        if ( ((v13 + 0x80000000) & 0x80000000) == 0 && v13 != -2147221243 )
        {
          wil::details::OriginateError();
          wil::details::in1diag3::_Throw_Hr(
            retaddr,
            (void *)0x45,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\cdpactivityhelper.h",
            (const char *)v14);
        }
        v16 = v34;
        if ( v34 )
        {
          v17 = v3[1];
          if ( (unsigned __int64)&v34 >= v17 || *v3 > (unsigned __int64)&v34 )
          {
            v25 = v3[2];
            if ( v17 == v25 && !((__int64)(v25 - v17) >> 3) )
            {
              v26 = (__int64)(v17 - *v3) >> 3;
              if ( v26 == 0x1FFFFFFFFFFFFFFFLL )
                std::vector<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>::_Xlen();
              v27 = v26 + 1;
              v28 = (v25 - *v3) >> 3;
              v29 = 0LL;
              if ( 0x1FFFFFFFFFFFFFFFLL - (v28 >> 1) >= v28 )
                v29 = v28 + (v28 >> 1);
              if ( v29 >= v27 )
                v27 = v29;
              std::vector<wil::com_ptr_t<ICDPActivityStore,wil::err_exception_policy>>::_Reallocate(v3, v27);
              v16 = v34;
            }
            v30 = (_QWORD *)v3[1];
            if ( v30 )
            {
              *v30 = v16;
              v16 = v34;
              if ( v34 )
              {
LABEL_45:
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
                goto LABEL_46;
              }
            }
          }
          else
          {
            v18 = ((__int64)&v34 - *v3) >> 3;
            v19 = v3[2];
            if ( v17 == v19 && !((__int64)(v19 - v17) >> 3) )
            {
              v20 = (__int64)(v17 - *v3) >> 3;
              if ( v20 == 0x1FFFFFFFFFFFFFFFLL )
                std::vector<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>::_Xlen();
              v21 = v20 + 1;
              v22 = (v19 - *v3) >> 3;
              v23 = 0LL;
              if ( 0x1FFFFFFFFFFFFFFFLL - (v22 >> 1) >= v22 )
                v23 = v22 + (v22 >> 1);
              if ( v23 >= v21 )
                v21 = v23;
              std::vector<wil::com_ptr_t<ICDPActivityStore,wil::err_exception_policy>>::_Reallocate(v3, v21);
              v16 = v34;
            }
            v24 = (_QWORD *)v3[1];
            if ( v24 )
            {
              v16 = *(_QWORD *)(*v3 + 8 * v18);
              *v24 = v16;
              if ( v16 )
                goto LABEL_45;
LABEL_46:
              v16 = v34;
            }
          }
          v3[1] += 8LL;
        }
        if ( v16 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      }
      catch ( ... )
      {
        wil::details::in1diag3::Log_CaughtExceptionMsg(
          retaddr,
          (void *)0x1EC,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\cdpactivityhelper.h",
          "Failed to get activity store",
          v33);
        v3 = a1;
        v6 = v43;
        v5 = v42;
        v48 = v42;
        v11 = v40;
        v7 = v35;
        goto LABEL_51;
      }
      v5 = v48;
LABEL_51:
      v12 = v39;
    }
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  v31 = v38;
  if ( v38 )
  {
    v38 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
  }
  return v3;
}
