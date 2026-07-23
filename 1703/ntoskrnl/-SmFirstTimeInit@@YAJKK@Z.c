/*
 * XREFs of ?SmFirstTimeInit@@YAJKK@Z @ 0x14012E500
 * Callers:
 *     SmProcessCreateRequest @ 0x140567BBC (SmProcessCreateRequest.c)
 * Callees:
 *     SmFpCleanup @ 0x14001FE68 (SmFpCleanup.c)
 *     KiAbEntryRemoveFromTree @ 0x140048030 (KiAbEntryRemoveFromTree.c)
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     KeLeaveCriticalRegion @ 0x1400EEB00 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x1400F0AE0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1400F0C40 (MmGetSessionIdEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14011C790 (KiCheckForKernelApcDelivery.c)
 *     MmStoreChargeResidentAvailableForRead @ 0x140121428 (MmStoreChargeResidentAvailableForRead.c)
 *     ?SmInitialize@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z @ 0x140164854 (-SmInitialize@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z.c)
 *     ?SmCompressCtxStart@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@Z @ 0x140168B30 (-SmCompressCtxStart@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@Z.c)
 *     ?SmStorePrepare@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x140168BA4 (-SmStorePrepare@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     SmFpPreAllocate @ 0x140168C38 (SmFpPreAllocate.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ?SmCleanup@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140249864 (-SmCleanup@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 *     MmStoreRegister @ 0x1405D92AC (MmStoreRegister.c)
 *     MmStoreCheckPagefiles @ 0x1405D94EC (MmStoreCheckPagefiles.c)
 *     PsCreateMinimalProcess @ 0x1405D991C (PsCreateMinimalProcess.c)
 *     ExAllocatePrivateWorkerPool @ 0x1405DA5C8 (ExAllocatePrivateWorkerPool.c)
 *     SmRegistrationCtxStart @ 0x1405DA870 (SmRegistrationCtxStart.c)
 */

__int64 __fastcall SmFirstTimeInit(int a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v5; // edi
  __int64 v6; // rcx
  HANDLE v7; // rdx
  NTSTATUS PrivateWorkerPool; // ebx
  struct _KTHREAD *v9; // rdi
  __int64 SessionId; // rdx
  unsigned __int8 v11; // r15
  unsigned int v12; // r8d
  bool v13; // zf
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  _KLOCK_ENTRY *v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int16 v20; // ax
  __int64 v22; // r8
  int v23; // [rsp+40h] [rbp-A8h] BYREF
  unsigned int v24; // [rsp+44h] [rbp-A4h]
  int v25; // [rsp+48h] [rbp-A0h]
  HANDLE Handle; // [rsp+50h] [rbp-98h] BYREF
  PVOID Object; // [rsp+58h] [rbp-90h] BYREF
  __int128 v28; // [rsp+60h] [rbp-88h] BYREF
  $5BC46E0569261879018906DEC3127961 v29; // [rsp+70h] [rbp-78h] BYREF
  int v30; // [rsp+A0h] [rbp-48h]
  int v31; // [rsp+A4h] [rbp-44h]
  int v32; // [rsp+A8h] [rbp-40h]

  CurrentThread = KeGetCurrentThread();
  v24 = 1048579;
  v30 = 1048581;
  v31 = 1048578;
  --CurrentThread->KernelApcDisable;
  v32 = 1048596;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1403FA180, 0LL);
  v5 = dword_1403FA168;
  if ( dword_1403FA168 )
  {
    if ( dword_1403FA168 != a2 )
    {
      PrivateWorkerPool = -1073741217;
      goto LABEL_12;
    }
  }
  else
  {
    v5 = a2;
    dword_1403FA168 = a2;
  }
  v6 = (unsigned int)dword_1403FA160;
  if ( (dword_1403FA160 & 8) == 0 )
  {
    PrivateWorkerPool = SmRegistrationCtxStart(&qword_1403FA410);
    if ( PrivateWorkerPool < 0 )
      goto LABEL_12;
    v5 = dword_1403FA168;
    v6 = dword_1403FA160 | 8u;
    dword_1403FA160 |= 8u;
  }
  v7 = ::Handle;
  if ( !::Handle )
  {
    if ( !(unsigned int)MmStoreCheckPagefiles() )
    {
      PrivateWorkerPool = -1073741637;
      goto LABEL_12;
    }
    KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)&v29);
    LOBYTE(v22) = BYTE2(PsInitialSystemProcess[2].ActiveProcessors.Bitmap[0]);
    PrivateWorkerPool = PsCreateMinimalProcess(PsInitialSystemProcess, &unk_14033C370, v22, 0LL, 0, 0LL, &Handle);
    KiUnstackDetachProcess(&v29, 0LL);
    if ( PrivateWorkerPool < 0 )
      goto LABEL_12;
    PrivateWorkerPool = ObReferenceObjectByHandle(Handle, 0, 0LL, 0, &Object, 0LL);
    if ( PrivateWorkerPool < 0 )
    {
      ZwClose(Handle);
      goto LABEL_12;
    }
    v7 = Handle;
    v5 = dword_1403FA168;
    v6 = (unsigned int)dword_1403FA160;
    ::Handle = Handle;
    qword_1403FA178 = Object;
  }
  if ( (v6 & 2) == 0 )
  {
    qword_1403FA118 = (__int64)v7;
    PrivateWorkerPool = SMKM_STORE_MGR<SM_TRAITS>::SmStorePrepare(&SmGlobals);
    if ( PrivateWorkerPool >= 0 )
    {
      if ( (xmmword_1403FA108 & 0x20) == 0
        || (PrivateWorkerPool = SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxStart(&unk_1403F9EF0, &SmGlobals, v5),
            PrivateWorkerPool >= 0) )
      {
        PrivateWorkerPool = 0;
      }
    }
    if ( PrivateWorkerPool < 0 )
    {
      v28 = xmmword_1403FA108;
      SMKM_STORE_MGR<SM_TRAITS>::SmCleanup(&SmGlobals);
      SMKM_STORE_MGR<SM_TRAITS>::SmInitialize(&SmGlobals, &v28);
      ObfDereferenceObjectWithTag(qword_1403FA178, 0x746C6644u);
      ZwClose(::Handle);
      qword_1403FA178 = 0LL;
      ::Handle = 0LL;
      goto LABEL_12;
    }
    v6 = dword_1403FA160 | 2u;
    dword_1403FA160 |= 2u;
  }
  if ( (v6 & 0x10) != 0
    || (v6 = ((unsigned __int8)dword_1403FA160 ^ (16 * MmStoreChargeResidentAvailableForRead(1LL))) & 0x10 ^ (unsigned int)dword_1403FA160,
        dword_1403FA160 = v6,
        (v6 & 0x10) != 0) )
  {
    if ( dword_1403FA164 )
    {
      if ( a1 != dword_1403FA164 )
      {
        PrivateWorkerPool = -1073741800;
        goto LABEL_12;
      }
    }
    else
    {
      v24 = (a1 & 0xFFFF000 | 0x10000300u) >> 8;
      v31 = v24 & 0xFFFF0 | 0x100002;
      v30 = v24 & 0xFFFF0 | 0x100005;
      PrivateWorkerPool = SmFpPreAllocate(&dword_1403FA430);
      if ( PrivateWorkerPool < 0 )
        goto LABEL_12;
      PrivateWorkerPool = SmFpPreAllocate(&dword_1403FA4A0);
      if ( PrivateWorkerPool < 0 )
      {
        SmFpCleanup((__int64)&dword_1403FA430);
        memset(&dword_1403FA430, 0, 0x70uLL);
        word_1403FA438 = 1;
        qword_1403FA448 = (__int64)&qword_1403FA440;
        qword_1403FA440 = (__int64)&qword_1403FA440;
        byte_1403FA43A = 6;
        dword_1403FA43C = 0;
        goto LABEL_12;
      }
      v6 = (unsigned int)dword_1403FA160;
      dword_1403FA164 = a1;
    }
    if ( (v6 & 0x20) == 0 )
    {
      PrivateWorkerPool = ExAllocatePrivateWorkerPool(&qword_1403FA190);
      if ( PrivateWorkerPool < 0 )
        goto LABEL_12;
      v6 = dword_1403FA160 | 0x20u;
      dword_1403FA160 |= 0x20u;
    }
    if ( (v6 & 1) == 0 )
    {
      PrivateWorkerPool = MmStoreRegister(v6, v7, qword_1403FA178);
      if ( PrivateWorkerPool < 0 )
        goto LABEL_12;
      dword_1403FA160 |= 1u;
    }
    PrivateWorkerPool = 0;
  }
  else
  {
    PrivateWorkerPool = -1073741670;
  }
