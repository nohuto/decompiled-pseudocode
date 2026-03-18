/*
 * XREFs of ?FAllowForegroundActivate@@YAHPEAUtagQ@@PEAUtagWND@@@Z @ 0x1C00B4718
 * Callers:
 *     xxxActivateWindow @ 0x1C00B3994 (xxxActivateWindow.c)
 *     xxxSetFocus @ 0x1C00B507C (xxxSetFocus.c)
 * Callees:
 *     IAMThreadAccessGranted @ 0x1C0038B8C (IAMThreadAccessGranted.c)
 *     ?CheckImmersiveForegroundAccess@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x1C00B4500 (-CheckImmersiveForegroundAccess@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@@Z.c)
 *     IsForegroundLocked @ 0x1C00B45FC (IsForegroundLocked.c)
 *     FRemoveForegroundActivate @ 0x1C00B483C (FRemoveForegroundActivate.c)
 *     IsImmersiveBandOrShellManaged @ 0x1C00B9628 (IsImmersiveBandOrShellManaged.c)
 */

__int64 __fastcall FAllowForegroundActivate(struct tagQ *a1, struct tagWND *a2)
{
  __int64 v4; // rsi
  unsigned int v5; // ebx
  __int64 v7; // rcx

  v4 = *(_QWORD *)(gptiCurrent + 376LL);
  v5 = 0;
  if ( !(unsigned int)FRemoveForegroundActivate(gptiCurrent)
    || *(_QWORD *)(gptiCurrent + 408LL) != grpdeskRitInput
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
    && (unsigned int)IsImmersiveBandOrShellManaged(a2)
    && (*((_BYTE *)a2 + 306) & 0x20) == 0 )
  {
    return 0LL;
  }
  if ( (unsigned int)IsImmersiveBroker(v4) )
  {
    if ( gpqForeground )
    {
      v7 = *(_QWORD *)(gpqForeground + 88LL);
      if ( v7 )
      {
        if ( (unsigned int)IsImmersiveBandOrShellManaged(v7) )
          return 0LL;
      }
    }
  }
  LOBYTE(v5) = CheckImmersiveForegroundAccess((struct tagPROCESSINFO *)v4, a2);
  return v5;
}
