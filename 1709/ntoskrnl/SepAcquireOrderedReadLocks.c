/*
 * XREFs of SepAcquireOrderedReadLocks @ 0x14011C15C
 * Callers:
 *     SeTokenCanImpersonate @ 0x1404CEBB0 (SeTokenCanImpersonate.c)
 *     NtCompareTokens @ 0x140512FAC (NtCompareTokens.c)
 *     SepIsSiblingTokenByPointer @ 0x140573C84 (SepIsSiblingTokenByPointer.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1400800D0 (ExAcquireResourceSharedLite.c)
 */

BOOLEAN __fastcall SepAcquireOrderedReadLocks(unsigned __int64 a1, unsigned __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v5; // rax
  struct _ERESOURCE *v6; // rcx
  struct _KTHREAD *v8; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( a1 >= a2 )
  {
    ExAcquireResourceSharedLite(*(PERESOURCE *)(a2 + 48), 1u);
    v8 = KeGetCurrentThread();
    --v8->KernelApcDisable;
    v6 = *(struct _ERESOURCE **)(a1 + 48);
  }
  else
  {
    ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 48), 1u);
    v5 = KeGetCurrentThread();
    --v5->KernelApcDisable;
    v6 = *(struct _ERESOURCE **)(a2 + 48);
  }
  return ExAcquireResourceSharedLite(v6, 1u);
}
