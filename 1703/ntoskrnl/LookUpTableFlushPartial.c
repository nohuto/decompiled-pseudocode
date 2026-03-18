/*
 * XREFs of LookUpTableFlushPartial @ 0x14044C674
 * Callers:
 *     FlushWorkItemRoutineKernelMode @ 0x14044C610 (FlushWorkItemRoutineKernelMode.c)
 *     RegisteredProviderEtwCallback @ 0x1405CAE50 (RegisteredProviderEtwCallback.c)
 * Callees:
 *     FlushLookUpTableBucket @ 0x140030D44 (FlushLookUpTableBucket.c)
 *     UpdateInternalStatsOnFlush @ 0x14044C788 (UpdateInternalStatsOnFlush.c)
 */

void __fastcall LookUpTableFlushPartial(__int64 a1)
{
  unsigned int v1; // esi
  unsigned int v3; // ebp
  unsigned int v4; // ebx

  v1 = 0;
  if ( *(_DWORD *)(a1 + 256) )
  {
    v3 = *(_DWORD *)(a1 + 260);
    v4 = v3;
    do
    {
      if ( *(_QWORD *)(a1 + 8LL * v4) )
        v1 += FlushLookUpTableBucket(a1, v4);
      v4 = ((_BYTE)v4 + 1) & 0x1F;
    }
    while ( v1 < 0x10 && v4 != v3 );
    *(_DWORD *)(a1 + 260) = v4;
    UpdateInternalStatsOnFlush(a1, v1);
  }
}
