/*
 * XREFs of ?SmFirstTimeInit@@YAJKK@Z @ 0x140005AC8
 * Callers:
 *     SmProcessCreateRequest @ 0x140444D8C (SmProcessCreateRequest.c)
 * Callees:
 *     SmFpCleanup @ 0x14000653C (SmFpCleanup.c)
 *     KiAbEntryRemoveFromTree @ 0x14005EA50 (KiAbEntryRemoveFromTree.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegion @ 0x1400830B0 (KeLeaveCriticalRegion.c)
 *     MmGetSessionIdEx @ 0x140084190 (MmGetSessionIdEx.c)
 *     MiGetSystemRegionType @ 0x1400849C0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140084D60 (KiAbThreadRemoveBoosts.c)
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 *     ?SmInitialize@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z @ 0x140155CBC (-SmInitialize@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     memset @ 0x140192F40 (memset.c)
 *     MmStoreChargeResidentAvailableForRead @ 0x14022D844 (MmStoreChargeResidentAvailableForRead.c)
 *     ?SmCleanup@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140264EC0 (-SmCleanup@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?SmCompressCtxStart@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@Z @ 0x1402656B8 (-SmCompressCtxStart@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@Z.c)
 *     ?SmStorePrepare@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x140269E4C (-SmStorePrepare@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     SmFpPreAllocate @ 0x140272FBC (SmFpPreAllocate.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     MmStoreCheckPagefiles @ 0x1406EAAD0 (MmStoreCheckPagefiles.c)
 *     MmStoreRegister @ 0x1406EABBC (MmStoreRegister.c)
 *     PsCreateMinimalProcess @ 0x140719A94 (PsCreateMinimalProcess.c)
 *     SmRegistrationCtxStart @ 0x140738E04 (SmRegistrationCtxStart.c)
 *     ExAllocatePrivateWorkerPool @ 0x14075E4F8 (ExAllocatePrivateWorkerPool.c)
 */

__int64 __fastcall SmFirstTimeInit(int a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  HANDLE v5; // rdx
  __int64 v6; // rcx
  char v7; // al
  NTSTATUS PrivateWorkerPool; // ebx
  struct _KTHREAD *v9; // rdi
  unsigned int SessionId; // edx
  unsigned __int8 v11; // r14
  unsigned int v12; // r8d
  bool v13; // zf
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  _KLOCK_ENTRY *v17; // rsi
  __int64 v18; // rdx
  __int64 v20; // r8
  unsigned int v21; // esi
  int v22; // [rsp+50h] [rbp-A8h] BYREF
  unsigned int v23; // [rsp+54h] [rbp-A4h]
  int v24; // [rsp+58h] [rbp-A0h]
  HANDLE Handle; // [rsp+60h] [rbp-98h] BYREF
  PVOID Object; // [rsp+68h] [rbp-90h] BYREF
  __int128 v27; // [rsp+70h] [rbp-88h] BYREF
  _BYTE v28[48]; // [rsp+80h] [rbp-78h] BYREF
  int v29; // [rsp+B0h] [rbp-48h]
  int v30; // [rsp+B4h] [rbp-44h]
  int v31; // [rsp+B8h] [rbp-40h]

  CurrentThread = KeGetCurrentThread();
  v23 = 1048579;
  v29 = 1048581;
  v30 = 1048578;
  --CurrentThread->KernelApcDisable;
  v31 = 1048596;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&BugCheckParameter2, 0LL);
  if ( dword_14041B138 )
  {
    if ( dword_14041B138 != a2 )
    {
      PrivateWorkerPool = -1073741217;
      goto LABEL_12;
    }
  }
  else
  {
    dword_14041B138 = a2;
  }
  if ( (dword_14041B130 & 8) == 0 )
  {
    PrivateWorkerPool = SmRegistrationCtxStart(&qword_14041B3E0);
    if ( PrivateWorkerPool < 0 )
      goto LABEL_12;
    dword_14041B130 |= 8u;
  }
  v5 = ::Handle;
  if ( !::Handle )
  {
    if ( !(unsigned int)MmStoreCheckPagefiles() )
    {
      PrivateWorkerPool = -1073741637;
      goto LABEL_12;
    }
    KiStackAttachProcess((ULONG_PTR)PsInitialSystemProcess);
    LOBYTE(v20) = BYTE2(PsInitialSystemProcess[2].ActiveProcessors.Bitmap[0]);
    PrivateWorkerPool = PsCreateMinimalProcess(
                          PsInitialSystemProcess,
                          &unk_1403564C0,
                          v20,
                          0LL,
                          0,
                          0,
                          0LL,
                          0LL,
                          &Handle);
    KiUnstackDetachProcess(v28, 0LL);
    if ( PrivateWorkerPool < 0 )
      goto LABEL_12;
    PrivateWorkerPool = ObReferenceObjectByHandle(Handle, 0, 0LL, 0, &Object, 0LL);
    if ( PrivateWorkerPool < 0 )
    {
      ZwClose(Handle);
      goto LABEL_12;
    }
    v5 = Handle;
    ::Handle = Handle;
    ::Object = Object;
  }
  v6 = (unsigned int)dword_14041B130;
  if ( (dword_14041B130 & 2) == 0 )
  {
    v21 = dword_14041B138;
    qword_14041B0F0 = (__int64)v5;
    PrivateWorkerPool = SMKM_STORE_MGR<SM_TRAITS>::SmStorePrepare(&SmGlobals);
    if ( PrivateWorkerPool >= 0 )
    {
      if ( (xmmword_14041B0E0 & 0x20) == 0
        || (PrivateWorkerPool = SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxStart(&unk_14041AEB0, &SmGlobals, v21),
            PrivateWorkerPool >= 0) )
      {
        PrivateWorkerPool = 0;
      }
    }
    if ( PrivateWorkerPool < 0 )
    {
      v27 = xmmword_14041B0E0;
      SMKM_STORE_MGR<SM_TRAITS>::SmCleanup(&SmGlobals);
      SMKM_STORE_MGR<SM_TRAITS>::SmInitialize(&SmGlobals, &v27);
      ObfDereferenceObjectWithTag(::Object, 0x746C6644u);
      ZwClose(::Handle);
      ::Object = 0LL;
      ::Handle = 0LL;
      goto LABEL_12;
    }
    v6 = dword_14041B130 | 2u;
    dword_14041B130 |= 2u;
  }
  if ( (v6 & 0x10) != 0
    || (v6 = ((unsigned __int8)dword_14041B130 ^ (unsigned __int8)(16 * MmStoreChargeResidentAvailableForRead(1LL))) & 0x10 ^ (unsigned int)dword_14041B130,
        dword_14041B130 = v6,
        (v6 & 0x10) != 0) )
  {
    if ( dword_14041B134 )
    {
      if ( a1 != dword_14041B134 )
      {
        PrivateWorkerPool = -1073741800;
        goto LABEL_12;
      }
    }
    else
    {
      v23 = (a1 & 0xFFFF000 | 0x10000300u) >> 8;
      v30 = v23 & 0xFFFF0 | 0x100002;
      v29 = v23 & 0xFFFF0 | 0x100005;
      PrivateWorkerPool = SmFpPreAllocate(&dword_14041B400);
      if ( PrivateWorkerPool < 0 )
        goto LABEL_12;
      PrivateWorkerPool = SmFpPreAllocate(&dword_14041B470);
      if ( PrivateWorkerPool < 0 )
      {
        SmFpCleanup(&dword_14041B400);
        memset(&dword_14041B400, 0, 0x70uLL);
        word_14041B408 = 1;
        qword_14041B418 = (__int64)&qword_14041B410;
        qword_14041B410 = (__int64)&qword_14041B410;
        byte_14041B40A = 6;
        dword_14041B40C = 0;
        goto LABEL_12;
      }
      dword_14041B134 = a1;
    }
    v7 = dword_14041B130;
    if ( (dword_14041B130 & 0x20) == 0 )
    {
      PrivateWorkerPool = ExAllocatePrivateWorkerPool(&qword_14041B160);
      if ( PrivateWorkerPool < 0 )
        goto LABEL_12;
      v7 = dword_14041B130 | 0x20;
      dword_14041B130 |= 0x20u;
    }
    if ( (v7 & 1) == 0 )
    {
      PrivateWorkerPool = MmStoreRegister(v6, v5, ::Object);
      if ( PrivateWorkerPool < 0 )
        goto LABEL_12;
      dword_14041B130 |= 1u;
    }
    PrivateWorkerPool = 0;
  }
  else
  {
    PrivateWorkerPool = -1073741670;
  }
