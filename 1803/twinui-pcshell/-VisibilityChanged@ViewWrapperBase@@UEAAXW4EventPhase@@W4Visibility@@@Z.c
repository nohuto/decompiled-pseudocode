/*
 * XREFs of ?VisibilityChanged@ViewWrapperBase@@UEAAXW4EventPhase@@W4Visibility@@@Z @ 0x180051350
 * Callers:
 *     <none>
 * Callees:
 *     std::_Func_impl_no_alloc__lambda_50b3f89cea81ac99891e676c02ace6a0__void_bool_::_Do_call @ 0x18003A320 (std--_Func_impl_no_alloc__lambda_50b3f89cea81ac99891e676c02ace6a0__void_bool_--_Do_call.c)
 *     ??$WindowReadiness_FlagChange@AEBQEAUHWND__@@AEBW4WindowReadinessWaitFlags@@AEAW42@@ViewManagerInteropTraceLogging@@SAXAEBQEAUHWND__@@AEBW4WindowReadinessWaitFlags@@AEAW42@@Z @ 0x180054420 (--$WindowReadiness_FlagChange@AEBQEAUHWND__@@AEBW4WindowReadinessWaitFlags@@AEAW42@@ViewManagerI.c)
 *     ?Set@WaitFlags@WindowReadyState@@QEAAXPEBV2@W4WindowReadinessWaitFlags@@@Z @ 0x18005A704 (-Set@WaitFlags@WindowReadyState@@QEAAXPEBV2@W4WindowReadinessWaitFlags@@@Z.c)
 *     ?_WaitForUnfreezeIfNecessary@WindowReadyState@@AEAAXXZ @ 0x18005B5B4 (-_WaitForUnfreezeIfNecessary@WindowReadyState@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ViewWrapperBase::VisibilityChanged(__int64 a1, unsigned int a2, unsigned int a3)
{
  RTL_SRWLOCK *v6; // r14
  __int64 v7; // rcx
  void (__fastcall *v8)(_QWORD, _QWORD, _QWORD); // rax
  WindowReadyState *v9; // rdi
  unsigned int *v10; // rbx
  char v11; // si
  char v12; // r15
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 (__fastcall *v15)(__int64, char *); // rax
  unsigned int v16; // [rsp+68h] [rbp+10h] BYREF

  v6 = (RTL_SRWLOCK *)(*(_QWORD *)(a1 + 160) + 296LL);
  AcquireSRWLockExclusive(v6);
  v7 = a1 - 8;
  v8 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(a1 - 8) + 192LL);
  if ( (char *)v8 != (char *)&UAPViewWrapper::v_OnViewVisibilityChanged )
  {
    v8(v7, a2, a3);
    goto LABEL_14;
  }
  v9 = (WindowReadyState *)(v7 + 352);
  v10 = (unsigned int *)(v7 + 360);
  v11 = 1;
  v12 = *(_QWORD *)(v7 + 352) && !*v10;
  if ( a3 != 1 )
  {
    if ( !a2 )
      goto LABEL_10;
    v13 = 1LL;
    goto LABEL_20;
  }
  if ( !a2 )
  {
    if ( !*(_BYTE *)(v7 + 376) || (*(_BYTE *)v10 & 1) == 0 )
      goto LABEL_10;
    v13 = 2LL;
LABEL_20:
    WindowReadyState::WaitFlags::Set(v7 + 360, v9, v13);
    goto LABEL_10;
  }
  v16 = *v10;
  *v10 = v16 & 0xFFFFFFFE;
  ViewManagerInteropTraceLogging::WindowReadiness_FlagChange<HWND__ * const &,enum WindowReadinessWaitFlags const &,enum WindowReadinessWaitFlags &>(
    v9,
    &v16,
    v7 + 360);
  if ( !*(_QWORD *)v9 )
  {
LABEL_12:
    v11 = 0;
    goto LABEL_13;
  }
  if ( !*v10 )
    WindowReadyState::_WaitForUnfreezeIfNecessary(v9);
LABEL_10:
  if ( !*(_QWORD *)v9 || *v10 )
    goto LABEL_12;
LABEL_13:
  if ( v12 != v11 )
  {
    LOBYTE(v16) = v11;
    v14 = *((_QWORD *)v9 + 12);
    if ( !v14 )
    {
      std::_Xbad_function_call();
      JUMPOUT(0x1800514B1LL);
    }
    v15 = *(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v14 + 16LL);
    if ( v15 == std::_Func_impl_no_alloc__lambda_50b3f89cea81ac99891e676c02ace6a0__void_bool_::_Do_call )
      std::_Func_impl_no_alloc__lambda_50b3f89cea81ac99891e676c02ace6a0__void_bool_::_Do_call(v14, (char *)&v16);
    else
      v15(v14, (char *)&v16);
  }
LABEL_14:
  if ( v6 )
    ReleaseSRWLockExclusive(v6);
}
