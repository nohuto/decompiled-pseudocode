/*
 * XREFs of NtFreeUserPhysicalPages @ 0x14026303C
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireAutoExpandPushLockExclusive @ 0x140007E50 (ExAcquireAutoExpandPushLockExclusive.c)
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiUnlockWorkingSetShared @ 0x14001CF10 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140025A60 (MiLockWorkingSetShared.c)
 *     MiInsertTbFlushEntry @ 0x140026270 (MiInsertTbFlushEntry.c)
 *     IoFreeMdl @ 0x140041DB0 (IoFreeMdl.c)
 *     MiWorkingSetIsContended @ 0x14004EA30 (MiWorkingSetIsContended.c)
 *     MiPageTableLockIsContended @ 0x14004EA5C (MiPageTableLockIsContended.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     IoAllocateMdl @ 0x140098CD0 (IoAllocateMdl.c)
 *     KeShouldYieldProcessor @ 0x1400A9D70 (KeShouldYieldProcessor.c)
 *     ExReleaseAutoExpandPushLockExclusive @ 0x1400B5B90 (ExReleaseAutoExpandPushLockExclusive.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x1400E6714 (UNLOCK_ADDRESS_SPACE.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     MiFlushTbList @ 0x140116C90 (MiFlushTbList.c)
 *     MiLockPageTableInternal @ 0x140120C90 (MiLockPageTableInternal.c)
 *     MiUnlockPageTableInternal @ 0x140123AD0 (MiUnlockPageTableInternal.c)
 *     MiFreePagesFromMdl @ 0x140136794 (MiFreePagesFromMdl.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ObReferenceObjectByHandleWithTag @ 0x14057B220 (ObReferenceObjectByHandleWithTag.c)
 *     ExSystemExceptionFilter @ 0x1405BCA80 (ExSystemExceptionFilter.c)
 *     MiCaptureUlongPtrArray @ 0x14074F88C (MiCaptureUlongPtrArray.c)
 *     MiReturnProcessPhysicalPages @ 0x140754078 (MiReturnProcessPhysicalPages.c)
 */

