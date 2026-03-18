/*
 * XREFs of NtFreeUserPhysicalPages @ 0x1406B9738
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseAutoExpandPushLockExclusive @ 0x140020340 (ExReleaseAutoExpandPushLockExclusive.c)
 *     ExAcquireAutoExpandPushLockExclusive @ 0x140021C70 (ExAcquireAutoExpandPushLockExclusive.c)
 *     KeFlushTb @ 0x140063C74 (KeFlushTb.c)
 *     LOCK_ADDRESS_SPACE @ 0x1400998FC (LOCK_ADDRESS_SPACE.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x14009B6E0 (UNLOCK_ADDRESS_SPACE.c)
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     MiFreePagesFromMdl @ 0x1400B3890 (MiFreePagesFromMdl.c)
 *     MiReturnProcessCommitment @ 0x1400CE224 (MiReturnProcessCommitment.c)
 *     MiGetProcessPartition @ 0x1400D0EA8 (MiGetProcessPartition.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     IoFreeMdl @ 0x1401148E0 (IoFreeMdl.c)
 *     IoAllocateMdl @ 0x1401176F0 (IoAllocateMdl.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     MiSynchronizePageFree @ 0x14021C678 (MiSynchronizePageFree.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140531800 (ObpReferenceObjectByHandleWithTag.c)
 *     MiCaptureUlongPtrArray @ 0x1406B8688 (MiCaptureUlongPtrArray.c)
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
  unsigned __int64 *v17; // rcx
  signed __int64 *v18; // r11
  unsigned __int64 *v19; // r10
  unsigned __int64 v20; // rax
  _QWORD *v21; // r8
  __int64 v22; // rax
  unsigned __int64 *v23; // rcx
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rax
  __int16 v26; // cx
  __int64 v27; // rax
  char v28; // [rsp+40h] [rbp-318h]
  PVOID Object; // [rsp+48h] [rbp-310h] BYREF
  unsigned __int64 *v30; // [rsp+50h] [rbp-308h]
  struct _KTHREAD *v31; // [rsp+58h] [rbp-300h]
  unsigned __int64 v32; // [rsp+60h] [rbp-2F8h]
  unsigned __int64 v33; // [rsp+68h] [rbp-2F0h]
  void *Src; // [rsp+70h] [rbp-2E8h]
  unsigned __int64 v35; // [rsp+78h] [rbp-2E0h]
  unsigned __int64 v36; // [rsp+80h] [rbp-2D8h]
  __int64 v37; // [rsp+88h] [rbp-2D0h]
  ULONG_PTR BugCheckParameter2; // [rsp+98h] [rbp-2C0h]
  __int64 ProcessPartition; // [rsp+A0h] [rbp-2B8h]
  PULONG_PTR v40; // [rsp+A8h] [rbp-2B0h]
  $5BC46E0569261879018906DEC3127961 v41; // [rsp+B0h] [rbp-2A8h] BYREF
  _BYTE v42[560]; // [rsp+E0h] [rbp-278h] BYREF

  Src = UserPfnArray;
  v40 = NumberOfPages;
  CurrentThread = KeGetCurrentThread();
  v31 = CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  v28 = PreviousMode;
  if ( PreviousMode )
  {
    v6 = (__int64)NumberOfPages;
    if ( (unsigned __int64)NumberOfPages >= 0x7FFFFFFF0000LL )
      v6 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v6 = *(_QWORD *)v6;
    v7 = *NumberOfPages;
    v32 = *NumberOfPages;
    *NumberOfPages = 0LL;
  }
  else
  {
    v7 = *NumberOfPages;
    v32 = *NumberOfPages;
  }
  if ( !v7 )
    return -1073741584;
  v9 = 0;
  v35 = 0LL;
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
    CurrentThread = v31;
    PreviousMode = v28;
  }
  if ( !Mdl )
  {
    v11 = 64LL;
    Mdl = (PMDL)v42;
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
      v30 = (unsigned __int64 *)&Mdl[1];
      v37 = 8 * v11;
      v9 &= ~1u;
      v15 = Mdl + 1;
      if ( v28 )
      {
        v13 = MiCaptureUlongPtrArray(v15, (char *)Src, v11);
        if ( v13 < 0 )
          goto LABEL_58;
        v14 = (PMDL)v30;
      }
      else
      {
        memmove(v15, Src, 8 * v11);
      }
      v16 = (__int64)v31;
      if ( v31->ApcState.Process != Process )
      {
        KiStackAttachProcess(Process, 0, (__int64)&v41);
        v9 |= 1u;
        v16 = (__int64)v31;
      }
      v33 = Process[1].ActiveProcessors.Bitmap[3];
      if ( !v33 )
        break;
      v36 = (unsigned __int64)v14 + v37;
      v13 = 0;
      LOCK_ADDRESS_SPACE(v16, (__int64)Process);
      if ( (Process[1].DirectoryTableBase & 0x2000000000LL) != 0 )
      {
        UNLOCK_ADDRESS_SPACE((__int64)v31, (__int64)Process);
        v13 = -1073741558;
        goto LABEL_58;
      }
      --v31->SpecialApcDisable;
      BugCheckParameter2 = v33 + 16;
      ExAcquireAutoExpandPushLockExclusive(v33 + 16, 0LL);
      v17 = (unsigned __int64 *)v33;
      v18 = *(signed __int64 **)(v33 + 8);
      v19 = v30;
      if ( (unsigned __int64)v30 < v36 )
      {
        while ( 1 )
        {
          v20 = *v19;
          if ( *v19 >= *v17 || !_bittest64(v18, v20) )
            break;
          ++v35;
          _bittestandreset64(v18, v20);
          v21 = *(_QWORD **)(48 * v20 - 0x57FFFFFFFF8LL);
          if ( v21 )
          {
            _InterlockedAnd64((volatile signed __int64 *)(48 * v20 - 0x57FFFFFFFF8LL), 0LL);
            *v21 = 0LL;
            if ( MiPteInShadowRange((unsigned __int64)v21) )
              MiWritePteShadow();
            v17 = (unsigned __int64 *)v33;
          }
          v30 = ++v19;
          if ( (unsigned __int64)v19 >= v36 )
            goto LABEL_41;
        }
        v13 = -1073741800;
LABEL_41:
        v7 = v32;
        Process = (_KPROCESS *)Object;
      }
      KeFlushTb(1u, 0);
      ExReleaseAutoExpandPushLockExclusive(BugCheckParameter2, 0LL);
      KiLeaveGuardedRegionUnsafe((__int64)v31);
      v22 = ((char *)v30 - (char *)Mdl - 48) >> 3;
      v30 = (unsigned __int64 *)v22;
      if ( v22 )
        MiReturnProcessCommitment((__int64)Process, v22);
      UNLOCK_ADDRESS_SPACE((__int64)v31, (__int64)Process);
      v23 = v30;
      Mdl->ByteCount = (_DWORD)v30 << 12;
      if ( v23 )
      {
        v24 = -(__int64)v23;
        _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[2].Affinity.Bitmap[7], v24);
        _InterlockedExchangeAdd64((volatile signed __int64 *)(ProcessPartition + 6264), v24);
        Process = (_KPROCESS *)Object;
        MiSynchronizePageFree((__int64)Object);
        Mdl->MdlFlags |= 2u;
        MiFreePagesFromMdl((ULONG_PTR)Mdl, 0x80000000);
        v7 = v32;
        v23 = v30;
      }
      v7 -= (unsigned __int64)v23;
      v32 = v7;
      if ( v13 || !v7 )
        goto LABEL_58;
      if ( (v9 & 1) != 0 )
      {
        KiUnstackDetachProcess(&v41, 0LL);
        v9 &= ~1u;
      }
      v25 = Process[1].ActiveProcessors.Bitmap[7];
      if ( v25 && ((v26 = *(_WORD *)(v25 + 8), v26 == 332) || v26 == 452) )
        v27 = 4 * v11;
      else
        v27 = v37;
      Src = (char *)Src + v27;
    }
    v13 = -1073741585;
  }
LABEL_58:
  if ( Mdl != (PMDL)v42 )
  {
    Mdl->MdlFlags &= ~2u;
    IoFreeMdl(Mdl);
  }
  if ( (v9 & 1) != 0 )
    KiUnstackDetachProcess(&v41, 0LL);
  if ( (v9 & 2) != 0 )
    ObfDereferenceObjectWithTag(Process, 0x68506D4Du);
  *v40 = v35;
  return v13;
}
