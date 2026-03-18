/*
 * XREFs of DrvDbReleaseDatabaseNodeBaseKey @ 0x140502738
 * Callers:
 *     DrvDbOpenObjectRegKey @ 0x1405027D0 (DrvDbOpenObjectRegKey.c)
 *     DrvDbDeleteObjectRegKey @ 0x1407F121C (DrvDbDeleteObjectRegKey.c)
 *     DrvDbGetObjectList @ 0x1407F240C (DrvDbGetObjectList.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400FFE30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     DrvDbUnloadDatabaseNode @ 0x140565128 (DrvDbUnloadDatabaseNode.c)
 */

__int64 __fastcall DrvDbReleaseDatabaseNodeBaseKey(__int64 a1, __int64 a2, __int64 a3, void *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v5; // ebx

  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a2 + 144), 1u);
  if ( (*(_DWORD *)(a2 + 56) & 2) == 0 )
  {
    v5 = ZwClose(a4);
    if ( v5 >= 0 )
      v5 = DrvDbUnloadDatabaseNode(a1, a2);
  }
  ExReleaseResourceLite(*(PERESOURCE *)(a2 + 144));
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)v5;
}
