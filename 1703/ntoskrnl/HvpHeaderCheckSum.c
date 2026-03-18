/*
 * XREFs of HvpHeaderCheckSum @ 0x14043B4E8
 * Callers:
 *     HvpLogInvalidLogHeader @ 0x1401E18D0 (HvpLogInvalidLogHeader.c)
 *     HvWriteHivePrimaryFile @ 0x1404391D8 (HvWriteHivePrimaryFile.c)
 *     HvValidateOrInvalidatePrimaryFileHeader @ 0x1404394A0 (HvValidateOrInvalidatePrimaryFileHeader.c)
 *     HvInitializeHive @ 0x140439E6C (HvInitializeHive.c)
 *     HvpGetHiveHeader @ 0x14043B3A8 (HvpGetHiveHeader.c)
 *     HvpGenerateLogEntry @ 0x1404B7770 (HvpGenerateLogEntry.c)
 *     HvIsInPlaceBaseBlockValid @ 0x14066A208 (HvIsInPlaceBaseBlockValid.c)
 *     CmpSnapshotHiveToOffsetArray @ 0x14066AEF8 (CmpSnapshotHiveToOffsetArray.c)
 *     HvWriteExternal @ 0x14066CD24 (HvWriteExternal.c)
 *     HvpGetLogHeader @ 0x140676C8C (HvpGetLogHeader.c)
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
