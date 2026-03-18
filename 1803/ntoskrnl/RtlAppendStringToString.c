/*
 * XREFs of RtlAppendStringToString @ 0x1406105D0
 * Callers:
 *     MiFormFullImageName @ 0x140610518 (MiFormFullImageName.c)
 *     CmpFinishSystemHivesLoad @ 0x14062E4B0 (CmpFinishSystemHivesLoad.c)
 *     CmpLoadHiveThread @ 0x140632C90 (CmpLoadHiveThread.c)
 *     CmpInitBackupHive @ 0x140633278 (CmpInitBackupHive.c)
 *     CmpFlushBackupHive @ 0x1406F9154 (CmpFlushBackupHive.c)
 *     EmInitSystem @ 0x1408A92A4 (EmInitSystem.c)
 * Callees:
 *     memmove @ 0x1401BC900 (memmove.c)
 */

NTSTATUS __stdcall RtlAppendStringToString(PSTRING Destination, const STRING *Source)
{
  unsigned __int16 Length; // di
  __int64 v4; // rcx

  Length = Source->Length;
  if ( !Source->Length )
    return 0;
  v4 = Destination->Length;
  if ( (unsigned int)v4 + Length <= Destination->MaximumLength )
  {
    memmove(&Destination->Buffer[v4], Source->Buffer, Length);
    Destination->Length += Length;
    return 0;
  }
  return -1073741789;
}
