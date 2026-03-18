/*
 * XREFs of CheckForegroundRight @ 0x1C00B431C
 * Callers:
 *     xxxSetForegroundWindow @ 0x1C00B3F50 (xxxSetForegroundWindow.c)
 *     xxxMinMaximizeEx @ 0x1C00E8144 (xxxMinMaximizeEx.c)
 * Callees:
 *     IAMThreadAccessGranted @ 0x1C0038B8C (IAMThreadAccessGranted.c)
 *     _GetProp @ 0x1C00624E0 (_GetProp.c)
 *     ?CheckLegacyForegroundAccess@@YAHXZ @ 0x1C00B3D10 (-CheckLegacyForegroundAccess@@YAHXZ.c)
 *     IsDebuggerAttached @ 0x1C00B44C4 (IsDebuggerAttached.c)
 *     ?CheckImmersiveForegroundAccess@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x1C00B4500 (-CheckImmersiveForegroundAccess@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@@Z.c)
 *     IsForegroundLocked @ 0x1C00B45FC (IsForegroundLocked.c)
 *     IsNonImmersiveBand @ 0x1C00B79A8 (IsNonImmersiveBand.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall CheckForegroundRight(struct tagWND *a1, _DWORD *a2)
{
  __int64 v4; // rsi
  __int64 v5; // rcx
  char v6; // r8
  __int64 CurrentProcess; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  unsigned int v11; // r8d
  struct tagTHREADINFO *PtiLastWokenHotKey; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v19; // rcx

  *a2 = 0;
  v4 = *(_QWORD *)(gptiCurrent + 376LL);
  *(_DWORD *)(gptiCurrent + 1096LL) &= ~0x40u;
  if ( *((_DWORD *)a1 + 80) == 15 )
  {
    *a2 = 1;
    return 0LL;
  }
  if ( IAMThreadAccessGranted(gptiCurrent)
    && (v5 = grpdeskRitInput, *(_QWORD *)(gptiCurrent + 408LL) == grpdeskRitInput)
    || *(int *)(v4 + 12) < 0
    || (v6 & 0x40) != 0 )
  {
    gppiLockSFW = 0LL;
    return 1LL;
  }
  CurrentProcess = PsGetCurrentProcess(v5);
  if ( (unsigned int)IsProcessDwm(CurrentProcess) && *(_WORD *)(*((_QWORD *)a1 + 21) + 8LL) != *(_WORD *)(gpsi + 884LL) )
    return 1LL;
  if ( !gfDebugForegroundIgnoreDebugPort )
  {
    if ( (unsigned int)IsDebuggerAttached(v4) && (unsigned int)IsNonImmersiveBand(a1, v8) )
      return 1LL;
    if ( gpqForeground )
    {
      v9 = *(_QWORD *)(gpqForeground + 88LL);
      if ( v9 )
      {
        if ( (unsigned int)IsDebuggerAttached(*(_QWORD *)(*(_QWORD *)(v9 + 16) + 376LL))
          && (unsigned int)IsNonImmersiveBand(a1, v10) )
        {
          return 1LL;
        }
      }
    }
  }
  if ( gptiCurrent != GetProp((__int64)a1, gatomBrokeredForeground, 1) && v4 != gppiScreenSaver )
  {
    PtiLastWokenHotKey = CInputGlobals::GetPtiLastWokenHotKey(gpInputGlobals);
    if ( !(unsigned int)IsForegroundLocked(v13, PtiLastWokenHotKey, v14) )
    {
      if ( v15 )
      {
        v19 = *(_QWORD *)(gptiCurrent + 376LL);
        if ( *(_QWORD *)(v15 + 376) == v19 )
        {
          if ( (unsigned int)IsDesktopApp(v19) )
            return 1LL;
        }
      }
    }
    if ( (unsigned int)CheckImmersiveForegroundAccess((struct tagPROCESSINFO *)v4, a1) )
      return CheckLegacyForegroundAccess(v17, v16);
    *a2 = 1;
    return 0LL;
  }
  return v11;
}
