/*
 * XREFs of IopCompleteRequest @ 0x1400F9010
 * Callers:
 *     NtSetInformationFile @ 0x1400ECB00 (NtSetInformationFile.c)
 *     IoRemoveIoCompletion @ 0x1400F4CD0 (IoRemoveIoCompletion.c)
 *     IopfCompleteRequest @ 0x1400FA0B0 (IopfCompleteRequest.c)
 *     NtQueryInformationFile @ 0x140596F20 (NtQueryInformationFile.c)
 *     IopSynchronousServiceTail @ 0x14059D990 (IopSynchronousServiceTail.c)
 *     IopAbortRequest @ 0x1407192F0 (IopAbortRequest.c)
 * Callees:
 *     KiWakeQueueWaiter @ 0x14002F920 (KiWakeQueueWaiter.c)
 *     KeInsertQueueApc @ 0x140044AB0 (KeInsertQueueApc.c)
 *     KxWaitForSpinLockAndAcquire @ 0x140069440 (KxWaitForSpinLockAndAcquire.c)
 *     KiWakeOtherQueueWaiters @ 0x140084FB0 (KiWakeOtherQueueWaiters.c)
 *     KeInsertQueueEx @ 0x140086460 (KeInsertQueueEx.c)
 *     IopFreeIrpExtension @ 0x1400A4884 (IopFreeIrpExtension.c)
 *     IopUpdateWriteTransferCount @ 0x1400B9208 (IopUpdateWriteTransferCount.c)
 *     ExReturnPoolQuota @ 0x1400BA618 (ExReturnPoolQuota.c)
 *     IopInterlockedAdd @ 0x1400C6EDC (IopInterlockedAdd.c)
 *     KiAcquireKobjectLockSafe @ 0x1400EA710 (KiAcquireKobjectLockSafe.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     ObDereferenceObjectDeferDelete @ 0x1400FA020 (ObDereferenceObjectDeferDelete.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     KiExitDispatcher @ 0x1400FB620 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x1400FD2A0 (KiTryUnwaitThread.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     IoFreeIrp @ 0x140106E30 (IoFreeIrp.c)
 *     IopFreeIrp @ 0x140106E60 (IopFreeIrp.c)
 *     IopDequeueIrpFromThread @ 0x140107260 (IopDequeueIrpFromThread.c)
 *     MmUnmapLockedPages @ 0x140110450 (MmUnmapLockedPages.c)
 *     KeInitializeApc @ 0x140132910 (KeInitializeApc.c)
 *     IopDequeueIrpFromFileObject @ 0x14013FE58 (IopDequeueIrpFromFileObject.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401B2C10 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     IopExceptionFilter @ 0x140232634 (IopExceptionFilter.c)
 *     IopFreeReserveIrp @ 0x1402326E8 (IopFreeReserveIrp.c)
 *     KeIsThreadRunning @ 0x14023FDC4 (KeIsThreadRunning.c)
 *     KiAcquireSpinLockInstrumented @ 0x140242718 (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402427F0 (KiReleaseSpinLockInstrumented.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 *     EtwTraceEnqueueWork @ 0x1402AEBAC (EtwTraceEnqueueWork.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     IovFreeIrpPrivate @ 0x140811FCC (IovFreeIrpPrivate.c)
 */

