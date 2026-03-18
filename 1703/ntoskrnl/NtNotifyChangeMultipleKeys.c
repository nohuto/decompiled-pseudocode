/*
 * XREFs of NtNotifyChangeMultipleKeys @ 0x14048E630
 * Callers:
 *     NtNotifyChangeKey @ 0x140491EB8 (NtNotifyChangeKey.c)
 * Callees:
 *     KeResetEvent @ 0x14004BD20 (KeResetEvent.c)
 *     ExAcquireFastMutexUnsafe @ 0x140052AB0 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140052C30 (ExReleaseFastMutexUnsafe.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1400EEA40 (ObfReferenceObject.c)
 *     KeInitializeApc @ 0x14010F400 (KeInitializeApc.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     CmObReferenceObjectByHandle @ 0x14048F490 (CmObReferenceObjectByHandle.c)
 *     CmpNotifyChangeKey @ 0x140491AD8 (CmpNotifyChangeKey.c)
 *     CmpAllocatePostBlock @ 0x140491DB4 (CmpAllocatePostBlock.c)
 *     ObReferenceObjectByNameEx @ 0x1404CAE14 (ObReferenceObjectByNameEx.c)
 *     CmpFreePostBlock @ 0x1404CE0B0 (CmpFreePostBlock.c)
 *     CmpCleanupParseContext @ 0x1404D5440 (CmpCleanupParseContext.c)
 *     CmpUnlockTwoKcbs @ 0x1404FDB60 (CmpUnlockTwoKcbs.c)
 *     CmpLockTwoKcbsShared @ 0x1404FDFB4 (CmpLockTwoKcbsShared.c)
 *     CmpLockRegistry @ 0x1404FF6F0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x1404FF92C (CmpUnlockRegistry.c)
 *     CmpLockKcbShared @ 0x1404FF9AC (CmpLockKcbShared.c)
 *     CmpUnlockKcb @ 0x140500590 (CmpUnlockKcb.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140501430 (CmpIsKeyDeletedForKeyBody.c)
 *     ProbeForWrite @ 0x140527A00 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __stdcall NtNotifyChangeMultipleKeys(
        HANDLE MasterKeyHandle,
        ULONG Count,
        OBJECT_ATTRIBUTES SubordinateObjects[],
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG CompletionFilter,
        BOOLEAN WatchTree,
        PVOID Buffer,
        ULONG BufferSize,
        BOOLEAN Asynchronous)
{
  _QWORD *v13; // r12
  unsigned int v14; // esi
  struct _KTHREAD *CurrentThread; // rax
  int v16; // r8d
  int v17; // r9d
  char PreviousMode; // cl
  int v19; // edi
  _QWORD *v20; // r13
  __int64 PostBlock; // rax
  __int64 v22; // rcx
  __int64 v23; // rsi
  unsigned int v24; // eax
  char *v25; // r15
  int v26; // r9d
  __int64 v27; // rcx
  void *v28; // rcx
  unsigned __int64 v29; // rax
  char v30; // di
  struct _KTHREAD *v31; // rdx
  void *v32; // r8
  int v33; // edx
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // rdx
  int v36; // r9d
  __int16 v37; // ax
  _QWORD *v39; // rcx
  __int64 v40; // rcx
  void *v41; // rcx
  __int64 v42; // rcx
  _QWORD *v43; // rax
  unsigned __int8 CurrentIrql; // r8
  __int64 v45; // rdx
  _QWORD *v46; // rcx
  NTSTATUS v47; // eax
  __int64 v48; // rcx
  unsigned __int8 v49; // r8
  bool v50; // r15
  __int64 v51; // rax
  _QWORD *v52; // rcx
  __int64 v53; // rdx
  _QWORD *v54; // rcx
  __int64 v55; // rax
  _QWORD *v56; // rcx
  __int64 v57; // rdx
  _QWORD *v58; // rcx
  PIO_STATUS_BLOCK v59; // rax
  unsigned __int8 v60; // r8
  __int64 v61; // rax
  _QWORD *v62; // rcx
  __int64 v63; // rdx
  _QWORD *v64; // rcx
  __int64 v65; // rax
  _QWORD *v66; // rcx
  __int64 v67; // rdx
  _QWORD *v68; // rcx
  void *v69; // rcx
  int Object; // [rsp+20h] [rbp-1A8h]
  int Objecta; // [rsp+20h] [rbp-1A8h]
  int HandleInformation; // [rsp+28h] [rbp-1A0h]
  int HandleInformationa; // [rsp+28h] [rbp-1A0h]
  KPROCESSOR_MODE AccessMode; // [rsp+40h] [rbp-188h]
  bool v75; // [rsp+41h] [rbp-187h]
  bool v76; // [rsp+42h] [rbp-186h]
  char v77; // [rsp+43h] [rbp-185h]
  char v78; // [rsp+44h] [rbp-184h]
  unsigned int v79; // [rsp+48h] [rbp-180h]
  PVOID v81; // [rsp+50h] [rbp-178h] BYREF
  PVOID v82; // [rsp+58h] [rbp-170h]
  __int64 v83; // [rsp+60h] [rbp-168h]
  PVOID v84; // [rsp+68h] [rbp-160h] BYREF
  PIO_STATUS_BLOCK v85; // [rsp+70h] [rbp-158h]
  OBJECT_ATTRIBUTES *__attribute__((__org_arrdim(0,0))) v86; // [rsp+78h] [rbp-150h]
  HANDLE Handle; // [rsp+80h] [rbp-148h]
  _QWORD *v88; // [rsp+88h] [rbp-140h]
  HANDLE v89; // [rsp+90h] [rbp-138h]
  PVOID v90; // [rsp+98h] [rbp-130h] BYREF
  _BYTE v91[224]; // [rsp+A0h] [rbp-128h] BYREF

  Handle = Event;
  v86 = SubordinateObjects;
  v89 = MasterKeyHandle;
  v85 = IoStatusBlock;
  v82 = 0LL;
  v13 = 0LL;
  v88 = 0LL;
  v14 = 1;
  v79 = 1;
  v77 = 0;
  v83 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    return -1073741431;
  }
  v78 = 1;
  if ( Count <= 1 )
  {
    v76 = Count == 1;
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    AccessMode = PreviousMode;
    if ( PreviousMode )
    {
      if ( (CompletionFilter & 0x10000000) == 0 )
      {
        v29 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7];
        if ( v29 && ((v37 = *(_WORD *)(v29 + 8), v37 == 332) || v37 == 452) )
        {
          v30 = 1;
          v77 = 1;
        }
        else
        {
          v30 = 0;
          v77 = 0;
        }
        ProbeForWrite(IoStatusBlock, (-(__int64)(v30 != 0) & 0xFFFFFFFFFFFFFFF8uLL) + 16, 4u);
        ProbeForWrite(Buffer, BufferSize, 4u);
        if ( v30 )
        {
          IoStatusBlock->Pointer = (PVOID)259;
        }
        else
        {
          IoStatusBlock->Status = 259;
          IoStatusBlock->Information = 0LL;
        }
        PreviousMode = AccessMode;
        if ( Asynchronous )
        {
          v14 = 2;
          v79 = 2;
        }
        goto LABEL_10;
      }
      if ( Asynchronous && !ApcRoutine && Handle )
      {
        v14 = 4;
        v79 = 4;
LABEL_10:
        if ( CompletionFilter != (CompletionFilter & 0x1000000F) )
        {
          v19 = -1073741811;
          goto LABEL_39;
        }
        LOBYTE(v17) = PreviousMode;
        v19 = CmObReferenceObjectByHandle((_DWORD)v89, 16, v16, v17, (__int64)&v84, 0LL);
        if ( v19 < 0 )
        {
LABEL_39:
          ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
          return v19;
        }
        v20 = 0LL;
        v81 = 0LL;
        if ( Count == 1 )
        {
          memset(v91, 0, sizeof(v91));
          v19 = ObReferenceObjectByNameEx(
                  (_DWORD)v86,
                  v33,
                  16,
                  (_DWORD)CmKeyObjectType,
                  AccessMode,
                  (__int64)v91,
                  (__int64)&v81);
          CmpCleanupParseContext(v91, 0LL);
          if ( v19 < 0 )
            goto LABEL_38;
          v20 = v81;
          if ( *(_QWORD *)(*((_QWORD *)v84 + 1) + 24LL) == *(_QWORD *)(*((_QWORD *)v81 + 1) + 24LL) )
          {
            ObfDereferenceObject(v81);
            v19 = -1073741811;
            goto LABEL_38;
          }
        }
        PostBlock = CmpAllocatePostBlock(v14, 0x10000LL, 0LL, 0LL);
        v23 = PostBlock;
        v86 = (OBJECT_ATTRIBUTES *)PostBlock;
        if ( !PostBlock )
        {
          if ( Count == 1 )
            ObfDereferenceObject(v20);
          goto LABEL_83;
        }
        if ( Count == 1 )
        {
          v13 = (_QWORD *)CmpAllocatePostBlock(v79, 0LL, v20, PostBlock);
          v88 = v13;
          if ( !v13 )
          {
            ObfDereferenceObject(v20);
            CmpFreePostBlock(v23);
LABEL_83:
            v19 = -1073741670;
            goto LABEL_38;
          }
        }
        v24 = v79;
        if ( v79 != 1 )
        {
          if ( Handle )
          {
            v19 = ObReferenceObjectByHandle(Handle, 2u, (POBJECT_TYPE)ExEventObjectType, AccessMode, &v90, 0LL);
            v82 = v90;
            if ( v19 < 0 )
            {
              if ( Count != 1 )
              {
LABEL_86:
                v39 = (_QWORD *)v23;
LABEL_87:
                CmpFreePostBlock(v39);
                goto LABEL_38;
              }
LABEL_85:
              CmpFreePostBlock(v13);
              goto LABEL_86;
            }
            KeResetEvent((PRKEVENT)v90);
            v24 = v79;
          }
          if ( v24 == 2 )
          {
            *(_QWORD *)(*(_QWORD *)(v23 + 64) + 104LL) = v85;
            *(_QWORD *)(*(_QWORD *)(v23 + 64) + 8LL) = v82;
            v31 = KeGetCurrentThread();
            v32 = CmpMarkLockTryAcquired;
            if ( ApcRoutine )
              v32 = ApcRoutine;
            KeInitializeApc(
              *(_QWORD *)(v23 + 64) + 16LL,
              (__int64)v31,
              2,
              (__int64)CmpPostApc,
              (__int64)CmpPostApcRunDown,
              (__int64)v32,
              ApcRoutine != 0LL ? AccessMode : 0,
              (__int64)ApcContext);
            v20 = v81;
          }
          else
          {
            v22 = *(_QWORD *)(v23 + 64);
            *(_QWORD *)v22 = v82;
            if ( v24 != 4 )
            {
              *(_QWORD *)(*(_QWORD *)(v23 + 64) + 8LL) = ApcRoutine;
              v22 = *(_QWORD *)(v23 + 64);
              *(_DWORD *)(v22 + 16) = (_DWORD)ApcContext;
            }
          }
        }
        CmpLockRegistry(v22);
        if ( Count == 1 )
        {
          v25 = (char *)v84 + 8;
          CmpLockTwoKcbsShared(*((_QWORD *)v84 + 1), v20[1]);
        }
        else
        {
          v25 = (char *)v84 + 8;
          CmpLockKcbShared(*((_QWORD *)v84 + 1));
        }
        if ( !(unsigned __int8)CmpIsKeyDeletedForKeyBody(v84, 0LL) )
        {
          if ( Count != 1 )
          {
LABEL_26:
            ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(*(_QWORD *)(*(_QWORD *)v25 + 24LL) + 2832LL));
            LODWORD(v81) = 1;
            goto LABEL_27;
          }
          if ( !(unsigned __int8)CmpIsKeyDeletedForKeyBody(v20, 0LL) )
          {
            v34 = *(_QWORD *)(*(_QWORD *)v25 + 24LL);
            v35 = *(_QWORD *)(v20[1] + 24LL);
            if ( v34 < v35 )
            {
              ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(v34 + 2832));
              ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(*(_QWORD *)(v20[1] + 24LL) + 2832LL));
              LODWORD(v81) = 2;
            }
            else
            {
              if ( v34 == v35 )
                goto LABEL_26;
              ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(v35 + 2832));
              ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(*(_QWORD *)(*(_QWORD *)v25 + 24LL) + 2832LL));
              LODWORD(v81) = 3;
            }
            v83 = *(_QWORD *)(v20[1] + 24LL);
LABEL_27:
            ExAcquireFastMutexUnsafe(&CmpPostLock);
            LOBYTE(v26) = WatchTree;
            v19 = CmpNotifyChangeKey((_DWORD)v84, v23, CompletionFilter, v26, Object, HandleInformation, v23);
            if ( v19 >= 0 )
            {
              v75 = v76;
              if ( Count == 1 )
              {
                ObfReferenceObject(v20);
                if ( v19 )
                {
                  LOBYTE(v36) = WatchTree;
                  v19 = CmpNotifyChangeKey(
                          (_DWORD)v20,
                          (_DWORD)v13,
                          CompletionFilter,
                          v36,
                          Objecta,
                          HandleInformationa,
                          v23);
                  v75 = v76;
                  if ( v19 < 0 )
                  {
                    v42 = *(_QWORD *)v23;
                    v43 = *(_QWORD **)(v23 + 8);
                    if ( *(_QWORD *)(*(_QWORD *)v23 + 8LL) != v23 || *v43 != v23 )
                      __fastfail(3u);
                    *v43 = v42;
                    *(_QWORD *)(v42 + 8) = v43;
                    CurrentIrql = KeGetCurrentIrql();
                    __writecr8(1uLL);
                    v45 = *(_QWORD *)(v23 + 16);
                    v46 = *(_QWORD **)(v23 + 24);
                    if ( *(_QWORD *)(v45 + 8) != v23 + 16 || *v46 != v23 + 16 )
                      __fastfail(3u);
                    *v46 = v45;
                    *(_QWORD *)(v45 + 8) = v46;
                    __writecr8(CurrentIrql);
                    v75 = v76;
                  }
                }
                else
                {
                  CmpFreePostBlock(v13);
                  v75 = 0;
                }
              }
              ExReleaseFastMutexUnsafe(&CmpPostLock);
              if ( (_DWORD)v81 != 1 )
              {
                if ( (_DWORD)v81 != 2 )
                {
                  if ( (_DWORD)v81 != 3 )
                    goto LABEL_32;
                  ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(*(_QWORD *)(*(_QWORD *)v25 + 24LL) + 2832LL));
                  v27 = v83;
LABEL_31:
                  ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(v27 + 2832));
LABEL_32:
                  v28 = *(void **)v25;
                  if ( Count == 1 )
                    CmpUnlockTwoKcbs(v28, v20[1]);
                  else
                    CmpUnlockKcb(v28);
                  CmpUnlockRegistry();
                  if ( v20 )
                    ObfDereferenceObject(v20);
                  if ( v19 >= 0 )
                  {
                    if ( v79 != 1 )
                      goto LABEL_38;
                    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
                    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
                    v78 = 0;
                    v47 = KeWaitForSingleObject(*(PVOID *)(v23 + 64), Executive, AccessMode, 1u, 0LL);
                    v19 = v47;
                    if ( v47 == 257 || v47 == 192 )
                    {
                      CmpLockRegistry(v48);
                      ExAcquireFastMutexUnsafe(&CmpPostLock);
                      v60 = KeGetCurrentIrql();
                      __writecr8(1uLL);
                      v50 = v75;
                      if ( v75 )
                      {
                        v61 = *v13;
                        if ( *v13 )
                        {
                          v62 = (_QWORD *)v13[1];
                          if ( *(_QWORD **)(v61 + 8) != v13 || (_QWORD *)*v62 != v13 )
                            __fastfail(3u);
                          *v62 = v61;
                          *(_QWORD *)(v61 + 8) = v62;
                        }
                        v63 = v13[2];
                        v64 = (_QWORD *)v13[3];
                        if ( *(_QWORD **)(v63 + 8) != v13 + 2 || (_QWORD *)*v64 != v13 + 2 )
                          __fastfail(3u);
                        *v64 = v63;
                        *(_QWORD *)(v63 + 8) = v64;
                      }
                      v65 = *(_QWORD *)v23;
                      if ( *(_QWORD *)v23 )
                      {
                        v66 = *(_QWORD **)(v23 + 8);
                        if ( *(_QWORD *)(v65 + 8) != v23 || *v66 != v23 )
                          __fastfail(3u);
                        *v66 = v65;
                        *(_QWORD *)(v65 + 8) = v66;
                      }
                      v67 = *(_QWORD *)(v23 + 16);
                      v68 = *(_QWORD **)(v23 + 24);
                      if ( *(_QWORD *)(v67 + 8) != v23 + 16 || *v68 != v23 + 16 )
                        __fastfail(3u);
                      *v68 = v67;
                      *(_QWORD *)(v67 + 8) = v68;
                      __writecr8(v60);
                      ExReleaseFastMutexUnsafe(&CmpPostLock);
                      CmpUnlockRegistry();
                    }
                    else
                    {
                      CmpLockRegistry(v48);
                      ExAcquireFastMutexUnsafe(&CmpPostLock);
                      v49 = KeGetCurrentIrql();
                      __writecr8(1uLL);
                      v50 = v75;
                      if ( v75 )
                      {
                        v51 = *v13;
                        if ( *v13 )
                        {
                          v52 = (_QWORD *)v13[1];
                          if ( *(_QWORD **)(v51 + 8) != v13 || (_QWORD *)*v52 != v13 )
                            __fastfail(3u);
                          *v52 = v51;
                          *(_QWORD *)(v51 + 8) = v52;
                        }
                        v53 = v13[2];
                        v54 = (_QWORD *)v13[3];
                        if ( *(_QWORD **)(v53 + 8) != v13 + 2 || (_QWORD *)*v54 != v13 + 2 )
                          __fastfail(3u);
                        *v54 = v53;
                        *(_QWORD *)(v53 + 8) = v54;
                      }
                      v55 = *(_QWORD *)v23;
                      if ( *(_QWORD *)v23 )
                      {
                        v56 = *(_QWORD **)(v23 + 8);
                        if ( *(_QWORD *)(v55 + 8) != v23 || *v56 != v23 )
                          __fastfail(3u);
                        *v56 = v55;
                        *(_QWORD *)(v55 + 8) = v56;
                      }
                      v57 = *(_QWORD *)(v23 + 16);
                      v58 = *(_QWORD **)(v23 + 24);
                      if ( *(_QWORD *)(v57 + 8) != v23 + 16 || *v58 != v23 + 16 )
                        __fastfail(3u);
                      *v58 = v57;
                      *(_QWORD *)(v57 + 8) = v58;
                      __writecr8(v49);
                      ExReleaseFastMutexUnsafe(&CmpPostLock);
                      CmpUnlockRegistry();
                      v19 = *(_DWORD *)(*(_QWORD *)(v23 + 64) + 24LL);
                      v59 = v85;
                      v85->Status = v19;
                      if ( v77 )
                        HIDWORD(v59->Pointer) = 0;
                      else
                        v59->Information = 0LL;
                    }
                    if ( !v50 )
                      goto LABEL_86;
                    goto LABEL_85;
                  }
                  CmpFreePostBlock(v23);
                  if ( v82 )
                    ObfDereferenceObject(v82);
LABEL_38:
                  ObfDereferenceObject(v84);
                  if ( !v78 )
                    return v19;
                  goto LABEL_39;
                }
                ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(v83 + 2832));
              }
              v27 = *(_QWORD *)(*(_QWORD *)v25 + 24LL);
              goto LABEL_31;
            }
            ExReleaseFastMutexUnsafe(&CmpPostLock);
            if ( (_DWORD)v81 != 1 )
            {
              if ( (_DWORD)v81 != 2 )
              {
                if ( (_DWORD)v81 != 3 )
                  goto LABEL_95;
                ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(*(_QWORD *)(*(_QWORD *)v25 + 24LL) + 2832LL));
                v40 = v83;
LABEL_94:
                ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(v40 + 2832));
LABEL_95:
                v41 = *(void **)v25;
                if ( Count == 1 )
                  CmpUnlockTwoKcbs(v41, v20[1]);
                else
                  CmpUnlockKcb(v41);
                CmpUnlockRegistry();
                if ( v82 )
                  ObfDereferenceObject(v82);
                if ( Count == 1 )
                {
                  v39 = v13;
                  goto LABEL_87;
                }
                goto LABEL_38;
              }
              ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(v83 + 2832));
            }
            v40 = *(_QWORD *)(*(_QWORD *)v25 + 24LL);
            goto LABEL_94;
          }
        }
        v69 = *(void **)v25;
        if ( Count == 1 )
          CmpUnlockTwoKcbs(v69, v20[1]);
        else
          CmpUnlockKcb(v69);
        CmpUnlockRegistry();
        if ( v82 )
          ObfDereferenceObject(v82);
        if ( Count == 1 )
          CmpFreePostBlock(v13);
        CmpFreePostBlock(v23);
        v19 = -1073741444;
        goto LABEL_38;
      }
    }
    else
    {
      if ( !Asynchronous )
        goto LABEL_10;
      v14 = 3;
      v79 = 3;
      if ( !Count )
        goto LABEL_10;
    }
  }
  ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return -1073741811;
}
