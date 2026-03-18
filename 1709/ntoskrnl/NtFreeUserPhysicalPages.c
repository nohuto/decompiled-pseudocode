/*
 * XREFs of NtFreeUserPhysicalPages @ 0x1406E649C
 * Callers:
 *     <none>
 * Callees:
 *     MiReturnProcessCommitment @ 0x140035908 (MiReturnProcessCommitment.c)
 *     MiGetProcessPartition @ 0x14003ADE0 (MiGetProcessPartition.c)
 *     KeFlushTb @ 0x140059170 (KeFlushTb.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     LOCK_ADDRESS_SPACE @ 0x1400A0BBC (LOCK_ADDRESS_SPACE.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x1400A20E0 (UNLOCK_ADDRESS_SPACE.c)
 *     ExAcquireAutoExpandPushLockExclusive @ 0x1400BAD00 (ExAcquireAutoExpandPushLockExclusive.c)
 *     IoAllocateMdl @ 0x1400BBD50 (IoAllocateMdl.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     MiFreePagesFromMdl @ 0x1400E10B0 (MiFreePagesFromMdl.c)
 *     IoFreeMdl @ 0x1400E6070 (IoFreeMdl.c)
 *     ExReleaseAutoExpandPushLockExclusive @ 0x140113B10 (ExReleaseAutoExpandPushLockExclusive.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     MiSynchronizePageFree @ 0x1402292B8 (MiSynchronizePageFree.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1404B1130 (ObpReferenceObjectByHandleWithTag.c)
 *     MiCaptureUlongPtrArray @ 0x1406E5358 (MiCaptureUlongPtrArray.c)
 */