void __fastcall IopCompleteRequest(__int64 a1, __int64 a2, _QWORD *a3, __int64 *a4, _QWORD *a5)
{
  ULONG_PTR v5; // rbx
  struct _KTHREAD *CurrentThread; // r15
  __int64 v7; // rsi
  __int64 v8; // r13
  _DWORD *v9; // rdi
  int v10; // eax
  __int64 *v11; // r14
  __int64 *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r14
  __int64 v15; // rdi
  int v16; // ecx
  int v17; // eax
  _QWORD *v18; // rdi
  _QWORD *v19; // r14
  unsigned __int64 v20; // r8
  int v21; // eax
  unsigned __int64 v22; // rdx
  __int64 v23; // rcx
  struct _KTHREAD *v24; // rax
  unsigned __int8 v25; // r14
  struct _KPRCB *v26; // r10
  _DWORD *v27; // rcx
  _QWORD *v28; // rax
  __int64 v29; // rdx
  __int64 *v30; // rcx
  volatile signed __int64 *v31; // rcx
  struct _KPRCB *v32; // rcx
  int v33; // ecx
  __int64 v34; // r10
  char v35; // al
  __int64 v36; // rcx
  struct _KPRCB *v37; // r10
  char v38; // al
  __int16 v39; // r8
  unsigned __int16 v40; // r8
  __int64 v41; // r13
  _GENERAL_LOOKASIDE *L; // rdi
  char v43; // al
  __int16 v44; // ax
  __int64 v45; // rcx
  struct _KPRCB *CurrentPrcb; // rdx
  _GENERAL_LOOKASIDE *P; // rcx
  int v48; // eax
  int v49; // r13d
  int v50; // eax
  _QWORD *v51; // r14
  _QWORD *v52; // rax
  int v53; // r13d
  int v54; // eax
  int v55; // r8d
  int v56; // edx
  volatile signed __int32 *v57; // rdi
  unsigned __int8 v58; // r13
  struct _KPRCB *v59; // r10
  _DWORD *SchedulerAssist; // rcx
  _QWORD *v61; // rax
  __int64 v62; // rdx
  _QWORD *v63; // rcx
  struct _KPRCB *v64; // rcx
  unsigned __int64 v65; // rax
  unsigned __int64 v66; // r8
  __int64 v67; // r9
  ULONG_PTR v68; // rcx
  unsigned __int64 v69; // rcx
  void *v70; // rcx
  struct _KTHREAD *v71; // rax
  struct _KEVENT *v72; // rcx
  __int64 v73; // rdx
  int v74; // r8d
  __int64 v75; // rdx
  char v76; // cl
  _QWORD *v77; // r9
  __int64 v78; // rcx
  char v79; // al
  int v80; // r10d
  _QWORD *v81; // r8
  __int64 v82; // r13
  char v83; // al
  _QWORD *v84; // r8
  __int64 v85; // rcx
  char v86; // al
  int v87; // r9d
  __int64 *v88; // rdx
  _QWORD *v89; // rdx
  _QWORD *v90; // rcx
  _QWORD *v91; // rax
  char v92; // al
  _QWORD *v93; // r10
  __int64 v94; // rcx
  char v95; // al
  int v96; // r9d
  _QWORD *v97; // r8
  bool v98; // zf
  __int64 v99; // r8
  unsigned __int8 v100; // al
  __int64 v101; // rdx
  __int64 v102; // r9
  unsigned __int8 v103; // al
  __int64 v104; // rdx
  __int64 v105; // r9
  _QWORD *v106; // rdx
  __int64 v107; // rax
  _QWORD *v108; // rcx
  char v109; // al
  unsigned __int8 IsThreadRunning; // al
  __int64 v111; // rdx
  __int64 v112; // r9
  _QWORD *v113; // r9
  __int64 v114; // rcx
  char v115; // al
  int v116; // r10d
  _QWORD *v117; // r8
  __int64 v118; // r8
  unsigned __int8 v119; // al
  __int64 v120; // r9
  int v121; // eax
  int v122; // eax
  int v123; // eax
  int v124; // eax
  __int64 v125; // [rsp+40h] [rbp-A8h]
  __int64 v126; // [rsp+40h] [rbp-A8h]
  __int64 v127; // [rsp+40h] [rbp-A8h]
  __int64 v128; // [rsp+40h] [rbp-A8h]
  _QWORD *v129; // [rsp+48h] [rbp-A0h]
  struct _KPRCB *v130; // [rsp+48h] [rbp-A0h]
  _QWORD *v131; // [rsp+48h] [rbp-A0h]
  struct _KPRCB *v132; // [rsp+50h] [rbp-98h]
  _QWORD *v133; // [rsp+50h] [rbp-98h]
  _QWORD *v134; // [rsp+50h] [rbp-98h]
  __int64 v135; // [rsp+58h] [rbp-90h]
  struct _KPRCB *v136; // [rsp+60h] [rbp-88h]
  _QWORD *v137; // [rsp+60h] [rbp-88h]
  struct _KPRCB *v138; // [rsp+60h] [rbp-88h]
  struct _KPRCB *v139; // [rsp+68h] [rbp-80h]
  char CurrentIrql; // [rsp+78h] [rbp-70h]
  _KTHREAD *v141; // [rsp+78h] [rbp-70h]
  _KTHREAD *v142; // [rsp+78h] [rbp-70h]
  char v143; // [rsp+80h] [rbp-68h]
  _KTHREAD *v144; // [rsp+80h] [rbp-68h]
  _KTHREAD *v145; // [rsp+80h] [rbp-68h]
  int v146; // [rsp+88h] [rbp-60h] BYREF
  __int64 v147; // [rsp+90h] [rbp-58h]
  __int64 v148; // [rsp+98h] [rbp-50h]
  void *retaddr; // [rsp+E8h] [rbp+0h]
  int v150; // [rsp+F0h] [rbp+8h]
  __int64 *v151; // [rsp+F0h] [rbp+8h]
  struct _KPRCB *v152; // [rsp+F0h] [rbp+8h]
  bool v153; // [rsp+100h] [rbp+18h]
  int v154; // [rsp+108h] [rbp+20h] BYREF

  v5 = a1 - 120;
  v135 = a1 - 120;
  CurrentThread = KeGetCurrentThread();
  v7 = *a4;
  v8 = *a4;
  v153 = a3 && *a3 == 1LL;
  v9 = (_DWORD *)(v5 + 16);
  v10 = *(_DWORD *)(v5 + 16);
  if ( (v10 & 0x80u) != 0 )
  {
    *(_DWORD *)(v7 + 56) = *(_DWORD *)(v5 + 48);
    *(_QWORD *)(v5 + 160) = *a5;
    KeSetEvent((PRKEVENT)(v7 + 152), 0, 0);
    return;
  }
  if ( (v10 & 0x10) != 0 )
  {
    if ( (v10 & 0x40) != 0 )
    {
      v48 = *(_DWORD *)(v5 + 48);
      if ( v48 != -2147483626 && (v48 & 0xC0000000) != 0xC0000000 )
        memmove(*(void **)(v5 + 112), *(const void **)(v5 + 24), *(_QWORD *)(v5 + 56));
    }
    if ( (*v9 & 0x20) != 0 )
      ExFreePoolWithTag(*(PVOID *)(v5 + 24), 0);
  }
  *v9 &= 0xFFFFFFCF;
  v11 = *(__int64 **)(v5 + 8);
  if ( v11 )
  {
    do
    {
      v151 = (__int64 *)*v11;
      v44 = *((_WORD *)v11 + 5);
      if ( (v44 & 0x20) != 0 )
      {
        MmUnmapLockedPages((PVOID)v11[3], (PMDL)v11);
        v44 = *((_WORD *)v11 + 5);
      }
      if ( (v44 & 8) != 0 )
      {
        v45 = *((unsigned __int16 *)v11 + 6);
        if ( (unsigned int)v45 >= (unsigned int)KeNumberProcessors_0 )
        {
          CurrentPrcb = 0LL;
        }
        else
        {
          _mm_lfence();
          CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[v45];
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
          ((void (__fastcall *)(__int64 *))P->FreeEx)(v11);
        }
      }
      else
      {
        ExFreePoolWithTag(v11, 0);
      }
      v11 = v151;
    }
    while ( v151 );
  }
  *(_QWORD *)(v5 + 8) = 0LL;
  if ( (*(_DWORD *)(v5 + 48) & 0xC0000000) == 0xC0000000 )
  {
    if ( !*(_BYTE *)(v5 + 65) )
      goto LABEL_142;
    if ( (*v9 & 4) == 0 && (!v7 || (*(_DWORD *)(v7 + 80) & 2) == 0) )
      goto LABEL_11;
    if ( !v7 )
    {
LABEL_142:
      if ( (*v9 & 0x2000) != 0 )
        IopDequeueIrpFromFileObject(v5, v7);
      if ( v7 )
        ObDereferenceObjectDeferDelete((PVOID)v7);
      v70 = *(void **)(v5 + 80);
      if ( v70 && v7 && (*v9 & 4) == 0 )
        ObfDereferenceObject(v70);
      if ( (*v9 & 0x8000) != 0 )
      {
        if ( (unsigned int)IopInterlockedAdd((volatile signed __int64 *)(v5 + 88), -1) )
          return;
      }
      else
      {
        *(_QWORD *)(v5 + 152) = CurrentThread;
        IopDequeueIrpFromThread(v5);
      }
      IoFreeIrp((PIRP)v5);
      return;
    }
    if ( (*v9 & 4) != 0 )
    {
      *(_OWORD *)*(_QWORD *)(v5 + 72) = *(_OWORD *)(v5 + 48);
      v72 = *(struct _KEVENT **)(v5 + 80);
      if ( v72 )
        goto LABEL_158;
    }
    else
    {
      *(_DWORD *)(v7 + 56) = *(_DWORD *)(v5 + 48);
    }
    v72 = (struct _KEVENT *)(v7 + 152);
LABEL_158:
    KeSetEvent(v72, 0, 0);
    goto LABEL_142;
  }
LABEL_11:
  v147 = 0LL;
  v148 = 0LL;
  if ( v7 )
  {
    v12 = *(__int64 **)(v7 + 176);
    if ( v12 )
    {
      v147 = *v12;
      v148 = v12[1];
    }
  }
  v13 = *(_QWORD *)(v5 + 72);
  v14 = v135;
  if ( (*(_BYTE *)(v5 + 71) & 0x10) != 0 )
    *(_DWORD *)(v13 + 4) = *(_DWORD *)(v135 + 56);
  else
    *(_QWORD *)(v13 + 8) = *(_QWORD *)(v135 + 56);
  *(_DWORD *)v13 = *(_DWORD *)(v5 + 48);
  v15 = *(_QWORD *)(v5 + 80);
  if ( !v15 )
  {
    if ( !v7 )
      goto LABEL_31;
    if ( (*(_DWORD *)(v7 + 80) & 0x4000000) != 0 )
      goto LABEL_30;
    if ( (*(_BYTE *)(v7 + 152) & 0x7F) != 0 )
    {
      v16 = 0;
    }
    else
    {
      if ( *(_DWORD *)(v8 + 156) == 1 )
      {
LABEL_30:
        *(_DWORD *)(v7 + 56) = *(_DWORD *)(v5 + 48);
        goto LABEL_31;
      }
      v16 = 1;
    }
    v150 = v16;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v132 = KeGetCurrentPrcb();
    v146 = 0;
    if ( _interlockedbittestandset((volatile signed __int32 *)(v7 + 152), 7u) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v146);
        while ( (*(_DWORD *)(v7 + 152) & 0x80u) != 0 );
      }
      while ( _interlockedbittestandset((volatile signed __int32 *)(v7 + 152), 7u) );
      v16 = v150;
    }
    v17 = *(_DWORD *)(v8 + 156);
    *(_DWORD *)(v8 + 156) = 1;
    if ( v17 )
    {
LABEL_29:
      _InterlockedAnd((volatile signed __int32 *)(v7 + 152), 0xFFFFFF7F);
      KiExitDispatcher((_DWORD)v132, 0, 1, 0, CurrentIrql);
      goto LABEL_30;
    }
    v18 = (_QWORD *)(v8 + 160);
    v19 = *(_QWORD **)(v8 + 160);
    if ( !v16 )
    {
      if ( v19 != v18 )
      {
        while ( 1 )
        {
          v106 = v19;
          v131 = v19;
          v107 = *v19;
          v19 = (_QWORD *)v107;
          v108 = (_QWORD *)v131[1];
          if ( *(_QWORD **)(v107 + 8) != v131 || (_QWORD *)*v108 != v106 )
            __fastfail(3u);
          *v108 = v107;
          *(_QWORD *)(v107 + 8) = v108;
          v109 = *((_BYTE *)v106 + 16);
          if ( v109 == 1 )
          {
            if ( (unsigned __int8)KiTryUnwaitThread(v132, v106, *((unsigned __int16 *)v106 + 9), 0LL) )
            {
              v98 = (*(_DWORD *)(v8 + 156))-- == 1;
              if ( v98 )
                goto LABEL_28;
            }
          }
          else if ( v109 == 2 )
          {
            *((_BYTE *)v106 + 17) = 5;
            v128 = v106[3];
            *v106 = 0LL;
            KeGetCurrentIrql();
            __writecr8(2uLL);
            v138 = KeGetCurrentPrcb();
            v145 = v138->CurrentThread;
            if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
            {
              IsThreadRunning = KeIsThreadRunning(v138->CurrentThread);
              EtwTraceEnqueueWork(v112, v111, IsThreadRunning);
            }
            KiAcquireKobjectLockSafe((volatile signed __int32 *)v128);
            v113 = (_QWORD *)(v128 + 8);
            v114 = v128;
            if ( (_QWORD *)*v113 == v113
              || *(_DWORD *)(v128 + 40) >= *(_DWORD *)(v128 + 44)
              || v145->Queue == (_DISPATCHER_HEADER *volatile)v128 && v145->WaitReason == 15 )
            {
              v115 = 0;
            }
            else
            {
              v115 = KiWakeQueueWaiter((__int64)v138, v128, (__int64)v131);
              v114 = v128;
              v113 = (_QWORD *)(v128 + 8);
            }
            if ( !v115 )
            {
              v116 = *(_DWORD *)(v114 + 4);
              *(_DWORD *)(v114 + 4) = v116 + 1;
              v117 = *(_QWORD **)(v114 + 32);
              if ( *v117 != v114 + 24 )
                __fastfail(3u);
              *v131 = v114 + 24;
              v131[1] = v117;
              *v117 = v131;
              *(_QWORD *)(v114 + 32) = v131;
              if ( !v116 && (_QWORD *)*v113 != v113 )
              {
                KiWakeOtherQueueWaiters((__int64)v138, v114);
                v114 = v128;
              }
            }
            _InterlockedAnd((volatile signed __int32 *)v114, 0xFFFFFF7F);
            v98 = (*(_DWORD *)(v8 + 156))-- == 1;
            if ( v98 )
              goto LABEL_28;
          }
          else
          {
            KiTryUnwaitThread(v132, v106, 256LL, 0LL);
          }
          if ( v19 == v18 )
            goto LABEL_28;
        }
      }
      goto LABEL_28;
    }
    if ( v19 == v18 )
    {
LABEL_27:
      v18[1] = v18;
      *v18 = v18;
LABEL_28:
      v14 = v135;
      goto LABEL_29;
    }
    while ( 1 )
    {
      v82 = (__int64)v19;
      v19 = (_QWORD *)*v19;
      v83 = *(_BYTE *)(v82 + 16);
      if ( v83 == 1 )
      {
        v118 = *(unsigned __int16 *)(v82 + 18);
      }
      else
      {
        if ( v83 == 2 )
        {
          *(_BYTE *)(v82 + 17) = 5;
          v126 = *(_QWORD *)(v82 + 24);
          *(_QWORD *)v82 = 0LL;
          KeGetCurrentIrql();
          __writecr8(2uLL);
          v130 = KeGetCurrentPrcb();
          v144 = v130->CurrentThread;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            v119 = KeIsThreadRunning(v130->CurrentThread);
            EtwTraceEnqueueWork(v120, v82, v119);
          }
          KiAcquireKobjectLockSafe((volatile signed __int32 *)v126);
          v84 = (_QWORD *)(v126 + 8);
          v85 = v126;
          if ( (_QWORD *)*v84 == v84
            || *(_DWORD *)(v126 + 40) >= *(_DWORD *)(v126 + 44)
            || v144->Queue == (_DISPATCHER_HEADER *volatile)v126 && v144->WaitReason == 15 )
          {
            v86 = 0;
          }
          else
          {
            v86 = KiWakeQueueWaiter((__int64)v130, v126, v82);
            v85 = v126;
            v84 = (_QWORD *)(v126 + 8);
          }
          if ( !v86 )
          {
            v87 = *(_DWORD *)(v85 + 4);
            *(_DWORD *)(v85 + 4) = v87 + 1;
            v88 = *(__int64 **)(v85 + 32);
            if ( *v88 != v85 + 24 )
              __fastfail(3u);
            *(_QWORD *)v82 = v85 + 24;
            *(_QWORD *)(v82 + 8) = v88;
            *v88 = v82;
            *(_QWORD *)(v85 + 32) = v82;
            if ( !v87 && (_QWORD *)*v84 != v84 )
            {
              KiWakeOtherQueueWaiters((__int64)v130, v85);
              v85 = v126;
            }
          }
          _InterlockedAnd((volatile signed __int32 *)v85, 0xFFFFFF7F);
          goto LABEL_210;
        }
        v118 = 256LL;
      }
      KiTryUnwaitThread(v132, v82, v118, 0LL);
