/*
 * XREFs of MiComparePageHash @ 0x140231DDC
 * Callers:
 *     MiValidatePagefilePageHash @ 0x140232750 (MiValidatePagefilePageHash.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14022A1F8 (MI_GET_PFN_FROM_PTE.c)
 */

__int64 __fastcall MiComparePageHash(__int64 a1, unsigned int a2, int a3)
{
  __int64 v3; // rbx
  unsigned int v6; // esi
  unsigned __int64 v7; // r9
  __int64 *v8; // rcx
  __int64 PteShadow; // rax
  _DWORD *v11; // r9
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF

  v3 = a2;
  v6 = 0;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 232), &LockHandle);
  v7 = *(_QWORD *)(a1 + 216) + 4 * v3;
  v8 = (__int64 *)(((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  PteShadow = *v8;
  if ( (unsigned __int64)v8 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v8 <= 0xFFFFF6FB7DBED7F8uLL )
    PteShadow = MiReadPteShadow();
  v13 = PteShadow;
  if ( (PteShadow & 1) != 0 )
  {
    if ( *(_DWORD *)v7 != a3 )
    {
      if ( (*(_BYTE *)(MI_GET_PFN_FROM_PTE((unsigned __int64 *)&v13) + 34) & 0x10) != 0 )
      {
        if ( !byte_140388CC0 )
          v6 = -1073741761;
      }
      else
      {
        *v11 = a3;
      }
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    return v6;
  }
  else
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    return 0LL;
  }
}
