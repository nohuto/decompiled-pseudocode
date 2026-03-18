/*
 * XREFs of KiFlushQueuedDpcsWorker @ 0x140005740
 * Callers:
 *     <none>
 * Callees:
 *     KiRequestSoftwareInterrupt @ 0x14007C130 (KiRequestSoftwareInterrupt.c)
 */

__int64 __fastcall KiFlushQueuedDpcsWorker(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // bl

  v1 = *(unsigned int *)(a1 + 11800);
  result = (unsigned int)v1 | *(_DWORD *)(a1 + 11840);
  if ( (unsigned int)v1 | *(_DWORD *)(a1 + 11840) )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    LOBYTE(v1) = 2;
    KiRequestSoftwareInterrupt(a1, v1);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
