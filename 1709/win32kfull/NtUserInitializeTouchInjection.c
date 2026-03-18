/*
 * XREFs of NtUserInitializeTouchInjection @ 0x1C01E8340
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     ?TraceLoggingTouchInjection@@YAXHHHK@Z @ 0x1C01A3780 (-TraceLoggingTouchInjection@@YAXHHHK@Z.c)
 *     ?CheckCurrentInjectionConfiguration@@YAXXZ @ 0x1C01BC7B8 (-CheckCurrentInjectionConfiguration@@YAXXZ.c)
 *     _InitializeTouchInjectionWorker @ 0x1C01BD608 (_InitializeTouchInjectionWorker.c)
 */

__int64 __fastcall NtUserInitializeTouchInjection(unsigned int a1, unsigned int a2)
{
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // ebx
  __int64 v8; // rdx

  EnterCrit(0LL, 1LL);
  InputExtensibilityCalloutGuard();
  v4 = *(_QWORD *)(gptiCurrent + 400LL);
  if ( a1 - 1 > 0xFF || a2 - 1 > 2 )
  {
    TraceLoggingTouchInjection(0, 0, a1);
    v7 = 0;
    UserSetLastError(87LL, v8);
  }
  else
  {
    CheckCurrentInjectionConfiguration();
    v7 = InitializeTouchInjectionWorker(a1, a2, v4);
  }
  UserSessionSwitchLeaveCrit(v6, v5);
  return v7;
}
