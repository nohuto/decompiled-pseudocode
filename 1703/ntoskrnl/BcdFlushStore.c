/*
 * XREFs of BcdFlushStore @ 0x140578E8C
 * Callers:
 *     PopBcdClearPendingResume @ 0x140589704 (PopBcdClearPendingResume.c)
 * Callees:
 *     BiSanitizeHandle @ 0x14013C160 (BiSanitizeHandle.c)
 *     BiIsOfflineHandle @ 0x14014CF2C (BiIsOfflineHandle.c)
 *     ZwFlushKey @ 0x14017FB40 (ZwFlushKey.c)
 *     BiReleaseBcdSyncMutant @ 0x14058BC08 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x14058BDB8 (BiAcquireBcdSyncMutant.c)
 *     BiLogMessage @ 0x14058C1E4 (BiLogMessage.c)
 */

NTSTATUS __cdecl BcdFlushStore(HANDLE BcdStoreHandle)
{
  __int64 v2; // rcx
  char v3; // si
  int v4; // eax
  NTSTATUS v5; // ebx
  void *v6; // rax
  NTSTATUS v7; // eax
  __int64 v8; // rcx

  LOBYTE(v2) = BiIsOfflineHandle((char)BcdStoreHandle);
  v3 = v2;
  v4 = BiAcquireBcdSyncMutant(v2);
  v5 = v4;
  if ( v4 < 0 )
  {
    BiLogMessage(4LL, L"BcdFlushStore: Failed to acquire BCD sync mutant. Status: %x", (unsigned int)v4);
  }
  else
  {
    v6 = (void *)BiSanitizeHandle((__int64)BcdStoreHandle);
    v7 = ZwFlushKey(v6);
    LOBYTE(v8) = v3;
    v5 = v7;
    BiReleaseBcdSyncMutant(v8);
  }
  return v5;
}
