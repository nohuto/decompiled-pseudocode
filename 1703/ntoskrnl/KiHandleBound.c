/*
 * XREFs of KiHandleBound @ 0x1401FDB50
 * Callers:
 *     KiBoundFault @ 0x14018CB00 (KiBoundFault.c)
 * Callees:
 *     ExReferenceCallBackBlock @ 0x14008BC80 (ExReferenceCallBackBlock.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

__int64 KiHandleBound()
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v1; // edi
  struct _EX_RUNDOWN_REF *v2; // rax
  struct _EX_RUNDOWN_REF *v3; // rbx
  signed __int64 v4; // rax
  signed __int64 v5; // rtt

  CurrentThread = KeGetCurrentThread();
  v1 = 0;
  --CurrentThread->KernelApcDisable;
  v2 = ExReferenceCallBackBlock(&KiBoundsCallback);
  v3 = v2;
  if ( v2 )
  {
    v1 = ((__int64 (*)(void))v2[1].Count)();
    _m_prefetchw(&KiBoundsCallback);
    v4 = KiBoundsCallback;
    while ( ((unsigned __int64)v3 ^ v4) < 0xF )
    {
      v5 = v4;
      v4 = _InterlockedCompareExchange64(&KiBoundsCallback, v4 + 1, v4);
      if ( v5 == v4 )
        goto LABEL_6;
    }
    ExReleaseRundownProtection(v3);
  }
LABEL_6:
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v1;
}
