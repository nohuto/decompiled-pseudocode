/*
 * XREFs of WmipUnregisterEtwProvider @ 0x140708E54
 * Callers:
 *     WmipUnlinkInstanceSetFromGuidEntry @ 0x140595994 (WmipUnlinkInstanceSetFromGuidEntry.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     WmipQueueLegacyEtwWork @ 0x1405A17D0 (WmipQueueLegacyEtwWork.c)
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
