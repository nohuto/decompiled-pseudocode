/*
 * XREFs of NtAllocateUserPhysicalPages @ 0x1406E5CD8
 * Callers:
 *     <none>
 * Callees:
 *     MiReturnProcessCommitment @ 0x140035908 (MiReturnProcessCommitment.c)
 *     MiGetProcessPartition @ 0x14003ADE0 (MiGetProcessPartition.c)
 *     MiChargeProcessCommitment @ 0x14003AE00 (MiChargeProcessCommitment.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x14003D780 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x14003DE40 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     MiAllocatePagesForMdl @ 0x1400CB9E8 (MiAllocatePagesForMdl.c)
 *     MiFreePagesFromMdl @ 0x1400E10B0 (MiFreePagesFromMdl.c)
 *     ExAcquireAutoExpandPushLockShared @ 0x140101100 (ExAcquireAutoExpandPushLockShared.c)
 *     ExReleaseAutoExpandPushLockShared @ 0x1401038D0 (ExReleaseAutoExpandPushLockShared.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x14046C2E0 (SeSinglePrivilegeCheck.c)
 *     ProbeForWrite @ 0x1404A3950 (ProbeForWrite.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1404B1130 (ObpReferenceObjectByHandleWithTag.c)
 *     MiChargeProcessPhysicalPages @ 0x1406E3514 (MiChargeProcessPhysicalPages.c)
 *     MiAllocateAweInfo @ 0x1406E5194 (MiAllocateAweInfo.c)
 *     MiResizeAweBitMap @ 0x1406E5A4C (MiResizeAweBitMap.c)
 */

