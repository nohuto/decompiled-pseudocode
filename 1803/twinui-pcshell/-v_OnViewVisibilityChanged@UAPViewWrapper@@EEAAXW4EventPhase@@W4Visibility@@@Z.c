/*
 * XREFs of ?v_OnViewVisibilityChanged@UAPViewWrapper@@EEAAXW4EventPhase@@W4Visibility@@@Z @ 0x18005B330
 * Callers:
 *     <none>
 * Callees:
 *     std::_Func_impl_no_alloc__lambda_50b3f89cea81ac99891e676c02ace6a0__void_bool_::_Do_call @ 0x18003A320 (std--_Func_impl_no_alloc__lambda_50b3f89cea81ac99891e676c02ace6a0__void_bool_--_Do_call.c)
 *     ??$WindowReadiness_FlagChange@AEBQEAUHWND__@@AEBW4WindowReadinessWaitFlags@@AEAW42@@ViewManagerInteropTraceLogging@@SAXAEBQEAUHWND__@@AEBW4WindowReadinessWaitFlags@@AEAW42@@Z @ 0x180054420 (--$WindowReadiness_FlagChange@AEBQEAUHWND__@@AEBW4WindowReadinessWaitFlags@@AEAW42@@ViewManagerI.c)
 *     ?Set@WaitFlags@WindowReadyState@@QEAAXPEBV2@W4WindowReadinessWaitFlags@@@Z @ 0x18005A704 (-Set@WaitFlags@WindowReadyState@@QEAAXPEBV2@W4WindowReadinessWaitFlags@@@Z.c)
 *     ?_WaitForUnfreezeIfNecessary@WindowReadyState@@AEAAXXZ @ 0x18005B5B4 (-_WaitForUnfreezeIfNecessary@WindowReadyState@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall UAPViewWrapper::v_OnViewVisibilityChanged(__int64 a1, int a2, int a3)
{
  __int64 *v3; // rdi
  char v4; // si
  unsigned int *v5; // rbx
  char v6; // bp
  int v7; // r8d
  __int64 v8; // rcx
  __int64 (__fastcall *v9)(__int64, char *); // rax
  unsigned int v10; // [rsp+40h] [rbp+18h] BYREF

  v3 = (__int64 *)(a1 + 352);
  v4 = 1;
  v5 = (unsigned int *)(a1 + 360);
  v6 = *(_QWORD *)(a1 + 352) && !*v5;
  if ( a3 != 1 )
  {
    if ( !a2 )
      goto LABEL_9;
    v7 = 1;
    goto LABEL_17;
  }
  if ( !a2 )
  {
    if ( !*(_BYTE *)(a1 + 376) || (*(_BYTE *)v5 & 1) == 0 )
      goto LABEL_9;
    v7 = 2;
LABEL_17:
    WindowReadyState::WaitFlags::Set((int *)(a1 + 360), v3, v7);
    goto LABEL_9;
  }
  v10 = *v5;
  *v5 = v10 & 0xFFFFFFFE;
  ViewManagerInteropTraceLogging::WindowReadiness_FlagChange<HWND__ * const &,enum WindowReadinessWaitFlags const &,enum WindowReadinessWaitFlags &>(
    v3,
    (int *)&v10,
    (int *)(a1 + 360));
  if ( !*v3 )
  {
LABEL_11:
    v4 = 0;
    goto LABEL_12;
  }
  if ( !*v5 )
    WindowReadyState::_WaitForUnfreezeIfNecessary((WindowReadyState *)v3);
LABEL_9:
  if ( !*v3 || *v5 )
    goto LABEL_11;
LABEL_12:
  if ( v6 != v4 )
  {
    v8 = v3[12];
    LOBYTE(v10) = v4;
    if ( !v8 )
    {
      std::_Xbad_function_call();
      JUMPOUT(0x18005B42FLL);
    }
    v9 = *(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v8 + 16LL);
    if ( v9 == std::_Func_impl_no_alloc__lambda_50b3f89cea81ac99891e676c02ace6a0__void_bool_::_Do_call )
      std::_Func_impl_no_alloc__lambda_50b3f89cea81ac99891e676c02ace6a0__void_bool_::_Do_call(v8, (char *)&v10);
    else
      v9(v8, (char *)&v10);
  }
}
