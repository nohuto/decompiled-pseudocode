/*
 * XREFs of ??$make_wnf_subscription_state@Uempty_wnf_state@details@wil@@@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXXZ@wistd@@KPEAPEAU?$wnf_subscription_state@Uempty_wnf_state@details@wil@@@01@@Z @ 0x180139DA8
 * Callers:
 *     ??$make_wnf_subscription_nothrow@Uempty_wnf_state@details@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@$0A@$$T@details@wil@@@details@wil@@@0@AEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXXZ@wistd@@K@Z @ 0x180139D70 (--$make_wnf_subscription_nothrow@Uempty_wnf_state@details@wil@@@wil@@YA-AV-$unique_any_t@V-$uniq.c)
 *     ??$make_wnf_subscription@Uempty_wnf_state@details@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@$0A@$$T@details@wil@@@details@wil@@@0@AEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXXZ@wistd@@K@Z @ 0x180143A88 (--$make_wnf_subscription@Uempty_wnf_state@details@wil@@@wil@@YA-AV-$unique_any_t@V-$unique_stora.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??0?$function@$$A6AXXZ@wistd@@QEAA@$$QEAV01@@Z @ 0x18013A1C8 (--0-$function@$$A6AXXZ@wistd@@QEAA@$$QEAV01@@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18013C4E8 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_WNF_USER_SUBSCRIPTION@@P6AJPEAU1@@Z$1?RtlUnsubscribeWnfNotificationWaitForCompletion@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_WNF_USER_SUBSCRIPTION@@@Z @ 0x18013D2A0 (-reset@-$unique_storage@U-$resource_policy@PEAU_WNF_USER_SUBSCRIPTION@@P6AJPEAU1@@Z$1-RtlUnsubsc.c)
 */

__int64 __fastcall wil::details::make_wnf_subscription_state<wil::details::empty_wnf_state>(
        __int64 *a1,
        __int64 a2,
        int a3,
        _QWORD *a4)
{
  _QWORD *v7; // rax
  _QWORD *v8; // rdi
  void (__fastcall ***v9)(_QWORD, __int64); // rbx
  unsigned int v10; // esi
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rdx
  int v14; // esi
  int v16; // [rsp+20h] [rbp-40h]
  unsigned int v17; // [rsp+40h] [rbp-20h] BYREF
  _QWORD *v18; // [rsp+48h] [rbp-18h]
  __int64 v19; // [rsp+50h] [rbp-10h] BYREF
  char v20; // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  int v22; // [rsp+90h] [rbp+30h] BYREF

  v22 = a3;
  v17 = 0;
  *a4 = 0LL;
  v7 = operator new(0x80uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v7;
  if ( v7 )
  {
    v7[1] = 0LL;
    *v7 = &wil::details::wnf_subscription_state<unsigned long>::`vftable';
    wistd::function<void (void)>::function<void (void)>(v7 + 2, a2);
  }
  else
  {
    v8 = 0LL;
  }
  v9 = (void (__fastcall ***)(_QWORD, __int64))v8;
  if ( !v8 )
  {
    v10 = -2147024882;
    v11 = 5624LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"internal\\sdk\\inc\\wil\\Resource.h",
      (const char *)v10);
    goto LABEL_17;
  }
  v12 = v17;
  if ( v17 == -1 )
  {
    v22 = 0;
    v10 = NtQueryWnfStateData(a1, 0LL, 0LL, &v17, 0LL, &v22) | 0x10000000;
    if ( (int)(v10 + 0x80000000) >= 0 && v10 != -805306333 )
    {
      v11 = 5631LL;
      goto LABEL_10;
    }
    v12 = v17;
  }
  v13 = *a1;
  v19 = 0LL;
  v18 = v8 + 1;
  v20 = 1;
  v14 = RtlSubscribeWnfStateChangeNotification(
          &v19,
          v13,
          v12,
          lambda_9bbec43bd3c841ff596242732b4f01fa_::_lambda_invoker_cdecl_,
          v8,
          0LL,
          0,
          0);
  if ( v20 )
    wil::details::unique_storage<wil::details::resource_policy<_WNF_USER_SUBSCRIPTION *,long (*)(_WNF_USER_SUBSCRIPTION *),&long RtlUnsubscribeWnfNotificationWaitForCompletion(_WNF_USER_SUBSCRIPTION *),wistd::integral_constant<unsigned __int64,0>,_WNF_USER_SUBSCRIPTION *,0,std::nullptr_t>>::reset(
      v18,
      v19);
  if ( v14 >= 0 )
  {
    v9 = 0LL;
    *a4 = v8;
    v10 = 0;
  }
  else
  {
    v10 = wil::details::in1diag3::Return_NtStatus(
            retaddr,
            (void *)0x160E,
            (unsigned int)"internal\\sdk\\inc\\wil\\Resource.h",
            (const char *)(unsigned int)v14,
            v16);
  }
LABEL_17:
  if ( v9 )
    (**v9)(v9, 1LL);
  return v10;
}