NTSTATUS __stdcall NtFreeUserPhysicalPages(HANDLE ProcessHandle, PULONG_PTR NumberOfPages, PULONG_PTR UserPfnArray)
{
  struct _KTHREAD *CurrentThread; // r8
  char PreviousMode; // r9
  __int64 v6; // rcx
  unsigned __int64 v7; // r15
  int v9; // edi
  PMDL Mdl; // r12
  unsigned __int64 v11; // r13
  _KPROCESS *Process; // rsi
  NTSTATUS v13; // r14d
  PMDL v14; // r14
  struct _MDL *v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // r8
  unsigned __int64 *v18; // rcx
  signed __int64 *v19; // r11
  unsigned __int64 *v20; // r10
  unsigned __int64 v21; // rax
  _QWORD *v22; // rcx
  __int64 v23; // rax
  unsigned __int64 *v24; // rcx
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rax
  __int16 v27; // cx
  __int64 v28; // rax
  char v29; // [rsp+40h] [rbp-318h]
  PVOID Object; // [rsp+48h] [rbp-310h] BYREF
  unsigned __int64 *v31; // [rsp+50h] [rbp-308h]
  struct _KTHREAD *v32; // [rsp+58h] [rbp-300h]
  unsigned __int64 v33; // [rsp+60h] [rbp-2F8h]
  void *Src; // [rsp+68h] [rbp-2F0h]
  unsigned __int64 v35; // [rsp+70h] [rbp-2E8h]
  unsigned __int64 v36; // [rsp+78h] [rbp-2E0h]
  unsigned __int64 v37; // [rsp+80h] [rbp-2D8h]
  __int64 v38; // [rsp+88h] [rbp-2D0h]
  ULONG_PTR BugCheckParameter2; // [rsp+98h] [rbp-2C0h]
  __int64 ProcessPartition; // [rsp+A0h] [rbp-2B8h]
  PULONG_PTR v41; // [rsp+A8h] [rbp-2B0h]
  $709EDFC2F9E0D4565D6AA3C4377BC643 v42; // [rsp+B0h] [rbp-2A8h] BYREF
  _BYTE v43[560]; // [rsp+E0h] [rbp-278h] BYREF

  Src = UserPfnArray;
  v41 = NumberOfPages;
  CurrentThread = KeGetCurrentThread();
  v32 = CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  v29 = PreviousMode;
  if ( PreviousMode )
  {
    v6 = (__int64)NumberOfPages;
    if ( (unsigned __int64)NumberOfPages >= 0x7FFFFFFF0000LL )
      v6 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v6 = *(_QWORD *)v6;
    v7 = *NumberOfPages;
    v33 = *NumberOfPages;
    *NumberOfPages = 0LL;
  }
  else
  {
    v7 = *NumberOfPages;
    v33 = *NumberOfPages;
  }
  if ( !v7 )
    return -1073741584;
  v9 = 0;
  v36 = 0LL;
  Mdl = 0LL;
  v11 = 0LL;
  if ( v7 > 0x40 )
  {
    v11 = v7;
    if ( v7 > 0xFFFFE )
      v11 = 1048574LL;
    do
    {
      Mdl = IoAllocateMdl(0LL, (_DWORD)v11 << 12, 0, 0, 0LL);
      if ( Mdl )
        break;
      v11 >>= 1;
    }
    while ( v11 > 0x40 );
    CurrentThread = v32;
    PreviousMode = v29;
  }
  if ( !Mdl )
  {
    v11 = 64LL;
    Mdl = (PMDL)v43;
  }
  Process = CurrentThread->ApcState.Process;
  Object = Process;
  if ( ProcessHandle == (HANDLE)-1LL )
  {
    Object = Process;
    goto LABEL_20;
  }
  v13 = ObpReferenceObjectByHandleWithTag(
          (ULONG_PTR)ProcessHandle,
          8,
          (__int64)PsProcessType,
          PreviousMode,
          1750101325,
          &Object,
          0LL,
          0LL);
  Process = (_KPROCESS *)Object;
  if ( v13 >= 0 )
  {
    v9 = 2;
LABEL_20:
    ProcessPartition = MiGetProcessPartition((__int64)Process);
    while ( 1 )
    {
      if ( v7 < v11 )
        v11 = v7;
      Mdl->Next = 0LL;
      Mdl->Size = 8 * ((((v11 << 12) + 4095) >> 12) + 6);
      Mdl->MdlFlags = 0;
      Mdl->StartVa = 0LL;
      Mdl->ByteOffset = 0;
      Mdl->ByteCount = (_DWORD)v11 << 12;
      v14 = Mdl + 1;
      v31 = (unsigned __int64 *)&Mdl[1];
      v38 = 8 * v11;
      v9 &= ~1u;
      v15 = Mdl + 1;
      if ( v29 )
      {
        v13 = MiCaptureUlongPtrArray(v15, (char *)Src, v11);
        if ( v13 < 0 )
          goto LABEL_58;
        v14 = (PMDL)v31;
      }
      else
      {
        memmove(v15, Src, 8 * v11);
      }
      v16 = (__int64)v32;
      if ( v32->ApcState.Process != Process )
      {
        KiStackAttachProcess(Process, 0, (__int64)&v42);
        v9 |= 1u;
        v16 = (__int64)v32;
      }
      v35 = Process[1].ActiveProcessors.Bitmap[3];
      if ( !v35 )
        break;
      v37 = (unsigned __int64)v14 + v38;
      v13 = 0;
      LOCK_ADDRESS_SPACE(v16, (__int64)Process);
      if ( (Process[1].DirectoryTableBase & 0x2000000000LL) != 0 )
      {
        UNLOCK_ADDRESS_SPACE((__int64)v32, (__int64)Process);
        v13 = -1073741558;
        goto LABEL_58;
      }
      --v32->SpecialApcDisable;
      BugCheckParameter2 = v35 + 16;
      ExAcquireAutoExpandPushLockExclusive(v35 + 16, 0LL);
      v18 = (unsigned __int64 *)v35;
      v19 = *(signed __int64 **)(v35 + 8);
      v20 = v31;
      if ( (unsigned __int64)v31 < v37 )
      {
        while ( 1 )
        {
          v21 = *v20;
          if ( *v20 >= *v18 || !_bittest64(v19, v21) )
            break;
          ++v36;
          _bittestandreset64(v19, v21);
          v22 = *(_QWORD **)(48 * v21 - 0x58000000000LL + 8);
          if ( v22 )
          {
            _InterlockedAnd64((volatile signed __int64 *)(48 * v21 - 0x58000000000LL + 8), 0LL);
            *v22 = 0LL;
            if ( (unsigned __int64)v22 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v22 <= 0xFFFFF6FB7DBED7F8uLL )
              MiWritePteShadow();
          }
          v31 = ++v20;
          v18 = (unsigned __int64 *)v35;
          if ( (unsigned __int64)v20 >= v37 )
            goto LABEL_41;
        }
        v13 = -1073741800;
LABEL_41:
        v7 = v33;
        Process = (_KPROCESS *)Object;
      }
      KeFlushTb(1LL, 0LL, v17);
      ExReleaseAutoExpandPushLockExclusive(BugCheckParameter2, 0LL);
      KiLeaveGuardedRegionUnsafe((__int64)v32);
      v23 = ((char *)v31 - (char *)Mdl - 48) >> 3;
      v31 = (unsigned __int64 *)v23;
      if ( v23 )
        MiReturnProcessCommitment((__int64)Process, v23);
      UNLOCK_ADDRESS_SPACE((__int64)v32, (__int64)Process);
      v24 = v31;
      Mdl->ByteCount = (_DWORD)v31 << 12;
      if ( v24 )
      {
        v25 = -(__int64)v24;
        _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[2].Affinity.Bitmap[7], v25);
        _InterlockedExchangeAdd64((volatile signed __int64 *)(ProcessPartition + 6456), v25);
        Process = (_KPROCESS *)Object;
        MiSynchronizePageFree((__int64)Object);
        Mdl->MdlFlags |= 2u;
        MiFreePagesFromMdl((ULONG_PTR)Mdl, 0x80000000);
        v7 = v33;
        v24 = v31;
      }
      v7 -= (unsigned __int64)v24;
      v33 = v7;
      if ( v13 || !v7 )
        goto LABEL_58;
      if ( (v9 & 1) != 0 )
      {
        KiUnstackDetachProcess(&v42, 0LL);
        v9 &= ~1u;
      }
      v26 = Process[1].ActiveProcessors.Bitmap[7];
      if ( v26 && ((v27 = *(_WORD *)(v26 + 8), v27 == 332) || v27 == 452) )
        v28 = 4 * v11;
      else
        v28 = v38;
      Src = (char *)Src + v28;
    }
    v13 = -1073741585;
  }
LABEL_58:
  if ( Mdl != (PMDL)v43 )
  {
    Mdl->MdlFlags &= ~2u;
    IoFreeMdl(Mdl);
  }
  if ( (v9 & 1) != 0 )
    KiUnstackDetachProcess(&v42, 0LL);
  if ( (v9 & 2) != 0 )
    ObfDereferenceObjectWithTag(Process, 0x68506D4Du);
  *v41 = v36;
  return v13;
}
