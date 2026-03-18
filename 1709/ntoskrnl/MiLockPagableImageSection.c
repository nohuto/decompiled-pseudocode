/*
 * XREFs of MiLockPagableImageSection @ 0x1400BC630
 * Callers:
 *     MmUnlockPagableImageSection @ 0x1400BC610 (MmUnlockPagableImageSection.c)
 *     PoRunDownDeviceObject @ 0x1400FACA0 (PoRunDownDeviceObject.c)
 *     IopLiveDumpUnLockPages @ 0x1401FC348 (IopLiveDumpUnLockPages.c)
 *     MmLockPagableSectionByHandle @ 0x140507380 (MmLockPagableSectionByHandle.c)
 *     MmLockPagableDataSection @ 0x140516060 (MmLockPagableDataSection.c)
 *     IopLiveDumpLockPages @ 0x1406BB05C (IopLiveDumpLockPages.c)
 *     PnprLockPagesForReplace @ 0x1406CD060 (PnprLockPagesForReplace.c)
 *     KiStartDynamicProcessor @ 0x1406D7344 (KiStartDynamicProcessor.c)
 *     MiInitSystem @ 0x140828E58 (MiInitSystem.c)
 *     MiLockPagableSections @ 0x1408296B4 (MiLockPagableSections.c)
 *     KiInitializeMTRR @ 0x1408388B4 (KiInitializeMTRR.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExpUnblockPushLock @ 0x1400BBEE8 (ExpUnblockPushLock.c)
 *     MiUnlockCodePage @ 0x1400BD400 (MiUnlockCodePage.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1400BF390 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14028607C (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140286170 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     MiLockImageSection @ 0x1405073A0 (MiLockImageSection.c)
 */

