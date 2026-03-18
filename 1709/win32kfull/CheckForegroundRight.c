/*
 * XREFs of CheckForegroundRight @ 0x1C00CBD2C
 * Callers:
 *     xxxMinMaximizeEx @ 0x1C004AB9C (xxxMinMaximizeEx.c)
 *     xxxSetForegroundWindow @ 0x1C00CBA34 (xxxSetForegroundWindow.c)
 * Callees:
 *     IAMThreadAccessGranted @ 0x1C005EB84 (IAMThreadAccessGranted.c)
 *     _GetProp @ 0x1C0076208 (_GetProp.c)
 *     IsNonImmersiveBand @ 0x1C009DE0C (IsNonImmersiveBand.c)
 *     ?CheckLegacyForegroundAccess@@YAHXZ @ 0x1C00CB9BC (-CheckLegacyForegroundAccess@@YAHXZ.c)
 *     IsDebuggerAttached @ 0x1C00CBEDC (IsDebuggerAttached.c)
 *     ?CheckImmersiveForegroundAccess@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x1C00CBF18 (-CheckImmersiveForegroundAccess@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@@Z.c)
 *     IsForegroundLocked @ 0x1C00CC014 (IsForegroundLocked.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall CheckForegroundRight(struct tagWND *a1, _DWORD *a2)
{
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  char v7; // r8
  __int64 CurrentProcess; // rax
  __int64 v9; // rcx
  unsigned int v10; // r8d
  struct tagTHREADINFO *PtiLastWokenHotKey; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v20; // rcx

  *a2 = 0;
  v4 = *(_QWORD *)(gptiCurrent + 400LL);
  *(_DWORD *)(gptiCurrent + 1184LL) &= ~0x40u;
  if ( *((_DWORD *)a1 + 80) == 15 )
  {
    *a2 = 1;
    return 0LL;
  }
  if ( IAMThreadAccessGranted(gptiCurrent)
    && (v6 = grpdeskRitInput, *(_QWORD *)(gptiCurrent + 432LL) == grpdeskRitInput)
    || *(int *)(v4 + 12) < 0
    || (v7 & 0x40) != 0 )
  {
    gppiLockSFW = 0LL;
    return 1LL;
  }
  CurrentProcess = PsGetCurrentProcess(v6, v5);
  if ( (unsigned int)IsProcessDwm(CurrentProcess) && *(_WORD *)(*((_QWORD *)a1 + 21) + 8LL) != *(_WORD *)(gpsi + 884LL) )
    return 1LL;
  if ( !gfDebugForegroundIgnoreDebugPort )
  {
    if ( (unsigned int)IsDebuggerAttached(v4) && IsNonImmersiveBand((__int64)a1) )
      return 1LL;
    if ( gpqForeground )
    {
      v9 = *(_QWORD *)(gpqForeground + 120LL);
      if ( v9 )
      {
        if ( (unsigned int)IsDebuggerAttached(*(_QWORD *)(*(_QWORD *)(v9 + 16) + 400LL))
          && IsNonImmersiveBand((__int64)a1) )
        {
          return 1LL;
        }
      }
    }
  }
  if ( gptiCurrent != GetProp((__int64)a1, gatomBrokeredForeground, 1) && v4 != gppiScreenSaver )
  {
    PtiLastWokenHotKey = CInputGlobals::GetPtiLastWokenHotKey(gpInputGlobals);
    if ( !(unsigned int)IsForegroundLocked(v12, PtiLastWokenHotKey, v13) )
    {
      if ( v14 )
      {
        v20 = *(_QWORD *)(gptiCurrent + 400LL);
        if ( *(_QWORD *)(v14 + 400) == v20 )
        {
          if ( (unsigned int)IsDesktopApp(v20, v14, v15, v16) )
            return 1LL;
        }
      }
    }
    if ( (unsigned int)CheckImmersiveForegroundAccess((struct tagPROCESSINFO *)v4, a1) )
      return CheckLegacyForegroundAccess(v18, v17);
    *a2 = 1;
    return 0LL;
  }
  return v10;
}
