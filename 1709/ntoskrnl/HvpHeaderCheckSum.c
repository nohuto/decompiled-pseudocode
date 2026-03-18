/*
 * XREFs of HvpHeaderCheckSum @ 0x1404E4CA4
 * Callers:
 *     HvpLogInvalidLogHeader @ 0x1401E59D8 (HvpLogInvalidLogHeader.c)
 *     HvInitializeHive @ 0x140470A40 (HvInitializeHive.c)
 *     HvWriteHivePrimaryFile @ 0x1404E4520 (HvWriteHivePrimaryFile.c)
 *     HvpGetHiveHeader @ 0x1404E4B6C (HvpGetHiveHeader.c)
 *     HvValidateOrInvalidatePrimaryFileHeader @ 0x1404E63B0 (HvValidateOrInvalidatePrimaryFileHeader.c)
 *     HvpGenerateLogEntry @ 0x140513CAC (HvpGenerateLogEntry.c)
 *     HvIsInPlaceBaseBlockValid @ 0x1406948E8 (HvIsInPlaceBaseBlockValid.c)
 *     CmpSnapshotHiveToOffsetArray @ 0x14069557C (CmpSnapshotHiveToOffsetArray.c)
 *     HvWriteExternal @ 0x14069739C (HvWriteExternal.c)
 *     HvpGetLogHeader @ 0x1406A11C8 (HvpGetLogHeader.c)
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
