/*
 * XREFs of KeFastAcquireInStackQueuedSpinLockAndRaise @ 0x14011C4D0
 * Callers:
 *     LdrpKrnGetDataTableEntry @ 0x140012970 (LdrpKrnGetDataTableEntry.c)
 *     IopCreateSecurityCheck @ 0x140032804 (IopCreateSecurityCheck.c)
 * Callees:
 *     KxWaitForLockOwnerShipWithIrql @ 0x14011C530 (KxWaitForLockOwnerShipWithIrql.c)
 *     KiFastAcquireQueuedSpinLockInstrumented @ 0x1401FE96C (KiFastAcquireQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall KeFastAcquireInStackQueuedSpinLockAndRaise(volatile __int64 *a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v3; // rdx
  char v4; // r8
  _BYTE v5[24]; // [rsp+20h] [rbp-18h] BYREF

  result = (__int64)a2;
  v5[0] = 2;
  a2[1] = a1;
  *a2 = 0LL;
  _disable();
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    result = KiFastAcquireQueuedSpinLockInstrumented(a2, a1, v5);
    v4 = result;
  }
  else
  {
    v3 = _InterlockedExchange64(a1, (__int64)a2);
    v4 = 0;
    if ( v3 )
    {
      result = KxWaitForLockOwnerShipWithIrql(result, v3, v5);
      v4 = 1;
    }
  }
  if ( v4 )
  {
    _disable();
    result = v5[0];
    __writecr8(v5[0]);
  }
  return result;
}