LABEL_210:
      if ( v19 == v18 )
        goto LABEL_27;
    }
  }
  if ( (*(_BYTE *)v15 & 0x7F) != 0 )
  {
    v49 = 0;
  }
  else
  {
    if ( *(_DWORD *)(v15 + 4) == 1 )
      goto LABEL_104;
    v49 = 1;
  }
  v143 = KeGetCurrentIrql();
  __writecr8(2uLL);
  v152 = KeGetCurrentPrcb();
  v154 = 0;
  while ( _interlockedbittestandset((volatile signed __int32 *)v15, 7u) )
  {
    do
      KeYieldProcessorEx(&v154);
    while ( (*(_DWORD *)v15 & 0x80u) != 0 );
  }
  v50 = *(_DWORD *)(v15 + 4);
  *(_DWORD *)(v15 + 4) = 1;
  if ( v50 )
    goto LABEL_102;
  v51 = (_QWORD *)(v15 + 8);
  v52 = *(_QWORD **)(v15 + 8);
  if ( v49 )
  {
    v53 = (int)v152;
    if ( v52 == v51 )
    {
LABEL_139:
      *(_QWORD *)(v15 + 16) = v15 + 8;
      *v51 = v51;
      goto LABEL_103;
    }
    while ( 1 )
    {
      v129 = v52;
      v133 = (_QWORD *)*v52;
      v76 = *((_BYTE *)v52 + 16);
      if ( v76 == 1 )
      {
        v99 = *((unsigned __int16 *)v52 + 9);
      }
      else
      {
        if ( v76 == 2 )
        {
          *((_BYTE *)v52 + 17) = 5;
          v125 = v52[3];
          *v52 = 0LL;
          KeGetCurrentIrql();
          __writecr8(2uLL);
          v136 = KeGetCurrentPrcb();
          v141 = v136->CurrentThread;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            v103 = KeIsThreadRunning(v136->CurrentThread);
            EtwTraceEnqueueWork(v105, v104, v103);
          }
          KiAcquireKobjectLockSafe((volatile signed __int32 *)v125);
          v77 = (_QWORD *)(v125 + 8);
          v78 = v125;
          if ( (_QWORD *)*v77 == v77
            || *(_DWORD *)(v125 + 40) >= *(_DWORD *)(v125 + 44)
            || v141->Queue == (_DISPATCHER_HEADER *volatile)v125 && v141->WaitReason == 15 )
          {
            v79 = 0;
          }
          else
          {
            v79 = KiWakeQueueWaiter((__int64)v136, v125, (__int64)v129);
            v78 = v125;
            v77 = (_QWORD *)(v125 + 8);
          }
          if ( !v79 )
          {
            v80 = *(_DWORD *)(v78 + 4);
            *(_DWORD *)(v78 + 4) = v80 + 1;
            v81 = *(_QWORD **)(v78 + 32);
            if ( *v81 != v78 + 24 )
              __fastfail(3u);
            *v129 = v78 + 24;
            v129[1] = v81;
            *v81 = v129;
            *(_QWORD *)(v78 + 32) = v129;
            if ( !v80 && (_QWORD *)*v77 != v77 )
            {
              KiWakeOtherQueueWaiters((__int64)v136, v78);
              v78 = v125;
            }
          }
          _InterlockedAnd((volatile signed __int32 *)v78, 0xFFFFFF7F);
          goto LABEL_186;
        }
        v99 = 256LL;
      }
      KiTryUnwaitThread(v152, v52, v99, 0LL);
LABEL_186:
      v52 = v133;
      if ( v133 == v51 )
        goto LABEL_139;
    }
  }
  if ( v52 != v51 )
  {
    v53 = (int)v152;
    while ( 1 )
    {
      v89 = v52;
      v137 = v52;
      v90 = (_QWORD *)*v52;
      v134 = v90;
      v91 = (_QWORD *)v52[1];
      if ( (_QWORD *)v90[1] != v89 || (_QWORD *)*v91 != v89 )
        __fastfail(3u);
      *v91 = v90;
      v90[1] = v91;
      v92 = *((_BYTE *)v89 + 16);
      if ( v92 == 1 )
      {
        if ( (unsigned __int8)KiTryUnwaitThread(v152, v89, *((unsigned __int16 *)v89 + 9), 0LL) )
        {
          v98 = (*(_DWORD *)(v15 + 4))-- == 1;
          if ( v98 )
            goto LABEL_103;
        }
      }
      else if ( v92 == 2 )
      {
        *((_BYTE *)v89 + 17) = 5;
        v127 = v89[3];
        *v89 = 0LL;
        KeGetCurrentIrql();
        __writecr8(2uLL);
        v139 = KeGetCurrentPrcb();
        v142 = v139->CurrentThread;
        if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
        {
          v100 = KeIsThreadRunning(v139->CurrentThread);
          EtwTraceEnqueueWork(v102, v101, v100);
        }
        KiAcquireKobjectLockSafe((volatile signed __int32 *)v127);
        v93 = (_QWORD *)(v127 + 8);
        v94 = v127;
        if ( (_QWORD *)*v93 == v93
          || *(_DWORD *)(v127 + 40) >= *(_DWORD *)(v127 + 44)
          || v142->Queue == (_DISPATCHER_HEADER *volatile)v127 && v142->WaitReason == 15 )
        {
          v95 = 0;
        }
        else
        {
          v95 = KiWakeQueueWaiter((__int64)v139, v127, (__int64)v137);
          v94 = v127;
          v93 = (_QWORD *)(v127 + 8);
        }
        if ( !v95 )
        {
          v96 = *(_DWORD *)(v94 + 4);
          *(_DWORD *)(v94 + 4) = v96 + 1;
          v97 = *(_QWORD **)(v94 + 32);
          if ( *v97 != v94 + 24 )
            __fastfail(3u);
          *v137 = v94 + 24;
          v137[1] = v97;
          *v97 = v137;
          *(_QWORD *)(v94 + 32) = v137;
          if ( !v96 && (_QWORD *)*v93 != v93 )
          {
            KiWakeOtherQueueWaiters((__int64)v139, v94);
            v94 = v127;
          }
        }
        _InterlockedAnd((volatile signed __int32 *)v94, 0xFFFFFF7F);
        v98 = (*(_DWORD *)(v15 + 4))-- == 1;
        if ( v98 )
          goto LABEL_103;
      }
      else
      {
        KiTryUnwaitThread(v152, v89, 256LL, 0LL);
      }
      v52 = v134;
      if ( v134 == v51 )
        goto LABEL_103;
    }
  }
