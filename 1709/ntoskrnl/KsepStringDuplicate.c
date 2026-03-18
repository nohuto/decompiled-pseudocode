/*
 * XREFs of KsepStringDuplicate @ 0x1405464B4
 * Callers:
 *     KsepStringTransform @ 0x1404F520C (KsepStringTransform.c)
 *     KsepDbCacheReadDevice @ 0x1404F53B4 (KsepDbCacheReadDevice.c)
 *     KsepRegistryOpenKey @ 0x1405463CC (KsepRegistryOpenKey.c)
 *     KsepEngineGetShimsFromRegistry @ 0x140546714 (KsepEngineGetShimsFromRegistry.c)
 *     KseAddHardwareId @ 0x140551E88 (KseAddHardwareId.c)
 *     KsepDbGetSdbString @ 0x1405E8DD0 (KsepDbGetSdbString.c)
 *     KsepStringSplitMultiString @ 0x1405EA860 (KsepStringSplitMultiString.c)
 *     KsepCacheDeviceInsertData @ 0x1406DB788 (KsepCacheDeviceInsertData.c)
 *     KsepRegistryCreateKey @ 0x1406DB998 (KsepRegistryCreateKey.c)
 * Callees:
 *     KsepPoolAllocatePaged @ 0x1400FA000 (KsepPoolAllocatePaged.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     RtlAssert @ 0x1402538E0 (RtlAssert.c)
 */

__int64 __fastcall KsepStringDuplicate(__int64 a1, _WORD *a2)
{
  __int64 v4; // rbx
  size_t v5; // rbx
  PVOID Paged; // rax
  PVOID v7; // rsi
  __int64 result; // rax
  __int64 v9; // rax

  if ( !a2 )
  {
    v9 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v9 + 1] = -1073740768;
    KsepHistoryErrors[2 * v9] = 197202;
    if ( (KsepDebugFlag & 4) != 0 )
      RtlAssert("SourceString != NULL", "minkernel\\ntos\\kshim\\ksemisc.c", 0x252u, 0LL);
  }
  *(_QWORD *)a1 = 0LL;
  v4 = -1LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  do
    ++v4;
  while ( a2[v4] );
  v5 = 2 * v4 + 2;
  if ( v5 > 0xFFFE )
    return 3221225990LL;
  Paged = KsepPoolAllocatePaged(v5);
  v7 = Paged;
  if ( !Paged )
    return 3221225495LL;
  memmove(Paged, a2, v5);
  *(_QWORD *)(a1 + 8) = v7;
  *(_WORD *)a1 = v5 - 2;
  result = 0LL;
  *(_WORD *)(a1 + 2) = v5;
  return result;
}
