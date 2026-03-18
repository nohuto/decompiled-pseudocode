/*
 * XREFs of HvpHeaderCheckSum @ 0x140496AEC
 * Callers:
 *     HvValidateOrInvalidatePrimaryFileHeader @ 0x140493B34 (HvValidateOrInvalidatePrimaryFileHeader.c)
 *     HvHiveStartFileBacked @ 0x140496704 (HvHiveStartFileBacked.c)
 *     HvpGetHiveHeader @ 0x14049696C (HvpGetHiveHeader.c)
 *     HvWriteHivePrimaryFile @ 0x140498210 (HvWriteHivePrimaryFile.c)
 *     HvpGenerateLogEntry @ 0x140498C70 (HvpGenerateLogEntry.c)
 *     HvHiveStartMemoryBacked @ 0x14063469C (HvHiveStartMemoryBacked.c)
 *     HvIsInPlaceBaseBlockValid @ 0x1406FB658 (HvIsInPlaceBaseBlockValid.c)
 *     HvWriteExternal @ 0x1406FB84C (HvWriteExternal.c)
 *     HvAnalyzeLogFiles @ 0x1407056A4 (HvAnalyzeLogFiles.c)
 *     HvpLogInvalidLogHeader @ 0x140706514 (HvpLogInvalidLogHeader.c)
 *     HvSnapshotHiveToOffsetArray @ 0x1407067E4 (HvSnapshotHiveToOffsetArray.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvpHeaderCheckSum(_DWORD *a1)
{
  __int64 result; // rax
  __int64 v2; // rdx

  LODWORD(result) = 0;
  v2 = 127LL;
  do
  {
    result = *a1++ ^ (unsigned int)result;
    --v2;
  }
  while ( v2 );
  if ( (_DWORD)result == -1 )
    result = 4294967294LL;
  if ( !(_DWORD)result )
    return 1LL;
  return result;
}
