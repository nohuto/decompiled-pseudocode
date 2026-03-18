/*
 * XREFs of ExpReleasePoolQuota @ 0x1402B8F50
 * Callers:
 *     ExFreeHeapPool @ 0x1402BD494 (ExFreeHeapPool.c)
 * Callees:
 *     PsReturnPoolQuota @ 0x1400BA6B0 (PsReturnPoolQuota.c)
 *     ExpGetBilledProcess @ 0x1400BA6E8 (ExpGetBilledProcess.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1400F8FB0 (ObDereferenceObjectDeferDeleteWithTag.c)
 */

void __fastcall ExpReleasePoolQuota(__int64 a1)
{
  struct _KPROCESS *BilledProcess; // rax
  struct _KPROCESS *v3; // rdi

  BilledProcess = (struct _KPROCESS *)ExpGetBilledProcess(a1);
  v3 = BilledProcess;
  if ( BilledProcess )
  {
    PsReturnPoolQuota(
      BilledProcess,
      (POOL_TYPE)(HIBYTE(*(_WORD *)(a1 + 2)) & 1),
      16LL * (unsigned __int8)*(_WORD *)(a1 + 2));
    ObDereferenceObjectDeferDeleteWithTag(v3, *(_DWORD *)(a1 + 4));
  }
}
