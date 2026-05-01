/*
 * XREFs of ?HandlePresentationReadinessChange@ViewWrapperBase@@UEAAX_K@Z @ 0x18013E2B0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireLockExclusive@ViewEventDispatcher@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x18011C2F8 (-AcquireLockExclusive@ViewEventDispatcher@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_p.c)
 *     ?_WaitForUnfreezeIfNecessary@WindowReadyState@@AEAAXXZ @ 0x180145FCC (-_WaitForUnfreezeIfNecessary@WindowReadyState@@AEAAXXZ.c)
 *     ??$WindowReadiness_FlagChange@AEBQEAUHWND__@@AEBW4WindowReadinessWaitFlags@@AEAW42@@ViewManagerInteropTraceLogging@@SAXAEBQEAUHWND__@@AEBW4WindowReadinessWaitFlags@@AEAW42@@Z @ 0x180146034 (--$WindowReadiness_FlagChange@AEBQEAUHWND__@@AEBW4WindowReadinessWaitFlags@@AEAW42@@ViewManagerI.c)
 *     ??$WindowReadiness_PendingPositionRemoved@AEBQEAUHWND__@@AEA_K@ViewManagerInteropTraceLogging@@SAXAEBQEAUHWND__@@AEA_K@Z @ 0x1801461EC (--$WindowReadiness_PendingPositionRemoved@AEBQEAUHWND__@@AEA_K@ViewManagerInteropTraceLogging@@S.c)
 *     ??$WindowReadiness_ExtraPositionAcknowledgment@AEAPEAUHWND__@@@ViewManagerInteropTraceLogging@@SAXAEAPEAUHWND__@@@Z @ 0x18014629C (--$WindowReadiness_ExtraPositionAcknowledgment@AEAPEAUHWND__@@@ViewManagerInteropTraceLogging@@S.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ViewWrapperBase::HandlePresentationReadinessChange(RTL_SRWLOCK **this, __int64 a2)
{
  char *v4; // rbx
  unsigned int *v5; // r8
  unsigned int v6; // eax
  _QWORD *v7; // rdi
  __int64 v8; // rcx
  int v9; // [rsp+40h] [rbp+8h] BYREF
  PSRWLOCK SRWLock; // [rsp+50h] [rbp+18h] BYREF

  ViewEventDispatcher::AcquireLockExclusive(this[21], &SRWLock);
  v4 = (char *)(this + 43);
  if ( *(_QWORD *)v4 && !*((_DWORD *)v4 + 2) )
    goto LABEL_21;
  if ( a2 != 31 )
  {
    if ( a2 == 36 )
    {
      v5 = (unsigned int *)(v4 + 8);
      v9 = *((_DWORD *)v4 + 2);
      v6 = v9 & 0xFFFFFFFB;
    }
    else
    {
      if ( a2 != 38 )
        goto LABEL_13;
      v5 = (unsigned int *)(v4 + 8);
      v9 = *((_DWORD *)v4 + 2);
      v6 = v9 & 0xFFFFFFFD;
    }
    goto LABEL_12;
  }
  v7 = v4 + 16;
  if ( !*((_QWORD *)v4 + 2) )
  {
    ViewManagerInteropTraceLogging::WindowReadiness_ExtraPositionAcknowledgment<HWND__ * &>(v4);
    goto LABEL_13;
  }
  --*v7;
  ViewManagerInteropTraceLogging::WindowReadiness_PendingPositionRemoved<HWND__ * const &,unsigned __int64 &>(
    v4,
    v4 + 16);
  if ( !*v7 )
  {
    v5 = (unsigned int *)(v4 + 8);
    v9 = *((_DWORD *)v4 + 2);
    v6 = v9 & 0xFFFFFFF7;
LABEL_12:
    *v5 = v6;
    ViewManagerInteropTraceLogging::WindowReadiness_FlagChange<HWND__ * const &,enum WindowReadinessWaitFlags const &,enum WindowReadinessWaitFlags &>(
      v4,
      &v9);
  }
LABEL_13:
  if ( *(_QWORD *)v4 )
  {
    if ( !*((_DWORD *)v4 + 2) )
      WindowReadyState::_WaitForUnfreezeIfNecessary((WindowReadyState *)v4);
    if ( *(_QWORD *)v4 && !*((_DWORD *)v4 + 2) )
    {
      LOBYTE(v9) = 1;
      v8 = *((_QWORD *)v4 + 12);
      if ( !v8 )
      {
        std::_Xbad_function_call();
        __debugbreak();
      }
      (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v8 + 16LL))(v8, &v9);
    }
  }
LABEL_21:
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
}
