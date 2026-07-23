/*
 * XREFs of BcdFlushStore @ 0x140778A44
 * Callers:
 *     PopBcdClearPendingResume @ 0x1405ADF4C (PopBcdClearPendingResume.c)
 * Callees:
 *     BiSanitizeHandle @ 0x140131B74 (BiSanitizeHandle.c)
 *     BiIsOfflineHandle @ 0x140134AD0 (BiIsOfflineHandle.c)
 *     ZwFlushKey @ 0x14017F4E0 (ZwFlushKey.c)
 *     BiReleaseBcdSyncMutant @ 0x1405AFE48 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x1405AFFF8 (BiAcquireBcdSyncMutant.c)
 *     BiLogMessage @ 0x1405B05D0 (BiLogMessage.c)
 */

NTSTATUS __cdecl BcdFlushStore(HANDLE BcdStoreHandle)
{
  char IsOfflineHandle; // di
  NTSTATUS v3; // eax
  NTSTATUS v4; // r8d
  void *v6; // rax
  NTSTATUS v7; // ebx

  IsOfflineHandle = BiIsOfflineHandle((char)BcdStoreHandle);
  v3 = BiAcquireBcdSyncMutant(IsOfflineHandle);
  if ( v3 >= 0 )
  {
    v6 = (void *)BiSanitizeHandle((__int64)BcdStoreHandle);
    v7 = ZwFlushKey(v6);
    BiReleaseBcdSyncMutant(IsOfflineHandle);
    return v7;
  }
  else
  {
    BiLogMessage(4LL, L"BcdFlushStore: Failed to acquire BCD sync mutant. Status: %x", (unsigned int)v3);
    return v4;
  }
}
