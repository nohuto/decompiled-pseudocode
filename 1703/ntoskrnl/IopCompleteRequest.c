/*
 * XREFs of IopCompleteRequest @ 0x1400DDEE0
 * Callers:
 *     NtSetInformationFile @ 0x14004FBC0 (NtSetInformationFile.c)
 *     IopfCompleteRequest @ 0x1400DEE70 (IopfCompleteRequest.c)
 *     IoRemoveIoCompletion @ 0x1400E9520 (IoRemoveIoCompletion.c)
 *     NtQueryInformationFile @ 0x14052EC70 (NtQueryInformationFile.c)
 *     IopSynchronousServiceTail @ 0x14053A760 (IopSynchronousServiceTail.c)
 *     IopAbortRequest @ 0x1406886E0 (IopAbortRequest.c)
 * Callees:
 *     KeInsertQueueEx @ 0x140010EB0 (KeInsertQueueEx.c)
 *     KiWakeOtherQueueWaiters @ 0x140011010 (KiWakeOtherQueueWaiters.c)
 *     KiWakeQueueWaiter @ 0x140011680 (KiWakeQueueWaiter.c)
 *     IopDequeueIrpFromFileObject @ 0x1400117F0 (IopDequeueIrpFromFileObject.c)
 *     IopUpdateWriteTransferCount @ 0x140022DF0 (IopUpdateWriteTransferCount.c)
 *     ExReturnPoolQuota @ 0x140024F70 (ExReturnPoolQuota.c)
 *     IopInterlockedAdd @ 0x140032364 (IopInterlockedAdd.c)
 *     IopFreeIrpExtension @ 0x14003AE54 (IopFreeIrpExtension.c)
 *     KeInsertQueueApc @ 0x14003FEC0 (KeInsertQueueApc.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     KxWaitForSpinLockAndAcquire @ 0x14004FB00 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireKobjectLockSafe @ 0x140051920 (KiAcquireKobjectLockSafe.c)
 *     MmUnmapLockedPages @ 0x1400A3B30 (MmUnmapLockedPages.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     KiExitDispatcher @ 0x1400E0220 (KiExitDispatcher.c)
 *     ObDereferenceObjectDeferDelete @ 0x1400E19E0 (ObDereferenceObjectDeferDelete.c)
 *     KiTryUnwaitThread @ 0x1400E1A90 (KiTryUnwaitThread.c)
 *     IopDequeueIrpFromThread @ 0x1400ED860 (IopDequeueIrpFromThread.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     IoFreeIrp @ 0x1400F1190 (IoFreeIrp.c)
 *     IopFreeIrp @ 0x1400F11C0 (IopFreeIrp.c)
 *     KeInitializeApc @ 0x14010F400 (KeInitializeApc.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401894B0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     IopExceptionFilter @ 0x1401EFA10 (IopExceptionFilter.c)
 *     IopFreeReserveIrp @ 0x1401EFAB8 (IopFreeReserveIrp.c)
 *     KeIsThreadRunning @ 0x1401FCAFC (KeIsThreadRunning.c)
 *     KiAcquireSpinLockInstrumented @ 0x1401FEC08 (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1401FECBC (KiReleaseSpinLockInstrumented.c)
 *     EtwTraceEnqueueWork @ 0x1402535C8 (EtwTraceEnqueueWork.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     IovFreeIrpPrivate @ 0x140763334 (IovFreeIrpPrivate.c)
 */

