/*
 * XREFs of ?HandlePresentationReadinessChange@ViewWrapperBase@@UEAAX_K@Z @ 0x180051160
 * Callers:
 *     <none>
 * Callees:
 *     ??$WindowReadiness_FlagChange@AEBQEAUHWND__@@AEBW4WindowReadinessWaitFlags@@AEAW42@@ViewManagerInteropTraceLogging@@SAXAEBQEAUHWND__@@AEBW4WindowReadinessWaitFlags@@AEAW42@@Z @ 0x180054420 (--$WindowReadiness_FlagChange@AEBQEAUHWND__@@AEBW4WindowReadinessWaitFlags@@AEAW42@@ViewManagerI.c)
 *     ?Clear@WaitFlags@WindowReadyState@@QEAAXPEBV2@W4WindowReadinessWaitFlags@@@Z @ 0x18005A5A4 (-Clear@WaitFlags@WindowReadyState@@QEAAXPEBV2@W4WindowReadinessWaitFlags@@@Z.c)
 *     ?_WaitForUnfreezeIfNecessary@WindowReadyState@@AEAAXXZ @ 0x18005B5B4 (-_WaitForUnfreezeIfNecessary@WindowReadyState@@AEAAXXZ.c)
 *     ??$WindowReadiness_PendingPositionRemoved@AEBQEAUHWND__@@AEA_K@ViewManagerInteropTraceLogging@@SAXAEBQEAUHWND__@@AEA_K@Z @ 0x180087E50 (--$WindowReadiness_PendingPositionRemoved@AEBQEAUHWND__@@AEA_K@ViewManagerInteropTraceLogging@@S.c)
 *     ??R?$_Func_class@X_N@std@@QEBAX_N@Z @ 0x18008E184 (--R-$_Func_class@X_N@std@@QEBAX_N@Z.c)
 *     ??$WindowReadiness_ExtraPositionAcknowledgment@AEAPEAUHWND__@@@ViewManagerInteropTraceLogging@@SAXAEAPEAUHWND__@@@Z @ 0x1800A0148 (--$WindowReadiness_ExtraPositionAcknowledgment@AEAPEAUHWND__@@@ViewManagerInteropTraceLogging@@S.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ViewWrapperBase::HandlePresentationReadinessChange(ViewWrapperBase *this, __int64 a2)
{
  char *v3; // rsi
  RTL_SRWLOCK *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rax
  int v8; // [rsp+50h] [rbp+8h] BYREF
  RTL_SRWLOCK *v9; // [rsp+60h] [rbp+18h]

  v3 = (char *)this + 344;
  v4 = (RTL_SRWLOCK *)(*((_QWORD *)this + 20) + 296LL);
  AcquireSRWLockExclusive(v4);
  v9 = v4;
  if ( !*(_QWORD *)v3 || *((_DWORD *)v3 + 2) )
  {
    switch ( a2 )
    {
      case 31LL:
        v6 = *((_QWORD *)v3 + 2);
        if ( v6 )
        {
          *((_QWORD *)v3 + 2) = v6 - 1;
          ViewManagerInteropTraceLogging::WindowReadiness_PendingPositionRemoved<HWND__ * const &,unsigned __int64 &>(
            v3,
            v3 + 16);
          if ( !*((_QWORD *)v3 + 2) )
          {
            v8 = *((_DWORD *)v3 + 2);
            *((_DWORD *)v3 + 2) = v8 & 0xFFFFFFF7;
            ViewManagerInteropTraceLogging::WindowReadiness_FlagChange<HWND__ * const &,enum WindowReadinessWaitFlags const &,enum WindowReadinessWaitFlags &>(
              v3,
              &v8,
              v3 + 8);
          }
        }
        else
        {
          ViewManagerInteropTraceLogging::WindowReadiness_ExtraPositionAcknowledgment<HWND__ * &>(v3);
        }
        break;
      case 36LL:
        WindowReadyState::WaitFlags::Clear(v3 + 8, v3, 4LL);
        break;
      case 38LL:
        WindowReadyState::WaitFlags::Clear(v3 + 8, v3, 2LL);
        break;
    }
    v7 = *(_QWORD *)v3;
    if ( *(_QWORD *)v3 )
    {
      if ( !*((_DWORD *)v3 + 2) )
      {
        WindowReadyState::_WaitForUnfreezeIfNecessary((WindowReadyState *)v3);
        v7 = *(_QWORD *)v3;
      }
      if ( v7 && !*((_DWORD *)v3 + 2) )
      {
        LOBYTE(v5) = 1;
        std::_Func_class<void,bool>::operator()(v3 + 40, v5);
      }
    }
  }
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
}