LABEL_102:
  v53 = (int)v152;
LABEL_103:
  _InterlockedAnd((volatile signed __int32 *)v15, 0xFFFFFF7F);
  KiExitDispatcher(v53, 0, 1, 0, v143);
  v14 = v135;
LABEL_104:
  if ( v7 )
  {
    v54 = *(_DWORD *)(v5 + 16);
    if ( (v54 & 4) == 0 )
    {
      ObfDereferenceObject(*(PVOID *)(v5 + 80));
      v54 = *(_DWORD *)(v5 + 16);
    }
    if ( (*(_BYTE *)(v7 + 80) & 2) != 0 && (v54 & 0x1000) == 0 )
    {
      KeSetEvent((PRKEVENT)(v7 + 152), 0, 0);
      goto LABEL_30;
    }
  }
LABEL_31:
  v20 = 2LL;
  v21 = *(_DWORD *)(v5 + 16);
  if ( (v21 & 0x2000) != 0 )
    v22 = *(_QWORD *)(v5 + 88) & 0xFFFFFFFFFFFFFFF9uLL;
  else
    v22 = 0LL;
  if ( (v21 & 0x100) != 0 )
  {
    v69 = *(unsigned int *)(v14 + 56);
    if ( v22 )
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v22 + 1232), (unsigned int)v69);
    }
    else
    {
      v71 = KeGetCurrentThread();
      v71->ReadTransferCount += v69;
    }
    __addgsqword(0x2EE8u, v69);
  }
  else if ( (v21 & 0x200) != 0 )
  {
    IopUpdateWriteTransferCount(*(_DWORD *)(v14 + 56), v22);
  }
  else
  {
    v23 = *(_QWORD *)(v14 + 56);
    if ( v23 >= 0 )
    {
      if ( v22 )
      {
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v22 + 1248), (unsigned int)v23);
      }
      else
      {
        v24 = KeGetCurrentThread();
        v24->OtherTransferCount += (unsigned int)v23;
      }
      __addgsqword(0x2EF8u, (unsigned int)v23);
    }
  }
  if ( (*(_DWORD *)(v5 + 16) & 0x2000) != 0 )
  {
    v57 = (volatile signed __int32 *)(v7 + 184);
    v58 = KeGetCurrentIrql();
    __writecr8(v20);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented(v7 + 184);
    }
    else
    {
      v59 = KeGetCurrentPrcb();
      SchedulerAssist = v59->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( v59->NestingLevel <= 1u )
        {
          v121 = SchedulerAssist[5];
          SchedulerAssist[5] = v121 + 1;
          if ( v121 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
            KiPerformUnboostKick(v59);
        }
      }
      if ( _interlockedbittestandset64(v57, 0LL) )
      {
        KiSetVpThreadSpinLockCount(v59, 0LL);
        KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(v7 + 184), v73);
      }
    }
    v61 = (_QWORD *)(v5 + 32);
    v62 = *(_QWORD *)(v5 + 32);
    v63 = *(_QWORD **)(v5 + 40);
    if ( *(_QWORD *)(v62 + 8) != v5 + 32 || (_QWORD *)*v63 != v61 )
      __fastfail(3u);
    *v63 = v62;
    *(_QWORD *)(v62 + 8) = v63;
    *(_QWORD *)(v5 + 40) = v5 + 32;
    *v61 = v61;
    ObfDereferenceObjectWithTag((PVOID)(*(_QWORD *)(v5 + 88) & 0xFFFFFFFFFFFFFFF9uLL), 0x70436F49u);
    *(_DWORD *)(v5 + 16) = *(_DWORD *)(v5 + 16) & 0xFFFF5FFF | 0x8000;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(v7 + 184, retaddr);
    else
      _InterlockedAnd64((volatile signed __int64 *)v57, 0LL);
    v64 = KeGetCurrentPrcb();
    v29 = (__int64)v64->SchedulerAssist;
    if ( v29 )
    {
      if ( v64->NestingLevel <= 1u )
      {
        v122 = *(_DWORD *)(v29 + 20) - 1;
        *(_DWORD *)(v29 + 20) = v122;
        if ( !v122 )
        {
          v20 = *(unsigned __int8 *)(v29 + 27);
          if ( !*(_BYTE *)(v29 + 25) && !(_BYTE)v20 )
            KiPerformUnboostKick(v64);
        }
      }
    }
    __writecr8(v58);
  }
  else
  {
    *(_QWORD *)(v5 + 152) = CurrentThread;
    v25 = 0;
    if ( CurrentThread )
    {
      v25 = KeGetCurrentIrql();
      __writecr8(v20);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireSpinLockInstrumented(&CurrentThread[1].WaitBlockFill11[16]);
      }
      else
      {
        v26 = KeGetCurrentPrcb();
        v27 = v26->SchedulerAssist;
        if ( v27 )
        {
          if ( v26->NestingLevel <= 1u )
          {
            v123 = v27[5];
            v27[5] = v123 + 1;
            if ( v123 == -1 && !*((_BYTE *)v27 + 25) && !*((_BYTE *)v27 + 27) )
              KiPerformUnboostKick(v26);
          }
        }
        if ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread[1].WaitBlockFill11[16], 0LL) )
        {
          KiSetVpThreadSpinLockCount(v26, 0LL);
          KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&CurrentThread[1].WaitBlockFill11[16], v75);
        }
      }
    }
    v28 = (_QWORD *)(v5 + 32);
    v29 = *(_QWORD *)(v5 + 32);
    v30 = *(__int64 **)(v5 + 40);
    if ( *(_QWORD *)(v29 + 8) != v5 + 32 || (_QWORD *)*v30 != v28 )
      __fastfail(3u);
    *v30 = v29;
    *(_QWORD *)(v29 + 8) = v30;
    *(_QWORD *)(v5 + 40) = v5 + 32;
    *v28 = v28;
    if ( CurrentThread )
    {
      v31 = (volatile signed __int64 *)&CurrentThread[1].WaitBlockFill11[16];
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        KiReleaseSpinLockInstrumented(v31, retaddr);
      else
        _InterlockedAnd64(v31, 0LL);
      v32 = KeGetCurrentPrcb();
      v29 = (__int64)v32->SchedulerAssist;
      if ( v29 )
      {
        if ( v32->NestingLevel <= 1u )
        {
          v124 = *(_DWORD *)(v29 + 20) - 1;
          *(_DWORD *)(v29 + 20) = v124;
          if ( !v124 )
          {
            v20 = *(unsigned __int8 *)(v29 + 27);
            if ( !*(_BYTE *)(v29 + 25) && !(_BYTE)v20 )
              KiPerformUnboostKick(v32);
          }
        }
      }
      __writecr8(v25);
    }
    v14 = v135;
  }
  v33 = *(_DWORD *)(v5 + 16) & 0x8000;
  if ( !v33 )
  {
    *(_QWORD *)(v5 + 88) &= ~1uLL;
    v29 = *(_QWORD *)(v5 + 88);
    if ( v29 )
    {
      if ( v153 )
        v74 = *(char *)(v5 + 70);
      else
        v74 = 2;
      KeInitializeApc(
        v5 + 120,
        (_DWORD)CurrentThread,
        v74,
        (unsigned int)IopUserRundown,
        (__int64)IopUserRundown,
        v29,
        *(_BYTE *)(v5 + 64),
        *(_QWORD *)(v5 + 96));
      KeInsertQueueApc(v5 + 120, *(_QWORD *)(v5 + 72), 0LL, 2);
      goto LABEL_76;
    }
  }
  v34 = v147;
  if ( v147
    && *(_QWORD *)(v5 + 96)
    && ((*(_DWORD *)(v7 + 80) & 0x2000000) == 0
     || *(_BYTE *)(v5 + 65)
     || (*(_DWORD *)(v5 + 48) & 0xC0000000) == 0x80000000) )
  {
    v55 = 0;
    v56 = *(_DWORD *)(*(_QWORD *)(v7 + 8) + 72LL);
    if ( v56 == 8 || v56 == 20 )
      v55 = 1;
    *(_QWORD *)(v5 + 120) = v148;
    *(_DWORD *)(v5 + 184) = 0;
    KeInsertQueueEx(v34, (_QWORD *)(v5 + 168), v55, 0);
    goto LABEL_76;
  }
  if ( v33 )
  {
    v65 = *(_QWORD *)(v5 + 88);
    do
    {
      v66 = v65;
      v67 = ((v65 >> 1) & 3) - 1;
      v65 = _InterlockedCompareExchange64(
              (volatile signed __int64 *)(v5 + 88),
              v65 & 0xFFFFFFFFFFFFFFF9uLL | (2 * v67),
              v65);
    }
    while ( v66 != v65 );
    if ( (_DWORD)v67 )
      goto LABEL_76;
    v68 = v5;
    if ( !IopDispatchFreeIrp )
    {
      IopFreeIrp(v5);
      goto LABEL_76;
    }
  }
  else
  {
    if ( !IopDispatchFreeIrp )
    {
      if ( *(_WORD *)v5 != 6 )
        KeBugCheckEx(0x44u, v5, 0x2555uLL, 0LL, 0LL);
      *(_WORD *)v5 = 0;
      v35 = *(_BYTE *)(v5 + 71);
      if ( (v35 & 0x40) != 0 )
      {
        IopFreeIrpExtension(v5, -1, 1);
        v35 = *(_BYTE *)(v5 + 71);
      }
      if ( (v35 & 0x21) == 0x21 )
      {
        IopFreeReserveIrp(v5, v29, v20);
      }
      else
      {
        v36 = *(unsigned __int16 *)(v5 + 4);
        if ( (unsigned int)v36 >= (unsigned int)KeNumberProcessors_0 )
        {
          v37 = KeGetCurrentPrcb();
        }
        else
        {
          _mm_lfence();
          v37 = (struct _KPRCB *)KiProcessorBlock[v36];
        }
        v38 = *(_BYTE *)(v5 + 71);
        if ( (v38 & 8) != 0 )
        {
          *(_BYTE *)(v5 + 71) = v38 ^ 8;
          _InterlockedIncrement(&v37->LookasideIrpFloat);
          v38 = *(_BYTE *)(v5 + 71);
        }
        if ( (v38 & 4) != 0
          && ((IopIrpStackProfilerFlags & 3) == 0
           || (v39 = *(_WORD *)(v5 + 2), v39 == 72 * (char)IopLargeIrpStackLocations + 208)
           || v39 == 72 * (char)IopMediumIrpStackLocations + 208
           || v39 == 280) )
        {
          v40 = *(_WORD *)(v5 + 2);
          if ( v40 >= (unsigned __int16)(72 * (char)IopLargeIrpStackLocations + 208) )
            v41 = 2LL;
          else
            v41 = v40 >= (unsigned __int16)(72 * (char)IopMediumIrpStackLocations + 208);
          *(_QWORD *)(v14 + 56) = v40;
          L = v37->PPLookasideList[v41].P;
          ++L->TotalFrees;
          if ( LOWORD(L->ListHead.Alignment) < L->Depth
            || (++L->FreeMisses,
                L = v37->PPLookasideList[v41].L,
                ++L->TotalFrees,
                LOWORD(L->ListHead.Alignment) < L->Depth) )
          {
            v43 = *(_BYTE *)(v5 + 71);
            if ( (v43 & 1) != 0 )
            {
              *(_BYTE *)(v5 + 71) = v43 ^ 1;
              ExReturnPoolQuota(v5);
            }
            RtlpInterlockedPushEntrySList(&L->ListHead, (PSLIST_ENTRY)v5);
          }
          else
          {
            ++L->FreeMisses;
            ExFreePoolWithTag((PVOID)v5, 0);
          }
        }
        else
        {
          ExFreePoolWithTag((PVOID)v5, 0);
        }
      }
      goto LABEL_76;
    }
    v68 = v5;
  }
  IovFreeIrpPrivate(v68);
LABEL_76:
  if ( v7 )
    ObDereferenceObjectDeferDelete((PVOID)v7);
}
