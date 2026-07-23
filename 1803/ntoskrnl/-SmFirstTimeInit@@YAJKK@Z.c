/*
 * XREFs of ?SmFirstTimeInit@@YAJKK@Z @ 0x14007DAD0
 * Callers:
 *     SmProcessCreateRequest @ 0x14052AEB8 (SmProcessCreateRequest.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     SmFpCleanup @ 0x14009AD84 (SmFpCleanup.c)
 *     KiAbEntryRemoveFromTree @ 0x1400E9340 (KiAbEntryRemoveFromTree.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x1401043B0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     MmStoreChargeResidentAvailableForRead @ 0x14016A458 (MmStoreChargeResidentAvailableForRead.c)
 *     ?SmInitialize@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z @ 0x14018299C (-SmInitialize@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z.c)
 *     ?SmCompressCtxStart@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@Z @ 0x140182B94 (-SmCompressCtxStart@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@Z.c)
 *     ?SmStorePrepare@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x140182C08 (-SmStorePrepare@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     SmFpPreAllocate @ 0x140182C9C (SmFpPreAllocate.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ?SmCleanup@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1402A2A64 (-SmCleanup@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 *     PsCreateMinimalProcess @ 0x14062C5DC (PsCreateMinimalProcess.c)
 *     MmStoreRegister @ 0x14063BBC8 (MmStoreRegister.c)
 *     MmStoreCheckPagefiles @ 0x14063CE00 (MmStoreCheckPagefiles.c)
 *     ExAllocatePrivateWorkerPool @ 0x14064720C (ExAllocatePrivateWorkerPool.c)
 *     SmRegistrationCtxStart @ 0x14065314C (SmRegistrationCtxStart.c)
 */

__int64 __fastcall SmFirstTimeInit(int a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  HANDLE v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rcx
  char v9; // al
  NTSTATUS MinimalProcess; // ebx
  struct _KTHREAD *v11; // rdi
  unsigned int SessionId; // edx
  unsigned __int8 v13; // r14
  unsigned int v14; // r8d
  bool v15; // zf
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  _KLOCK_ENTRY *v19; // rsi
  __int64 v20; // rdx
  int v22; // r9d
  unsigned int v23; // esi
  int v24; // [rsp+50h] [rbp-A8h] BYREF
  unsigned int v25; // [rsp+54h] [rbp-A4h]
  int v26; // [rsp+58h] [rbp-A0h]
  HANDLE Handle; // [rsp+60h] [rbp-98h] BYREF
  PVOID Object; // [rsp+68h] [rbp-90h] BYREF
  __int128 v29; // [rsp+70h] [rbp-88h] BYREF
  _BYTE v30[48]; // [rsp+80h] [rbp-78h] BYREF
  int v31; // [rsp+B0h] [rbp-48h]
  int v32; // [rsp+B4h] [rbp-44h]
  int v33; // [rsp+B8h] [rbp-40h]

  CurrentThread = KeGetCurrentThread();
  v25 = 1048579;
  v31 = 1048581;
  v32 = 1048578;
  --CurrentThread->KernelApcDisable;
  v33 = 1048596;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140466160, 0LL);
  if ( dword_140466148 )
  {
    if ( dword_140466148 != a2 )
    {
      MinimalProcess = -1073741217;
      goto LABEL_12;
    }
  }
  else
  {
    dword_140466148 = a2;
  }
  if ( (dword_140466140 & 8) == 0 )
  {
    MinimalProcess = SmRegistrationCtxStart(&qword_1404663F0);
    if ( MinimalProcess < 0 )
      goto LABEL_12;
    dword_140466140 |= 8u;
  }
  v5 = ::Handle;
  if ( !::Handle )
  {
    if ( !(unsigned int)MmStoreCheckPagefiles() )
    {
      MinimalProcess = -1073741637;
      goto LABEL_12;
    }
    KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)v30);
    LOBYTE(v22) = BYTE2(PsInitialSystemProcess[2].ActiveProcessors.Bitmap[0]);
    MinimalProcess = PsCreateMinimalProcess(
                       (int)PsInitialSystemProcess,
                       (int)&dword_140396FD8,
                       0,
                       v22,
                       0LL,
                       0,
                       0,
                       0LL,
                       0LL,
                       (__int64)&Handle);
    KiUnstackDetachProcess((__int64)v30, 0LL);
    if ( MinimalProcess < 0 )
      goto LABEL_12;
    MinimalProcess = ObReferenceObjectByHandle(Handle, 0, 0LL, 0, &Object, 0LL);
    if ( MinimalProcess < 0 )
    {
      ZwClose(Handle);
      goto LABEL_12;
    }
    v5 = Handle;
    ::Handle = Handle;
    qword_140466158 = Object;
  }
  v8 = (unsigned int)dword_140466140;
  if ( (dword_140466140 & 2) == 0 )
  {
    v23 = dword_140466148;
    qword_140466100 = (__int64)v5;
    MinimalProcess = SMKM_STORE_MGR<SM_TRAITS>::SmStorePrepare(&SmGlobals);
    if ( MinimalProcess >= 0 )
    {
      if ( (xmmword_1404660F0 & 0x20) == 0
        || (MinimalProcess = SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxStart(&unk_140465EB0, &SmGlobals, v23),
            MinimalProcess >= 0) )
      {
        MinimalProcess = 0;
      }
    }
    if ( MinimalProcess < 0 )
    {
      v29 = xmmword_1404660F0;
      SMKM_STORE_MGR<SM_TRAITS>::SmCleanup(&SmGlobals);
      SMKM_STORE_MGR<SM_TRAITS>::SmInitialize(&SmGlobals, &v29);
      ObfDereferenceObjectWithTag(qword_140466158, 0x746C6644u);
      ZwClose(::Handle);
      qword_140466158 = 0LL;
      ::Handle = 0LL;
      goto LABEL_12;
    }
    v8 = dword_140466140 | 2u;
    dword_140466140 |= 2u;
  }
  if ( (v8 & 0x10) != 0
    || (v8 = ((unsigned __int8)dword_140466140 ^ (unsigned __int8)(16 * MmStoreChargeResidentAvailableForRead(1LL))) & 0x10 ^ (unsigned int)dword_140466140,
        dword_140466140 = v8,
        (v8 & 0x10) != 0) )
  {
    if ( dword_140466144 )
    {
      if ( a1 != dword_140466144 )
      {
        MinimalProcess = -1073741800;
        goto LABEL_12;
      }
    }
    else
    {
      v25 = (a1 & 0xFFFF000 | 0x10000300u) >> 8;
      v32 = v25 & 0xFFFF0 | 0x100002;
      v31 = v25 & 0xFFFF0 | 0x100005;
      MinimalProcess = SmFpPreAllocate(&dword_140466410);
      if ( MinimalProcess < 0 )
        goto LABEL_12;
      MinimalProcess = SmFpPreAllocate(&dword_140466480);
      if ( MinimalProcess < 0 )
      {
        SmFpCleanup(&dword_140466410);
        memset(&dword_140466410, 0, 0x70uLL);
        word_140466418 = 1;
        qword_140466428 = (__int64)&qword_140466420;
        qword_140466420 = (__int64)&qword_140466420;
        byte_14046641A = 6;
        dword_14046641C = 0;
        goto LABEL_12;
      }
      dword_140466144 = a1;
    }
    v9 = dword_140466140;
    if ( (dword_140466140 & 0x20) == 0 )
    {
      MinimalProcess = ExAllocatePrivateWorkerPool(&qword_140466170);
      if ( MinimalProcess < 0 )
        goto LABEL_12;
      v9 = dword_140466140 | 0x20;
      dword_140466140 |= 0x20u;
    }
    if ( (v9 & 1) == 0 )
    {
      MinimalProcess = MmStoreRegister(v8, v5, qword_140466158, ((unsigned int)dword_140466180 >> 7) & 1);
      if ( MinimalProcess < 0 )
        goto LABEL_12;
      dword_140466140 |= 1u;
    }
    MinimalProcess = 0;
  }
  else
  {
    MinimalProcess = -1073741670;
  }
