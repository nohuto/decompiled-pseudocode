/*
 * XREFs of _DwmLockScreenUpdates @ 0x1C0015B30
 * Callers:
 *     <none>
 * Callees:
 *     IsCurrentDesktopComposed @ 0x1C0018CD0 (IsCurrentDesktopComposed.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     xxxRedrawWindow @ 0x1C0065644 (xxxRedrawWindow.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall DwmLockScreenUpdates(int a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rcx
  _QWORD v6[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( PsGetCurrentProcessId() == (HANDLE)gpidLogon )
  {
    g_bLockUpdatesForDwm = a1;
    if ( grpdeskRitInput && g_bLockUpdatesForDwm && !a1 && !(unsigned int)IsCurrentDesktopComposed() )
    {
      v2 = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 16LL);
      v6[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v6;
      v6[1] = v2;
      if ( v2 )
        ++*(_DWORD *)(v2 + 8);
      xxxRedrawWindow((struct tagWND *)v2);
      ThreadUnlock1(v4, v3);
    }
  }
  else
  {
    UserSetLastError(5LL);
  }
  return 0LL;
}
