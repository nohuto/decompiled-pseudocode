/*
 * XREFs of MiReleaseSystemCacheView @ 0x1400DD1D0
 * Callers:
 *     MmUnmapViewInSystemCache @ 0x140018AE0 (MmUnmapViewInSystemCache.c)
 *     MmFreeSystemCacheReserveView @ 0x14074D06C (MmFreeSystemCacheReserveView.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiUnlockWorkingSetShared @ 0x14001CF10 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetOptimal @ 0x140048EC8 (MiLockWorkingSetOptimal.c)
 *     MiReturnSystemVa @ 0x140048F2C (MiReturnSystemVa.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiSetSystemCacheReverseMap @ 0x1400C28F0 (MiSetSystemCacheReverseMap.c)
 *     RemoveListEntryPte @ 0x1400C2AC8 (RemoveListEntryPte.c)
 *     MiGetSystemCacheReverseMap @ 0x1400DDF40 (MiGetSystemCacheReverseMap.c)
 *     KxAcquireQueuedSpinLock @ 0x1400E01A0 (KxAcquireQueuedSpinLock.c)
 *     InsertTailListPte @ 0x1400E06C0 (InsertTailListPte.c)
 *     MiUnlockPageTableInternal @ 0x140123AD0 (MiUnlockPageTableInternal.c)
 *     MiWaitForSystemCacheViewFlush @ 0x14014B128 (MiWaitForSystemCacheViewFlush.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     MiGetPteLink @ 0x1401A653C (MiGetPteLink.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall MiReleaseSystemCacheView(unsigned __int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  unsigned __int64 v4; // r14
  unsigned __int64 v5; // rbx
  __int64 v6; // r15
  unsigned __int8 CurrentIrql; // al
  unsigned __int64 v8; // rcx
  _QWORD *v10; // rbx
  unsigned __int64 v11; // rbp
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  _QWORD *v15; // rbx
  __int64 v16; // r14
  __int64 v17; // rbx
  __int64 v18; // rdx
  void *SystemCacheReverseMap; // rsi
  __int64 v20; // r8
  unsigned __int8 v21[8]; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v22; // [rsp+28h] [rbp-A0h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-98h] BYREF
  _QWORD v24[8]; // [rsp+50h] [rbp-78h] BYREF

  LODWORD(v2) = 0;
  v4 = 0LL;
  v5 = (__int64)(a1 << 25) >> 16;
  v6 = *(_QWORD *)(qword_1403CBD88 + 8LL * ((*(_DWORD *)(MiGetSystemCacheReverseMap(v5, a2) + 32) >> 6) & 0x3FF));
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)&qword_1403CBB98;
  LockHandle.LockQueue.Next = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  LockHandle.OldIrql = CurrentIrql;
  KxAcquireQueuedSpinLock(&LockHandle, &qword_1403CBB98);
  v22 = MI_READ_PTE_LOCK_FREE(((v5 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
  v8 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v22) >> 12) & 0xFFFFFFFFFLL);
  if ( (*(_BYTE *)(v8 - 0x58000000000LL + 39))-- == 1 )
  {
    v4 = a1 & 0xFFFFFFFFFFFFF000uLL;
    v10 = (_QWORD *)(a1 & 0xFFFFFFFFFFFFF000uLL);
    v11 = (a1 & 0xFFFFFFFFFFFFF000uLL) + 4096;
    if ( (a1 & 0xFFFFFFFFFFFFF000uLL) < v11 )
    {
      do
      {
        if ( v10 != (_QWORD *)a1 )
        {
          RemoveListEntryPte(v6 + 1712, v10);
          if ( MiGetPteLink(v10[3]) == 1 )
          {
            v12 = (unsigned int)v2;
            LODWORD(v2) = v2 + 1;
            v24[v12] = v10;
          }
          else
          {
            v10[3] = ZeroPte;
            if ( MiPteInShadowRange((unsigned __int64)(v10 + 3)) )
              MiWritePteShadow((__int64)(v10 + 3), v13, v14);
          }
        }
        v10 += 64;
      }
      while ( (unsigned __int64)v10 < v11 );
    }
  }
  else
  {
    InsertTailListPte(v6 + 1712, a1);
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  if ( v4 )
  {
    if ( (_DWORD)v2 )
    {
      v15 = v24;
      v2 = (unsigned int)v2;
      do
      {
        MiWaitForSystemCacheViewFlush(*v15++);
        --v2;
      }
      while ( v2 );
    }
    v16 = v4 << 25;
    v17 = MiLockWorkingSetOptimal(v6 + 7168, a1, v21);
    SystemCacheReverseMap = (void *)MiGetSystemCacheReverseMap(v16 >> 16, v18);
    MiSetSystemCacheReverseMap(v16 >> 16);
    MiUnlockPageTableInternal(v6 + 7168, v17);
    MiUnlockWorkingSetShared(v6 + 7168, v21[0], v20);
    MiReturnSystemVa(v16 >> 16, (v16 + 0x2000000000LL) >> 16, 8);
    ExFreePoolWithTag(SystemCacheReverseMap, 0);
  }
}