NTSTATUS __stdcall NtFreeUserPhysicalPages(HANDLE ProcessHandle, PULONG_PTR NumberOfPages, PULONG_PTR UserPfnArray)
{
  PULONG_PTR v3; // r13
  struct _KTHREAD *CurrentThread; // rdx
  KPROCESSOR_MODE PreviousMode; // r8
  __int64 v7; // rcx
  unsigned __int64 v8; // rsi
  int v10; // ebx
  PMDL Mdl; // r15
  unsigned __int64 v12; // r12
  unsigned __int16 *Process; // rdi
  int v14; // r14d
  unsigned __int64 *v15; // r13
  __int64 v16; // r14
  struct _MDL *v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rcx
  __int64 v22; // r8
  unsigned __int64 *v23; // rcx
  signed __int64 *v24; // rdx
  unsigned __int64 v25; // rsi
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rdi
  __int64 v28; // rax
  unsigned __int64 v29; // rsi
  unsigned __int64 v30; // rsi
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r10
  char v35; // al
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r8
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // r13
  __int64 v43; // r8
  __int16 v44; // r9
  __int64 v45; // rax
  __int16 v46; // cx
  __int64 v47; // rax
  unsigned __int8 v48; // [rsp+40h] [rbp-3F8h]
  KPROCESSOR_MODE v49; // [rsp+41h] [rbp-3F7h]
  PVOID Object; // [rsp+48h] [rbp-3F0h] BYREF
  unsigned __int64 v51; // [rsp+50h] [rbp-3E8h]
  unsigned __int16 *v52; // [rsp+58h] [rbp-3E0h]
  unsigned __int64 v53; // [rsp+60h] [rbp-3D8h]
  struct _KTHREAD *v54; // [rsp+68h] [rbp-3D0h]
  PULONG_PTR v55; // [rsp+70h] [rbp-3C8h]
  int v56; // [rsp+78h] [rbp-3C0h]
  unsigned __int64 v57; // [rsp+80h] [rbp-3B8h]
  void *Src; // [rsp+88h] [rbp-3B0h]
  __int64 v59; // [rsp+90h] [rbp-3A8h]
  unsigned __int64 v60; // [rsp+98h] [rbp-3A0h]
  __int64 v61; // [rsp+A0h] [rbp-398h]
  __int64 v62; // [rsp+A8h] [rbp-390h]
  __int64 v63; // [rsp+B0h] [rbp-388h]
  signed __int64 *v64; // [rsp+B8h] [rbp-380h]
  ULONG_PTR BugCheckParameter2; // [rsp+C0h] [rbp-378h]
  __int64 v66; // [rsp+C8h] [rbp-370h]
  _BYTE v67[48]; // [rsp+D0h] [rbp-368h] BYREF
  int v68; // [rsp+100h] [rbp-338h] BYREF
  __int16 v69; // [rsp+104h] [rbp-334h]
  __int64 v70; // [rsp+108h] [rbp-330h]
  __int64 v71; // [rsp+110h] [rbp-328h]
  __int64 v72; // [rsp+118h] [rbp-320h]
  _BYTE v73[560]; // [rsp+1C0h] [rbp-278h] BYREF

  Src = UserPfnArray;
  v3 = NumberOfPages;
  v55 = NumberOfPages;
  CurrentThread = KeGetCurrentThread();
  v54 = CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  v49 = PreviousMode;
  if ( PreviousMode )
  {
    v7 = (__int64)v3;
    if ( (unsigned __int64)v3 >= 0x7FFFFFFF0000LL )
      v7 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v7 = *(_QWORD *)v7;
    v8 = *v3;
    v53 = *v3;
    *v3 = 0LL;
  }
  else
  {
    v8 = *v3;
    v53 = *v3;
  }
  if ( !v8 )
    return -1073741584;
  v10 = 0;
  v60 = 0LL;
  Mdl = 0LL;
  v12 = 0LL;
  if ( v8 > 0x40 )
  {
    v12 = v8;
    if ( v8 > 0xFFFFE )
      v12 = 1048574LL;
    do
    {
      Mdl = IoAllocateMdl(0LL, (_DWORD)v12 << 12, 0, 0, 0LL);
      if ( Mdl )
        break;
      v12 >>= 1;
    }
    while ( v12 > 0x40 );
    CurrentThread = v54;
    v3 = v55;
    PreviousMode = v49;
  }
  if ( !Mdl )
  {
    v12 = 64LL;
    Mdl = (PMDL)v73;
  }
  Process = (unsigned __int16 *)CurrentThread->ApcState.Process;
  Object = Process;
  if ( ProcessHandle == (HANDLE)-1LL )
  {
    Object = Process;
    goto LABEL_20;
  }
  v14 = ObReferenceObjectByHandleWithTag(
          ProcessHandle,
          8u,
          (POBJECT_TYPE)PsProcessType,
          PreviousMode,
          0x68506D4Du,
          &Object,
          0LL);
  Process = (unsigned __int16 *)Object;
  if ( v14 >= 0 )
  {
    v10 = 2;
LABEL_20:
    v52 = Process + 640;
    v66 = *(_QWORD *)(qword_1403CBD88 + 8LL * Process[727]);
    while ( 1 )
    {
      if ( v8 < v12 )
        v12 = v8;
      Mdl->Next = 0LL;
      Mdl->Size = 8 * ((((v12 << 12) + 4095) >> 12) + 6);
      Mdl->MdlFlags = 0;
      Mdl->StartVa = 0LL;
      Mdl->ByteOffset = 0;
      Mdl->ByteCount = (_DWORD)v12 << 12;
      v15 = (unsigned __int64 *)&Mdl[1];
      v16 = 8 * v12;
      v61 = 8 * v12;
      v10 &= ~1u;
      v17 = Mdl + 1;
      if ( v49 )
      {
        v14 = MiCaptureUlongPtrArray(v17);
        if ( v14 < 0 )
          goto LABEL_74;
        v16 = v61;
      }
      else
      {
        memmove(v17, Src, 8 * v12);
      }
      v18 = (__int64)v54;
      if ( (unsigned __int16 *)v54->ApcState.Process != Process )
      {
        KiStackAttachProcess((_KPROCESS *)Process, 0, (__int64)v67);
        v10 |= 1u;
        v18 = (__int64)v54;
      }
      v59 = *((_QWORD *)Process + 129);
      if ( !v59 )
        break;
      v57 = (unsigned __int64)v15 + v16;
      v14 = 0;
      v56 = 0;
      v51 = 0LL;
      v48 = 17;
      v70 = 20LL;
      v68 = 1;
      v69 = 0;
      v71 = 0LL;
      v72 = 0LL;
      --*(_WORD *)(v18 + 486);
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(Process + 436), 0LL);
      v21 = (__int64)v54;
      LOBYTE(v54[1].Queue) |= 1u;
      if ( (*((_DWORD *)Process + 193) & 0x20) != 0 )
      {
        UNLOCK_ADDRESS_SPACE(v21, (__int64)Process, v19, v20);
        v14 = -1073741558;
        goto LABEL_74;
      }
      --*(_WORD *)(v21 + 486);
      BugCheckParameter2 = v59 + 16;
      ExAcquireAutoExpandPushLockExclusive(v59 + 16, 0LL);
      v23 = (unsigned __int64 *)v59;
      v24 = *(signed __int64 **)(v59 + 8);
      v64 = v24;
      if ( (unsigned __int64)v15 < v57 )
      {
        v25 = 0LL;
        while ( 1 )
        {
          v26 = *v15;
          if ( *v15 >= *v23 || !_bittest64(v24, v26) )
            break;
          ++v60;
          _bittestandreset64(v24, v26);
          v63 = 48 * v26 - 0x58000000000LL;
          v27 = *(_QWORD *)(v63 + 8);
          if ( v27 )
          {
            v28 = ((v27 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v62 = v28;
            v29 = v51;
            if ( v51 != v28 )
            {
              if ( v51 )
              {
                MiFlushTbList((__int64)&v68, (__int64)v24, v22);
                MiUnlockPageTableInternal((__int64)v52, v29);
                v28 = v62;
              }
              v30 = v28;
              v51 = v28;
              if ( v48 == 17 )
                v48 = MiLockWorkingSetShared((__int64)v52);
              MiLockPageTableInternal((__int64)v52, v30, 0LL);
            }
            *(_QWORD *)v27 = ZeroPte;
            if ( MiPteInShadowRange(v27) )
              MiWritePteShadow(v32, v31, v33);
            MiInsertTbFlushEntry((__int64)&v68, (__int64)((v27 << 25) - (v34 << 25)) >> 16, 1LL, 0);
            _InterlockedAnd64((volatile signed __int64 *)(v63 + 8), 0LL);
            v25 = v51;
          }
          v35 = ++v56;
          if ( v48 != 17
            && (v35 & 0x3F) == 0
            && ((unsigned int)MiWorkingSetIsContended((__int64)v52)
             || (unsigned int)MiPageTableLockIsContended(v37, v25)
             || KeShouldYieldProcessor()) )
          {
            MiFlushTbList((__int64)&v68, v36, v22);
            MiUnlockPageTableInternal((__int64)v52, v25);
            MiUnlockWorkingSetShared((__int64)v52, v48, v38);
            v51 = 0LL;
            v48 = 17;
            v25 = 0LL;
          }
          ++v15;
          v23 = (unsigned __int64 *)v59;
          v24 = v64;
          if ( (unsigned __int64)v15 >= v57 )
            goto LABEL_54;
        }
        v14 = -1073741800;
LABEL_54:
        v8 = v53;
        Process = (unsigned __int16 *)Object;
      }
      if ( v51 )
      {
        MiFlushTbList((__int64)&v68, (__int64)v24, v22);
        MiUnlockPageTableInternal((__int64)v52, v51);
        MiUnlockWorkingSetShared((__int64)v52, v48, v39);
      }
      ExReleaseAutoExpandPushLockExclusive(BugCheckParameter2, 0LL);
      KiLeaveGuardedRegionUnsafe((__int64)v54);
      v42 = ((char *)v15 - (char *)Mdl - 48) >> 3;
      if ( v42 )
      {
        v57 = -v42;
        _InterlockedExchangeAdd64((volatile signed __int64 *)Process + 158, -v42);
        v8 = v53;
        Process = (unsigned __int16 *)Object;
      }
      else
      {
        v57 = 0LL;
      }
      UNLOCK_ADDRESS_SPACE((__int64)v54, (__int64)Process, v40, v41);
      Mdl->ByteCount = (_DWORD)v42 << 12;
      if ( v42 )
      {
        MiReturnProcessPhysicalPages(Process, v42, v43, 0LL);
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v66 + 7544), v57);
        Mdl->MdlFlags |= v44 + 2;
        MiFreePagesFromMdl((ULONG_PTR)Mdl, 0x80000000);
        v8 = v53;
        Process = (unsigned __int16 *)Object;
      }
      v8 -= v42;
      v53 = v8;
      if ( v14 || !v8 )
        goto LABEL_74;
      if ( (v10 & 1) != 0 )
      {
        KiUnstackDetachProcess((__int64)v67, 0LL);
        v10 &= ~1u;
      }
      v45 = *((_QWORD *)Process + 133);
      if ( v45 && ((v46 = *(_WORD *)(v45 + 8), v46 == 332) || v46 == 452) )
        v47 = 4 * v12;
      else
        v47 = v61;
      Src = (char *)Src + v47;
    }
    v14 = -1073741585;
LABEL_74:
    v3 = v55;
  }
  if ( Mdl != (PMDL)v73 )
  {
    Mdl->MdlFlags &= ~2u;
    IoFreeMdl(Mdl);
  }
  if ( (v10 & 1) != 0 )
    KiUnstackDetachProcess((__int64)v67, 0LL);
  if ( (v10 & 2) != 0 )
    ObfDereferenceObjectWithTag(Process, 0x68506D4Du);
  *v3 = v60;
  return v14;
}
