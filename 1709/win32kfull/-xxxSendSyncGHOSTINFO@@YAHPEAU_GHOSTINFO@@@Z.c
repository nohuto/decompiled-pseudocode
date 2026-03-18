/*
 * XREFs of ?xxxSendSyncGHOSTINFO@@YAHPEAU_GHOSTINFO@@@Z @ 0x1C01D7528
 * Callers:
 *     xxxFrostCrashedWindow @ 0x1C01D760C (xxxFrostCrashedWindow.c)
 * Callees:
 *     DwmSyncSignalGhost @ 0x1C024DD74 (DwmSyncSignalGhost.c)
 */

__int64 __fastcall xxxSendSyncGHOSTINFO(struct _GHOSTINFO *a1)
{
  unsigned int v1; // edi
  void *v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx

  v1 = 0;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  v2 = (void *)ReferenceDwmApiPort(a1);
  UserSessionSwitchLeaveCrit(v4, v3);
  LOBYTE(v1) = (int)DwmSyncSignalGhost(v2) >= 0;
  EnterCrit(0LL, 1LL);
  return v1;
}
