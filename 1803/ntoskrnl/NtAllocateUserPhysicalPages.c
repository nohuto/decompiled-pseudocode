/*
 * XREFs of NtAllocateUserPhysicalPages @ 0x14074FE5C
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     MiReturnProcessCommitment @ 0x14000A180 (MiReturnProcessCommitment.c)
 *     ExAcquireAutoExpandPushLockShared @ 0x14007BE70 (ExAcquireAutoExpandPushLockShared.c)
 *     ExReleaseAutoExpandPushLockShared @ 0x1400A4CF0 (ExReleaseAutoExpandPushLockShared.c)
 *     MiAllocatePagesForMdl @ 0x1400B3544 (MiAllocatePagesForMdl.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x1400FE990 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x140117300 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiGetProcessPartition @ 0x1401199C8 (MiGetProcessPartition.c)
 *     MiChargeProcessCommitment @ 0x1401199F0 (MiChargeProcessCommitment.c)
 *     MiFreePagesFromMdl @ 0x140136794 (MiFreePagesFromMdl.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x1404D5650 (SeSinglePrivilegeCheck.c)
 *     ProbeForWrite @ 0x14059C6A0 (ProbeForWrite.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405A4770 (ObpReferenceObjectByHandleWithTag.c)
 *     MiAllocateAweInfo @ 0x14074F6C8 (MiAllocateAweInfo.c)
 *     MiResizeAweBitMap @ 0x14074FBC0 (MiResizeAweBitMap.c)
 *     MiChargeProcessPhysicalPages @ 0x140753D00 (MiChargeProcessPhysicalPages.c)
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
  unsigned __int64 v26; // r9
  unsigned __int64 v27; // r8
  unsigned __int64 *v28; // rdx
  unsigned __int64 v29; // rax
  _RTL_BITMAP_EX *v30; // r14
  ULONG_PTR v31; // rax
  ULONG_PTR v32; // r11
  unsigned __int64 v33; // rdi
  unsigned __int64 *Buffer; // r9
  unsigned int *v35; // rax
  unsigned int *v36; // r10
  PVOID *v37; // r12
  unsigned __int64 v38; // rdi
  _QWORD *v39; // rax
  _QWORD *v40; // rdi
  __int16 v41; // [rsp+42h] [rbp-126h]
  unsigned __int64 v42; // [rsp+48h] [rbp-120h]
  PVOID *v43; // [rsp+58h] [rbp-110h]
  __int64 v44; // [rsp+60h] [rbp-108h] BYREF
  PVOID P; // [rsp+68h] [rbp-100h]
  volatile void *Address; // [rsp+70h] [rbp-F8h]
  unsigned __int64 v47; // [rsp+78h] [rbp-F0h]
  unsigned __int64 v48; // [rsp+80h] [rbp-E8h]
  PVOID v49; // [rsp+88h] [rbp-E0h]
  __int64 v50; // [rsp+90h] [rbp-D8h]
  unsigned int *v51; // [rsp+98h] [rbp-D0h]
  unsigned __int64 v52; // [rsp+A0h] [rbp-C8h]
  PVOID *v53; // [rsp+A8h] [rbp-C0h]
  _DWORD *v54; // [rsp+B0h] [rbp-B8h]
  unsigned int *v55; // [rsp+B8h] [rbp-B0h]
  unsigned __int64 v56; // [rsp+C0h] [rbp-A8h]
  PULONG_PTR v57; // [rsp+C8h] [rbp-A0h]
  HANDLE v58; // [rsp+D0h] [rbp-98h]
  struct _KTHREAD *v59; // [rsp+E0h] [rbp-88h]
  HANDLE v60; // [rsp+E8h] [rbp-80h]
  _BYTE v61[32]; // [rsp+F8h] [rbp-70h] BYREF
  __int64 v62; // [rsp+118h] [rbp-50h]

  v57 = NumberOfPages;
  v3 = ProcessHandle;
  v58 = ProcessHandle;
  v60 = ProcessHandle;
  Address = UserPfnArray;
  v4 = 0;
  CurrentThread = KeGetCurrentThread();
  v59 = CurrentThread;
  Process = (__int64)CurrentThread->ApcState.Process;
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    v8 = (__int64)NumberOfPages;
    if ( (unsigned __int64)NumberOfPages >= 0x7FFFFFFF0000LL )
      v8 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v8 = *(_QWORD *)v8;
    v9 = *NumberOfPages;
    v47 = v9;
    if ( !v9 )
      return 0;
    if ( v9 > 0x1FFFFFFFFFFFFFFFLL )
      return -1073741584;
    ProbeForWrite(Address, 8 * v9, 8u);
  }
  else
  {
    v9 = *NumberOfPages;
    v47 = *NumberOfPages;
  }
  if ( v3 == (HANDLE)-1LL )
  {
    v11 = Process;
    v44 = Process;
  }
  else
  {
    result = ObpReferenceObjectByHandleWithTag(
               (ULONG_PTR)v3,
               8,
               (__int64)PsProcessType,
               PreviousMode,
               0x68506D4Du,
               &v44,
               0LL,
               0LL);
    if ( result < 0 )
      return result;
    v11 = v44;
  }
  if ( !SeSinglePrivilegeCheck(SeLockMemoryPrivilege, PreviousMode) )
  {
    if ( v3 != (HANDLE)-1LL )
      ObfDereferenceObjectWithTag((PVOID)v11, 0x68506D4Du);
    return -1073741727;
  }
  if ( Process == v11 )
  {
    v62 = 0LL;
  }
  else
  {
    KiStackAttachProcess((_KPROCESS *)v11, 0, (__int64)v61);
    v4 = 1;
  }
  v42 = 0LL;
  v49 = *(PVOID *)(v11 + 1032);
  if ( !v49 )
  {
    AweInfo = MiAllocateAweInfo();
    if ( AweInfo < 0 )
      goto LABEL_73;
    v49 = *(PVOID *)(v11 + 1032);
  }
  LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, v11);
  v54 = (_DWORD *)(v11 + 772);
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
        v50 = ProcessPartition;
        v18 = *(_QWORD *)(ProcessPartition + 6856) + 1LL;
        v19 = *(_WORD *)(*(_QWORD *)(KiProcessorBlock[CurrentThread->IdealProcessor] + 192) + 146LL);
        v41 = v19;
        P = 0LL;
        v53 = 0LL;
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
          v43 = 0LL;
          v25 = v9 - v23;
          if ( v9 - v23 > 0xC0000 )
            v25 = 786432LL;
          if ( v25 >= 0x200 && (v4 & 8) == 0 )
          {
            v48 = v25 & 0xFFFFFFFFFFFFFE00uLL;
            PagesForMdl = (unsigned int *)MiAllocatePagesForMdl(
                                            ProcessPartition,
                                            0LL,
                                            v22 - 4096,
                                            0x200000uLL,
                                            (v25 & 0xFFFFFFFFFFFFFE00uLL) << 12,
                                            1,
                                            v19,
                                            -2147483552);
            v43 = (PVOID *)PagesForMdl;
            ProcessPartition = v50;
            v19 = v41;
            if ( PagesForMdl )
              v25 = v48;
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
                                                1,
                                                v19,
                                                0x80000000),
                (v43 = (PVOID *)PagesForMdl) != 0LL) )
          {
            v26 = 0LL;
            v27 = (unsigned __int64)PagesForMdl[10] >> 12;
            v56 = v27;
            v55 = PagesForMdl + 12;
            v28 = (unsigned __int64 *)(PagesForMdl + 12);
            do
            {
              v29 = *v28;
              if ( *v28 <= v26 )
                v29 = v26;
              v26 = v29;
              v48 = v29;
              ++v28;
            }
            while ( v28 != (unsigned __int64 *)&PagesForMdl[2 * v27 + 12] );
            v52 = v27;
            v51 = PagesForMdl + 12;
            while ( 1 )
            {
              LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, v11);
              if ( (*v54 & 0x20) != 0 )
              {
                UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, v11);
                MiFreePagesFromMdl((ULONG_PTR)PagesForMdl, 0x80000000);
                ExFreePoolWithTag(PagesForMdl, 0);
                AweInfo = -1073741558;
                v33 = v42;
                goto LABEL_62;
              }
              --CurrentThread->SpecialApcDisable;
              v30 = (_RTL_BITMAP_EX *)v49;
              v31 = ExAcquireAutoExpandPushLockShared((ULONG_PTR)v49 + 16, 0LL);
              v32 = v31;
              if ( v48 < v30->SizeOfBitMap )
                break;
              ExReleaseAutoExpandPushLockShared(v31, 0LL);
              KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
              UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, v11);
              AweInfo = MiResizeAweBitMap(v30);
              if ( AweInfo < 0 && v48 >= *(_QWORD *)v49 )
              {
                MiFreePagesFromMdl((ULONG_PTR)PagesForMdl, 0x80000000);
                ExFreePoolWithTag(PagesForMdl, 0);
                v33 = v42;
                goto LABEL_62;
              }
            }
            Buffer = v30->Buffer;
            v35 = v55;
            v36 = &v55[2 * v56];
            do
            {
              _InterlockedOr((volatile signed __int32 *)Buffer + (*(_QWORD *)v35 >> 5), 1 << (*(_QWORD *)v35 & 0x1F));
              v35 = v51 + 2;
              v51 = v35;
            }
            while ( v35 != v36 );
            ExReleaseAutoExpandPushLockShared(v32, 0LL);
            KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
            UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, v44);
            *v43 = P;
            v37 = v43;
            P = v43;
            v53 = v43;
            ProcessPartition = v50;
            _InterlockedExchangeAdd64((volatile signed __int64 *)(v50 + 7544), v52);
            v23 = v52 + v42;
            v42 = v23;
            AweInfo = 0;
            v9 = v47;
            v11 = v44;
            if ( v23 != v47 )
            {
              v19 = v41;
              continue;
            }
            v33 = v23;
          }
          else
          {
            v33 = v42;
            AweInfo = v42 == 0 ? 0xC000009A : 0;
LABEL_62:
            v37 = (PVOID *)P;
          }
          break;
        }
        if ( (v4 & 1) != 0 )
        {
          KiUnstackDetachProcess((__int64)v61, 0LL);
          v4 &= ~1u;
        }
        if ( AweInfo >= 0 )
          *v57 = v33;
        while ( v37 )
        {
          v51 = (unsigned int *)(v37 + 6);
          v52 = (unsigned __int64)*((unsigned int *)v37 + 10) >> 12;
          v38 = 8 * v52;
          memmove((void *)Address, v37 + 6, 8 * v52);
          Address = (char *)Address + v38;
          v37 = (PVOID *)*v37;
        }
        v39 = P;
        v3 = v58;
        while ( v39 )
        {
          v40 = (_QWORD *)*v39;
          ExFreePoolWithTag(v39, 0);
          v39 = v40;
        }
        v9 -= v42;
        v47 = v9;
        goto LABEL_73;
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
LABEL_73:
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
      v11 = v44;
    }
  }
  if ( (v4 & 1) != 0 )
    KiUnstackDetachProcess((__int64)v61, 0LL);
  if ( v3 != (HANDLE)-1LL )
    ObfDereferenceObjectWithTag((PVOID)v11, 0x68506D4Du);
  return AweInfo;
}
