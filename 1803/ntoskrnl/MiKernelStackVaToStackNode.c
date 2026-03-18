/*
 * XREFs of MiKernelStackVaToStackNode @ 0x140152A98
 * Callers:
 *     MiInPageSingleKernelStack @ 0x1400B2E48 (MiInPageSingleKernelStack.c)
 *     MiResolvePageFileFault @ 0x140151874 (MiResolvePageFileFault.c)
 * Callees:
 *     ExAcquireSpinLockShared @ 0x14008E460 (ExAcquireSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140122D80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 */

_QWORD *__fastcall MiKernelStackVaToStackNode(unsigned __int64 a1)
{
  KIRQL v2; // al
  _QWORD *v3; // rbx
  KIRQL v4; // si

  v2 = ExAcquireSpinLockShared(&dword_1403CC2E0);
  v3 = (_QWORD *)qword_1403CC2D8;
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
  ExReleaseSpinLockSharedFromDpcLevel(&dword_1403CC2E0);
  __writecr8(v4);
  return v3;
}
