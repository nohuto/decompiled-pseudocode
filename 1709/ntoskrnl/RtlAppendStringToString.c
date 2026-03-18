/*
 * XREFs of RtlAppendStringToString @ 0x14059B940
 * Callers:
 *     CmpLoadHiveThread @ 0x1405BE770 (CmpLoadHiveThread.c)
 *     CmpInitBackupHive @ 0x1405BECEC (CmpInitBackupHive.c)
 *     CmpFinishSystemHivesLoad @ 0x1405C09E0 (CmpFinishSystemHivesLoad.c)
 *     MiFormFullImageName @ 0x1405E52B4 (MiFormFullImageName.c)
 *     CmpFlushBackupHive @ 0x1406951B8 (CmpFlushBackupHive.c)
 *     EmInitSystem @ 0x14083306C (EmInitSystem.c)
 * Callees:
 *     memmove @ 0x140192C00 (memmove.c)
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