LABEL_12:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140466160, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140466160, (__int64)v5, v6, v7);
  v24 = 0;
  v11 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(&qword_140466160) == 1 )
    SessionId = MmGetSessionIdEx(v11->ApcState.Process);
  else
    SessionId = -1;
  --v11->SpecialApcDisable;
  v13 = ++v11->AbAllocationRegionCount;
  v14 = ((char)v11->AbEntrySummary | (char)v11->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v15 = !_BitScanReverse((unsigned int *)&v16, v14);
    v26 = v16;
    if ( v15 )
      break;
    v17 = 1 << v16;
    v18 = v16;
    v19 = &v11->LockEntries[v18];
    v14 &= ~v17;
    if ( (v19->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v19->LockState.0 & 1) == 0
      && (*(_QWORD *)&v19->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&qword_140466160 & 0x7FFFFFFFFFFFFFFCLL)
      && v19->LockState.SessionId == SessionId )
    {
      v19->AcquiredByte &= ~1u;
      if ( v19->LockState.0 )
      {
        if ( v19 )
        {
          v19->CrossThreadReleasableAndBusyByte |= 2u;
          if ( (__int64)v19->LockState.LockState < 0 )
            KiAbEntryRemoveFromTree(&v11->LockEntries[v18].TreeNode);
          v24 = 0;
          v24 = v19->BoostBitmap.AllFields & 0x1FFFF;
          v19->BoostBitmap.AllFields &= 0xFFFE0000;
          v19->ThreadLocalFlags &= ~1u;
          v19->LockState.0 = 0LL;
          v20 = ((char *)v19 - (char *)v11 - 800) / 96;
          if ( v13 == 1 )
            v11->AbEntrySummary |= 1 << v20;
          else
            _InterlockedOr8((volatile signed __int8 *)&v11->AbOrphanedEntrySummary, 1 << v20);
          goto LABEL_28;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&v11->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v11, (ULONG_PTR)&qword_140466160, SessionId, 0LL);
LABEL_28:
  --v11->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts(v11, &qword_140466160, &v24);
  v15 = v11->SpecialApcDisable++ == -1;
  if ( v15 && ($005F0E83B22994B61E86C72E0CE43C71 *)v11->ApcState.ApcListHead[0].Flink != &v11->152 )
    KiCheckForKernelApcDelivery();
  KeLeaveCriticalRegion();
  return (unsigned int)MinimalProcess;
}
