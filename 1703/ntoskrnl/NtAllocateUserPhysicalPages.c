/*
 * XREFs of NtAllocateUserPhysicalPages @ 0x1406B8F84
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseAutoExpandPushLockShared @ 0x14000C2E0 (ExReleaseAutoExpandPushLockShared.c)
 *     MiAllocatePagesForMdl @ 0x14007A5D8 (MiAllocatePagesForMdl.c)
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     MiFreePagesFromMdl @ 0x1400B3890 (MiFreePagesFromMdl.c)
 *     MiReturnProcessCommitment @ 0x1400CE224 (MiReturnProcessCommitment.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x1400CE380 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x1400CE400 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiGetProcessPartition @ 0x1400D0EA8 (MiGetProcessPartition.c)
 *     MiChargeProcessCommitment @ 0x1400D0ED0 (MiChargeProcessCommitment.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquireAutoExpandPushLockShared @ 0x14011C590 (ExAcquireAutoExpandPushLockShared.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x1404F3760 (SeSinglePrivilegeCheck.c)
 *     ProbeForWrite @ 0x140527A00 (ProbeForWrite.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140531800 (ObpReferenceObjectByHandleWithTag.c)
 *     MiChargeProcessPhysicalPages @ 0x1406B69DC (MiChargeProcessPhysicalPages.c)
 *     MiAllocateAweInfo @ 0x1406B84C0 (MiAllocateAweInfo.c)
 *     MiResizeAweBitMap @ 0x1406B8CF8 (MiResizeAweBitMap.c)
 */

