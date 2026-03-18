/*
 * XREFs of KiInitializeForceIdle @ 0x1405A7B08
 * Callers:
 *     KeInitializeTimerTable @ 0x1405A79D0 (KeInitializeTimerTable.c)
 * Callees:
 *     KeInitializeDpc @ 0x140088A30 (KeInitializeDpc.c)
 */

__int64 __fastcall KiInitializeForceIdle(__int64 a1)
{
  __int64 result; // rax

  if ( !*(_DWORD *)(a1 + 36) )
  {
    KiForceIdleLock = 0LL;
    KeInitializeDpc((PRKDPC)&KiForceIdleStartDpc, (PKDEFERRED_ROUTINE)KiForceIdleStartDpcRoutine, 0LL);
    KeInitializeDpc(&KiForceIdleStopDpc, (PKDEFERRED_ROUTINE)KiForceIdleStopDpcRoutine, 0LL);
    BYTE1(KiForceIdleStartDpc) = 3;
    KiForceIdleStopDpc.Importance = 3;
    if ( !KiSerializeTimerExpiration )
      KiForceIdleDisabled = 1;
  }
  KeInitializeDpc((PRKDPC)(a1 + 24424), (PKDEFERRED_ROUTINE)KiForceIdleParkUnparkDpcRoutine, 0LL);
  *(_BYTE *)(a1 + 24425) = 3;
  result = *(_QWORD *)(a1 + 24480);
  if ( !result )
  {
    result = 640LL;
    *(_WORD *)(a1 + 24426) = *(_DWORD *)(a1 + 36) + 640;
  }
  return result;
}
