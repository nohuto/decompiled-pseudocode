/*
 * XREFs of ?RuntimeClassInitialize@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@QEAAJXZ @ 0x18003FFE4
 * Callers:
 *     ??$MakeAndInitialize@VSubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UISubscriptionManager@234@$$V@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UISubscriptionManager@Internal@TargetedContent@ContentManagement@@@WRL@Microsoft@@@012@@Z @ 0x180043B98 (--$MakeAndInitialize@VSubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UISubs.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002FB0 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$make_wnf_subscription_state@Uempty_wnf_state@details@wil@@@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXXZ@wistd@@KPEAPEAU?$wnf_subscription_state@Uempty_wnf_state@details@wil@@@01@@Z @ 0x1800440F0 (--$make_wnf_subscription_state@Uempty_wnf_state@details@wil@@@details@wil@@YAJAEBU_WNF_STATE_NAM.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::RuntimeClassInitialize(
        ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl *this,
        __int64 a2,
        __int64 a3)
{
  int v4; // eax
  const char *v5; // r9
  void (__fastcall ***v6)(_QWORD, __int64); // rbx
  _QWORD *v7; // rsi
  void (__fastcall ***v8)(_QWORD, __int64); // rdi
  DWORD LastError; // r14d
  _QWORD *v10; // rdx
  _QWORD v12[2]; // [rsp+20h] [rbp-98h] BYREF
  _QWORD v13[13]; // [rsp+30h] [rbp-88h] BYREF
  _QWORD *v14; // [rsp+98h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  v12[1] = -2LL;
  try
  {
    v13[0] = off_1800C4EF8;
    v13[1] = this;
    v14 = v13;
    v4 = wil::details::make_wnf_subscription_state<wil::details::empty_wnf_state>(this, v13, a3, v12);
    if ( v4 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x157D,
        (__int64)"internal\\sdk\\inc\\wil\\resource.h",
        (const char *)(unsigned int)v4);
    v6 = (void (__fastcall ***)(_QWORD, __int64))v12[0];
    v7 = (_QWORD *)((char *)this + 80);
    if ( v7 != v12 )
    {
      v8 = (void (__fastcall ***)(_QWORD, __int64))*v7;
      if ( *v7 )
      {
        LastError = GetLastError();
        (**v8)(v8, 1LL);
        SetLastError(LastError);
      }
      *v7 = v6;
      v6 = 0LL;
    }
    if ( v6 )
      (**v6)(v6, 1LL);
    if ( v14 )
    {
      v10 = v13;
      LOBYTE(v10) = v14 != v13;
      (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v14 + 24LL))(v14, v10);
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x3B,
                           (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\subscriptionmanager.cpp",
                           v5);
  }
  return 0LL;
}
