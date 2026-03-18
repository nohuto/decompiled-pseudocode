/*
 * XREFs of NtNotifyChangeMultipleKeys @ 0x1404A26F0
 * Callers:
 *     NtNotifyChangeKey @ 0x1404A2684 (NtNotifyChangeKey.c)
 * Callees:
 *     KeResetEvent @ 0x140060F40 (KeResetEvent.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     ExAcquireFastMutexUnsafe @ 0x140068180 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140068300 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1401038E0 (ObfReferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 *     KeInitializeApc @ 0x140132910 (KeInitializeApc.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     CmpCleanupParseContext @ 0x14049FF18 (CmpCleanupParseContext.c)
 *     CmpAllocatePostBlock @ 0x1404A2F7C (CmpAllocatePostBlock.c)
 *     CmpNotifyChangeKey @ 0x1404A3080 (CmpNotifyChangeKey.c)
 *     CmObReferenceObjectByHandle @ 0x1404A48AC (CmObReferenceObjectByHandle.c)
 *     CmpLockRegistry @ 0x1404A71E0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x1404A8188 (CmpUnlockRegistry.c)
 *     CmpUnlockKcb @ 0x1404AA790 (CmpUnlockKcb.c)
 *     CmpUnlockTwoKcbs @ 0x1404ACE30 (CmpUnlockTwoKcbs.c)
 *     CmpLockTwoKcbsShared @ 0x1404ACECC (CmpLockTwoKcbsShared.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1404AECB0 (CmpIsKeyDeletedForKeyBody.c)
 *     ObReferenceObjectByNameEx @ 0x1404DE1F0 (ObReferenceObjectByNameEx.c)
 *     CmpFreePostBlock @ 0x1404E224C (CmpFreePostBlock.c)
 *     ProbeForWrite @ 0x14059C6A0 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
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
  void *v14; // r13
  struct _KTHREAD *CurrentThread; // rax
  int v16; // r9d
  int v17; // r8d
  char PreviousMode; // cl
  unsigned int v19; // r14d
  int v20; // edi
  _QWORD *v21; // r15
  ULONG v22; // edi
  wchar_t *p_Length; // rcx
  OBJECT_ATTRIBUTES *PostBlock; // r14
  unsigned int v25; // edx
  PVOID *ObjectName; // rax
  ULONG_PTR *v27; // r13
  ULONG_PTR v28; // rdi
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // r15
  bool v34; // zf
  ULONG_PTR v35; // rcx
  BOOLEAN v36; // r12
  unsigned __int64 v38; // rax
  unsigned __int8 v39; // di
  struct _KTHREAD *v40; // rdx
  void *v41; // r8
  int v42; // edx
  unsigned __int64 v43; // rcx
  unsigned __int64 v44; // rdx
  __int64 v45; // r9
  __int64 v46; // r15
  char v47; // al
  char v48; // bl
  __int16 v49; // ax
  __int64 v50; // r15
  char v51; // al
  ULONG_PTR v52; // rcx
  PVOID v53; // rcx
  __int64 v54; // rdx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // r14
  __int64 v58; // r14
  __int64 v59; // r14
  ULONG_PTR v60; // rcx
  OBJECT_ATTRIBUTES *v61; // rcx
  OBJECT_ATTRIBUTES **RootDirectory; // rax
  unsigned __int8 CurrentIrql; // r8
  PUNICODE_STRING v64; // rdx
  OBJECT_ATTRIBUTES **v65; // rcx
  NTSTATUS v66; // eax
  __int64 v67; // rcx
  unsigned __int8 v68; // r8
  _QWORD *v69; // rbx
  PVOID *v70; // rax
  PVOID *v71; // rcx
  __int64 v72; // rdx
  _QWORD *v73; // rcx
  __int64 v74; // rax
  OBJECT_ATTRIBUTES **v75; // rcx
  PUNICODE_STRING v76; // rdx
  OBJECT_ATTRIBUTES **v77; // rcx
  PIO_STATUS_BLOCK v78; // rax
  unsigned __int8 v79; // r8
  _QWORD *v80; // rbx
  PVOID *v81; // rax
  PVOID *v82; // rcx
  __int64 v83; // rdx
  _QWORD *v84; // rcx
  __int64 v85; // rax
  OBJECT_ATTRIBUTES **v86; // rcx
  PUNICODE_STRING v87; // rdx
  OBJECT_ATTRIBUTES **v88; // rcx
  BOOLEAN v89; // [rsp+40h] [rbp-1C8h]
  KPROCESSOR_MODE AccessMode; // [rsp+41h] [rbp-1C7h]
  bool v91; // [rsp+42h] [rbp-1C6h]
  bool v92; // [rsp+43h] [rbp-1C5h]
  char v93; // [rsp+44h] [rbp-1C4h]
  unsigned int v94; // [rsp+48h] [rbp-1C0h]
  PVOID v96; // [rsp+50h] [rbp-1B8h] BYREF
  PVOID P; // [rsp+58h] [rbp-1B0h]
  HANDLE v98; // [rsp+60h] [rbp-1A8h]
  __int64 v99; // [rsp+68h] [rbp-1A0h]
  PVOID v100; // [rsp+70h] [rbp-198h] BYREF
  PVOID v101; // [rsp+78h] [rbp-190h]
  PIO_STATUS_BLOCK v102; // [rsp+80h] [rbp-188h]
  OBJECT_ATTRIBUTES *__attribute__((__org_arrdim(0,0))) v103; // [rsp+88h] [rbp-180h]
  HANDLE Handle; // [rsp+90h] [rbp-178h]
  PVOID Object; // [rsp+98h] [rbp-170h] BYREF
  _QWORD v106[38]; // [rsp+A0h] [rbp-168h] BYREF

  Handle = Event;
  v103 = SubordinateObjects;
  v98 = MasterKeyHandle;
  v102 = IoStatusBlock;
  v101 = 0LL;
  v14 = 0LL;
  P = 0LL;
  v94 = 1;
  v93 = 0;
  v99 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v89 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( !v89 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return -1073741431;
  }
  v17 = 1;
  if ( Count <= 1 )
  {
    v92 = Count == 1;
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    AccessMode = PreviousMode;
    if ( PreviousMode )
    {
      if ( (CompletionFilter & 0x10000000) != 0 )
      {
        if ( Asynchronous && !ApcRoutine && Event )
        {
          v19 = 4;
          v94 = 4;
          goto LABEL_9;
        }
        goto LABEL_91;
      }
      v38 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7];
      if ( v38 && ((v49 = *(_WORD *)(v38 + 8), v49 == 332) || v49 == 452) )
      {
        v39 = 1;
        v93 = 1;
      }
      else
      {
        v39 = 0;
        v93 = 0;
      }
      ProbeForWrite(IoStatusBlock, 8 * (v39 ^ 1LL) + 8, 4u);
      ProbeForWrite(Buffer, BufferSize, 4u);
      IoStatusBlock->Status = 259;
      if ( v39 )
        HIDWORD(IoStatusBlock->Pointer) = 0;
      else
        IoStatusBlock->Information = 0LL;
      PreviousMode = AccessMode;
      if ( Asynchronous )
      {
        v19 = 2;
        v94 = 2;
      }
      else
      {
        v19 = 1;
      }
LABEL_9:
      if ( CompletionFilter != (CompletionFilter & 0x1000000F) )
      {
        v20 = -1073741811;
        goto LABEL_41;
      }
      LOBYTE(v16) = PreviousMode;
      v20 = CmObReferenceObjectByHandle((_DWORD)v98, 16, v17, v16, (__int64)&v100, 0LL);
      if ( v20 < 0 )
      {
LABEL_41:
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        return v20;
      }
      v21 = 0LL;
      v96 = 0LL;
      v22 = Count;
      if ( Count == 1 )
      {
        memset(v106, 0, 0x128uLL);
        v106[19] = &v106[18];
        v106[18] = &v106[18];
        memset(&v106[27], 0, 0x50uLL);
        v20 = ObReferenceObjectByNameEx(
                (_DWORD)v103,
                v42,
                16,
                (_DWORD)CmKeyObjectType,
                AccessMode,
                (__int64)v106,
                (__int64)&v96);
        CmpCleanupParseContext((__int64)v106, 0);
        if ( v20 < 0 )
          goto LABEL_39;
        v21 = v96;
        if ( *(_QWORD *)(*((_QWORD *)v100 + 1) + 24LL) == *(_QWORD *)(*((_QWORD *)v96 + 1) + 24LL) )
        {
          ObfDereferenceObject(v96);
          v20 = -1073741811;
          goto LABEL_39;
        }
        v22 = 1;
      }
      PostBlock = (OBJECT_ATTRIBUTES *)CmpAllocatePostBlock(v19, 0x10000LL, 0LL, 0LL);
      v103 = PostBlock;
      if ( PostBlock )
      {
        if ( v22 != 1 || (v14 = (void *)CmpAllocatePostBlock(v94, 0LL, v21, PostBlock), (P = v14) != 0LL) )
        {
          v25 = v94;
          if ( v94 != 1 )
          {
            if ( Handle )
            {
              v20 = ObReferenceObjectByHandle(Handle, 2u, (POBJECT_TYPE)ExEventObjectType, AccessMode, &Object, 0LL);
              v101 = Object;
              if ( v20 < 0 )
              {
                if ( Count == 1 )
                  CmpFreePostBlock(v14);
                v53 = PostBlock;
LABEL_105:
                CmpFreePostBlock(v53);
                goto LABEL_39;
              }
              KeResetEvent((PRKEVENT)Object);
              v22 = Count;
              v25 = v94;
            }
            p_Length = (wchar_t *)v101;
            ObjectName = (PVOID *)PostBlock[1].ObjectName;
            if ( v25 == 2 )
            {
              ObjectName[13] = v102;
              PostBlock[1].ObjectName->Buffer = p_Length;
              v40 = KeGetCurrentThread();
              v41 = AlpcMessageDeleteProcedure;
              if ( ApcRoutine )
                v41 = ApcRoutine;
              KeInitializeApc(
                (__int64)&PostBlock[1].ObjectName[1],
                (__int64)v40,
                2,
                (__int64)CmpPostApc,
                (__int64)CmpPostApcRunDown,
                (__int64)v41,
                ApcRoutine != 0LL ? AccessMode : 0,
                (__int64)ApcContext);
              v21 = v96;
            }
            else
            {
              *ObjectName = v101;
              if ( v25 != 4 )
              {
                PostBlock[1].ObjectName->Buffer = (wchar_t *)ApcRoutine;
                p_Length = &PostBlock[1].ObjectName->Length;
                *((_DWORD *)p_Length + 4) = (_DWORD)ApcContext;
              }
            }
          }
          CmpLockRegistry(p_Length);
          v27 = (ULONG_PTR *)((char *)v100 + 8);
          if ( v22 == 1 )
          {
            CmpLockTwoKcbsShared(*v27, v21[1]);
          }
          else
          {
            v28 = *v27;
            ExAcquirePushLockSharedEx(*v27 + 40, 0LL);
            _InterlockedAdd((volatile signed __int32 *)(v28 + 48), 1u);
            v21 = v96;
            v22 = Count;
          }
          if ( (*((_DWORD *)v100 + 12) & 9) == 0 )
          {
            if ( v22 != 1 )
            {
LABEL_25:
              ExAcquirePushLockExclusiveEx(*(_QWORD *)(*v27 + 24) + 1672LL, 0LL);
              LODWORD(v98) = 1;
              goto LABEL_26;
            }
            if ( !(unsigned __int8)CmpIsKeyDeletedForKeyBody(v21, 0LL) )
            {
              v43 = *(_QWORD *)(*v27 + 24);
              v44 = *(_QWORD *)(v21[1] + 24LL);
              if ( v43 < v44 )
              {
                ExAcquirePushLockExclusiveEx(v43 + 1672, 0LL);
                ExAcquirePushLockExclusiveEx(*(_QWORD *)(v21[1] + 24LL) + 1672LL, 0LL);
                LODWORD(v98) = 2;
              }
              else
              {
                if ( v43 == v44 )
                  goto LABEL_25;
                ExAcquirePushLockExclusiveEx(v44 + 1672, 0LL);
                ExAcquirePushLockExclusiveEx(*(_QWORD *)(*v27 + 24) + 1672LL, 0LL);
                LODWORD(v98) = 3;
              }
              v99 = *(_QWORD *)(v21[1] + 24LL);
LABEL_26:
              ExAcquireFastMutexUnsafe(&CmpPostLock);
              LOBYTE(v29) = WatchTree;
              v20 = CmpNotifyChangeKey(v100, PostBlock, CompletionFilter, v29);
              if ( v20 >= 0 )
              {
                v91 = v92;
                if ( Count == 1 )
                {
                  ObfReferenceObject(v21);
                  if ( v20 )
                  {
                    LOBYTE(v45) = WatchTree;
                    v20 = CmpNotifyChangeKey(v21, P, CompletionFilter, v45);
                    v91 = v92;
                    if ( v20 < 0 )
                    {
                      v61 = *(OBJECT_ATTRIBUTES **)&PostBlock->Length;
                      RootDirectory = (OBJECT_ATTRIBUTES **)PostBlock->RootDirectory;
                      if ( *(OBJECT_ATTRIBUTES **)(*(_QWORD *)&PostBlock->Length + 8LL) != PostBlock
                        || *RootDirectory != PostBlock )
                      {
                        __fastfail(3u);
                      }
                      *RootDirectory = v61;
                      v61->RootDirectory = RootDirectory;
                      CurrentIrql = KeGetCurrentIrql();
                      __writecr8(1uLL);
                      v64 = PostBlock->ObjectName;
                      v65 = *(OBJECT_ATTRIBUTES ***)&PostBlock->Attributes;
                      if ( (PUNICODE_STRING *)v64->Buffer != &PostBlock->ObjectName
                        || *v65 != (OBJECT_ATTRIBUTES *)&PostBlock->ObjectName )
                      {
                        __fastfail(3u);
                      }
                      *v65 = (OBJECT_ATTRIBUTES *)v64;
                      v64->Buffer = (wchar_t *)v65;
                      __writecr8(CurrentIrql);
                      v91 = v92;
                    }
                  }
                  else
                  {
                    CmpFreePostBlock(P);
                    v91 = 0;
                  }
                }
                ExReleaseFastMutexUnsafe(&CmpPostLock);
                if ( (_DWORD)v98 == 1 )
                {
                  v33 = *(_QWORD *)(*v27 + 24);
                  v34 = (_InterlockedExchangeAdd64((volatile signed __int64 *)(v33 + 1672), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2;
                }
                else
                {
                  if ( (_DWORD)v98 == 2 )
                  {
                    v50 = v99;
                    v51 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v99 + 1672), 0xFFFFFFFFFFFFFFFFuLL);
                    if ( (v51 & 2) != 0 && (v51 & 4) == 0 )
                      ExfTryToWakePushLock((volatile signed __int64 *)(v50 + 1672), v30, v31, v32);
                    KeAbPostRelease(v50 + 1672);
                    v33 = *(_QWORD *)(*v27 + 24);
                  }
                  else
                  {
                    if ( (_DWORD)v98 != 3 )
                    {
LABEL_33:
                      v35 = *v27;
                      if ( Count == 1 )
                        CmpUnlockTwoKcbs(v35, v21[1]);
                      else
                        CmpUnlockKcb(v35);
                      CmpUnlockRegistry();
                      if ( v21 )
                        ObfDereferenceObject(v21);
                      if ( v20 < 0 )
                      {
                        CmpFreePostBlock(PostBlock);
                        if ( v101 )
                          ObfDereferenceObject(v101);
                      }
                      else if ( v94 == 1 )
                      {
                        ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
                        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
                        v66 = KeWaitForSingleObject(PostBlock[1].ObjectName, Executive, AccessMode, 1u, 0LL);
                        v20 = v66;
                        if ( v66 == 257 || v66 == 192 )
                        {
                          CmpLockRegistry(v67);
                          ExAcquireFastMutexUnsafe(&CmpPostLock);
                          v79 = KeGetCurrentIrql();
                          __writecr8(1uLL);
                          v80 = P;
                          if ( v91 )
                          {
                            v81 = *(PVOID **)P;
                            if ( *(_QWORD *)P )
                            {
                              v82 = (PVOID *)*((_QWORD *)P + 1);
                              if ( v81[1] != P || *v82 != P )
                                __fastfail(3u);
                              *v82 = v81;
                              v81[1] = v82;
                            }
                            v83 = v80[2];
                            v84 = (_QWORD *)v80[3];
                            if ( *(_QWORD **)(v83 + 8) != v80 + 2 || (_QWORD *)*v84 != v80 + 2 )
                              __fastfail(3u);
                            *v84 = v83;
                            *(_QWORD *)(v83 + 8) = v84;
                          }
                          v85 = *(_QWORD *)&PostBlock->Length;
                          if ( *(_QWORD *)&PostBlock->Length )
                          {
                            v86 = (OBJECT_ATTRIBUTES **)PostBlock->RootDirectory;
                            if ( *(OBJECT_ATTRIBUTES **)(v85 + 8) != PostBlock || *v86 != PostBlock )
                              __fastfail(3u);
                            *v86 = (OBJECT_ATTRIBUTES *)v85;
                            *(_QWORD *)(v85 + 8) = v86;
                          }
                          v87 = PostBlock->ObjectName;
                          v88 = *(OBJECT_ATTRIBUTES ***)&PostBlock->Attributes;
                          if ( (PUNICODE_STRING *)v87->Buffer != &PostBlock->ObjectName
                            || *v88 != (OBJECT_ATTRIBUTES *)&PostBlock->ObjectName )
                          {
                            __fastfail(3u);
                          }
                          *v88 = (OBJECT_ATTRIBUTES *)v87;
                          v87->Buffer = (wchar_t *)v88;
                          __writecr8(v79);
                          ExReleaseFastMutexUnsafe(&CmpPostLock);
                          CmpUnlockRegistry();
                          if ( v91 )
                            CmpFreePostBlock(v80);
                          CmpFreePostBlock(PostBlock);
                          v36 = 0;
                        }
                        else
                        {
                          CmpLockRegistry(v67);
                          ExAcquireFastMutexUnsafe(&CmpPostLock);
                          v68 = KeGetCurrentIrql();
                          __writecr8(1uLL);
                          v69 = P;
                          if ( v91 )
                          {
                            v70 = *(PVOID **)P;
                            if ( *(_QWORD *)P )
                            {
                              v71 = (PVOID *)*((_QWORD *)P + 1);
                              if ( v70[1] != P || *v71 != P )
                                __fastfail(3u);
                              *v71 = v70;
                              v70[1] = v71;
                            }
                            v72 = v69[2];
                            v73 = (_QWORD *)v69[3];
                            if ( *(_QWORD **)(v72 + 8) != v69 + 2 || (_QWORD *)*v73 != v69 + 2 )
                              __fastfail(3u);
                            *v73 = v72;
                            *(_QWORD *)(v72 + 8) = v73;
                          }
                          v74 = *(_QWORD *)&PostBlock->Length;
                          if ( *(_QWORD *)&PostBlock->Length )
                          {
                            v75 = (OBJECT_ATTRIBUTES **)PostBlock->RootDirectory;
                            if ( *(OBJECT_ATTRIBUTES **)(v74 + 8) != PostBlock || *v75 != PostBlock )
                              __fastfail(3u);
                            *v75 = (OBJECT_ATTRIBUTES *)v74;
                            *(_QWORD *)(v74 + 8) = v75;
                          }
                          v76 = PostBlock->ObjectName;
                          v77 = *(OBJECT_ATTRIBUTES ***)&PostBlock->Attributes;
                          if ( (PUNICODE_STRING *)v76->Buffer != &PostBlock->ObjectName
                            || *v77 != (OBJECT_ATTRIBUTES *)&PostBlock->ObjectName )
                          {
                            __fastfail(3u);
                          }
                          *v77 = (OBJECT_ATTRIBUTES *)v76;
                          v76->Buffer = (wchar_t *)v77;
                          __writecr8(v68);
                          ExReleaseFastMutexUnsafe(&CmpPostLock);
                          CmpUnlockRegistry();
                          v20 = (int)PostBlock[1].ObjectName[1].Buffer;
                          v78 = v102;
                          v102->Status = v20;
                          if ( v93 )
                            HIDWORD(v78->Pointer) = 0;
                          else
                            v78->Information = 0LL;
                          v36 = 0;
                          if ( v91 )
                            CmpFreePostBlock(v69);
                          CmpFreePostBlock(PostBlock);
                        }
LABEL_40:
                        ObfDereferenceObject(v100);
                        if ( !v36 )
                          return v20;
                        goto LABEL_41;
                      }
LABEL_39:
                      v36 = v89;
                      goto LABEL_40;
                    }
                    v46 = *(_QWORD *)(*v27 + 24);
                    v47 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v46 + 1672), 0xFFFFFFFFFFFFFFFFuLL);
                    if ( (v47 & 2) != 0 && (v47 & 4) == 0 )
                      ExfTryToWakePushLock((volatile signed __int64 *)(v46 + 1672), v30, v31, v32);
                    KeAbPostRelease(v46 + 1672);
                    v33 = v99;
                  }
                  v48 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v33 + 1672), 0xFFFFFFFFFFFFFFFFuLL);
                  if ( (v48 & 2) == 0 )
                  {
LABEL_32:
                    KeAbPostRelease(v33 + 1672);
                    v21 = v96;
                    goto LABEL_33;
                  }
                  v34 = (v48 & 4) == 0;
                }
                if ( v34 )
                  ExfTryToWakePushLock((volatile signed __int64 *)(v33 + 1672), v30, v31, v32);
                goto LABEL_32;
              }
              ExReleaseFastMutexUnsafe(&CmpPostLock);
              if ( (_DWORD)v98 != 1 )
              {
                if ( (_DWORD)v98 != 2 )
                {
                  if ( (_DWORD)v98 != 3 )
                  {
LABEL_119:
                    v60 = *v27;
                    if ( Count == 1 )
                      CmpUnlockTwoKcbs(v60, v21[1]);
                    else
                      CmpUnlockKcb(v60);
                    CmpUnlockRegistry();
                    if ( v101 )
                      ObfDereferenceObject(v101);
                    if ( Count != 1 )
                      goto LABEL_39;
                    v53 = P;
                    goto LABEL_105;
                  }
                  v59 = *(_QWORD *)(*v27 + 24);
                  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v59 + 1672), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                    ExfTryToWakePushLock((volatile signed __int64 *)(v59 + 1672), v54, v55, v56);
                  KeAbPostRelease(v59 + 1672);
                  v58 = v99;
LABEL_116:
                  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v58 + 1672), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                    ExfTryToWakePushLock((volatile signed __int64 *)(v58 + 1672), v54, v55, v56);
                  KeAbPostRelease(v58 + 1672);
                  v21 = v96;
                  goto LABEL_119;
                }
                v57 = v99;
                if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v99 + 1672), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                  ExfTryToWakePushLock((volatile signed __int64 *)(v57 + 1672), v54, v55, v56);
                KeAbPostRelease(v57 + 1672);
              }
              v58 = *(_QWORD *)(*v27 + 24);
              goto LABEL_116;
            }
          }
          v52 = *v27;
          if ( v22 == 1 )
            CmpUnlockTwoKcbs(v52, v21[1]);
          else
            CmpUnlockKcb(v52);
          CmpUnlockRegistry();
          if ( v101 )
            ObfDereferenceObject(v101);
          if ( v22 == 1 )
            CmpFreePostBlock(P);
          CmpFreePostBlock(PostBlock);
          v20 = -1073741444;
          goto LABEL_39;
        }
        ObfDereferenceObject(v21);
        CmpFreePostBlock(PostBlock);
      }
      else if ( v22 == 1 )
      {
        ObfDereferenceObject(v21);
      }
      v20 = -1073741670;
      goto LABEL_39;
    }
    if ( !Asynchronous )
    {
      v19 = 1;
      goto LABEL_9;
    }
    v19 = 3;
    v94 = 3;
    if ( !Count )
      goto LABEL_9;
  }
LABEL_91:
  ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return -1073741811;
}
