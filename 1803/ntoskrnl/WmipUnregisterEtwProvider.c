/*
 * XREFs of WmipUnregisterEtwProvider @ 0x14064B69C
 * Callers:
 *     WmipUnlinkInstanceSetFromGuidEntry @ 0x140604A7C (WmipUnlinkInstanceSetFromGuidEntry.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     WmipQueueLegacyEtwWork @ 0x14064B784 (WmipQueueLegacyEtwWork.c)
 */

void __fastcall WmipUnregisterEtwProvider(__int64 a1)
{
  __int64 v1; // rbx
  _DWORD *PoolWithTag; // rax

  v1 = *(_QWORD *)(a1 + 56);
  if ( (*(_DWORD *)(v1 + 152))-- == 1 )
  {
    *(_QWORD *)(v1 + 112) = 0LL;
    *(_QWORD *)(v1 + 120) = 0LL;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x70696D57u);
    if ( PoolWithTag )
    {
      PoolWithTag[4] = 1;
      WmipQueueLegacyEtwWork(PoolWithTag, v1, 0LL);
    }
  }
}