NTSTATUS __stdcall NtAllocateUserPhysicalPages(HANDLE ProcessHandle, PULONG_PTR NumberOfPages, PULONG_PTR UserPfnArray)
{
  HANDLE v3; // r12
  char v4; // bl
  struct _KTHREAD *CurrentThread; // r13
  __int64 Process; // r14
  char PreviousMode; // di
  __int64 v8; // rcx
  unsigned __int64 v9; // r15
  NTSTATUS result; // eax
  __int64 v11; // rsi
  NTSTATUS AweInfo; // r14d
  _QWORD *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // eax
  __int64 ProcessPartition; // r10
  unsigned __int64 v18; // rdi
  __int16 v19; // dx
  __int64 v20; // rcx
  __int16 v21; // ax
  unsigned __int64 v22; // rdi
  __int64 v23; // rax
  unsigned int *PagesForMdl; // r12
  unsigned __int64 v25; // r14
  unsigned __int64 v26; // r14
  unsigned __int64 v27; // r8
  unsigned __int64 *v28; // rdx
  ULONG_PTR v29; // r11
  __int64 v30; // r9
  unsigned int *v31; // rax
  unsigned int *v32; // r10
  PVOID *v33; // r12
  unsigned __int64 v34; // rdi
  unsigned __int64 v35; // rdi
  _QWORD *v36; // rax
  _QWORD *v37; // rdi
  __int16 v38; // [rsp+42h] [rbp-126h]
  unsigned __int64 v39; // [rsp+48h] [rbp-120h]
  PVOID *v40; // [rsp+58h] [rbp-110h]
  __int64 v41; // [rsp+60h] [rbp-108h] BYREF
  PVOID P; // [rsp+68h] [rbp-100h]
  PVOID v43; // [rsp+70h] [rbp-F8h]
  unsigned __int64 v44; // [rsp+78h] [rbp-F0h]
  volatile void *Address; // [rsp+80h] [rbp-E8h]
  unsigned __int64 v46; // [rsp+88h] [rbp-E0h]
  __int64 v47; // [rsp+90h] [rbp-D8h]
  unsigned int *v48; // [rsp+98h] [rbp-D0h]
  unsigned __int64 v49; // [rsp+A0h] [rbp-C8h]
  PVOID *v50; // [rsp+A8h] [rbp-C0h]
  _DWORD *v51; // [rsp+B0h] [rbp-B8h]
  unsigned int *v52; // [rsp+B8h] [rbp-B0h]
  unsigned __int64 v53; // [rsp+C0h] [rbp-A8h]
  PULONG_PTR v54; // [rsp+C8h] [rbp-A0h]
  HANDLE v55; // [rsp+D0h] [rbp-98h]
  struct _KTHREAD *v56; // [rsp+E0h] [rbp-88h]
  HANDLE v57; // [rsp+E8h] [rbp-80h]
  $709EDFC2F9E0D4565D6AA3C4377BC643 v58; // [rsp+F8h] [rbp-70h] BYREF

  v54 = NumberOfPages;
  v3 = ProcessHandle;
  v55 = ProcessHandle;
  v57 = ProcessHandle;
  Address = UserPfnArray;
  v4 = 0;
  CurrentThread = KeGetCurrentThread();
  v56 = CurrentThread;
  Process = (__int64)CurrentThread->ApcState.Process;
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    v8 = (__int64)NumberOfPages;
    if ( (unsigned __int64)NumberOfPages >= 0x7FFFFFFF0000LL )
      v8 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v8 = *(_QWORD *)v8;
    v9 = *NumberOfPages;
    v46 = v9;
    if ( !v9 )
      return 0;
    if ( v9 > 0x1FFFFFFFFFFFFFFFLL )
      return -1073741584;
    ProbeForWrite(Address, 8 * v9, 8u);
  }
  else
  {
    v9 = *NumberOfPages;
    v46 = *NumberOfPages;
  }
  if ( v3 == (HANDLE)-1LL )
  {
    v11 = Process;
    v41 = Process;
  }
  else
  {
    result = ObpReferenceObjectByHandleWithTag(
               (ULONG_PTR)v3,
               8,
               (__int64)PsProcessType,
               PreviousMode,
               1750101325,
               &v41,
               0LL,
               0LL);
    if ( result < 0 )
      return result;
    v11 = v41;
  }
  if ( !SeSinglePrivilegeCheck(SeLockMemoryPrivilege, PreviousMode) )
  {
    if ( v3 != (HANDLE)-1LL )
      ObfDereferenceObjectWithTag((PVOID)v11, 0x68506D4Du);
    return -1073741727;
  }
  if ( Process == v11 )
  {
    v58.SavedApcState.Process = 0LL;
  }
  else
  {
    KiStackAttachProcess((_KPROCESS *)v11, 0, (__int64)&v58);
    v4 = 1;
  }
  v39 = 0LL;
  v43 = *(PVOID *)(v11 + 1032);
  if ( !v43 )
  {
    AweInfo = MiAllocateAweInfo();
    if ( AweInfo < 0 )
      goto LABEL_75;
    v43 = *(PVOID *)(v11 + 1032);
  }
  LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, v11);
  v51 = (_DWORD *)(v11 + 772);
  if ( (*(_DWORD *)(v11 + 772) & 0x20) != 0 )
  {
    UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, v11);
    AweInfo = -1073741558;
  }
  else
  {
    if ( (unsigned int)MiChargeProcessPhysicalPages(v11, v9) )
    {
      v4 |= 4u;
      v16 = MiChargeProcessCommitment(v13, v9);
      v14 = v11;
      v15 = (__int64)CurrentThread;
      if ( v16 )
      {
        UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, v11);
        v4 |= 2u;
        ProcessPartition = MiGetProcessPartition(v11);
        v47 = ProcessPartition;
        v18 = *(_QWORD *)(ProcessPartition + 5768) + 1LL;
        v19 = *(_WORD *)(*(_QWORD *)(KiProcessorBlock[CurrentThread->IdealProcessor] + 192) + 146LL);
        v38 = v19;
        P = 0LL;
        v50 = 0LL;
        v20 = *(_QWORD *)(v11 + 1064);
        if ( v20 )
        {
          v21 = *(_WORD *)(v20 + 8);
          if ( (v21 == 332 || v21 == 452) && v18 > 0x100000000LL )
            v18 = 0x100000000LL;
        }
        v22 = v18 << 12;
        v23 = 0LL;
        while ( 2 )
        {
          PagesForMdl = 0LL;
          v40 = 0LL;
          v25 = v9 - v23;
          if ( v9 - v23 > 0xC0000 )
            v25 = 786432LL;
          if ( v25 >= 0x200 && (v4 & 8) == 0 )
          {
            v44 = v25 & 0xFFFFFFFFFFFFFE00uLL;
            PagesForMdl = (unsigned int *)MiAllocatePagesForMdl(
                                            ProcessPartition,
                                            0LL,
                                            v22 - 4096,
                                            0x200000uLL,
                                            (v25 & 0xFFFFFFFFFFFFFE00uLL) << 12,
                                            1u,
                                            v19,
                                            -2147483552);
            v40 = (PVOID *)PagesForMdl;
            ProcessPartition = v47;
            v19 = v38;
            if ( PagesForMdl )
              v25 = v44;
            else
              v4 |= 8u;
          }
          if ( PagesForMdl
            || (PagesForMdl = (unsigned int *)MiAllocatePagesForMdl(
                                                ProcessPartition,
                                                0LL,
                                                v22 - 4096,
                                                0LL,
                                                v25 << 12,
                                                1u,
                                                v19,
                                                0x80000000),
                (v40 = (PVOID *)PagesForMdl) != 0LL) )
          {
            v26 = 0LL;
            v27 = (unsigned __int64)PagesForMdl[10] >> 12;
            v53 = v27;
            v52 = PagesForMdl + 12;
            v28 = (unsigned __int64 *)(PagesForMdl + 12);
            do
            {
              if ( *v28 > v26 )
                v26 = *v28;
              v44 = v26;
              ++v28;
            }
            while ( v28 != (unsigned __int64 *)&PagesForMdl[2 * v27 + 12] );
            v49 = v27;
            v48 = PagesForMdl + 12;
            while ( 1 )
            {
              LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, v11);
              if ( (*v51 & 0x20) != 0 )
              {
                UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, v11);
                MiFreePagesFromMdl((ULONG_PTR)PagesForMdl, 0x80000000);
                ExFreePoolWithTag(PagesForMdl, 0);
                AweInfo = -1073741558;
                v34 = v39;
                goto LABEL_64;
              }
              --CurrentThread->SpecialApcDisable;
              v29 = ExAcquireAutoExpandPushLockShared((ULONG_PTR)v43 + 16, 0LL);
              if ( v26 < *(_QWORD *)v43 )
                break;
              ExReleaseAutoExpandPushLockShared(v29, 0LL);
              KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
              UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, v11);
              AweInfo = MiResizeAweBitMap((_RTL_BITMAP_EX *)v43);
              if ( AweInfo >= 0 )
              {
                v26 = v44;
              }
              else
              {
                if ( v44 >= *(_QWORD *)v43 )
                {
                  MiFreePagesFromMdl((ULONG_PTR)PagesForMdl, 0x80000000);
                  ExFreePoolWithTag(PagesForMdl, 0);
                  v34 = v39;
                  goto LABEL_64;
                }
                v26 = v44;
              }
            }
            v30 = *((_QWORD *)v43 + 1);
            v31 = v52;
            v32 = &v52[2 * v53];
            do
            {
              _InterlockedOr(
                (volatile signed __int32 *)(v30 + 4LL * (*(_QWORD *)v31 >> 5)),
                1 << (*(_QWORD *)v31 & 0x1F));
              v31 = v48 + 2;
              v48 = v31;
            }
            while ( v31 != v32 );
            ExReleaseAutoExpandPushLockShared(v29, 0LL);
            KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
            UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, v41);
            *v40 = P;
            v33 = v40;
            P = v40;
            v50 = v40;
            ProcessPartition = v47;
            _InterlockedExchangeAdd64((volatile signed __int64 *)(v47 + 6456), v49);
            v23 = v49 + v39;
            v39 = v23;
            AweInfo = 0;
            v9 = v46;
            v11 = v41;
            if ( v23 != v46 )
            {
              v19 = v38;
              continue;
            }
            v34 = v23;
          }
          else
          {
            v34 = v39;
            AweInfo = v39 == 0 ? 0xC000009A : 0;
LABEL_64:
            v33 = (PVOID *)P;
          }
          break;
        }
        if ( (v4 & 1) != 0 )
        {
          KiUnstackDetachProcess(&v58, 0LL);
          v4 &= ~1u;
        }
        if ( AweInfo >= 0 )
          *v54 = v34;
        while ( v33 )
        {
          v48 = (unsigned int *)(v33 + 6);
          v49 = (unsigned __int64)*((unsigned int *)v33 + 10) >> 12;
          v35 = 8 * v49;
          memmove((void *)Address, v33 + 6, 8 * v49);
          Address = (char *)Address + v35;
          v33 = (PVOID *)*v33;
        }
        v36 = P;
        v3 = v55;
        while ( v36 )
        {
          v37 = (_QWORD *)*v36;
          ExFreePoolWithTag(v36, 0);
          v36 = v37;
        }
        v9 -= v39;
        v46 = v9;
        goto LABEL_75;
      }
    }
    else
    {
      v14 = v11;
      v15 = (__int64)CurrentThread;
    }
    UNLOCK_ADDRESS_SPACE_SHARED(v15, v14);
    AweInfo = -1073741523;
  }
LABEL_75:
  if ( v9 )
  {
    if ( (v4 & 2) != 0 )
    {
      LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, v11);
      MiReturnProcessCommitment(v11, v9);
      UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, v11);
    }
    if ( (v4 & 4) != 0 )
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v11 + 1600), -(__int64)v9);
      v11 = v41;
    }
  }
  if ( (v4 & 1) != 0 )
    KiUnstackDetachProcess(&v58, 0LL);
  if ( v3 != (HANDLE)-1LL )
    ObfDereferenceObjectWithTag((PVOID)v11, 0x68506D4Du);
  return AweInfo;
}