void __fastcall IopCompleteRequest(__int64 a1, __int64 a2, _QWORD *a3, __int64 *a4, _QWORD *a5)
{
  ULONG_PTR v6; // rbx
  struct _KTHREAD *CurrentThread; // r13
  __int64 v8; // rdi
  int v9; // eax
  int v10; // esi
  struct _MDL *v11; // r14
  __int64 v12; // r15
  __int64 *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r14
  int v16; // r14d
  int v17; // eax
  _QWORD *v18; // r14
  _QWORD *v19; // rax
  unsigned __int64 v20; // r11
  int v21; // eax
  unsigned __int64 v22; // rdx
  __int64 v23; // rax
  unsigned __int64 v24; // rcx
  struct _KTHREAD *v25; // rax
  unsigned __int8 v26; // r14
  volatile signed __int32 *v27; // rcx
  _QWORD *v28; // rax
  __int64 v29; // rdx
  _QWORD *v30; // rcx
  volatile signed __int64 *v31; // rcx
  unsigned __int64 v32; // rax
  int v33; // ecx
  __int64 v34; // rdx
  __int64 v35; // rcx
  struct _KPRCB *v36; // r11
  char v37; // al
  __int16 v38; // r8
  unsigned __int16 v39; // r8
  int v40; // r14d
  _GENERAL_LOOKASIDE *L; // rsi
  char v42; // al
  struct _MDL *Next; // r15
  __int64 v44; // rcx
  struct _KPRCB *CurrentPrcb; // rdx
  _GENERAL_LOOKASIDE *P; // rcx
  int v47; // ecx
  int v48; // eax
  __int64 *v49; // rax
  bool v50; // zf
  __int64 *v51; // rcx
  int v52; // eax
  volatile signed __int32 *v53; // r14
  _QWORD *v54; // rax
  __int64 v55; // rdx
  _QWORD *v56; // rcx
  unsigned __int64 v57; // rax
  unsigned __int64 v58; // r8
  __int64 v59; // r9
  ULONG_PTR v60; // rcx
  unsigned __int64 v61; // rcx
  struct _KTHREAD *v62; // rax
  void *v63; // rcx
  struct _KEVENT *v64; // rcx
  int v65; // r8d
  int v66; // ecx
  int v67; // r8d
  char v68; // al
  _QWORD *v69; // rdx
  __int64 v70; // rcx
  char v71; // al
  __int64 *v72; // r8
  __int64 **v73; // rax
  char v74; // al
  _QWORD *v75; // rdx
  __int64 v76; // rcx
  char v77; // al
  int v78; // r10d
  __int64 **v79; // r9
  int v80; // r10d
  __int64 **v81; // r9
  char v82; // cl
  _QWORD *v83; // r9
  __int64 v84; // rcx
  char v85; // al
  int v86; // r10d
  _QWORD *v87; // r8
  __int64 v88; // r8
  unsigned __int8 v89; // al
  __int64 v90; // rdx
  __int64 v91; // r9
  unsigned __int8 v92; // al
  __int64 v93; // rdx
  __int64 v94; // r9
  _QWORD *v95; // rax
  _QWORD *v96; // rdx
  __int64 v97; // rcx
  _QWORD *v98; // rax
  char v99; // al
  unsigned __int8 IsThreadRunning; // al
  __int64 v101; // rdx
  __int64 v102; // r9
  _QWORD *v103; // r9
  __int64 v104; // rcx
  char v105; // al
  int v106; // r10d
  _QWORD *v107; // r8
  __int64 v108; // r8
  unsigned __int8 v109; // al
  __int64 v110; // rdx
  __int64 v111; // r9
  struct _KPRCB *v112; // [rsp+40h] [rbp-A8h]
  __int64 v113; // [rsp+40h] [rbp-A8h]
  __int64 v114; // [rsp+40h] [rbp-A8h]
  struct _KPRCB *v115; // [rsp+48h] [rbp-A0h]
  __int64 v116; // [rsp+48h] [rbp-A0h]
  __int64 v117; // [rsp+48h] [rbp-A0h]
  struct _KPRCB *v118; // [rsp+50h] [rbp-98h]
  __int64 *v119; // [rsp+50h] [rbp-98h]
  struct _KPRCB *v120; // [rsp+50h] [rbp-98h]
  struct _KPRCB *v121; // [rsp+50h] [rbp-98h]
  __int64 *v122; // [rsp+58h] [rbp-90h]
  _QWORD *v123; // [rsp+58h] [rbp-90h]
  _QWORD *v124; // [rsp+58h] [rbp-90h]
  struct _KPRCB *v125; // [rsp+60h] [rbp-88h]
  _KTHREAD *v126; // [rsp+70h] [rbp-78h]
  __int64 *v127; // [rsp+70h] [rbp-78h]
  _QWORD *v128; // [rsp+70h] [rbp-78h]
  _QWORD *v129; // [rsp+70h] [rbp-78h]
  char CurrentIrql; // [rsp+78h] [rbp-70h]
  __int64 *v131; // [rsp+78h] [rbp-70h]
  _KTHREAD *v132; // [rsp+78h] [rbp-70h]
  char v133; // [rsp+80h] [rbp-68h]
  _KTHREAD *v134; // [rsp+80h] [rbp-68h]
  _KTHREAD *v135; // [rsp+80h] [rbp-68h]
  int v136; // [rsp+88h] [rbp-60h] BYREF
  __int64 v137; // [rsp+90h] [rbp-58h]
  void *retaddr; // [rsp+E8h] [rbp+0h]
  int v139; // [rsp+F0h] [rbp+8h]
  unsigned __int8 v140; // [rsp+F0h] [rbp+8h]
  bool v141; // [rsp+100h] [rbp+18h]
  int v142; // [rsp+108h] [rbp+20h] BYREF

  v6 = a1 - 120;
  CurrentThread = KeGetCurrentThread();
  v8 = *a4;
  v141 = a3 && *a3 == 1LL;
  v9 = *(_DWORD *)(v6 + 16);
  if ( (v9 & 0x80u) != 0 )
  {
    *(_DWORD *)(v8 + 56) = *(_DWORD *)(v6 + 48);
    *(_QWORD *)(v6 + 160) = *a5;
    KeSetEvent((PRKEVENT)(v8 + 152), 0, 0);
    return;
  }
  if ( (v9 & 0x10) != 0 )
  {
    if ( (v9 & 0x40) == 0 || (v52 = *(_DWORD *)(v6 + 48), v52 == -2147483626) )
    {
      v10 = 0;
    }
    else
    {
      v10 = 0;
      if ( (v52 & 0xC0000000) != 0xC0000000 )
        memmove(*(void **)(v6 + 112), *(const void **)(v6 + 24), *(_QWORD *)(v6 + 56));
    }
    if ( (*(_DWORD *)(v6 + 16) & 0x20) != 0 )
      ExFreePoolWithTag(*(PVOID *)(v6 + 24), 0);
  }
  else
  {
    v10 = 0;
  }
  *(_DWORD *)(v6 + 16) &= 0xFFFFFFCF;
  v11 = *(struct _MDL **)(v6 + 8);
  if ( v11 )
  {
    do
    {
      Next = v11->Next;
      if ( (v11->MdlFlags & 0x20) != 0 )
        MmUnmapLockedPages(v11->MappedSystemVa, v11);
      if ( (v11->MdlFlags & 8) != 0 )
      {
        v44 = *((unsigned __int16 *)&v11->MdlFlags + 1);
        if ( (unsigned int)v44 >= (unsigned int)KeNumberProcessors_0 )
        {
          CurrentPrcb = 0LL;
        }
        else
        {
          _mm_lfence();
          CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[v44];
        }
        if ( !CurrentPrcb )
          CurrentPrcb = KeGetCurrentPrcb();
        P = CurrentPrcb->PPLookasideList[3].P;
        ++P->TotalFrees;
        if ( LOWORD(P->ListHead.Alignment) < P->Depth
          || (++P->FreeMisses,
              P = CurrentPrcb->PPLookasideList[3].L,
              ++P->TotalFrees,
              LOWORD(P->ListHead.Alignment) < P->Depth) )
        {
          RtlpInterlockedPushEntrySList(&P->ListHead, (PSLIST_ENTRY)v11);
        }
        else
        {
          ++P->FreeMisses;
          ((void (__fastcall *)(struct _MDL *))P->FreeEx)(v11);
        }
      }
      else
      {
        ExFreePoolWithTag(v11, 0);
      }
      v11 = Next;
    }
    while ( Next );
  }
  *(_QWORD *)(v6 + 8) = 0LL;
  if ( (*(_DWORD *)(v6 + 48) & 0xC0000000) == 0xC0000000 )
  {
    if ( !*(_BYTE *)(v6 + 65) )
      goto LABEL_134;
    if ( (*(_DWORD *)(v6 + 16) & 4) == 0 && (!v8 || (*(_DWORD *)(v8 + 80) & 2) == 0) )
      goto LABEL_12;
    if ( !v8 )
    {
LABEL_134:
      if ( (*(_DWORD *)(v6 + 16) & 0x2000) != 0 )
        IopDequeueIrpFromFileObject(v6, v8);
      if ( v8 )
        ObDereferenceObjectDeferDelete((PVOID)v8);
      v63 = *(void **)(v6 + 80);
      if ( v63 && v8 && (*(_DWORD *)(v6 + 16) & 4) == 0 )
        ObfDereferenceObject(v63);
      if ( (*(_DWORD *)(v6 + 16) & 0x8000) != 0 )
      {
        if ( (unsigned int)IopInterlockedAdd((volatile signed __int64 *)(v6 + 88), -1) )
          return;
      }
      else
      {
        *(_QWORD *)(v6 + 152) = CurrentThread;
        IopDequeueIrpFromThread(v6);
      }
      IoFreeIrp((PIRP)v6);
      return;
    }
    if ( (*(_DWORD *)(v6 + 16) & 4) != 0 )
    {
      *(_OWORD *)*(_QWORD *)(v6 + 72) = *(_OWORD *)(v6 + 48);
      v64 = *(struct _KEVENT **)(v6 + 80);
      if ( v64 )
        goto LABEL_152;
    }
    else
    {
      *(_DWORD *)(v8 + 56) = *(_DWORD *)(v6 + 48);
    }
    v64 = (struct _KEVENT *)(v8 + 152);
LABEL_152:
    KeSetEvent(v64, 0, 0);
    goto LABEL_134;
  }
LABEL_12:
  v12 = 0LL;
  v137 = 0LL;
  if ( v8 )
  {
    v13 = *(__int64 **)(v8 + 176);
    if ( v13 )
    {
      v12 = *v13;
      v137 = v13[1];
    }
  }
  v14 = *(_QWORD *)(v6 + 72);
  if ( (*(_BYTE *)(v6 + 71) & 0x10) != 0 )
    *(_DWORD *)(v14 + 4) = *(_DWORD *)(v6 + 56);
  else
    *(_QWORD *)(v14 + 8) = *(_QWORD *)(v6 + 56);
  *(_DWORD *)v14 = *(_DWORD *)(v6 + 48);
  v15 = *(_QWORD *)(v6 + 80);
  if ( !v15 )
  {
    if ( !v8 )
      goto LABEL_31;
    if ( (*(_DWORD *)(v8 + 80) & 0x4000000) != 0 )
      goto LABEL_30;
    if ( (*(_BYTE *)(v8 + 152) & 0x7F) != 0 )
    {
      v16 = 0;
    }
    else
    {
      if ( *(_DWORD *)(v8 + 156) == 1 )
        goto LABEL_30;
      v16 = 1;
    }
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v115 = KeGetCurrentPrcb();
    v136 = 0;
    while ( _interlockedbittestandset((volatile signed __int32 *)(v8 + 152), 7u) )
    {
      do
        KeYieldProcessorEx(&v136);
      while ( (*(_DWORD *)(v8 + 152) & 0x80u) != 0 );
    }
    v17 = *(_DWORD *)(v8 + 156);
    *(_DWORD *)(v8 + 156) = 1;
    if ( v17 )
      goto LABEL_29;
    if ( !v16 )
    {
      v95 = *(_QWORD **)(v8 + 160);
      if ( v95 != (_QWORD *)(v8 + 160) )
      {
        while ( 1 )
        {
          v96 = v95;
          v124 = v95;
          v129 = (_QWORD *)*v95;
          v97 = *v95;
          v98 = (_QWORD *)v95[1];
          if ( *(_QWORD **)(v97 + 8) != v96 || (_QWORD *)*v98 != v96 )
            __fastfail(3u);
          *v98 = v97;
          *(_QWORD *)(v97 + 8) = v98;
          v99 = *((_BYTE *)v96 + 16);
          if ( v99 == 1 )
          {
            if ( (unsigned __int8)KiTryUnwaitThread(v115, v96, *((unsigned __int16 *)v96 + 9), 0LL) )
            {
              v50 = (*(_DWORD *)(v8 + 156))-- == 1;
              if ( v50 )
                goto LABEL_29;
            }
          }
          else if ( v99 == 2 )
          {
            *((_BYTE *)v96 + 17) = 5;
            v114 = v96[3];
            *v96 = 0LL;
            KeGetCurrentIrql();
            __writecr8(2uLL);
            v121 = KeGetCurrentPrcb();
            v135 = v121->CurrentThread;
            if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
            {
              IsThreadRunning = KeIsThreadRunning(v121->CurrentThread);
              EtwTraceEnqueueWork(v102, v101, IsThreadRunning);
            }
            KiAcquireKobjectLockSafe((volatile signed __int32 *)v114);
            v103 = (_QWORD *)(v114 + 8);
            v104 = v114;
            if ( (_QWORD *)*v103 == v103
              || *(_DWORD *)(v114 + 40) >= *(_DWORD *)(v114 + 44)
              || v135->Queue == (_DISPATCHER_HEADER *volatile)v114 && v135->WaitReason == 15 )
            {
              v105 = 0;
            }
            else
            {
              v105 = KiWakeQueueWaiter((__int64)v121, v114, (__int64)v124);
              v104 = v114;
              v103 = (_QWORD *)(v114 + 8);
            }
            if ( !v105 )
            {
              v106 = *(_DWORD *)(v104 + 4);
              *(_DWORD *)(v104 + 4) = v106 + 1;
              v107 = *(_QWORD **)(v104 + 32);
              if ( *v107 != v104 + 24 )
                __fastfail(3u);
              *v124 = v104 + 24;
              v124[1] = v107;
              *v107 = v124;
              *(_QWORD *)(v104 + 32) = v124;
              if ( !v106 && (_QWORD *)*v103 != v103 )
              {
                KiWakeOtherQueueWaiters((__int64)v121, v104);
                v104 = v114;
              }
            }
            _InterlockedAnd((volatile signed __int32 *)v104, 0xFFFFFF7F);
            v50 = (*(_DWORD *)(v8 + 156))-- == 1;
            if ( v50 )
              goto LABEL_29;
          }
          else
          {
            KiTryUnwaitThread(v115, v96, 256LL, 0LL);
          }
          v95 = v129;
          if ( v129 == (_QWORD *)(v8 + 160) )
            goto LABEL_29;
        }
      }
      goto LABEL_29;
    }
    v18 = (_QWORD *)(v8 + 160);
    v19 = *(_QWORD **)(v8 + 160);
    if ( v19 == (_QWORD *)(v8 + 160) )
    {
LABEL_28:
      *(_QWORD *)(v8 + 168) = v8 + 160;
      *v18 = v18;
LABEL_29:
      _InterlockedAnd((volatile signed __int32 *)(v8 + 152), 0xFFFFFF7F);
      KiExitDispatcher((_DWORD)v115, 0, 1, 0, CurrentIrql);
LABEL_30:
      *(_DWORD *)(v8 + 56) = *(_DWORD *)(v6 + 48);
      goto LABEL_31;
    }
    while ( 1 )
    {
      v123 = v19;
      v128 = (_QWORD *)*v19;
      v82 = *((_BYTE *)v19 + 16);
      if ( v82 == 1 )
      {
        v108 = *((unsigned __int16 *)v19 + 9);
      }
      else
      {
        if ( v82 == 2 )
        {
          *((_BYTE *)v19 + 17) = 5;
          v113 = v19[3];
          *v19 = 0LL;
          KeGetCurrentIrql();
          __writecr8(2uLL);
          v120 = KeGetCurrentPrcb();
          v134 = v120->CurrentThread;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            v109 = KeIsThreadRunning(v120->CurrentThread);
            EtwTraceEnqueueWork(v111, v110, v109);
          }
          KiAcquireKobjectLockSafe((volatile signed __int32 *)v113);
          v83 = (_QWORD *)(v113 + 8);
          v84 = v113;
          if ( (_QWORD *)*v83 == v83
            || *(_DWORD *)(v113 + 40) >= *(_DWORD *)(v113 + 44)
            || v134->Queue == (_DISPATCHER_HEADER *volatile)v113 && v134->WaitReason == 15 )
          {
            v85 = 0;
          }
          else
          {
            v85 = KiWakeQueueWaiter((__int64)v120, v113, (__int64)v123);
            v84 = v113;
            v83 = (_QWORD *)(v113 + 8);
          }
          if ( !v85 )
          {
            v86 = *(_DWORD *)(v84 + 4);
            *(_DWORD *)(v84 + 4) = v86 + 1;
            v87 = *(_QWORD **)(v84 + 32);
            if ( *v87 != v84 + 24 )
              __fastfail(3u);
            *v123 = v84 + 24;
            v123[1] = v87;
            *v87 = v123;
            *(_QWORD *)(v84 + 32) = v123;
            if ( !v86 && (_QWORD *)*v83 != v83 )
            {
              KiWakeOtherQueueWaiters((__int64)v120, v84);
              v84 = v113;
            }
          }
          _InterlockedAnd((volatile signed __int32 *)v84, 0xFFFFFF7F);
          goto LABEL_222;
        }
        v108 = 256LL;
      }
      KiTryUnwaitThread(v115, v19, v108, 0LL);
LABEL_222:
      v19 = v128;
      if ( v128 == v18 )
        goto LABEL_28;
    }
  }
  if ( (*(_BYTE *)v15 & 0x7F) != 0 )
  {
    v47 = 0;
    goto LABEL_94;
  }
  if ( *(_DWORD *)(v15 + 4) != 1 )
  {
    v47 = 1;
LABEL_94:
    v139 = v47;
    v133 = KeGetCurrentIrql();
    __writecr8(2uLL);
    v112 = KeGetCurrentPrcb();
    v142 = 0;
    if ( _interlockedbittestandset((volatile signed __int32 *)v15, 7u) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v142);
        while ( (*(_DWORD *)v15 & 0x80u) != 0 );
      }
      while ( _interlockedbittestandset((volatile signed __int32 *)v15, 7u) );
      v47 = v139;
    }
    v48 = *(_DWORD *)(v15 + 4);
    *(_DWORD *)(v15 + 4) = 1;
    if ( v48 )
      goto LABEL_99;
    v49 = (__int64 *)(v15 + 8);
    v50 = v47 == 0;
    v51 = *(__int64 **)(v15 + 8);
    if ( v50 )
    {
      if ( v51 != v49 )
      {
        while ( 1 )
        {
          v119 = v51;
          v127 = (__int64 *)*v51;
          v72 = (__int64 *)*v51;
          v73 = (__int64 **)v51[1];
          if ( *(__int64 **)(*v51 + 8) != v51 || *v73 != v51 )
            __fastfail(3u);
          *v73 = v72;
          v72[1] = (__int64)v73;
          v74 = *((_BYTE *)v51 + 16);
          if ( v74 == 1 )
          {
            if ( (unsigned __int8)KiTryUnwaitThread(v112, v51, *((unsigned __int16 *)v51 + 9), 0LL) )
            {
              v50 = (*(_DWORD *)(v15 + 4))-- == 1;
              if ( v50 )
                goto LABEL_99;
            }
          }
          else if ( v74 == 2 )
          {
            *((_BYTE *)v51 + 17) = 5;
            v117 = v51[3];
            *v51 = 0LL;
            KeGetCurrentIrql();
            __writecr8(2uLL);
            v125 = KeGetCurrentPrcb();
            v132 = v125->CurrentThread;
            if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
            {
              v89 = KeIsThreadRunning(v125->CurrentThread);
              EtwTraceEnqueueWork(v91, v90, v89);
            }
            KiAcquireKobjectLockSafe((volatile signed __int32 *)v117);
            v75 = (_QWORD *)(v117 + 8);
            v76 = v117;
            if ( (_QWORD *)*v75 == v75
              || *(_DWORD *)(v117 + 40) >= *(_DWORD *)(v117 + 44)
              || v132->Queue == (_DISPATCHER_HEADER *volatile)v117 && v132->WaitReason == 15 )
            {
              v77 = 0;
            }
            else
            {
              v77 = KiWakeQueueWaiter((__int64)v125, v117, (__int64)v119);
              v76 = v117;
              v75 = (_QWORD *)(v117 + 8);
            }
            if ( !v77 )
            {
              v78 = *(_DWORD *)(v76 + 4);
              *(_DWORD *)(v76 + 4) = v78 + 1;
              v79 = *(__int64 ***)(v76 + 32);
              if ( *v79 != (__int64 *)(v76 + 24) )
                __fastfail(3u);
              *v119 = v76 + 24;
              v119[1] = (__int64)v79;
              *v79 = v119;
              *(_QWORD *)(v76 + 32) = v119;
              if ( !v78 && (_QWORD *)*v75 != v75 )
              {
                KiWakeOtherQueueWaiters((__int64)v125, v76);
                v76 = v117;
              }
            }
            _InterlockedAnd((volatile signed __int32 *)v76, 0xFFFFFF7F);
            v50 = (*(_DWORD *)(v15 + 4))-- == 1;
            if ( v50 )
              goto LABEL_99;
          }
          else
          {
            KiTryUnwaitThread(v112, v51, 256LL, 0LL);
          }
          v51 = v127;
          if ( v127 == (__int64 *)(v15 + 8) )
            goto LABEL_99;
        }
      }
      goto LABEL_99;
    }
    if ( v51 == v49 )
    {
LABEL_98:
      v49[1] = (__int64)v49;
      *v49 = (__int64)v49;
LABEL_99:
      _InterlockedAnd((volatile signed __int32 *)v15, 0xFFFFFF7F);
      KiExitDispatcher((_DWORD)v112, 0, 1, 0, v133);
      goto LABEL_100;
    }
    while ( 1 )
    {
      v122 = v51;
      v131 = (__int64 *)*v51;
      v68 = *((_BYTE *)v51 + 16);
      if ( v68 == 1 )
      {
        v88 = *((unsigned __int16 *)v51 + 9);
      }
      else
      {
        if ( v68 == 2 )
        {
          *((_BYTE *)v51 + 17) = 5;
          v116 = v51[3];
          *v51 = 0LL;
          KeGetCurrentIrql();
          __writecr8(2uLL);
          v118 = KeGetCurrentPrcb();
          v126 = v118->CurrentThread;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            v92 = KeIsThreadRunning(v118->CurrentThread);
            EtwTraceEnqueueWork(v94, v93, v92);
          }
          KiAcquireKobjectLockSafe((volatile signed __int32 *)v116);
          v69 = (_QWORD *)(v116 + 8);
          v70 = v116;
          if ( (_QWORD *)*v69 == v69 || *(_DWORD *)(v116 + 40) >= *(_DWORD *)(v116 + 44) )
          {
LABEL_180:
            v71 = 0;
          }
          else
          {
            if ( v126->Queue == (_DISPATCHER_HEADER *volatile)v116 && v126->WaitReason == 15 )
            {
              v69 = (_QWORD *)(v116 + 8);
              goto LABEL_180;
            }
            v71 = KiWakeQueueWaiter((__int64)v118, v116, (__int64)v122);
            v70 = v116;
            v69 = (_QWORD *)(v116 + 8);
          }
          if ( !v71 )
          {
            v80 = *(_DWORD *)(v70 + 4);
            *(_DWORD *)(v70 + 4) = v80 + 1;
            v81 = *(__int64 ***)(v70 + 32);
            if ( *v81 != (__int64 *)(v70 + 24) )
              __fastfail(3u);
            *v122 = v70 + 24;
            v122[1] = (__int64)v81;
            *v81 = v122;
            *(_QWORD *)(v70 + 32) = v122;
            if ( !v80 && (_QWORD *)*v69 != v69 )
            {
              KiWakeOtherQueueWaiters((__int64)v118, v70);
              v70 = v116;
            }
          }
          _InterlockedAnd((volatile signed __int32 *)v70, 0xFFFFFF7F);
          goto LABEL_184;
        }
        v88 = 256LL;
      }
      KiTryUnwaitThread(v112, v51, v88, 0LL);
