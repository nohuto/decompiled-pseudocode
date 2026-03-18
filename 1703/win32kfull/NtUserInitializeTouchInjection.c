/*
 * XREFs of NtUserInitializeTouchInjection @ 0x1C01DC140
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     ?TraceLoggingTouchInjection@@YAXHHHK@Z @ 0x1C0197CD0 (-TraceLoggingTouchInjection@@YAXHHHK@Z.c)
 *     _InitializeTouchInjection @ 0x1C01B83A8 (_InitializeTouchInjection.c)
 */

__int64 __fastcall NtUserInitializeTouchInjection(unsigned int a1, unsigned int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // ebx
  __int64 v7; // r8
  __int64 v8; // r9

  EnterCrit(0LL, 1LL);
  InputExtensibilityCalloutGuard();
  if ( a1 - 1 > 0xFF || a2 - 1 > 2 )
  {
    TraceLoggingTouchInjection(0, 0, a1);
    v6 = 0;
    UserSetLastError(87LL);
  }
  else
  {
    v6 = InitializeTouchInjection(a1, a2, *(_QWORD *)(gptiCurrent + 376LL));
  }
  UserSessionSwitchLeaveCrit(v5, v4, v7, v8);
  return v6;
}
