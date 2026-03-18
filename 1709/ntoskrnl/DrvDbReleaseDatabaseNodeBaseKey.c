/*
 * XREFs of DrvDbReleaseDatabaseNodeBaseKey @ 0x1405337FC
 * Callers:
 *     DrvDbGetObjectList @ 0x14044FDB0 (DrvDbGetObjectList.c)
 *     DrvDbOpenObjectRegKey @ 0x14053360C (DrvDbOpenObjectRegKey.c)
 *     DrvDbDeleteObjectRegKey @ 0x140786438 (DrvDbDeleteObjectRegKey.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     DrvDbUnloadDatabaseNode @ 0x140533D40 (DrvDbUnloadDatabaseNode.c)
 */

__int64 __fastcall DrvDbReleaseDatabaseNodeBaseKey(__int64 a1, __int64 a2, __int64 a3, void *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v5; // ebx

  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a2 + 136), 1u);
  if ( (*(_DWORD *)(a2 + 56) & 2) == 0 )
  {
    v5 = ZwClose(a4);
    if ( v5 >= 0 )
      v5 = DrvDbUnloadDatabaseNode(a1, a2);
  }
  ExReleaseResourceLite(*(PERESOURCE *)(a2 + 136));
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)v5;
}
