/*
 * XREFs of ExInitializeNls @ 0x14082652C
 * Callers:
 *     Phase1InitializationDiscard @ 0x14080AC64 (Phase1InitializationDiscard.c)
 * Callees:
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwCreateDirectoryObject @ 0x14017F320 (ZwCreateDirectoryObject.c)
 */

NTSTATUS ExInitializeNls()
{
  NTSTATUS result; // eax
  HANDLE DirectoryHandle; // [rsp+30h] [rbp+8h] BYREF

  result = ZwCreateDirectoryObject(&DirectoryHandle, 0xF000Fu, (POBJECT_ATTRIBUTES)&NlsDirectoryAttributes);
  if ( result >= 0 )
  {
    ZwClose(DirectoryHandle);
    NlsSectionLock = 0LL;
    NlsDefaultCasingTableSize = InitNlsTableSize - (unsigned int)InitUnicodeCaseTableDataOffset;
    return 0;
  }
  return result;
}
