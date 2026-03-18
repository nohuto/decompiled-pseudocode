/*
 * XREFs of HvpCountSetRangesInVector @ 0x14059281C
 * Callers:
 *     HvGetHiveLogFileStatus @ 0x140498640 (HvGetHiveLogFileStatus.c)
 *     HvpGenerateLogEntry @ 0x140498C70 (HvpGenerateLogEntry.c)
 *     HvpGenerateLogMetadata @ 0x140498FD4 (HvpGenerateLogMetadata.c)
 *     HvStoreModifiedData @ 0x140499C58 (HvStoreModifiedData.c)
 * Callees:
 *     RtlFindNextForwardRunClear @ 0x1400D5D90 (RtlFindNextForwardRunClear.c)
 */

__int64 __fastcall HvpCountSetRangesInVector(PRTL_BITMAP BitMapHeader)
{
  ULONG v1; // edi
  unsigned int v2; // ebx
  ULONG NextForwardRunClear; // ecx
  ULONG StartingRunIndex; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  v2 = 0;
  if ( BitMapHeader->SizeOfBitMap )
  {
    while ( 1 )
    {
      NextForwardRunClear = RtlFindNextForwardRunClear(BitMapHeader, v1, &StartingRunIndex);
      if ( !NextForwardRunClear )
        break;
      if ( StartingRunIndex != v1 )
        ++v2;
      v1 = StartingRunIndex + NextForwardRunClear;
      if ( StartingRunIndex + NextForwardRunClear >= BitMapHeader->SizeOfBitMap )
        return v2;
    }
    ++v2;
  }
  return v2;
}