LABEL_12:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1403FA180, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_1403FA180);
  v23 = 0;
  v9 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&qword_1403FA180) == 1 )
    SessionId = (unsigned int)MmGetSessionIdEx(v9->ApcState.Process);
  else
    SessionId = 0xFFFFFFFFLL;
  --v9->SpecialApcDisable;
  v11 = ++v9->AbAllocationRegionCount;
  v12 = ((char)v9->AbEntrySummary | (char)v9->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v13 = !_BitScanReverse((unsigned int *)&v14, v12);
    v25 = v14;
    if ( v13 )
      break;
    v15 = 1 << v14;
    v16 = v14;
    v17 = &v9->LockEntries[v16];
    v12 &= ~v15;
    if ( (v17->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v17->LockState.0 & 1) == 0
      && (*(_QWORD *)&v17->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&qword_1403FA180 & 0x7FFFFFFFFFFFFFFCLL)
      && v17->LockState.SessionId == (_DWORD)SessionId )
    {
      v17->AcquiredByte &= ~1u;
      if ( v17->LockState.0 )
      {
        if ( v17 )
        {
          v17->CrossThreadReleasableAndBusyByte |= 2u;
          if ( (__int64)v17->LockState.LockState < 0 )
            KiAbEntryRemoveFromTree(&v9->LockEntries[v16].TreeNode, SessionId);
          v23 = 0;
          v23 = v17->BoostBitmap.AllFields & 0x1FFFF;
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
  if ( (*((_DWORD *)&v9->0 + 1) & 0x8000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v9, (ULONG_PTR)&qword_1403FA180, (unsigned int)SessionId, 0LL);
LABEL_28:
  --v9->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts(&v9->Header.Lock, (__int64)&qword_1403FA180, (unsigned int *)&v23);
  v20 = v9->SpecialApcDisable + 1;
  v9->SpecialApcDisable = v20;
  if ( !v20 && ($69CD3F157F9F39B6F7113F2231989901 *)v9->ApcState.ApcListHead[0].Flink != &v9->152 )
    KiCheckForKernelApcDelivery(v19);
  KeLeaveCriticalRegion();
  return (unsigned int)PrivateWorkerPool;
}
