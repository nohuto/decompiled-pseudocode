/*
 * XREFs of EtwpSavePersistedLoggersWorker @ 0x140714260
 * Callers:
 *     EtwInitialize @ 0x14059E53C (EtwInitialize.c)
 * Callees:
 *     ExfUnblockPushLock @ 0x14017DAD0 (ExfUnblockPushLock.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     EtwpSavePersistedLogger @ 0x140713EA4 (EtwpSavePersistedLogger.c)
 */

void __fastcall EtwpSavePersistedLoggersWorker(void *a1)
{
  _DWORD *PoolWithTag; // rax
  __int64 v2; // rdx
  _DWORD *v3; // rbx
  int v4; // esi
  __int64 i; // rdi
  int v6; // eax
  signed __int32 v7[8]; // [rsp+0h] [rbp-48h] BYREF
  char v8; // [rsp+50h] [rbp+8h] BYREF

  if ( a1 )
    ExFreePoolWithTag(a1, 0);
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x1208uLL, 0x4B777445u);
  v3 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_11;
  *PoolWithTag = 0;
  v4 = KsrEnumeratePersistedMemory(EtwpKsrGuid, EtwpKsrMemoryEnumCallback, PoolWithTag);
  if ( v4 >= 0 )
  {
    for ( i = 0LL; (unsigned int)i < *v3; i = (unsigned int)(i + 1) )
    {
      v6 = KsrQueryMetadata(EtwpKsrGuid, *(_QWORD *)&v3[2 * i + 2], v3 + 130, 4096LL, &v8);
      if ( v6 >= 0 )
        EtwpSavePersistedLogger(v3 + 130, *(_QWORD *)&v3[2 * i + 2]);
      else
        v4 = v6;
    }
  }
  ExFreePoolWithTag(v3, 0);
  if ( v4 < 0 )
  {
LABEL_11:
    LOBYTE(v2) = 1;
    KsrFreePersistedMemory(EtwpKsrGuid, v2);
  }
  EtwpLoggerSaveInProgress = 0;
  _InterlockedOr(v7, 0);
  if ( EtwpLoggerSaveEvent )
    ExfUnblockPushLock(&EtwpLoggerSaveEvent, 0LL);
}
