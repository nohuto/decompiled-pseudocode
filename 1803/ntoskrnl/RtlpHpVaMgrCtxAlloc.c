/*
 * XREFs of RtlpHpVaMgrCtxAlloc @ 0x1402966FC
 * Callers:
 *     RtlpHpAllocVA @ 0x1402943E0 (RtlpHpAllocVA.c)
 * Callees:
 *     ExAcquireSpinLockShared @ 0x14008E460 (ExAcquireSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140122D80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     RtlpHpVaMgrAlloc @ 0x140296050 (RtlpHpVaMgrAlloc.c)
 *     RtlpHpVaMgrCtxAllocatorFind @ 0x140296828 (RtlpHpVaMgrCtxAllocatorFind.c)
 */

__int64 __fastcall RtlpHpVaMgrCtxAlloc(
        __int64 a1,
        unsigned __int64 *a2,
        unsigned __int64 a3,
        unsigned int *a4,
        __int64 a5)
{
  __int64 v5; // rax
  __int64 v10; // rsi
  volatile LONG *v11; // rdi
  unsigned __int64 v12; // rbx

  v5 = *a4;
  if ( (_DWORD)v5 == -1 )
  {
    v11 = (volatile LONG *)(a1 + 96);
    v12 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 96));
    v10 = RtlpHpVaMgrCtxAllocatorFind(a1, a4, 0LL, 0LL);
    ExReleaseSpinLockSharedFromDpcLevel(v11);
    __writecr8(v12);
  }
  else
  {
    v10 = 48 * v5 + a1 + 112;
  }
  return RtlpHpVaMgrAlloc(v10, a2, a3, a5);
}
