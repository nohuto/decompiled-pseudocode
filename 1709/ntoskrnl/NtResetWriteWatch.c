/*
 * XREFs of NtResetWriteWatch @ 0x14003D7F0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     RtlClearBitsEx @ 0x140036470 (RtlClearBitsEx.c)
 *     MiGetNextPageTable @ 0x14003FDB0 (MiGetNextPageTable.c)
 *     MiObtainReferencedVad @ 0x140040AF0 (MiObtainReferencedVad.c)
 *     MiFlushTbList @ 0x140056340 (MiFlushTbList.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x140057900 (MiPreUnlockWorkingSetExclusive.c)
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     MiInsertTbFlushEntry @ 0x14009C1B0 (MiInsertTbFlushEntry.c)
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     MiReleasePageFileInfo @ 0x1400C0554 (MiReleasePageFileInfo.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 *     MiCapturePageFileInfoInline @ 0x140117280 (MiCapturePageFileInfoInline.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140286144 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140594210 (ObReferenceObjectByHandleWithTag.c)
 */

NTSTATUS __stdcall NtResetWriteWatch(HANDLE ProcessHandle, PVOID BaseAddress, SIZE_T RegionSize)
{
  NTSTATUS result; // eax
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // rsi
  char *v8; // r14
  int v9; // ebx
  unsigned __int64 v10; // r15
  NTSTATUS v11; // edi
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // r12
  __int64 v14; // rax
  __int64 v15; // r13
  __int64 **i; // rcx
  __int64 v17; // r15
  LONG *v18; // rdi
  char *v19; // r14
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // r12
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // r12
  int v24; // r15d
  __int64 *NextPageTable; // rax
  unsigned __int64 v26; // rsi
  __int64 PteShadow; // r9
  __int64 v28; // rdi
  __int64 v29; // r9
  unsigned __int64 v30; // r10
  unsigned __int64 v31; // rdx
  __int64 v32; // r14
  char v33; // r8
  __int64 v34; // rax
  LONG *v35; // rcx
  struct _KTHREAD *v36; // rdi
  bool v37; // zf
  KIRQL v38; // [rsp+40h] [rbp-C0h]
  NTSTATUS v39; // [rsp+44h] [rbp-BCh] BYREF
  int v40; // [rsp+48h] [rbp-B8h]
  PVOID Object; // [rsp+50h] [rbp-B0h] BYREF
  int v42; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v43; // [rsp+60h] [rbp-A0h]
  char v44[8]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v45; // [rsp+70h] [rbp-90h] BYREF
  __int64 v46; // [rsp+78h] [rbp-88h]
  char *v47; // [rsp+80h] [rbp-80h]
  HANDLE v48; // [rsp+88h] [rbp-78h]
  int v49; // [rsp+90h] [rbp-70h] BYREF
  __int16 v50; // [rsp+94h] [rbp-6Ch]
  __int64 v51; // [rsp+98h] [rbp-68h]
  __int64 v52; // [rsp+A0h] [rbp-60h]
  __int64 v53; // [rsp+A8h] [rbp-58h]
  char v54[48]; // [rsp+150h] [rbp+50h] BYREF
  void *retaddr; // [rsp+1C8h] [rbp+C8h]

  v48 = ProcessHandle;
  if ( (unsigned __int64)BaseAddress > 0x7FFFFFFDFFFFLL )
    return -1073741584;
  if ( 0x7FFFFFFE0000LL - (__int64)BaseAddress < RegionSize )
    return -1073741583;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  if ( ProcessHandle == (HANDLE)-1LL )
  {
    v8 = (char *)CurrentThread->ApcState.Process;
    Object = v8;
  }
  else
  {
    result = ObReferenceObjectByHandleWithTag(
               ProcessHandle,
               8u,
               (POBJECT_TYPE)PsProcessType,
               CurrentThread->PreviousMode,
               0x77576D4Du,
               &Object,
               0LL);
    v39 = result;
    if ( result < 0 )
      return result;
    v8 = (char *)Object;
  }
  v9 = 0;
  v10 = (unsigned __int64)BaseAddress + RegionSize - 1;
  v40 = 0;
  if ( (unsigned __int64)BaseAddress <= v10 )
  {
    if ( Process != (_KPROCESS *)v8 )
    {
      KiStackAttachProcess((ULONG_PTR)v8);
      v9 = 1;
      v40 = 1;
    }
    v12 = (((unsigned __int64)BaseAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v43 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v13 = (unsigned __int64)BaseAddress >> 12;
    v14 = MiObtainReferencedVad(BaseAddress, &v39);
    v46 = v14;
    v15 = v14;
    if ( v14 )
    {
      if ( (*(_DWORD *)(v14 + 48) & 7) == 4
        && v10 <= (((*(unsigned int *)(v14 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v14 + 33) << 32)) << 12) | 0xFFF) )
      {
        for ( i = *(__int64 ***)(v14 + 56); i; i = (__int64 **)*i )
        {
          if ( ((_DWORD)i[8] & 4) != 0 )
            break;
        }
        v17 = (__int64)(i + 1);
        v18 = &dword_140389780;
        v19 = v8 + 1280;
        v20 = *(unsigned int *)(v14 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v14 + 32) << 32);
        v47 = v19;
        v21 = v13 - v20;
        if ( (v19[192] & 7) != 2 )
          v18 = (LONG *)(v19 + 200);
        v38 = ExAcquireSpinLockExclusive(v18);
        v22 = ((__int64)(v43 - v12) >> 3) + 1;
        v18[1] = 0;
        RtlClearBitsEx(v17, v21, v22);
        v23 = v43;
        v51 = 20LL;
        v24 = 1;
        v49 = 1;
        v50 = 0;
        v52 = 0LL;
        v53 = 0LL;
        if ( v12 <= v43 )
        {
          do
          {
            NextPageTable = (__int64 *)MiGetNextPageTable(v12, v23, 0, v38, 5, (__int64)v44);
            v26 = (unsigned __int64)NextPageTable;
            if ( !NextPageTable )
              break;
            PteShadow = *NextPageTable;
            if ( (unsigned __int64)NextPageTable >= 0xFFFFF6FB7DBED000uLL
              && (unsigned __int64)NextPageTable <= 0xFFFFF6FB7DBED7F8uLL )
            {
              PteShadow = MiReadPteShadow(NextPageTable, *NextPageTable);
            }
            v45 = PteShadow;
            if ( (PteShadow & 1) != 0 && (PteShadow & 0x42) != 0 )
            {
              v28 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(&v45) - 0x58000000000LL;
              if ( v26 >= 0xFFFFF6FB7DBED000uLL && v26 <= 0xFFFFF6FB7DBED7F8uLL )
                v30 = MiReadPteShadow(v26, v30);
              v31 = v29 & 0x80FFFFFFFFFFFFBDuLL | ((HIBYTE(v30) & 0xF | (16 * ((v30 >> 60) & 7))) << 56);
              *(_QWORD *)v26 = v31;
              if ( v26 >= 0xFFFFF6FB7DBED000uLL && v26 <= 0xFFFFF6FB7DBED7F8uLL )
                MiWritePteShadow(v26, v31);
              MiInsertTbFlushEntry(&v49, (__int64)(v26 << 25) >> 16, 1LL, 0LL);
              v32 = 0LL;
              v42 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v28 + 24), 0x3FuLL) )
              {
                do
                  KeYieldProcessorEx(&v42);
                while ( *(__int64 *)(v28 + 24) < 0 );
              }
              v33 = *(_BYTE *)(v28 + 34);
              v34 = 0LL;
              if ( (v33 & 0x10) == 0 )
              {
                if ( (*(_DWORD *)(v28 + 16) & 0x400LL) == 0 && (v33 & 8) == 0 )
                  v34 = MiCapturePageFileInfoInline(v28 + 16, 1LL);
                *(_BYTE *)(v28 + 34) |= 0x10u;
                if ( v34 )
                  v32 = *(_QWORD *)(qword_140388AF0 + 8 * ((*(_QWORD *)(v28 + 40) >> 40) & 0x3FFLL));
              }
              _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( v34 )
                MiReleasePageFileInfo(v32, v34, 1LL);
            }
            v12 = v26 + 8;
          }
          while ( v12 <= v23 );
          v9 = v40;
          v15 = v46;
          v19 = v47;
        }
        MiFlushTbList(&v49);
        MiPreUnlockWorkingSetExclusive(v19, v38);
        v35 = &dword_140389780;
        if ( (v19[192] & 7) != 2 )
          v35 = (LONG *)(v19 + 200);
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v35, retaddr);
        else
          *v35 = 0;
        __writecr8(v38);
        v39 = 0;
      }
      else
      {
        v24 = 1;
        v39 = -1073741585;
      }
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v15 + 36), 0xFFFFFFFF) != 1
        || (*(_DWORD *)(v15 + 48) & 0x80000) == 0 )
      {
        v24 = 0;
      }
      v36 = KeGetCurrentThread();
      LOBYTE(v36[1].Queue) &= ~0x80u;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v15 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v15 + 40);
      KeAbPostRelease(v15 + 40);
      v37 = v36->SpecialApcDisable++ == -1;
      if ( v37 && ($B476B70DB57F76B110DA5B9238C3E934 *)v36->ApcState.ApcListHead[0].Flink != &v36->152 )
        KiCheckForKernelApcDelivery();
      if ( v24 == 1 )
        ExFreePoolWithTag((PVOID)v15, 0);
      v11 = v39;
      v8 = (char *)Object;
    }
    else
    {
      v11 = -1073741585;
    }
    if ( v9 )
      KiUnstackDetachProcess(v54, 0LL);
  }
  else
  {
    v11 = -1073741583;
  }
  if ( v48 != (HANDLE)-1LL )
    ObfDereferenceObjectWithTag(v8, 0x77576D4Du);
  return v11;
}
