/*
 * XREFs of KiFastExitThreadWait @ 0x14011B0BC
 * Callers:
 *     KeRemovePriQueue @ 0x140061A80 (KeRemovePriQueue.c)
 *     KeRemoveQueueEx @ 0x14006C920 (KeRemoveQueueEx.c)
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeDelayExecutionThread @ 0x1400818C0 (KeDelayExecutionThread.c)
 *     KiWaitForAllObjects @ 0x1400E3B9C (KiWaitForAllObjects.c)
 *     KeWaitForGate @ 0x1400E3F18 (KeWaitForGate.c)
 *     KeWaitForAlertByThreadId @ 0x1400E41B0 (KeWaitForAlertByThreadId.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     KiExitThreadWait @ 0x14011B140 (KiExitThreadWait.c)
 */

__int64 __fastcall KiFastExitThreadWait(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // di
  signed __int32 v7[10]; // [rsp+0h] [rbp-28h] BYREF
  int v8; // [rsp+38h] [rbp+10h] BYREF

  v3 = a3;
  *(_BYTE *)(a2 + 388) = 2;
  _InterlockedOr(v7, 0);
  if ( *(_QWORD *)(a2 + 64) )
  {
    v8 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 64), 0LL) )
    {
      do
        KeYieldProcessorEx(&v8);
      while ( *(_QWORD *)(a2 + 64) );
    }
    *(_QWORD *)(a2 + 64) = 0LL;
  }
  LOBYTE(a3) = v3;
  return KiExitThreadWait(a1, a2, a3);
}