LABEL_12:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&BugCheckParameter2);
  v22 = 0;
  v9 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(&BugCheckParameter2) == 1 )
    SessionId = MmGetSessionIdEx(v9->ApcState.Process);
  else
    SessionId = -1;
  --v9->SpecialApcDisable;
  v11 = ++v9->AbAllocationRegionCount;
  v12 = ((char)v9->AbEntrySummary | (char)v9->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v13 = !_BitScanReverse((unsigned int *)&v14, v12);
    v24 = v14;
    if ( v13 )
      break;
    v15 = 1 << v14;
    v16 = v14;
    v17 = &v9->LockEntries[v16];
    v12 &= ~v15;
    if ( (v17->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v17->LockState.0 & 1) == 0
      && (*(_QWORD *)&v17->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL)
      && v17->LockState.SessionId == SessionId )
    {
      v17->AcquiredByte &= ~1u;
      if ( v17->LockState.0 )
      {
        if ( v17 )
        {
          v17->CrossThreadReleasableAndBusyByte |= 2u;
          if ( (__int64)v17->LockState.LockState < 0 )
            KiAbEntryRemoveFromTree(&v9->LockEntries[v16].TreeNode);
          v22 = 0;
          v22 = v17->BoostBitmap.AllFields & 0x1FFFF;
          v17->BoostBitmap.AllFields &= 0xFFFE0000;
          v17->ThreadLocalFlags &= ~1u;
          v17->LockState.0 = 0LL;
          v18 = ((char *)v17 - (char *)v9 - 800) / 96;
          if ( v11 == 1 )
            v9->AbEntrySummary |= 1 << v18;
          else
            _InterlockedOr8((volatile signed __int8 *)&v9->AbOrphanedEntrySummary, 1 << v18);
          goto LABEL_28;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&v9->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v9, (ULONG_PTR)&BugCheckParameter2, SessionId, 0LL);
LABEL_28:
  --v9->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts(v9, &BugCheckParameter2, &v22);
  v13 = v9->SpecialApcDisable++ == -1;
  if ( v13 && ($B476B70DB57F76B110DA5B9238C3E934 *)v9->ApcState.ApcListHead[0].Flink != &v9->152 )
    KiCheckForKernelApcDelivery();
  KeLeaveCriticalRegion();
  return (unsigned int)PrivateWorkerPool;
}
