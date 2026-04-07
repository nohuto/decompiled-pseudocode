/*
 * XREFs of ??$make_wnf_subscription_state@K@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEBK@Z@wistd@@KPEAPEAU?$wnf_subscription_state@K@01@@Z @ 0x180049258
 * Callers:
 *     ??0CAnalogCompositorManager@@AEAA@XZ @ 0x180048FE8 (--0CAnalogCompositorManager@@AEAA@XZ.c)
 * Callees:
 *     ??0?$wnf_subscription_state@K@details@wil@@QEAA@$$QEAV?$function@$$A6AXAEBK@Z@wistd@@@Z @ 0x18004934C (--0-$wnf_subscription_state@K@details@wil@@QEAA@$$QEAV-$function@$$A6AXAEBK@Z@wistd@@@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_WNF_USER_SUBSCRIPTION@@P6AJPEAU1@@Z$1?RtlUnsubscribeWnfNotificationWaitForCompletion@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_WNF_USER_SUBSCRIPTION@@@Z @ 0x18004A7C4 (-reset@-$unique_storage@U-$resource_policy@PEAU_WNF_USER_SUBSCRIPTION@@P6AJPEAU1@@Z$1-RtlUnsubsc.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072054 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18007459C (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall wil::details::make_wnf_subscription_state<unsigned long>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4)
{
  __int64 v6; // rax
  __int64 v7; // rsi
  void (__fastcall ***v8)(_QWORD, __int64); // rbx
  __int64 v9; // r8
  void *v10; // rdx
  int v11; // edi
  unsigned int v12; // r8d
  unsigned int v13; // edi
  __int64 v15; // rdx
  int v16; // [rsp+20h] [rbp-40h]
  int v17; // [rsp+20h] [rbp-40h]
  unsigned int v18; // [rsp+40h] [rbp-20h] BYREF
  __int64 v19; // [rsp+48h] [rbp-18h]
  __int64 v20; // [rsp+50h] [rbp-10h] BYREF
  char v21; // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  v18 = 0;
  *a4 = 0LL;
  v6 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
         WPF::g_pProcessHeap,
         128LL);
  if ( v6 )
    v7 = wil::details::wnf_subscription_state<unsigned long>::wnf_subscription_state<unsigned long>(v6, a2);
  else
    v7 = 0LL;
  v8 = (void (__fastcall ***)(_QWORD, __int64))v7;
  if ( !v7 )
  {
    v13 = -2147024882;
    v15 = 5024LL;
    goto LABEL_17;
  }
  v9 = v18;
  if ( v18 == -1 )
  {
    v16 = 0;
    v13 = NtQueryWnfStateData(&WNF_SHEL_LOCKSCREEN_ACTIVE, 0LL, 0LL, &v18) | 0x10000000;
    if ( (int)(v13 + 0x80000000) < 0 || v13 == -805306333 )
    {
      v9 = v18;
      goto LABEL_5;
    }
    v15 = 5031LL;
LABEL_17:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (unsigned int)"internal\\sdk\\inc\\wil\\Resource.h",
      (const char *)v13,
      v16);
    goto LABEL_9;
  }
LABEL_5:
  v20 = 0LL;
  v19 = v7 + 8;
  v21 = 1;
  v11 = RtlSubscribeWnfStateChangeNotification(
          &v20,
          WNF_SHEL_LOCKSCREEN_ACTIVE,
          v9,
          lambda_82666371df6783f12a6dd836dd4357c8_::_lambda_invoker_cdecl_,
          v7,
          0LL,
          0,
          0);
  if ( v21 )
    wil::details::unique_storage<wil::details::resource_policy<_WNF_USER_SUBSCRIPTION *,long (*)(_WNF_USER_SUBSCRIPTION *),&long RtlUnsubscribeWnfNotificationWaitForCompletion(_WNF_USER_SUBSCRIPTION *),wistd::integral_constant<unsigned __int64,0>,_WNF_USER_SUBSCRIPTION *,0,std::nullptr_t>>::reset(
      v19,
      v20);
  if ( v11 < 0 )
  {
    v13 = wil::details::in1diag3::Return_NtStatus(retaddr, v10, v12, (const char *)(unsigned int)v11, v17);
  }
  else
  {
    v8 = 0LL;
    *a4 = v7;
    v13 = 0;
  }
LABEL_9:
  if ( v8 )
    (**v8)(v8, 1LL);
  return v13;
}
