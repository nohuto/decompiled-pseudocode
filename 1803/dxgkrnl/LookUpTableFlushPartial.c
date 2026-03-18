/*
 * XREFs of LookUpTableFlushPartial @ 0x1C023D014
 * Callers:
 *     ?TlgAggregateInternalRegisteredProviderEtwCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C009CDD0 (-TlgAggregateInternalRegisteredProviderEtwCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIP.c)
 *     ?TlgAggregateInternalFlushWorkItemRoutineKernelMode@@YAXPEAX@Z @ 0x1C023D090 (-TlgAggregateInternalFlushWorkItemRoutineKernelMode@@YAXPEAX@Z.c)
 * Callees:
 *     FlushLookUpTableBucket @ 0x1C00493FC (FlushLookUpTableBucket.c)
 *     UpdateInternalStatsOnFlush @ 0x1C023D114 (UpdateInternalStatsOnFlush.c)
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
    while ( v4 != v3 && v1 < 0x10 );
    *(_DWORD *)(a1 + 260) = v4;
    UpdateInternalStatsOnFlush(a1, v1);
  }
}
