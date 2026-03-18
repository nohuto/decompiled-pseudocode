/*
 * XREFs of LinkNodepRunSrsAsync @ 0x1C0063FC4
 * Callers:
 *     LinkNodepRestoreIrqRoutingWorker @ 0x1C0063E70 (LinkNodepRestoreIrqRoutingWorker.c)
 *     LinkNodeWriteStateToHardware @ 0x1C008B18C (LinkNodeWriteStateToHardware.c)
 * Callees:
 *     memset @ 0x1C002C4C0 (memset.c)
 *     LinkNodepRunSrsWorker @ 0x1C0064070 (LinkNodepRunSrsWorker.c)
 */

__int64 __fastcall LinkNodepRunSrsAsync(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  _DWORD *PoolWithTag; // rax
  _DWORD *v9; // rbx

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x60uLL, 0x41706341u);
  v9 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0x60uLL);
  v9[8] = 0;
  v9[9] = -1;
  *(_QWORD *)v9 = a1;
  v9[2] = a2;
  *((_QWORD *)v9 + 10) = a3;
  *((_QWORD *)v9 + 11) = a4;
  return LinkNodepRunSrsWorker(a1, 0LL, 0LL, v9);
}
