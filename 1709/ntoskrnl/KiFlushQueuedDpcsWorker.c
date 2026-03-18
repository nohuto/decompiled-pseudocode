/*
 * XREFs of KiFlushQueuedDpcsWorker @ 0x1400AA810
 * Callers:
 *     <none>
 * Callees:
 *     KiRequestSoftwareInterrupt @ 0x140093244 (KiRequestSoftwareInterrupt.c)
 */

__int64 __fastcall KiFlushQueuedDpcsWorker(__int64 a1)
{
  unsigned int v1; // edx
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // bl

  v1 = *(_DWORD *)(a1 + 11800);
  result = v1 | *(_DWORD *)(a1 + 11840);
  if ( v1 | *(_DWORD *)(a1 + 11840) )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    KiRequestSoftwareInterrupt((struct _KPRCB *)a1, 2);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
