/*
 * XREFs of CmDumpKey @ 0x14069C6E4
 * Callers:
 *     NtSaveKeyEx @ 0x140688C8C (NtSaveKeyEx.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     CmpLockRegistry @ 0x14047E6F0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x14047E950 (CmpUnlockRegistry.c)
 *     CmpUnlockKcb @ 0x14047F670 (CmpUnlockKcb.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140482380 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpFreeOffsetArray @ 0x14069552C (CmpFreeOffsetArray.c)
 *     CmpSnapshotHiveToOffsetArray @ 0x14069557C (CmpSnapshotHiveToOffsetArray.c)
 *     CmpWriteOffsetArrayToFile @ 0x140695C14 (CmpWriteOffsetArrayToFile.c)
 *     CmpLogUnsupportedOperation @ 0x140697FF0 (CmpLogUnsupportedOperation.c)
 */

__int64 __fastcall CmDumpKey(__int64 a1, void *a2)
{
  ULONG_PTR v2; // rbx
  __int64 v5; // rdi
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v8; // bp
  unsigned int v9; // edi
  int v10; // esi
  __int64 v11; // rcx
  int v12; // [rsp+60h] [rbp+8h] BYREF
  int v13; // [rsp+70h] [rbp+18h] BYREF
  PVOID *v14; // [rsp+78h] [rbp+20h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  v12 = 0;
  v14 = 0LL;
  v13 = 0;
  v5 = *(_QWORD *)(v2 + 24);
  if ( (PVOID)v5 == CmpMasterHive )
    return 3221225506LL;
  if ( *(_WORD *)(v2 + 58) )
  {
    CmpLogUnsupportedOperation(0x16u);
    return 3221225474LL;
  }
  CmpLockRegistry();
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v8 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( !v8 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v9 = -1073741491;
LABEL_12:
    CmpUnlockRegistry();
    if ( v8 )
    {
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    }
    return v9;
  }
  ExAcquirePushLockSharedEx(v2 + 40, 0LL);
  _InterlockedIncrement((volatile signed __int32 *)(v2 + 48));
  if ( CmpIsKeyDeletedForKeyBody(a1, 0LL) )
  {
    v9 = -1073741444;
LABEL_11:
    CmpUnlockKcb(v2);
    goto LABEL_12;
  }
  if ( *(_DWORD *)(v2 + 32) != *(_DWORD *)(*(_QWORD *)(v5 + 64) + 36LL) )
  {
    v9 = -1073741811;
    goto LABEL_11;
  }
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v5 + 2848), 1u);
  v10 = CmpSnapshotHiveToOffsetArray(v5, &v12, &v14, (unsigned int *)&v13);
  ExReleaseResourceLite(*(PERESOURCE *)(v5 + 2848));
  CmpUnlockKcb(v2);
  CmpUnlockRegistry();
  if ( v10 >= 0 )
  {
    v10 = CmpWriteOffsetArrayToFile(v11, v12, (__int64)v14, v13, a2);
    CmpFreeOffsetArray(v12, v14);
  }
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)v10;
}
