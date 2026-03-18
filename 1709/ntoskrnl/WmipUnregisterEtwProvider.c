/*
 * XREFs of WmipUnregisterEtwProvider @ 0x140742E78
 * Callers:
 *     WmipUnlinkInstanceSetFromGuidEntry @ 0x1405906B4 (WmipUnlinkInstanceSetFromGuidEntry.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     WmipQueueLegacyEtwWork @ 0x1405E5AC8 (WmipQueueLegacyEtwWork.c)
 */

void __fastcall WmipUnregisterEtwProvider(__int64 a1)
{
  ULONG_PTR v1; // rbx
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
