/*
 * XREFs of MiKernelStackVaToStackNode @ 0x14021980C
 * Callers:
 *     MiInPageSingleKernelStack @ 0x1400AD4B4 (MiInPageSingleKernelStack.c)
 *     MiResolvePageFileFault @ 0x140234CE8 (MiResolvePageFileFault.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140065040 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140066590 (ExAcquireSpinLockShared.c)
 */

_QWORD *__fastcall MiKernelStackVaToStackNode(unsigned __int64 a1)
{
  KIRQL v2; // al
  _QWORD *v3; // rbx
  KIRQL v4; // si

  v2 = ExAcquireSpinLockShared(&dword_140389030);
  v3 = (_QWORD *)qword_140389028;
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
  ExReleaseSpinLockSharedFromDpcLevel(&dword_140389030);
  __writecr8(v4);
  return v3;
}
