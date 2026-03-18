/*
 * XREFs of ?FAllowForegroundActivate@@YAHPEAUtagQ@@PEAUtagWND@@@Z @ 0x1C00CC03C
 * Callers:
 *     xxxSetFocus @ 0x1C0085260 (xxxSetFocus.c)
 *     xxxActivateWindow @ 0x1C00CB624 (xxxActivateWindow.c)
 * Callees:
 *     IAMThreadAccessGranted @ 0x1C005EB84 (IAMThreadAccessGranted.c)
 *     IsImmersiveBandOrShellManaged @ 0x1C00C8B90 (IsImmersiveBandOrShellManaged.c)
 *     ?CheckImmersiveForegroundAccess@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x1C00CBF18 (-CheckImmersiveForegroundAccess@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@@Z.c)
 *     IsForegroundLocked @ 0x1C00CC014 (IsForegroundLocked.c)
 *     FRemoveForegroundActivate @ 0x1C00CC160 (FRemoveForegroundActivate.c)
 */

__int64 __fastcall FAllowForegroundActivate(struct tagQ *a1, struct tagWND *a2)
{
  __int64 v4; // rsi
  unsigned int v5; // ebx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx

  v4 = *(_QWORD *)(gptiCurrent + 400LL);
  v5 = 0;
  if ( !(unsigned int)FRemoveForegroundActivate(gptiCurrent)
    || *(_QWORD *)(gptiCurrent + 432LL) != grpdeskRitInput
    || (struct tagQ *)gpqForeground == a1
    || (unsigned int)IsForegroundLocked()
    || (*((_BYTE *)a2 + 67) & 8) != 0
    || *((_DWORD *)a2 + 80) == 15 )
  {
    return 0LL;
  }
  if ( IAMThreadAccessGranted(gptiCurrent) || *(int *)(v4 + 12) < 0 )
    return 1LL;
  if ( (unsigned int)IsImmersiveBroker(v4)
    && (unsigned int)IsImmersiveBandOrShellManaged((__int64)a2)
    && (*((_BYTE *)a2 + 306) & 0x20) == 0 )
  {
    return 0LL;
  }
  if ( (unsigned int)IsImmersiveBroker(v4) )
  {
    if ( gpqForeground )
    {
      v9 = *(_QWORD *)(gpqForeground + 120LL);
      if ( v9 )
      {
        if ( (unsigned int)IsImmersiveBandOrShellManaged(v9) )
          return 0LL;
      }
    }
  }
  LOBYTE(v5) = CheckImmersiveForegroundAccess((struct tagPROCESSINFO *)v4, a2, v7, v8);
  return v5;
}
