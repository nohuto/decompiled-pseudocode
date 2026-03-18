/*
 * XREFs of RtlUnlockBootStatusData @ 0x1405AC670
 * Callers:
 *     PoClearTransitionMarker @ 0x1405ABF50 (PoClearTransitionMarker.c)
 *     PopBootStatGet @ 0x1405AC1B8 (PopBootStatGet.c)
 *     PopBootStatSet @ 0x1405AC38C (PopBootStatSet.c)
 *     PopBootStatCheckIntegrity @ 0x140707F20 (PopBootStatCheckIntegrity.c)
 *     PopBootStatRestoreDefaults @ 0x140708180 (PopBootStatRestoreDefaults.c)
 *     PopBootStatUnlock @ 0x140708264 (PopBootStatUnlock.c)
 * Callees:
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ZwFsControlFile @ 0x14017DFE0 (ZwFsControlFile.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall RtlUnlockBootStatusData(HANDLE FileHandle)
{
  HANDLE v1; // rbx
  char v2; // di
  NTSTATUS result; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-18h] BYREF
  __int16 InputBuffer; // [rsp+70h] [rbp+8h] BYREF

  v1 = FileHandle;
  v2 = 0;
  InputBuffer = 0;
  if ( BootStatFileHandleAcquired )
  {
    if ( !FileHandle )
    {
      v1 = BootStatFileHandle;
LABEL_6:
      BootStatFileHandle = 0LL;
      v2 = 1;
      BootStatFileHandleAcquired = 0;
      goto LABEL_7;
    }
    if ( !BootStatKeepHandleOpen )
      goto LABEL_6;
  }
LABEL_7:
  if ( v1 )
  {
    result = ZwFsControlFile(v1, 0LL, 0LL, 0LL, &IoStatusBlock, 0x9C040u, &InputBuffer, 2u, 0LL, 0);
    if ( v2 )
    {
      if ( BootStatDataCache )
      {
        ExFreePoolWithTag(BootStatDataCache, 0);
        BootStatDataCache = 0LL;
      }
      BootStatFileHandleAcquired = 0;
      return ZwClose(v1);
    }
  }
  return result;
}
