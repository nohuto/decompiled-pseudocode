/*
 * XREFs of MiKernelStackVaToStackNode @ 0x14013D064
 * Callers:
 *     MiInPageSingleKernelStack @ 0x140011AE8 (MiInPageSingleKernelStack.c)
 *     MiResolvePageFileFault @ 0x140073C40 (MiResolvePageFileFault.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400A5D60 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1400A6AB0 (ExAcquireSpinLockShared.c)
 */

_QWORD *__fastcall MiKernelStackVaToStackNode(unsigned __int64 a1)
{
  KIRQL v2; // al
  _QWORD *v3; // rbx
  KIRQL v4; // si

  v2 = ExAcquireSpinLockShared(&dword_14036CDC0);
  v3 = (_QWORD *)qword_14036CDB8;
  v4 = v2;
  while ( v3 )
  {
    if ( a1 > v3[3] )
    {
      v3 = (_QWORD *)v3[1];
    }
    else
    {
      if ( a1 >= v3[4] )
        break;
      v3 = (_QWORD *)*v3;
    }
  }
  ExReleaseSpinLockSharedFromDpcLevel(&dword_14036CDC0);
  __writecr8(v4);
  return v3;
}
