/*
 * XREFs of CmpRetryBackOff @ 0x140696184
 * Callers:
 *     CmUnloadKey @ 0x14046DF74 (CmUnloadKey.c)
 *     CmpSaveBootControlSet @ 0x1405A4B40 (CmpSaveBootControlSet.c)
 *     CmSetLastWriteTimeKey @ 0x14068E12C (CmSetLastWriteTimeKey.c)
 *     CmpRollbackTransactionArray @ 0x1406961BC (CmpRollbackTransactionArray.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1400818C0 (KeDelayExecutionThread.c)
 */

NTSTATUS __fastcall CmpRetryBackOff(_DWORD *a1)
{
  NTSTATUS result; // eax
  LARGE_INTEGER Interval; // [rsp+30h] [rbp+8h] BYREF

  if ( ++*a1 > 0xAu )
  {
    Interval.QuadPart = -10000000LL;
    result = KeDelayExecutionThread(0, 0, &Interval);
    *a1 = 0;
  }
  return result;
}
