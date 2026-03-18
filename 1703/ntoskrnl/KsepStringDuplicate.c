/*
 * XREFs of KsepStringDuplicate @ 0x1404B4AAC
 * Callers:
 *     KseAddHardwareId @ 0x1404B3594 (KseAddHardwareId.c)
 *     KsepRegistryOpenKey @ 0x1404B49C4 (KsepRegistryOpenKey.c)
 *     KsepEngineGetShimsFromRegistry @ 0x1404B4D0C (KsepEngineGetShimsFromRegistry.c)
 *     KsepStringSplitMultiString @ 0x140598F64 (KsepStringSplitMultiString.c)
 *     KsepDbGetSdbString @ 0x1405995B0 (KsepDbGetSdbString.c)
 *     KsepStringTransform @ 0x1405ACCD8 (KsepStringTransform.c)
 *     KsepDbCacheReadDevice @ 0x1405ACD7C (KsepDbCacheReadDevice.c)
 *     KsepCacheDeviceInsertData @ 0x1405DA500 (KsepCacheDeviceInsertData.c)
 *     KsepRegistryCreateKey @ 0x1406B01EC (KsepRegistryCreateKey.c)
 * Callees:
 *     KsepPoolAllocatePaged @ 0x14006D900 (KsepPoolAllocatePaged.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     RtlAssert @ 0x14023DB30 (RtlAssert.c)
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
    KsepHistoryErrors[2 * v9] = 197205;
    if ( (KsepDebugFlag & 4) != 0 )
      RtlAssert("SourceString != NULL", "minkernel\\ntos\\kshim\\ksemisc.c", 0x255u, 0LL);
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
