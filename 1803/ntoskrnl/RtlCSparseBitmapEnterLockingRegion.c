/*
 * XREFs of RtlCSparseBitmapEnterLockingRegion @ 0x14029EEA4
 * Callers:
 *     RtlpCSparseBitmapPageCommit @ 0x14029DDC4 (RtlpCSparseBitmapPageCommit.c)
 *     RtlpCSparseBitmapPageDecommit @ 0x14029DF34 (RtlpCSparseBitmapPageDecommit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlCSparseBitmapEnterLockingRegion(__int64 a1, __int64 a2)
{
  bool v2; // zf
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int8 CurrentIrql; // al

  v2 = *(_BYTE *)(a2 + 56) == 0;
  *(_QWORD *)(a1 + 8) = a2;
  if ( v2 )
  {
    CurrentThread = KeGetCurrentThread();
    *(_BYTE *)a1 = -1;
    --CurrentThread->KernelApcDisable;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    *(_BYTE *)a1 = CurrentIrql;
  }
  return a1;
}
