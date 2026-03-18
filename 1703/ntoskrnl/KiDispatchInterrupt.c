/*
 * XREFs of KiDispatchInterrupt @ 0x140188550
 * Callers:
 *     KiDpcInterrupt @ 0x140187A70 (KiDpcInterrupt.c)
 *     KiDpcInterruptBypass @ 0x140187EA0 (KiDpcInterruptBypass.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x14000B7B0 (KiCheckForSListAddress.c)
 *     KiQuantumEnd @ 0x140041B30 (KiQuantumEnd.c)
 *     KiDeferGroupSchedulingPreemption @ 0x1401136E0 (KiDeferGroupSchedulingPreemption.c)
 */

// bad sp value at call has been detected, the output may be wrong!
unsigned __int8 __fastcall KiDispatchInterrupt(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6, int a7)
{
  __int64 v7; // rbp
  unsigned __int8 result; // al
  int v9; // edx
  int v10; // r8d
  int v11; // r9d
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 CurrentThread; // rcx
  __int64 v14; // [rsp+0h] [rbp-28h] BYREF

  result = KiCheckForSListAddress(v7 - 128);
  CurrentPrcb = KeGetCurrentPrcb();
  _disable();
  if ( (CurrentPrcb->DpcRequestSummary & 0x3F) != 0 )
    return KyRetireDpcList((_DWORD)CurrentPrcb, v9, v10, v11, a5, a6, a7, (__int64)&v14);
  _enable();
  if ( CurrentPrcb->QuantumEnd )
  {
    CurrentPrcb->QuantumEnd = 0;
    return (unsigned __int8)KiQuantumEnd();
  }
  else if ( CurrentPrcb->NextThread )
  {
    CurrentThread = (__int64)CurrentPrcb->CurrentThread;
    if ( (*(_BYTE *)(CurrentThread + 2) & 4) == 0 )
      return KxDispatchInterrupt();
    result = KiDeferGroupSchedulingPreemption(CurrentThread, (__int64)CurrentPrcb);
    if ( !result )
      return KxDispatchInterrupt();
  }
  return result;
}