void __fastcall MiLockPagableImageSection(ULONG_PTR BugCheckParameter3, unsigned int a2)
{
  ULONG_PTR v3; // rbp
  __int64 v4; // r9
  unsigned __int64 v5; // r11
  int v6; // r10d
  _QWORD *v7; // rcx
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int8 CurrentIrql; // si
  int v11; // ett
  PVOID *v12; // rbx
  ULONG_PTR v13; // rcx
  unsigned __int64 v14; // r9
  unsigned __int64 v15; // r10
  _DWORD *v16; // rcx
  __int64 v17; // rdx
  unsigned int v18; // r8d
  volatile signed __int32 *v19; // rsi
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rcx
  __int64 v22; // r11
  unsigned __int64 v23; // r9
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int8 v25; // bp
  signed __int32 v26; // ecx
  signed __int32 v27[8]; // [rsp+0h] [rbp-88h] BYREF
  unsigned __int64 v28; // [rsp+30h] [rbp-58h]
  ULONG_PTR v29; // [rsp+38h] [rbp-50h]
  unsigned __int64 v30; // [rsp+40h] [rbp-48h]
  __int64 v31; // [rsp+48h] [rbp-40h]
  void *retaddr; // [rsp+88h] [rbp+0h]

  if ( BugCheckParameter3 != 1 )
  {
    v3 = a2;
    v29 = ((BugCheckParameter3 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
    v30 = ((v29 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v31 = ((v30 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    LODWORD(v4) = 3;
    v5 = 0xFFFFF6FB7DBED7F8uLL;
    do
    {
      v6 = v4;
      v4 = (unsigned int)(v4 - 1);
      v7 = (_QWORD *)*(&v29 + v4);
      v8 = *v7;
      v9 = 0xFFFFF6FB7DBED000uLL;
      if ( (unsigned __int64)v7 >= 0xFFFFF6FB7DBED000uLL )
      {
        v9 = v5;
        if ( (unsigned __int64)v7 <= v5 )
          LOBYTE(v8) = MiReadPteShadow(v7, *v7);
      }
      if ( (v8 & 1) == 0 )
        break;
      if ( (v8 & 0x80u) != 0LL )
      {
        if ( v6 )
          return;
        break;
      }
    }
    while ( (_DWORD)v4 );
    if ( BugCheckParameter3 < 0xFFFF800000000000uLL || byte_1403899D0[((BugCheckParameter3 >> 39) & 0x1FF) - 256] != 1 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql < 0xFu )
      {
        KeGetCurrentIrql();
        __writecr8(0xFuLL);
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        LOBYTE(v9) = -1;
        ExpAcquireSpinLockSharedAtDpcLevelInstrumented(&PsLoadedModuleSpinLock, v9);
      }
      else
      {
        _m_prefetchw(&PsLoadedModuleSpinLock);
        v11 = PsLoadedModuleSpinLock & 0x7FFFFFFF;
        if ( v11 != _InterlockedCompareExchange(
                      &PsLoadedModuleSpinLock,
                      (PsLoadedModuleSpinLock & 0x7FFFFFFF) + 1,
                      PsLoadedModuleSpinLock & 0x7FFFFFFF) )
        {
          LOBYTE(v9) = -1;
          ExpWaitForSpinLockSharedAndAcquire(&PsLoadedModuleSpinLock, v9);
        }
      }
      v12 = (PVOID *)PsLoadedModuleList;
      while ( 1 )
      {
        v13 = (ULONG_PTR)v12[6];
        if ( BugCheckParameter3 >= v13 && BugCheckParameter3 < v13 + *((unsigned int *)v12 + 16) )
          break;
        v12 = (PVOID *)*v12;
        if ( v12 == &PsLoadedModuleList )
          goto LABEL_54;
      }
      if ( !v12 )
LABEL_54:
        KeBugCheckEx(0x1Au, 0x1012uLL, BugCheckParameter3, v3, 0LL);
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&PsLoadedModuleSpinLock, retaddr);
      }
      else
      {
        _InterlockedAnd(&PsLoadedModuleSpinLock, 0xBFFFFFFF);
        _InterlockedDecrement(&PsLoadedModuleSpinLock);
      }
      __writecr8(CurrentIrql);
      v14 = (unsigned __int64)v12[6];
      v15 = 0LL;
      v28 = 0LL;
      if ( v14 - 1 <= 0xFFFFFFFFFFFFFFFDuLL && *(_WORD *)v14 == 23117 )
      {
        v16 = (_DWORD *)(v14 + *(unsigned int *)(v14 + 60));
        if ( (unsigned __int64)v16 < v14
          || v14 < 0x7FFFFFFEFFFFLL
          && ((unsigned __int64)v16 >= 0x7FFFFFFEFFFFLL || (unsigned __int64)(v16 + 66) >= 0x7FFFFFFEFFFFLL) )
        {
          v15 = v28;
        }
        else
        {
          v15 = v28;
          if ( *v16 == 17744 )
            v15 = v14 + *(unsigned int *)(v14 + 60);
          v28 = v15;
        }
      }
      v17 = (__int64)(BugCheckParameter3 - *(unsigned __int16 *)(v15 + 20) - v15 - 24) / 40;
      if ( (unsigned int)v17 >= *(unsigned __int16 *)(v15 + 6) )
        KeBugCheckEx(0x1Au, 0x1013uLL, BugCheckParameter3 | v3, (unsigned int)v17, *(unsigned __int16 *)(v15 + 6));
      v18 = *(_DWORD *)(BugCheckParameter3 + 8);
      v19 = (volatile signed __int32 *)((char *)v12[28] + 4 * (unsigned int)v17);
      if ( *(_DWORD *)(BugCheckParameter3 + 16) >= v18 )
        v18 = *(_DWORD *)(BugCheckParameter3 + 16);
      v20 = v14 + *(unsigned int *)(BugCheckParameter3 + 12);
      v21 = *(unsigned int *)(v15 + 56);
      v22 = ((v20 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( v21 > 0x1000 )
        v21 = 4096LL;
      v23 = (((~(v21 - 1) & (v21 + v18 + v20 - 1)) + 4095) >> 9) & 0x7FFFFFFFF8LL;
      if ( (_DWORD)v3 == 1 )
      {
        MiLockImageSection(v12, v19, v22, v23 - 0x98000000008LL);
      }
      else
      {
        CurrentThread = KeGetCurrentThread();
        v25 = KeGetCurrentIrql();
        if ( !v25 )
          --CurrentThread->KernelApcDisable;
        v26 = _InterlockedDecrement(v19);
        if ( (unsigned int)(v26 + 1) <= 1 )
          KeBugCheckEx(0x1Au, 0x1010uLL, v22 << 25 >> 16, BugCheckParameter3, v26);
        if ( v26 == 1 )
        {
          MiUnlockCodePage(v22, v23 - 0x98000000008LL);
          _InterlockedDecrement(v19);
          _InterlockedOr(v27, 0);
          if ( qword_140388430 )
            ExpUnblockPushLock(&qword_140388430, 0LL, 0);
        }
        if ( !v25 )
          KeLeaveCriticalRegionThread((__int64)CurrentThread);
      }
    }
  }
}
