/*
 * XREFs of NtCompressKey @ 0x140687910
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     SeSinglePrivilegeCheck @ 0x14046C2E0 (SeSinglePrivilegeCheck.c)
 *     HvMarkBaseBlockDirty @ 0x14046F414 (HvMarkBaseBlockDirty.c)
 *     CmObReferenceObjectByHandle @ 0x14047AF90 (CmObReferenceObjectByHandle.c)
 *     CmpUnlockRegistry @ 0x14047E950 (CmpUnlockRegistry.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140482380 (CmpIsKeyDeletedForKeyBody.c)
 *     CmCheckNoTxContext @ 0x1404E3874 (CmCheckNoTxContext.c)
 *     CmpLockRegistryExclusive @ 0x1404E3BCC (CmpLockRegistryExclusive.c)
 *     CmpWaitOnHiveWriteQueue @ 0x140693AF0 (CmpWaitOnHiveWriteQueue.c)
 */

NTSTATUS __stdcall NtCompressKey(HANDLE Key)
{
  NTSTATUS result; // eax
  KPROCESSOR_MODE PreviousMode; // bl
  void *v4; // r8
  unsigned int v5; // esi
  NTSTATUS v6; // ebx
  _BYTE *v7; // rdi
  __int64 i; // rbx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r8
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rcx
  PVOID Object; // [rsp+48h] [rbp+10h] BYREF

  result = CmCheckNoTxContext();
  if ( result < 0 )
    return result;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !SeSinglePrivilegeCheck(SeBackupPrivilege, PreviousMode) )
    return -1073741727;
  v5 = (unsigned __int8)Key & 3;
  v6 = CmObReferenceObjectByHandle(Key, 0x20006u, v4, PreviousMode, &Object, 0LL);
  if ( v6 < 0 )
    return v6;
  v7 = Object;
  for ( i = *(_QWORD *)(*((_QWORD *)Object + 1) + 24LL); ; CmpWaitOnHiveWriteQueue(i, v13, 0LL) )
  {
    CmpLockRegistryExclusive();
    if ( CmpIsKeyDeletedForKeyBody((__int64)v7, 0LL) )
    {
      v6 = (v7[48] & 1) != 0 ? -1073740763 : -1073741444;
      goto LABEL_21;
    }
    v9 = *((_QWORD *)v7 + 1);
    v10 = *(_QWORD *)(v9 + 24);
    v11 = *(_QWORD *)(v10 + 64);
    if ( *(_DWORD *)(v9 + 32) != *(_DWORD *)(v11 + 36) )
      goto LABEL_14;
    v12 = *(_DWORD *)(i + 5488);
    if ( (v12 & 2) != 0 )
    {
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(i + 2848), 1u);
      v13 = i + 5464;
      continue;
    }
    if ( (v12 & 1) == 0 )
      break;
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(i + 2848), 1u);
    v13 = i + 5440;
  }
  if ( (PVOID)v10 == CmpMasterHive || !*(_QWORD *)(v10 + 2664) || (*(_DWORD *)(v10 + 144) & 0x8003) != 0 )
  {
LABEL_14:
    v6 = -1073741811;
    goto LABEL_21;
  }
  v14 = 0LL;
  v15 = *(_QWORD *)(v9 + 24);
  if ( v5 != 3 )
    v14 = v5;
  *(_QWORD *)(v11 + 168) = v14;
  HvMarkBaseBlockDirty(v15);
  v6 = 0;
LABEL_21:
  CmpUnlockRegistry();
  ObfDereferenceObject(v7);
  return v6;
}