NTSTATUS __stdcall NtAllocateUserPhysicalPages(HANDLE ProcessHandle, PULONG_PTR NumberOfPages, PULONG_PTR UserPfnArray)
{
  HANDLE v3; // r13
  char v4; // bl
  struct _KTHREAD *CurrentThread; // r12
  __int64 Process; // r14
  char PreviousMode; // di
  __int64 v8; // rcx
  unsigned __int64 v9; // r15
  NTSTATUS result; // eax
  __int64 v11; // rsi
  NTSTATUS AweInfo; // r14d
  _QWORD *v13; // rcx
  __int64 ProcessPartition; // r10
  unsigned __int64 v15; // rdi
  __int16 v16; // dx
  __int64 v17; // rcx
  __int16 v18; // ax
  unsigned __int64 v19; // rdi
  __int64 v20; // rax
  unsigned int *PagesForMdl; // r13
  unsigned __int64 v22; // r14
  unsigned __int64 v23; // r14
  unsigned __int64 v24; // r8
  unsigned __int64 *v25; // rdx
  ULONG_PTR v26; // r11
  __int64 v27; // r9
  unsigned int *v28; // rax
  unsigned int *v29; // r10
  char *v30; // r13
  unsigned __int64 v31; // rdi
  char *v32; // r12
  char *v33; // r13
  unsigned __int64 v34; // rdi
  _QWORD *v35; // rax
  _QWORD *v36; // rdi
  __int16 v37; // [rsp+42h] [rbp-126h]
  unsigned __int64 v38; // [rsp+48h] [rbp-120h]
  char *v39; // [rsp+58h] [rbp-110h]
  __int64 v40; // [rsp+60h] [rbp-108h] BYREF
  PVOID P; // [rsp+68h] [rbp-100h]
  PVOID v42; // [rsp+70h] [rbp-F8h]
  unsigned __int64 v43; // [rsp+78h] [rbp-F0h]
  unsigned __int64 v44; // [rsp+80h] [rbp-E8h]
  __int64 v45; // [rsp+88h] [rbp-E0h]
  unsigned int *v46; // [rsp+90h] [rbp-D8h]
  unsigned __int64 v47; // [rsp+98h] [rbp-D0h]
  volatile void *Address; // [rsp+A0h] [rbp-C8h]
  char *v49; // [rsp+A8h] [rbp-C0h]
  _DWORD *v50; // [rsp+B0h] [rbp-B8h]
  unsigned int *v51; // [rsp+B8h] [rbp-B0h]
  unsigned __int64 v52; // [rsp+C0h] [rbp-A8h]
  PULONG_PTR v53; // [rsp+C8h] [rbp-A0h]
  HANDLE v54; // [rsp+D0h] [rbp-98h]
  HANDLE v55; // [rsp+E0h] [rbp-88h]
  struct _KTHREAD *v56; // [rsp+E8h] [rbp-80h]
  $5BC46E0569261879018906DEC3127961 v57; // [rsp+F8h] [rbp-70h] BYREF

  v53 = NumberOfPages;
  v3 = ProcessHandle;
  v54 = ProcessHandle;
  v55 = ProcessHandle;
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
    v44 = v9;
    if ( !v9 )
      return 0;
    if ( v9 > 0x1FFFFFFFFFFFFFFFLL )
      return -1073741584;
    ProbeForWrite(Address, 8 * v9, 8u);
  }
  else
  {
    v9 = *NumberOfPages;
    v44 = *NumberOfPages;
  }
  if ( v3 == (HANDLE)-1LL )
  {
    v11 = Process;
    v40 = Process;
  }
  else
  {
    result = ObpReferenceObjectByHandleWithTag(
               (ULONG_PTR)v3,
               8,
               (__int64)PsProcessType,
               PreviousMode,
               1750101325,
               &v40,
               0LL,
               0LL);
    if ( result < 0 )
      return result;
    v11 = v40;
  }
  if ( !SeSinglePrivilegeCheck(SeLockMemoryPrivilege, PreviousMode) )
  {
    if ( v3 != (HANDLE)-1LL )
      ObfDereferenceObjectWithTag((PVOID)v11, 0x68506D4Du);
    return -1073741727;
  }
  if ( Process == v11 )
  {
    v57.SavedApcState.Process = 0LL;
  }
  else
  {
    KiStackAttachProcess((_KPROCESS *)v11, 0, (__int64)&v57);
    v4 = 1;
  }
  v38 = 0LL;
  v42 = *(PVOID *)(v11 + 1032);
  if ( v42 )
    goto LABEL_24;
  AweInfo = MiAllocateAweInfo();
  if ( AweInfo >= 0 )
  {
    v42 = *(PVOID *)(v11 + 1032);
LABEL_24:
    LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, v11);
    v50 = (_DWORD *)(v11 + 772);
    if ( (*(_DWORD *)(v11 + 772) & 0x20) != 0 )
    {
      AweInfo = -1073741558;
    }
    else if ( (unsigned int)MiChargeProcessPhysicalPages(v11, v9)
           && (v4 |= 4u, (unsigned int)MiChargeProcessCommitment(v13, v9)) )
    {
      UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, v11);
      v4 |= 2u;
      ProcessPartition = MiGetProcessPartition(v11);
      v45 = ProcessPartition;
      v15 = *(_QWORD *)(ProcessPartition + 5576) + 1LL;
      v16 = *(_WORD *)(*(_QWORD *)(KiProcessorBlock[CurrentThread->IdealProcessor] + 192) + 146LL);
      v37 = v16;
      P = 0LL;
      v49 = 0LL;
      v17 = *(_QWORD *)(v11 + 1064);
      if ( v17 )
      {
        v18 = *(_WORD *)(v17 + 8);
        if ( (v18 == 332 || v18 == 452) && v15 > 0x100000000LL )
          v15 = 0x100000000LL;
      }
      v19 = v15 << 12;
      v20 = 0LL;
      while ( 2 )
      {
        PagesForMdl = 0LL;
        v39 = 0LL;
        v22 = v9 - v20;
        if ( v9 - v20 > 0xC0000 )
          v22 = 786432LL;
        if ( v22 >= 0x200 && (v4 & 8) == 0 )
        {
          v43 = v22 & 0xFFFFFFFFFFFFFE00uLL;
          PagesForMdl = (unsigned int *)MiAllocatePagesForMdl(
                                          ProcessPartition,
                                          0LL,
                                          v19 - 4096,
                                          0x200000uLL,
                                          (v22 & 0xFFFFFFFFFFFFFE00uLL) << 12,
                                          1,
                                          v16,
                                          -2147483552);
          v39 = (char *)PagesForMdl;
          ProcessPartition = v45;
          v16 = v37;
          if ( PagesForMdl )
            v22 = v43;
          else
            v4 |= 8u;
        }
        if ( PagesForMdl
          || (PagesForMdl = (unsigned int *)MiAllocatePagesForMdl(
                                              ProcessPartition,
                                              0LL,
                                              v19 - 4096,
                                              0LL,
                                              v22 << 12,
                                              1,
                                              v16,
                                              0x80000000),
              (v39 = (char *)PagesForMdl) != 0LL) )
        {
          v23 = 0LL;
          v24 = (unsigned __int64)PagesForMdl[10] >> 12;
          v52 = v24;
          v51 = PagesForMdl + 12;
          v25 = (unsigned __int64 *)(PagesForMdl + 12);
          do
          {
            if ( *v25 > v23 )
              v23 = *v25;
            v43 = v23;
            ++v25;
          }
          while ( v25 != (unsigned __int64 *)&PagesForMdl[2 * v24 + 12] );
          v47 = v24;
          v46 = PagesForMdl + 12;
          while ( 1 )
          {
            LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, v11);
            if ( (*v50 & 0x20) != 0 )
            {
              UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, v11);
              MiFreePagesFromMdl((ULONG_PTR)PagesForMdl, 0x80000000);
              ExFreePoolWithTag(PagesForMdl, 0);
              AweInfo = -1073741558;
              v31 = v38;
              goto LABEL_63;
            }
            --CurrentThread->SpecialApcDisable;
            v26 = ExAcquireAutoExpandPushLockShared((ULONG_PTR)v42 + 16, 0LL);
            if ( v23 < *(_QWORD *)v42 )
              break;
            ExReleaseAutoExpandPushLockShared(v26, 0LL);
            KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
            UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, v11);
            AweInfo = MiResizeAweBitMap((_RTL_BITMAP_EX *)v42);
            if ( AweInfo >= 0 )
            {
              v23 = v43;
            }
            else
            {
              if ( v43 >= *(_QWORD *)v42 )
              {
                MiFreePagesFromMdl((ULONG_PTR)PagesForMdl, 0x80000000);
                ExFreePoolWithTag(PagesForMdl, 0);
                v31 = v38;
                goto LABEL_63;
              }
              v23 = v43;
            }
          }
          v27 = *((_QWORD *)v42 + 1);
          v28 = v51;
          v29 = &v51[2 * v52];
          do
          {
            _InterlockedOr((volatile signed __int32 *)(v27 + 4LL * (*(_QWORD *)v28 >> 5)), 1 << (*(_QWORD *)v28 & 0x1F));
            v28 = v46 + 2;
            v46 = v28;
          }
          while ( v28 != v29 );
          ExReleaseAutoExpandPushLockShared(v26, 0LL);
          KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
          UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, v40);
          *(_QWORD *)v39 = P;
          v30 = v39;
          P = v39;
          v49 = v39;
          ProcessPartition = v45;
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v45 + 6264), v47);
          v20 = v47 + v38;
          v38 = v20;
          AweInfo = 0;
          v9 = v44;
          v11 = v40;
          if ( v20 != v44 )
          {
            v16 = v37;
            continue;
          }
          v31 = v20;
        }
        else
        {
          v31 = v38;
          AweInfo = v38 == 0 ? 0xC000009A : 0;
LABEL_63:
          v30 = (char *)P;
        }
        break;
      }
      if ( (v4 & 1) != 0 )
      {
        KiUnstackDetachProcess(&v57, 0LL);
        v4 &= ~1u;
      }
      if ( AweInfo >= 0 )
        *v53 = v31;
      v32 = v30;
      v33 = (char *)Address;
      while ( v32 )
      {
        v46 = (unsigned int *)(v32 + 48);
        v47 = (unsigned __int64)*((unsigned int *)v32 + 10) >> 12;
        v34 = 8 * v47;
        memmove(v33, v32 + 48, 8 * v47);
        v33 += v34;
        Address = v33;
        v32 = *(char **)v32;
      }
      v35 = P;
      v3 = v54;
      while ( v35 )
      {
        v36 = (_QWORD *)*v35;
        ExFreePoolWithTag(v35, 0);
        v35 = v36;
      }
      v9 -= v38;
      v44 = v9;
      CurrentThread = v56;
    }
    else
    {
      AweInfo = -1073741523;
    }
  }
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
      v11 = v40;
    }
  }
  if ( (v4 & 1) != 0 )
    KiUnstackDetachProcess(&v57, 0LL);
  if ( v3 != (HANDLE)-1LL )
    ObfDereferenceObjectWithTag((PVOID)v11, 0x68506D4Du);
  return AweInfo;
}
