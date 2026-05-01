/*
 * XREFs of ?VisibilityChanged@WindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z @ 0x180145DEC
 * Callers:
 *     ?SendVisibilityToWindow@LegacyViewWrapper@@AEAAXW4Visibility@@@Z @ 0x18013B09C (-SendVisibilityToWindow@LegacyViewWrapper@@AEAAXW4Visibility@@@Z.c)
 *     ?v_OnViewVisibilityChanged@UAPViewWrapper@@EEAAXW4EventPhase@@W4Visibility@@@Z @ 0x18013BBC0 (-v_OnViewVisibilityChanged@UAPViewWrapper@@EEAAXW4EventPhase@@W4Visibility@@@Z.c)
 *     ?SetRegistration@ViewWrapperBase@@UEAAXPEAUViewEventRegistration@@W4ViewInitializationScenario@@@Z @ 0x18013D380 (-SetRegistration@ViewWrapperBase@@UEAAXPEAUViewEventRegistration@@W4ViewInitializationScenario@@.c)
 * Callees:
 *     ?_WaitForUnfreezeIfNecessary@WindowReadyState@@AEAAXXZ @ 0x180145FCC (-_WaitForUnfreezeIfNecessary@WindowReadyState@@AEAAXXZ.c)
 *     ??$WindowReadiness_FlagChange@AEBQEAUHWND__@@AEBW4WindowReadinessWaitFlags@@AEAW42@@ViewManagerInteropTraceLogging@@SAXAEBQEAUHWND__@@AEBW4WindowReadinessWaitFlags@@AEAW42@@Z @ 0x180146034 (--$WindowReadiness_FlagChange@AEBQEAUHWND__@@AEBW4WindowReadinessWaitFlags@@AEAW42@@ViewManagerI.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall WindowReadyState::VisibilityChanged(__int64 a1, int a2, int a3)
{
  char v4; // di
  char v5; // bp
  int *v6; // r8
  int v7; // eax
  _DWORD *v8; // rsi
  __int64 v9; // rcx
  int v10; // [rsp+40h] [rbp+18h] BYREF

  v4 = 1;
  v5 = *(_QWORD *)a1 && !*(_DWORD *)(a1 + 8);
  if ( a3 == 1 )
  {
    if ( a2 )
    {
      v8 = (_DWORD *)(a1 + 8);
      v10 = *(_DWORD *)(a1 + 8);
      *(_DWORD *)(a1 + 8) = v10 & 0xFFFFFFFE;
      ViewManagerInteropTraceLogging::WindowReadiness_FlagChange<HWND__ * const &,enum WindowReadinessWaitFlags const &,enum WindowReadinessWaitFlags &>(
        a1,
        &v10);
      if ( !*(_QWORD *)a1 )
      {
LABEL_18:
        v4 = 0;
        goto LABEL_19;
      }
      if ( !*v8 )
        WindowReadyState::_WaitForUnfreezeIfNecessary((WindowReadyState *)a1);
    }
    else if ( *(_BYTE *)(a1 + 24) )
    {
      v6 = (int *)(a1 + 8);
      if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
      {
        v10 = *v6;
        v7 = v10 | 2;
LABEL_15:
        *v6 = v7;
        ViewManagerInteropTraceLogging::WindowReadiness_FlagChange<HWND__ * const &,enum WindowReadinessWaitFlags const &,enum WindowReadinessWaitFlags &>(
          a1,
          &v10);
      }
    }
  }
  else if ( a2 )
  {
    v6 = (int *)(a1 + 8);
    v10 = *(_DWORD *)(a1 + 8);
    v7 = v10 | 1;
    goto LABEL_15;
  }
  if ( !*(_QWORD *)a1 || *(_DWORD *)(a1 + 8) )
    goto LABEL_18;
LABEL_19:
  if ( v5 != v4 )
  {
    v9 = *(_QWORD *)(a1 + 96);
    LOBYTE(v10) = v4;
    if ( !v9 )
    {
      std::_Xbad_function_call();
      __debugbreak();
    }
    (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v9 + 16LL))(v9, &v10);
  }
}
