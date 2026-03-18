/*
 * XREFs of CmpBecomeActiveFlusherAndReconciler @ 0x1405BF1F4
 * Callers:
 *     CmpLoadHiveThread @ 0x1405BE770 (CmpLoadHiveThread.c)
 *     CmpSaveKeyByFileCopy @ 0x14069E3E0 (CmpSaveKeyByFileCopy.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     CmpUnlockRegistry @ 0x14047E950 (CmpUnlockRegistry.c)
 *     CmpLockRegistryFreezeAware @ 0x1404E3B7C (CmpLockRegistryFreezeAware.c)
 *     CmpWaitOnHiveWriteQueue @ 0x140693AF0 (CmpWaitOnHiveWriteQueue.c)
 */

__int64 __fastcall CmpBecomeActiveFlusherAndReconciler(__int64 a1)
{
  int v2; // eax
  struct _ERESOURCE *v3; // rcx
  __int64 v5; // rdx

  while ( 1 )
  {
    CmpLockRegistryFreezeAware(0);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 2848), 1u);
    v2 = *(_DWORD *)(a1 + 5488);
    if ( (v2 & 2) != 0 )
    {
      v5 = a1 + 5464;
      goto LABEL_6;
    }
    if ( (v2 & 1) == 0 )
      break;
    v5 = a1 + 5440;
LABEL_6:
    CmpWaitOnHiveWriteQueue(a1, v5, 0LL);
  }
  *(_DWORD *)(a1 + 5488) = v2 | 3;
  *(_QWORD *)(a1 + 5440) = KeGetCurrentThread();
  v3 = *(struct _ERESOURCE **)(a1 + 2848);
  *(_QWORD *)(a1 + 5464) = KeGetCurrentThread();
  ExReleaseResourceLite(v3);
  return CmpUnlockRegistry();
}