LABEL_184:
      v49 = (__int64 *)(v15 + 8);
      v51 = v131;
      if ( v131 == (__int64 *)(v15 + 8) )
        goto LABEL_98;
    }
  }
LABEL_100:
  if ( v8 )
  {
    if ( (*(_DWORD *)(v6 + 16) & 4) == 0 )
      ObfDereferenceObject(*(PVOID *)(v6 + 80));
    if ( (*(_BYTE *)(v8 + 80) & 2) != 0 && (*(_DWORD *)(v6 + 16) & 0x1000) == 0 )
    {
      KeSetEvent((PRKEVENT)(v8 + 152), 0, 0);
      goto LABEL_30;
    }
  }
LABEL_31:
  v20 = 2LL;
  v21 = *(_DWORD *)(v6 + 16);
  if ( (v21 & 0x2000) != 0 )
    v22 = *(_QWORD *)(v6 + 88) & 0xFFFFFFFFFFFFFFF9uLL;
  else
    v22 = 0LL;
  if ( (v21 & 0x100) != 0 )
  {
    v61 = *(unsigned int *)(v6 + 56);
    if ( v22 )
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v22 + 1232), v61);
    }
    else
    {
      v62 = KeGetCurrentThread();
      v62->ReadTransferCount += v61;
    }
    __addgsqword(0x2EE8u, v61);
  }
  else if ( (v21 & 0x200) != 0 )
  {
    IopUpdateWriteTransferCount(*(_DWORD *)(v6 + 56), v22);
  }
  else
  {
    v23 = *(_QWORD *)(v6 + 56);
    if ( v23 >= 0 )
    {
      v24 = (unsigned int)v23;
      if ( v22 )
      {
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v22 + 1248), (unsigned int)v23);
      }
      else
      {
        v25 = KeGetCurrentThread();
        v25->OtherTransferCount += v24;
      }
      __addgsqword(0x2EF8u, v24);
    }
  }
  if ( (*(_DWORD *)(v6 + 16) & 0x2000) != 0 )
  {
    v53 = (volatile signed __int32 *)(v8 + 184);
    v140 = KeGetCurrentIrql();
    __writecr8(v20);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented(v8 + 184);
    }
    else if ( _interlockedbittestandset64(v53, 0LL) )
    {
      KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(v8 + 184));
    }
    v54 = (_QWORD *)(v6 + 32);
    v55 = *(_QWORD *)(v6 + 32);
    v56 = *(_QWORD **)(v6 + 40);
    if ( *(_QWORD *)(v55 + 8) != v6 + 32 || (_QWORD *)*v56 != v54 )
      __fastfail(3u);
    *v56 = v55;
    *(_QWORD *)(v55 + 8) = v56;
    *(_QWORD *)(v6 + 40) = v6 + 32;
    *v54 = v54;
    ObfDereferenceObjectWithTag((PVOID)(*(_QWORD *)(v6 + 88) & 0xFFFFFFFFFFFFFFF9uLL), 0x70436F49u);
    *(_DWORD *)(v6 + 16) = *(_DWORD *)(v6 + 16) & 0xFFFF5FFF | 0x8000;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(v8 + 184, retaddr);
    else
      _InterlockedAnd64((volatile signed __int64 *)v53, 0LL);
    v32 = v140;
    goto LABEL_50;
  }
  *(_QWORD *)(v6 + 152) = CurrentThread;
  v26 = 0;
  if ( CurrentThread )
  {
    v27 = (volatile signed __int32 *)&CurrentThread[1].WaitBlockFill11[16];
    v26 = KeGetCurrentIrql();
    __writecr8(v20);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented(v27);
    }
    else if ( _interlockedbittestandset64(v27, 0LL) )
    {
      KxWaitForSpinLockAndAcquire(v27);
    }
  }
  v28 = (_QWORD *)(v6 + 32);
  v29 = *(_QWORD *)(v6 + 32);
  v30 = *(_QWORD **)(v6 + 40);
  if ( *(_QWORD *)(v29 + 8) != v6 + 32 || (_QWORD *)*v30 != v28 )
    __fastfail(3u);
  *v30 = v29;
  *(_QWORD *)(v29 + 8) = v30;
  *(_QWORD *)(v6 + 40) = v6 + 32;
  *v28 = v28;
  if ( CurrentThread )
  {
    v31 = (volatile signed __int64 *)&CurrentThread[1].WaitBlockFill11[16];
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(v31, retaddr);
    else
      _InterlockedAnd64(v31, 0LL);
    v32 = v26;
LABEL_50:
    __writecr8(v32);
  }
  v33 = *(_DWORD *)(v6 + 16) & 0x8000;
  if ( !v33 )
  {
    *(_QWORD *)(v6 + 88) &= ~1uLL;
    v34 = *(_QWORD *)(v6 + 88);
    if ( v34 )
    {
      if ( v141 )
        v67 = *(char *)(v6 + 70);
      else
        v67 = 2;
      KeInitializeApc(
        a1,
        (_DWORD)CurrentThread,
        v67,
        (unsigned int)IopUserRundown,
        (__int64)IopUserRundown,
        v34,
        *(_BYTE *)(v6 + 64),
        *(_QWORD *)(v6 + 96));
      KeInsertQueueApc(a1, *(_QWORD *)(v6 + 72), 0LL, 2);
      goto LABEL_74;
    }
  }
  if ( v12
    && *(_QWORD *)(v6 + 96)
    && ((*(_DWORD *)(v8 + 80) & 0x2000000) == 0
     || *(_BYTE *)(v6 + 65)
     || (*(_DWORD *)(v6 + 48) & 0xC0000000) == 0x80000000) )
  {
    v65 = 0;
    v66 = *(_DWORD *)(*(_QWORD *)(v8 + 8) + 72LL);
    if ( v66 == 8 || v66 == 20 )
      v65 = 1;
    *(_QWORD *)(v6 + 120) = v137;
    *(_DWORD *)(v6 + 184) = 0;
    KeInsertQueueEx(v12, (_QWORD *)(v6 + 168), v65, 0);
    goto LABEL_74;
  }
  if ( v33 )
  {
    v57 = *(_QWORD *)(v6 + 88);
    do
    {
      v58 = v57;
      v59 = ((v57 >> 1) & 3) - 1;
      v57 = _InterlockedCompareExchange64(
              (volatile signed __int64 *)(v6 + 88),
              v57 & 0xFFFFFFFFFFFFFFF9uLL | (2 * v59),
              v57);
    }
    while ( v58 != v57 );
    if ( (_DWORD)v59 )
      goto LABEL_74;
    v60 = v6;
    if ( !IopDispatchFreeIrp )
    {
      IopFreeIrp(v6);
      goto LABEL_74;
    }
  }
  else
  {
    if ( !IopDispatchFreeIrp )
    {
      if ( *(_WORD *)v6 != 6 )
        KeBugCheckEx(0x44u, v6, 0x24D9uLL, 0LL, 0LL);
      *(_WORD *)v6 = 0;
      if ( (*(_BYTE *)(v6 + 71) & 0x40) != 0 )
        IopFreeIrpExtension(v6, -1, 1);
      if ( (*(_BYTE *)(v6 + 71) & 0x21) == 0x21 )
      {
        IopFreeReserveIrp(v6);
      }
      else
      {
        v35 = *(unsigned __int16 *)(v6 + 4);
        if ( (unsigned int)v35 >= (unsigned int)KeNumberProcessors_0 )
        {
          v36 = KeGetCurrentPrcb();
        }
        else
        {
          _mm_lfence();
          v36 = (struct _KPRCB *)KiProcessorBlock[v35];
        }
        v37 = *(_BYTE *)(v6 + 71);
        if ( (v37 & 8) != 0 )
        {
          *(_BYTE *)(v6 + 71) = v37 ^ 8;
          _InterlockedIncrement(&v36->LookasideIrpFloat);
        }
        if ( (*(_BYTE *)(v6 + 71) & 4) != 0
          && ((IopIrpStackProfilerFlags & 3) == 0
           || (v38 = *(_WORD *)(v6 + 2), v38 == 72 * (char)IopLargeIrpStackLocations + 208)
           || v38 == 72 * (char)IopMediumIrpStackLocations + 208
           || v38 == 280) )
        {
          v39 = *(_WORD *)(v6 + 2);
          if ( v39 >= (unsigned __int16)(72 * (char)IopLargeIrpStackLocations + 208) )
          {
            v40 = 2;
          }
          else
          {
            LOBYTE(v10) = v39 >= (unsigned __int16)(72 * (char)IopMediumIrpStackLocations + 208);
            v40 = v10;
          }
          *(_QWORD *)(v6 + 56) = v39;
          L = v36->PPLookasideList[v40].P;
          ++L->TotalFrees;
          if ( LOWORD(L->ListHead.Alignment) < L->Depth
            || (++L->FreeMisses,
                L = v36->PPLookasideList[v40].L,
                ++L->TotalFrees,
                LOWORD(L->ListHead.Alignment) < L->Depth) )
          {
            v42 = *(_BYTE *)(v6 + 71);
            if ( (v42 & 1) != 0 )
            {
              *(_BYTE *)(v6 + 71) = v42 ^ 1;
              ExReturnPoolQuota(v6);
            }
            RtlpInterlockedPushEntrySList(&L->ListHead, (PSLIST_ENTRY)v6);
          }
          else
          {
            ++L->FreeMisses;
            ExFreePoolWithTag((PVOID)v6, 0);
          }
        }
        else
        {
          ExFreePoolWithTag((PVOID)v6, 0);
        }
      }
      goto LABEL_74;
    }
    v60 = v6;
  }
  IovFreeIrpPrivate(v60);
LABEL_74:
  if ( v8 )
    ObDereferenceObjectDeferDelete((PVOID)v8);
}
