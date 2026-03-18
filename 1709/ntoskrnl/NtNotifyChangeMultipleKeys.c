/*
 * XREFs of NtNotifyChangeMultipleKeys @ 0x14047A598
 * Callers:
 *     NtNotifyChangeKey @ 0x1404797B0 (NtNotifyChangeKey.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140016B40 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140016CF0 (ExReleaseFastMutexUnsafe.c)
 *     KeResetEvent @ 0x1400241B0 (KeResetEvent.c)
 *     KeInitializeApc @ 0x140025DA0 (KeInitializeApc.c)
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140084290 (ObfReferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ObReferenceObjectByNameEx @ 0x140467F24 (ObReferenceObjectByNameEx.c)
 *     CmpFreePostBlock @ 0x14046FAD4 (CmpFreePostBlock.c)
 *     CmpAllocatePostBlock @ 0x14047981C (CmpAllocatePostBlock.c)
 *     CmpNotifyChangeKey @ 0x140479920 (CmpNotifyChangeKey.c)
 *     CmObReferenceObjectByHandle @ 0x14047AF90 (CmObReferenceObjectByHandle.c)
 *     CmpLockRegistry @ 0x14047E6F0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x14047E950 (CmpUnlockRegistry.c)
 *     CmpUnlockKcb @ 0x14047F670 (CmpUnlockKcb.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140482380 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpUnlockTwoKcbs @ 0x140482410 (CmpUnlockTwoKcbs.c)
 *     CmpLockTwoKcbsShared @ 0x1404827AC (CmpLockTwoKcbsShared.c)
 *     ProbeForWrite @ 0x1404A3950 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     CmpCleanupParseContext @ 0x1404E322C (CmpCleanupParseContext.c)
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
  _QWORD *v13; // r13
  int v14; // esi
  struct _KTHREAD *CurrentThread; // rax
  int v16; // r9d
  int v17; // r8d
  char PreviousMode; // cl
  NTSTATUS v19; // ebx
  _QWORD *v20; // r15
  OBJECT_ATTRIBUTES *__attribute__((__org_arrdim(0,0))) PostBlock; // rax
  __int64 v22; // rsi
  int v23; // eax
  char *v24; // r12
  __int64 v25; // rbx
  __int64 v26; // rcx
  ULONG_PTR v27; // rcx
  __int64 v28; // rcx
  unsigned __int64 v29; // rax
  bool v30; // bl
  struct _KTHREAD *v31; // rdx
  void *v32; // r8
  __int16 v33; // ax
  __int64 v34; // rdx
  unsigned __int64 v35; // rcx
  unsigned __int64 v36; // rdx
  void *v38; // rcx
  __int64 v39; // rcx
  ULONG_PTR v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // rcx
  _QWORD *v43; // rax
  unsigned __int8 CurrentIrql; // r8
  __int64 v45; // rdx
  _QWORD *v46; // rcx
  NTSTATUS v47; // eax
  unsigned __int8 v48; // r8
  bool v49; // r15
  __int64 v50; // rax
  _QWORD *v51; // rcx
  __int64 v52; // rdx
  _QWORD *v53; // rcx
  __int64 v54; // rax
  _QWORD *v55; // rcx
  __int64 v56; // rdx
  _QWORD *v57; // rcx
  __int64 v58; // rcx
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
  __int64 v69; // rcx
  ULONG_PTR v70; // rcx
  __int64 v71; // rcx
  PVOID *Object; // [rsp+20h] [rbp-1A8h]
  PVOID *Objecta; // [rsp+20h] [rbp-1A8h]
  __int64 v74; // [rsp+28h] [rbp-1A0h]
  __int64 v75; // [rsp+28h] [rbp-1A0h]
  KPROCESSOR_MODE AccessMode; // [rsp+40h] [rbp-188h]
  bool v77; // [rsp+41h] [rbp-187h]
  bool v78; // [rsp+42h] [rbp-186h]
  bool v79; // [rsp+43h] [rbp-185h]
  char v80; // [rsp+44h] [rbp-184h]
  int v81; // [rsp+48h] [rbp-180h]
  PVOID v83; // [rsp+50h] [rbp-178h] BYREF
  PVOID v84; // [rsp+58h] [rbp-170h]
  __int64 v85; // [rsp+60h] [rbp-168h]
  PVOID v86; // [rsp+68h] [rbp-160h] BYREF
  PIO_STATUS_BLOCK v87; // [rsp+70h] [rbp-158h]
  OBJECT_ATTRIBUTES *__attribute__((__org_arrdim(0,0))) v88; // [rsp+78h] [rbp-150h]
  HANDLE Handle; // [rsp+80h] [rbp-148h]
  _QWORD *v90; // [rsp+88h] [rbp-140h]
  HANDLE v91; // [rsp+90h] [rbp-138h]
  PVOID v92; // [rsp+98h] [rbp-130h] BYREF
  _QWORD v93[30]; // [rsp+A0h] [rbp-128h] BYREF

  Handle = Event;
  v88 = SubordinateObjects;
  v91 = MasterKeyHandle;
  v87 = IoStatusBlock;
  v84 = 0LL;
  v13 = 0LL;
  v90 = 0LL;
  v14 = 1;
  v81 = 1;
  v79 = 0;
  v85 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return -1073741431;
  }
  v17 = 1;
  v80 = 1;
  if ( Count <= 1 )
  {
    v78 = Count == 1;
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    AccessMode = PreviousMode;
    if ( PreviousMode )
    {
      if ( (CompletionFilter & 0x10000000) == 0 )
      {
        v29 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7];
        v30 = 0;
        if ( v29 )
        {
          v33 = *(_WORD *)(v29 + 8);
          if ( v33 == 332 || v33 == 452 )
            v30 = 1;
        }
        v79 = v30;
        ProbeForWrite(IoStatusBlock, 8 * !v30 + 8LL, 4u);
        ProbeForWrite(Buffer, BufferSize, 4u);
        IoStatusBlock->Status = 259;
        if ( v30 )
          HIDWORD(IoStatusBlock->Pointer) = 0;
        else
          IoStatusBlock->Information = 0LL;
        PreviousMode = AccessMode;
        if ( Asynchronous )
        {
          v14 = 2;
          v81 = 2;
        }
        goto LABEL_10;
      }
      if ( Asynchronous && !ApcRoutine && Handle )
      {
        v14 = 4;
        v81 = 4;
LABEL_10:
        if ( CompletionFilter != (CompletionFilter & 0x1000000F) )
        {
          v19 = -1073741811;
          goto LABEL_39;
        }
        LOBYTE(v16) = PreviousMode;
        v19 = CmObReferenceObjectByHandle((_DWORD)v91, 16, v17, v16, (__int64)&v86, 0LL);
        if ( v19 < 0 )
        {
LABEL_39:
          ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          return v19;
        }
        v20 = 0LL;
        v83 = 0LL;
        if ( Count == 1 )
        {
          memset(v93, 0, sizeof(v93));
          v93[19] = &v93[18];
          v93[18] = &v93[18];
          memset(&v93[20], 0, 0x50uLL);
          v19 = ObReferenceObjectByNameEx(
                  (__int64)v88,
                  v34,
                  0x10u,
                  (__int64)CmKeyObjectType,
                  AccessMode,
                  (__int64)v93,
                  &v83);
          CmpCleanupParseContext(v93, 0LL);
          if ( v19 < 0 )
            goto LABEL_38;
          v20 = v83;
          if ( *(_QWORD *)(*((_QWORD *)v86 + 1) + 24LL) == *(_QWORD *)(*((_QWORD *)v83 + 1) + 24LL) )
          {
            ObfDereferenceObject(v83);
            v19 = -1073741811;
            goto LABEL_38;
          }
        }
        PostBlock = (OBJECT_ATTRIBUTES *)CmpAllocatePostBlock(v14, 0x10000, 0LL, 0LL);
        v22 = (__int64)PostBlock;
        v88 = PostBlock;
        if ( !PostBlock )
        {
          if ( Count == 1 )
            ObfDereferenceObject(v20);
          goto LABEL_83;
        }
        if ( Count == 1 )
        {
          v13 = CmpAllocatePostBlock(v81, 0, (__int64)v20, (__int64)PostBlock);
          v90 = v13;
          if ( !v13 )
          {
            ObfDereferenceObject(v20);
            CmpFreePostBlock((PVOID)v22);
LABEL_83:
            v19 = -1073741670;
            goto LABEL_38;
          }
        }
        v23 = v81;
        if ( v81 != 1 )
        {
          if ( Handle )
          {
            v19 = ObReferenceObjectByHandle(Handle, 2u, (POBJECT_TYPE)ExEventObjectType, AccessMode, &v92, 0LL);
            v84 = v92;
            if ( v19 < 0 )
            {
              if ( Count != 1 )
              {
LABEL_86:
                v38 = (void *)v22;
LABEL_87:
                CmpFreePostBlock(v38);
                goto LABEL_38;
              }
LABEL_85:
              CmpFreePostBlock(v13);
              goto LABEL_86;
            }
            KeResetEvent((PRKEVENT)v92);
            v23 = v81;
          }
          if ( v23 == 2 )
          {
            *(_QWORD *)(*(_QWORD *)(v22 + 64) + 104LL) = v87;
            *(_QWORD *)(*(_QWORD *)(v22 + 64) + 8LL) = v84;
            v31 = KeGetCurrentThread();
            v32 = CmpMarkLockTryAcquired;
            if ( ApcRoutine )
              v32 = ApcRoutine;
            KeInitializeApc(
              *(_QWORD *)(v22 + 64) + 16LL,
              (__int64)v31,
              2,
              (__int64)CmpPostApc,
              (__int64)CmpPostApcRunDown,
              (__int64)v32,
              ApcRoutine != 0LL ? AccessMode : 0,
              (__int64)ApcContext);
            v20 = v83;
          }
          else
          {
            **(_QWORD **)(v22 + 64) = v84;
            if ( v23 != 4 )
            {
              *(_QWORD *)(*(_QWORD *)(v22 + 64) + 8LL) = ApcRoutine;
              *(_DWORD *)(*(_QWORD *)(v22 + 64) + 16LL) = (_DWORD)ApcContext;
            }
          }
        }
        CmpLockRegistry();
        if ( Count == 1 )
        {
          v24 = (char *)v86 + 8;
          CmpLockTwoKcbsShared(*((_QWORD *)v86 + 1), v20[1]);
        }
        else
        {
          v24 = (char *)v86 + 8;
          v25 = *((_QWORD *)v86 + 1);
          ExAcquirePushLockSharedEx(v25 + 40, 0LL);
          _InterlockedAdd((volatile signed __int32 *)(v25 + 48), 1u);
          v20 = v83;
        }
        if ( (*((_DWORD *)v86 + 12) & 9) == 0 )
        {
          if ( Count != 1 )
            goto LABEL_26;
          if ( !(unsigned __int8)CmpIsKeyDeletedForKeyBody(v20, 0LL) )
          {
            v35 = *(_QWORD *)(*(_QWORD *)v24 + 24LL);
            v36 = *(_QWORD *)(v20[1] + 24LL);
            if ( v35 != v36 )
            {
              if ( v35 >= v36 )
              {
                ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(v36 + 2832));
                ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(*(_QWORD *)(*(_QWORD *)v24 + 24LL) + 2832LL));
                LODWORD(v83) = 3;
              }
              else
              {
                ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(v35 + 2832));
                ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(*(_QWORD *)(v20[1] + 24LL) + 2832LL));
                LODWORD(v83) = 2;
              }
              v85 = *(_QWORD *)(v20[1] + 24LL);
LABEL_27:
              ExAcquireFastMutexUnsafe(&CmpPostLock);
              v19 = CmpNotifyChangeKey(
                      (__int64)v86,
                      (_QWORD *)v22,
                      CompletionFilter,
                      WatchTree,
                      (__int64)Object,
                      v74,
                      v22);
              if ( v19 >= 0 )
              {
                v77 = v78;
                if ( Count == 1 )
                {
                  ObfReferenceObject(v20);
                  if ( v19 )
                  {
                    v19 = CmpNotifyChangeKey((__int64)v20, v13, CompletionFilter, WatchTree, (__int64)Objecta, v75, v22);
                    v77 = v78;
                    if ( v19 < 0 )
                    {
                      v42 = *(_QWORD *)v22;
                      v43 = *(_QWORD **)(v22 + 8);
                      if ( *(_QWORD *)(*(_QWORD *)v22 + 8LL) != v22 || *v43 != v22 )
                        __fastfail(3u);
                      *v43 = v42;
                      *(_QWORD *)(v42 + 8) = v43;
                      CurrentIrql = KeGetCurrentIrql();
                      __writecr8(1uLL);
                      v45 = *(_QWORD *)(v22 + 16);
                      v46 = *(_QWORD **)(v22 + 24);
                      if ( *(_QWORD *)(v45 + 8) != v22 + 16 || *v46 != v22 + 16 )
                        __fastfail(3u);
                      *v46 = v45;
                      *(_QWORD *)(v45 + 8) = v46;
                      __writecr8(CurrentIrql);
                      v77 = v78;
                    }
                  }
                  else
                  {
                    CmpFreePostBlock(v13);
                    v77 = 0;
                  }
                }
                ExReleaseFastMutexUnsafe(&CmpPostLock);
                if ( (_DWORD)v83 != 1 )
                {
                  if ( (_DWORD)v83 != 2 )
                  {
                    if ( (_DWORD)v83 != 3 )
                      goto LABEL_32;
                    ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(*(_QWORD *)(*(_QWORD *)v24 + 24LL) + 2832LL));
                    v26 = v85;
LABEL_31:
                    ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(v26 + 2832));
LABEL_32:
                    v27 = *(_QWORD *)v24;
                    if ( Count == 1 )
                      CmpUnlockTwoKcbs(v27, v20[1]);
                    else
                      CmpUnlockKcb(v27);
                    CmpUnlockRegistry(v28);
                    if ( v20 )
                      ObfDereferenceObject(v20);
                    if ( v19 >= 0 )
                    {
                      if ( v81 != 1 )
                        goto LABEL_38;
                      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
                      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
                      v80 = 0;
                      v47 = KeWaitForSingleObject(*(PVOID *)(v22 + 64), Executive, AccessMode, 1u, 0LL);
                      v19 = v47;
                      if ( v47 == 257 || v47 == 192 )
                      {
                        CmpLockRegistry();
                        ExAcquireFastMutexUnsafe(&CmpPostLock);
                        v60 = KeGetCurrentIrql();
                        __writecr8(1uLL);
                        v49 = v77;
                        if ( v77 )
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
                        v65 = *(_QWORD *)v22;
                        if ( *(_QWORD *)v22 )
                        {
                          v66 = *(_QWORD **)(v22 + 8);
                          if ( *(_QWORD *)(v65 + 8) != v22 || *v66 != v22 )
                            __fastfail(3u);
                          *v66 = v65;
                          *(_QWORD *)(v65 + 8) = v66;
                        }
                        v67 = *(_QWORD *)(v22 + 16);
                        v68 = *(_QWORD **)(v22 + 24);
                        if ( *(_QWORD *)(v67 + 8) != v22 + 16 || *v68 != v22 + 16 )
                          __fastfail(3u);
                        *v68 = v67;
                        *(_QWORD *)(v67 + 8) = v68;
                        __writecr8(v60);
                        ExReleaseFastMutexUnsafe(&CmpPostLock);
                        CmpUnlockRegistry(v69);
                      }
                      else
                      {
                        CmpLockRegistry();
                        ExAcquireFastMutexUnsafe(&CmpPostLock);
                        v48 = KeGetCurrentIrql();
                        __writecr8(1uLL);
                        v49 = v77;
                        if ( v77 )
                        {
                          v50 = *v13;
                          if ( *v13 )
                          {
                            v51 = (_QWORD *)v13[1];
                            if ( *(_QWORD **)(v50 + 8) != v13 || (_QWORD *)*v51 != v13 )
                              __fastfail(3u);
                            *v51 = v50;
                            *(_QWORD *)(v50 + 8) = v51;
                          }
                          v52 = v13[2];
                          v53 = (_QWORD *)v13[3];
                          if ( *(_QWORD **)(v52 + 8) != v13 + 2 || (_QWORD *)*v53 != v13 + 2 )
                            __fastfail(3u);
                          *v53 = v52;
                          *(_QWORD *)(v52 + 8) = v53;
                        }
                        v54 = *(_QWORD *)v22;
                        if ( *(_QWORD *)v22 )
                        {
                          v55 = *(_QWORD **)(v22 + 8);
                          if ( *(_QWORD *)(v54 + 8) != v22 || *v55 != v22 )
                            __fastfail(3u);
                          *v55 = v54;
                          *(_QWORD *)(v54 + 8) = v55;
                        }
                        v56 = *(_QWORD *)(v22 + 16);
                        v57 = *(_QWORD **)(v22 + 24);
                        if ( *(_QWORD *)(v56 + 8) != v22 + 16 || *v57 != v22 + 16 )
                          __fastfail(3u);
                        *v57 = v56;
                        *(_QWORD *)(v56 + 8) = v57;
                        __writecr8(v48);
                        ExReleaseFastMutexUnsafe(&CmpPostLock);
                        CmpUnlockRegistry(v58);
                        v19 = *(_DWORD *)(*(_QWORD *)(v22 + 64) + 24LL);
                        v59 = v87;
                        v87->Status = v19;
                        if ( v79 )
                          HIDWORD(v59->Pointer) = 0;
                        else
                          v59->Information = 0LL;
                      }
                      if ( !v49 )
                        goto LABEL_86;
                      goto LABEL_85;
                    }
                    CmpFreePostBlock((PVOID)v22);
                    if ( v84 )
                      ObfDereferenceObject(v84);
LABEL_38:
                    ObfDereferenceObject(v86);
                    if ( !v80 )
                      return v19;
                    goto LABEL_39;
                  }
                  ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(v85 + 2832));
                }
                v26 = *(_QWORD *)(*(_QWORD *)v24 + 24LL);
                goto LABEL_31;
              }
              ExReleaseFastMutexUnsafe(&CmpPostLock);
              if ( (_DWORD)v83 != 1 )
              {
                if ( (_DWORD)v83 != 2 )
                {
                  if ( (_DWORD)v83 != 3 )
                    goto LABEL_95;
                  ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(*(_QWORD *)(*(_QWORD *)v24 + 24LL) + 2832LL));
                  v39 = v85;
LABEL_94:
                  ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(v39 + 2832));
LABEL_95:
                  v40 = *(_QWORD *)v24;
                  if ( Count == 1 )
                    CmpUnlockTwoKcbs(v40, v20[1]);
                  else
                    CmpUnlockKcb(v40);
                  CmpUnlockRegistry(v41);
                  if ( v84 )
                    ObfDereferenceObject(v84);
                  if ( Count == 1 )
                  {
                    v38 = v13;
                    goto LABEL_87;
                  }
                  goto LABEL_38;
                }
                ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(v85 + 2832));
              }
              v39 = *(_QWORD *)(*(_QWORD *)v24 + 24LL);
              goto LABEL_94;
            }
LABEL_26:
            ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(*(_QWORD *)(*(_QWORD *)v24 + 24LL) + 2832LL));
            LODWORD(v83) = 1;
            goto LABEL_27;
          }
        }
        v70 = *(_QWORD *)v24;
        if ( Count == 1 )
          CmpUnlockTwoKcbs(v70, v20[1]);
        else
          CmpUnlockKcb(v70);
        CmpUnlockRegistry(v71);
        if ( v84 )
          ObfDereferenceObject(v84);
        if ( Count == 1 )
          CmpFreePostBlock(v13);
        CmpFreePostBlock((PVOID)v22);
        v19 = -1073741444;
        goto LABEL_38;
      }
    }
    else
    {
      if ( !Asynchronous )
        goto LABEL_10;
      v14 = 3;
      v81 = 3;
      if ( !Count )
        goto LABEL_10;
    }
  }
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return -1073741811;
}
