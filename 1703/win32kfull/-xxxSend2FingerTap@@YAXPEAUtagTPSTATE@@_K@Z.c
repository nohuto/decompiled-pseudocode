/*
 * XREFs of ?xxxSend2FingerTap@@YAXPEAUtagTPSTATE@@_K@Z @ 0x1C01B05C0
 * Callers:
 *     ?xxxProcess2FingerTap@@YAHPEAUtagPOINTERINFONODE@@PEAUtagTPSTATE@@HK@Z @ 0x1C01B0108 (-xxxProcess2FingerTap@@YAHPEAUtagPOINTERINFONODE@@PEAUtagTPSTATE@@HK@Z.c)
 *     ?xxxProcessTapsFor3orMoreContacts@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@K_K2@Z @ 0x1C01B02FC (-xxxProcessTapsFor3orMoreContacts@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@K_K2@Z.c)
 * Callees:
 *     ?QueuePTPMouseEvent@@YAXPEAXUtagPOINT@@K_K@Z @ 0x1C01ABB48 (-QueuePTPMouseEvent@@YAXPEAXUtagPOINT@@K_K@Z.c)
 *     IsFirstActionAfterKey @ 0x1C01B0CF4 (IsFirstActionAfterKey.c)
 */

void __fastcall xxxSend2FingerTap(LARGE_INTEGER *a1, __int64 a2)
{
  LARGE_INTEGER v3; // rdx
  LARGE_INTEGER v4; // rcx
  LARGE_INTEGER v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9

  a1[261] = KeQueryPerformanceCounter(0LL);
  if ( gdwInAtomicOperation )
  {
    v4.QuadPart = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))UserSessionSwitchLeaveCrit)(
    (LARGE_INTEGER)v4.QuadPart,
    (LARGE_INTEGER)v3.QuadPart,
    gdwInAtomicOperation,
    (LARGE_INTEGER)v5.QuadPart);
  QueuePTPMouseEvent(0LL, *(struct tagPOINT *)gptCursorAsync, 8, a2);
  QueuePTPMouseEvent(
    0LL,
    *(struct tagPOINT *)gptCursorAsync,
    16,
    (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
   * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64);
  EnterCrit(0LL, 1LL);
  if ( (unsigned int)IsFirstActionAfterKey(v7, v6, v8, v9) )
    *((_DWORD *)&gTPTelemTimings + 10) = 2;
  else
    *((_DWORD *)&gTPTelemTimings + 11) = 2;
  ++*((_DWORD *)&gTPTelemState + 6);
  ++*((_DWORD *)&gTPTelemState + 13);
}
