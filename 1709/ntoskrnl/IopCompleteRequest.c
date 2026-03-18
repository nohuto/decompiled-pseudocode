/*
 * XREFs of IopCompleteRequest @ 0x140070200
 * Callers:
 *     NtSetInformationFile @ 0x14005F8B0 (NtSetInformationFile.c)
 *     IoRemoveIoCompletion @ 0x14006C5D0 (IoRemoveIoCompletion.c)
 *     IopfCompleteRequest @ 0x1400713E0 (IopfCompleteRequest.c)
 *     NtQueryInformationFile @ 0x14049A060 (NtQueryInformationFile.c)
 *     IopSynchronousServiceTail @ 0x1404AD220 (IopSynchronousServiceTail.c)
 *     IopAbortRequest @ 0x1406B46C0 (IopAbortRequest.c)
 * Callees:
 *     KeInitializeApc @ 0x140025DA0 (KeInitializeApc.c)
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     KiWakeOtherQueueWaiters @ 0x140061290 (KiWakeOtherQueueWaiters.c)
 *     KiWakeQueueWaiter @ 0x140061410 (KiWakeQueueWaiter.c)
 *     ObDereferenceObjectDeferDelete @ 0x140071350 (ObDereferenceObjectDeferDelete.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     KiExitDispatcher @ 0x1400728B0 (KiExitDispatcher.c)
 *     MmUnmapLockedPages @ 0x140074D40 (MmUnmapLockedPages.c)
 *     KiTryUnwaitThread @ 0x1400757E0 (KiTryUnwaitThread.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     IoFreeIrp @ 0x1400853A0 (IoFreeIrp.c)
 *     IopDequeueIrpFromThread @ 0x1400857A0 (IopDequeueIrpFromThread.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400931F0 (KxWaitForSpinLockAndAcquire.c)
 *     KeInsertQueueApc @ 0x1400AB220 (KeInsertQueueApc.c)
 *     IopDequeueIrpFromFileObject @ 0x1400DDAB8 (IopDequeueIrpFromFileObject.c)
 *     KiAcquireKobjectLockSafe @ 0x1400E3300 (KiAcquireKobjectLockSafe.c)
 *     KeInsertQueueEx @ 0x140110C00 (KeInsertQueueEx.c)
 *     ExReturnPoolQuota @ 0x1401166AC (ExReturnPoolQuota.c)
 *     IopFreeIrpExtension @ 0x140117B28 (IopFreeIrpExtension.c)
 *     IopInterlockedAdd @ 0x140127694 (IopInterlockedAdd.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x140188FB0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     IopExceptionFilter @ 0x1401F5104 (IopExceptionFilter.c)
 *     IopFreeReserveIrp @ 0x1401F51B4 (IopFreeReserveIrp.c)
 *     KeIsThreadRunning @ 0x14020277C (KeIsThreadRunning.c)
 *     KiAcquireSpinLockInstrumented @ 0x140204F88 (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x14020503C (KiReleaseSpinLockInstrumented.c)
 *     EtwTraceEnqueueWork @ 0x14027B28C (EtwTraceEnqueueWork.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     IovFreeIrpPrivate @ 0x1407A5000 (IovFreeIrpPrivate.c)
 */

void __fastcall IopCompleteRequest(__int64 a1, __int64 a2, _QWORD *a3, __int64 *a4, _QWORD *a5)
{
  ULONG_PTR v5; // rbx
  struct _KTHREAD *CurrentThread; // r13
  __int64 v7; // rsi
  _DWORD *v8; // rdi
  int v9; // eax
  struct _MDL *v10; // r14
  __int64 v11; // r14
  __int64 v12; // r12
  __int64 *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdi
  int v16; // edi
  int v17; // eax
  _QWORD *v18; // rdi
  _QWORD *v19; // rax
  __int64 v20; // r8
  int v21; // eax
  volatile signed __int64 *v22; // rdx
  unsigned __int64 v23; // rcx
  struct _KTHREAD *v24; // rax
  unsigned __int8 v25; // di
  volatile signed __int32 *v26; // rcx
  _QWORD *v27; // rax
  __int64 v28; // rdx
  _QWORD *v29; // rcx
  volatile signed __int64 *v30; // rcx
  unsigned __int64 v31; // rax
  int v32; // ecx
  __int64 v33; // rdx
  __int64 v34; // rcx
  struct _KPRCB *v35; // r11
  char v36; // al
  __int64 v37; // r9
  __int16 v38; // r8
  __int64 v39; // r8
  _GENERAL_LOOKASIDE *L; // rdi
  char v41; // al
  struct _MDL *Next; // r12
  __int64 v43; // rcx
  struct _KPRCB *CurrentPrcb; // rdx
  _GENERAL_LOOKASIDE *P; // rcx
  volatile signed __int32 *v46; // rdi
  _QWORD *v47; // rax
  __int64 v48; // rdx
  _QWORD *v49; // rcx
  unsigned __int64 v50; // rax
  unsigned __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rcx
  struct _KPRCB *v54; // r11
  char v55; // al
  __int16 v56; // r8
  __int64 v57; // rcx
  int v58; // ecx
  int v59; // eax
  __int64 *v60; // rax
  bool v61; // zf
  __int64 *v62; // rcx
  int v63; // eax
  unsigned __int64 v64; // rcx
  unsigned __int64 v65; // rcx
  void *v66; // rcx
  struct _KTHREAD *v67; // rax
  struct _KTHREAD *v68; // rax
  struct _KEVENT *v69; // rcx
  __int64 v70; // r8
  int v71; // ecx
  int v72; // r8d
  char v73; // al
  _QWORD *v74; // rdx
  __int64 v75; // rcx
  char v76; // al
  int v77; // r10d
  __int64 **v78; // r9
  char v79; // cl
  _QWORD *v80; // r9
  __int64 v81; // rcx
  char v82; // al
  int v83; // r10d
  _QWORD *v84; // r8
  __int64 *v85; // r8
  __int64 **v86; // rax
  char v87; // al
  _QWORD *v88; // r9
  __int64 v89; // rcx
  char v90; // al
  int v91; // r10d
  __int64 **v92; // r8
  __int64 v93; // r8
  unsigned __int8 IsThreadRunning; // al
  __int64 v95; // rdx
  __int64 v96; // r9
  unsigned __int8 v97; // al
  __int64 v98; // rdx
  __int64 v99; // r9
  _QWORD *v100; // rax
  _QWORD *v101; // rdx
  __int64 v102; // rcx
  _QWORD *v103; // rax
  char v104; // al
  unsigned __int8 v105; // al
  __int64 v106; // rdx
  __int64 v107; // r9
  _QWORD *v108; // r9
  __int64 v109; // rcx
  char v110; // al
  int v111; // r10d
  _QWORD *v112; // r8
  __int64 v113; // r8
  unsigned __int8 v114; // al
  __int64 v115; // rdx
  __int64 v116; // r9
  struct _KPRCB *v117; // [rsp+40h] [rbp-A8h]
  __int64 v118; // [rsp+40h] [rbp-A8h]
  __int64 v119; // [rsp+40h] [rbp-A8h]
  struct _KPRCB *v120; // [rsp+48h] [rbp-A0h]
  __int64 v121; // [rsp+48h] [rbp-A0h]
  __int64 v122; // [rsp+48h] [rbp-A0h]
  struct _KPRCB *v123; // [rsp+50h] [rbp-98h]
  struct _KPRCB *v124; // [rsp+50h] [rbp-98h]
  struct _KPRCB *v125; // [rsp+50h] [rbp-98h]
  struct _KPRCB *v126; // [rsp+58h] [rbp-90h]
  __int64 *v127; // [rsp+60h] [rbp-88h]
  _QWORD *v128; // [rsp+60h] [rbp-88h]
  __int64 *v129; // [rsp+60h] [rbp-88h]
  _QWORD *v130; // [rsp+60h] [rbp-88h]
  __int64 v131; // [rsp+68h] [rbp-80h]
  _KTHREAD *v132; // [rsp+78h] [rbp-70h]
  _QWORD *v133; // [rsp+78h] [rbp-70h]
  __int64 *v134; // [rsp+78h] [rbp-70h]
  _QWORD *v135; // [rsp+78h] [rbp-70h]
  char v136; // [rsp+80h] [rbp-68h]
  __int64 *v137; // [rsp+80h] [rbp-68h]
  _KTHREAD *v138; // [rsp+80h] [rbp-68h]
  char CurrentIrql; // [rsp+88h] [rbp-60h]
  _KTHREAD *v140; // [rsp+88h] [rbp-60h]
  _KTHREAD *v141; // [rsp+88h] [rbp-60h]
  int v142[22]; // [rsp+90h] [rbp-58h] BYREF
  void *retaddr; // [rsp+E8h] [rbp+0h]
  unsigned __int8 v144; // [rsp+F0h] [rbp+8h]
  int v145; // [rsp+F0h] [rbp+8h]
  bool v146; // [rsp+100h] [rbp+18h]
  int v147; // [rsp+108h] [rbp+20h] BYREF

  v5 = a1 - 120;
  CurrentThread = KeGetCurrentThread();
  v7 = *a4;
  v146 = a3 && *a3 == 1LL;
  v8 = (_DWORD *)(v5 + 16);
  v9 = *(_DWORD *)(v5 + 16);
  if ( (v9 & 0x80u) != 0 )
  {
    *(_DWORD *)(v7 + 56) = *(_DWORD *)(v5 + 48);
    *(_QWORD *)(v5 + 160) = *a5;
    KeSetEvent((PRKEVENT)(v7 + 152), 0, 0);
    return;
  }
  if ( (v9 & 0x10) != 0 )
  {
    if ( (v9 & 0x40) != 0 )
    {
      v63 = *(_DWORD *)(v5 + 48);
      if ( v63 != -2147483626 && (v63 & 0xC0000000) != 0xC0000000 )
        memmove(*(void **)(v5 + 112), *(const void **)(v5 + 24), *(_QWORD *)(v5 + 56));
    }
    if ( (*(_DWORD *)(v5 + 16) & 0x20) != 0 )
      ExFreePoolWithTag(*(PVOID *)(v5 + 24), 0);
  }
  *v8 &= 0xFFFFFFCF;
  v10 = *(struct _MDL **)(v5 + 8);
  if ( v10 )
  {
    do
    {
      Next = v10->Next;
      if ( (v10->MdlFlags & 0x20) != 0 )
        MmUnmapLockedPages(v10->MappedSystemVa, v10);
      if ( (v10->MdlFlags & 8) != 0 )
      {
        v43 = *((unsigned __int16 *)&v10->MdlFlags + 1);
        if ( (unsigned int)v43 >= (unsigned int)KeNumberProcessors_0 )
        {
          CurrentPrcb = 0LL;
        }
        else
        {
          _mm_lfence();
          CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[v43];
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
          RtlpInterlockedPushEntrySList(&P->ListHead, (PSLIST_ENTRY)v10);
        }
        else
        {
          ++P->FreeMisses;
          ((void (__fastcall *)(struct _MDL *))P->FreeEx)(v10);
        }
      }
      else
      {
        ExFreePoolWithTag(v10, 0);
      }
      v10 = Next;
    }
    while ( Next );
  }
  *(_QWORD *)(v5 + 8) = 0LL;
  if ( (*(_DWORD *)(v5 + 48) & 0xC0000000) == 0xC0000000 )
  {
    if ( !*(_BYTE *)(v5 + 65) )
      goto LABEL_154;
    if ( (*v8 & 4) == 0 && (!v7 || (*(_DWORD *)(v7 + 80) & 2) == 0) )
      goto LABEL_11;
    if ( !v7 )
    {
LABEL_154:
      if ( (*v8 & 0x2000) != 0 )
        IopDequeueIrpFromFileObject(v5, v7);
      if ( v7 )
        ObDereferenceObjectDeferDelete((PVOID)v7);
      v66 = *(void **)(v5 + 80);
      if ( v66 && v7 && (*v8 & 4) == 0 )
        ObfDereferenceObject(v66);
      if ( (*v8 & 0x8000) != 0 )
      {
        if ( (unsigned int)IopInterlockedAdd(v5 + 88, 0xFFFFFFFFLL) )
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
    if ( (*v8 & 4) != 0 )
    {
      *(_OWORD *)*(_QWORD *)(v5 + 72) = *(_OWORD *)(v5 + 48);
      v69 = *(struct _KEVENT **)(v5 + 80);
      if ( v69 )
        goto LABEL_174;
    }
    else
    {
      *(_DWORD *)(v7 + 56) = *(_DWORD *)(v5 + 48);
    }
    v69 = (struct _KEVENT *)(v7 + 152);
LABEL_174:
    KeSetEvent(v69, 0, 0);
    goto LABEL_154;
  }
LABEL_11:
  v11 = 0LL;
  v12 = 0LL;
  if ( v7 )
  {
    v13 = *(__int64 **)(v7 + 176);
    if ( v13 )
    {
      v11 = *v13;
      v12 = v13[1];
    }
  }
  v14 = *(_QWORD *)(v5 + 72);
  if ( (*(_BYTE *)(v5 + 71) & 0x10) != 0 )
    *(_DWORD *)(v14 + 4) = *(_DWORD *)(v5 + 56);
  else
    *(_QWORD *)(v14 + 8) = *(_QWORD *)(v5 + 56);
  *(_DWORD *)v14 = *(_DWORD *)(v5 + 48);
  v15 = *(_QWORD *)(v5 + 80);
  if ( v15 )
  {
    if ( (*(_BYTE *)v15 & 0x7F) != 0 )
    {
      v58 = 0;
    }
    else
    {
      if ( *(_DWORD *)(v15 + 4) == 1 )
      {
        v131 = 2LL;
LABEL_128:
        if ( !v7 )
          goto LABEL_30;
        if ( (*(_DWORD *)(v5 + 16) & 4) == 0 )
          ObfDereferenceObject(*(PVOID *)(v5 + 80));
        if ( (*(_BYTE *)(v7 + 80) & 2) == 0 || (*(_DWORD *)(v5 + 16) & 0x1000) != 0 )
          goto LABEL_30;
        KeSetEvent((PRKEVENT)(v7 + 152), 0, 0);
LABEL_29:
        *(_DWORD *)(v7 + 56) = *(_DWORD *)(v5 + 48);
LABEL_30:
        v20 = 2LL;
        goto LABEL_31;
      }
      v58 = 1;
    }
    v145 = v58;
    CurrentIrql = KeGetCurrentIrql();
    v131 = 2LL;
    __writecr8(2uLL);
    v117 = KeGetCurrentPrcb();
    v147 = 0;
    if ( _interlockedbittestandset((volatile signed __int32 *)v15, 7u) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v147);
        while ( (*(_DWORD *)v15 & 0x80u) != 0 );
      }
      while ( _interlockedbittestandset((volatile signed __int32 *)v15, 7u) );
      v58 = v145;
    }
    v59 = *(_DWORD *)(v15 + 4);
    *(_DWORD *)(v15 + 4) = 1;
    if ( v59 )
    {
LABEL_127:
      _InterlockedAnd((volatile signed __int32 *)v15, 0xFFFFFF7F);
      KiExitDispatcher((_DWORD)v117, 0, 1, 0, CurrentIrql);
      goto LABEL_128;
    }
    v60 = (__int64 *)(v15 + 8);
    v61 = v58 == 0;
    v62 = *(__int64 **)(v15 + 8);
    if ( v61 )
    {
      if ( v62 != v60 )
      {
        while ( 1 )
        {
          v129 = v62;
          v134 = (__int64 *)*v62;
          v85 = (__int64 *)*v62;
          v86 = (__int64 **)v62[1];
          if ( *(__int64 **)(*v62 + 8) != v62 || *v86 != v62 )
            __fastfail(3u);
          *v86 = v85;
          v85[1] = (__int64)v86;
          v87 = *((_BYTE *)v62 + 16);
          if ( v87 == 1 )
          {
            if ( (unsigned __int8)KiTryUnwaitThread(v117, v62, *((unsigned __int16 *)v62 + 9), 0LL) )
            {
              v61 = (*(_DWORD *)(v15 + 4))-- == 1;
              if ( v61 )
                goto LABEL_127;
            }
          }
          else if ( v87 == 2 )
          {
            *((_BYTE *)v62 + 17) = 5;
            v122 = v62[3];
            *v62 = 0LL;
            KeGetCurrentIrql();
            __writecr8(2uLL);
            v126 = KeGetCurrentPrcb();
            v138 = v126->CurrentThread;
            if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
            {
              IsThreadRunning = KeIsThreadRunning(v126->CurrentThread);
              EtwTraceEnqueueWork(v96, v95, IsThreadRunning);
            }
            KiAcquireKobjectLockSafe(v122);
            v88 = (_QWORD *)(v122 + 8);
            v89 = v122;
            if ( (_QWORD *)*v88 == v88
              || *(_DWORD *)(v122 + 40) >= *(_DWORD *)(v122 + 44)
              || v138->Queue == (_DISPATCHER_HEADER *volatile)v122 && v138->WaitReason == 15 )
            {
              v90 = 0;
            }
            else
            {
              v90 = KiWakeQueueWaiter((__int64)v126, v122, (__int64)v129);
              v89 = v122;
              v88 = (_QWORD *)(v122 + 8);
            }
            if ( !v90 )
            {
              v91 = *(_DWORD *)(v89 + 4);
              *(_DWORD *)(v89 + 4) = v91 + 1;
              v92 = *(__int64 ***)(v89 + 32);
              if ( *v92 != (__int64 *)(v89 + 24) )
                __fastfail(3u);
              *v129 = v89 + 24;
              v129[1] = (__int64)v92;
              *v92 = v129;
              *(_QWORD *)(v89 + 32) = v129;
              if ( !v91 && (_QWORD *)*v88 != v88 )
              {
                KiWakeOtherQueueWaiters((__int64)v126, v89);
                v89 = v122;
              }
            }
            _InterlockedAnd((volatile signed __int32 *)v89, 0xFFFFFF7F);
            v61 = (*(_DWORD *)(v15 + 4))-- == 1;
            if ( v61 )
              goto LABEL_127;
          }
          else
          {
            KiTryUnwaitThread(v117, v62, 256LL, 0LL);
          }
          v62 = v134;
          if ( v134 == (__int64 *)(v15 + 8) )
            goto LABEL_127;
        }
      }
      goto LABEL_127;
    }
    if ( v62 == v60 )
    {
LABEL_143:
      v60[1] = (__int64)v60;
      *v60 = (__int64)v60;
      goto LABEL_127;
    }
    while ( 1 )
    {
      v127 = v62;
      v137 = (__int64 *)*v62;
      v73 = *((_BYTE *)v62 + 16);
      if ( v73 == 1 )
      {
        v93 = *((unsigned __int16 *)v62 + 9);
      }
      else
      {
        if ( v73 == 2 )
        {
          *((_BYTE *)v62 + 17) = 5;
          v121 = v62[3];
          *v62 = 0LL;
          KeGetCurrentIrql();
          __writecr8(2uLL);
          v123 = KeGetCurrentPrcb();
          v132 = v123->CurrentThread;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            v97 = KeIsThreadRunning(v123->CurrentThread);
            EtwTraceEnqueueWork(v99, v98, v97);
          }
          KiAcquireKobjectLockSafe(v121);
          v74 = (_QWORD *)(v121 + 8);
          v75 = v121;
          if ( (_QWORD *)*v74 == v74
            || *(_DWORD *)(v121 + 40) >= *(_DWORD *)(v121 + 44)
            || v132->Queue == (_DISPATCHER_HEADER *volatile)v121 && v132->WaitReason == 15 )
          {
            v76 = 0;
          }
          else
          {
            v76 = KiWakeQueueWaiter((__int64)v123, v121, (__int64)v127);
            v75 = v121;
            v74 = (_QWORD *)(v121 + 8);
          }
          if ( !v76 )
          {
            v77 = *(_DWORD *)(v75 + 4);
            *(_DWORD *)(v75 + 4) = v77 + 1;
            v78 = *(__int64 ***)(v75 + 32);
            if ( *v78 != (__int64 *)(v75 + 24) )
              __fastfail(3u);
            *v127 = v75 + 24;
            v127[1] = (__int64)v78;
            *v78 = v127;
            *(_QWORD *)(v75 + 32) = v127;
            if ( !v77 && (_QWORD *)*v74 != v74 )
            {
              KiWakeOtherQueueWaiters((__int64)v123, v75);
              v75 = v121;
            }
          }
          _InterlockedAnd((volatile signed __int32 *)v75, 0xFFFFFF7F);
          goto LABEL_205;
        }
        v93 = 256LL;
      }
      KiTryUnwaitThread(v117, v62, v93, 0LL);
LABEL_205:
      v60 = (__int64 *)(v15 + 8);
      v62 = v137;
      if ( v137 == (__int64 *)(v15 + 8) )
        goto LABEL_143;
    }
  }
  if ( v7 )
  {
    if ( (*(_DWORD *)(v7 + 80) & 0x4000000) == 0 )
    {
      if ( (*(_BYTE *)(v7 + 152) & 0x7F) != 0 )
      {
        v16 = 0;
        goto LABEL_23;
      }
      if ( *(_DWORD *)(v7 + 156) != 1 )
      {
        v16 = 1;
LABEL_23:
        v136 = KeGetCurrentIrql();
        v131 = 2LL;
        __writecr8(2uLL);
        v120 = KeGetCurrentPrcb();
        v142[0] = 0;
        while ( _interlockedbittestandset((volatile signed __int32 *)(v7 + 152), 7u) )
        {
          do
            KeYieldProcessorEx(v142);
          while ( (*(_DWORD *)(v7 + 152) & 0x80u) != 0 );
        }
        v17 = *(_DWORD *)(v7 + 156);
        *(_DWORD *)(v7 + 156) = 1;
        if ( v17 )
          goto LABEL_28;
        if ( !v16 )
        {
          v100 = *(_QWORD **)(v7 + 160);
          if ( v100 != (_QWORD *)(v7 + 160) )
          {
            while ( 1 )
            {
              v101 = v100;
              v130 = v100;
              v135 = (_QWORD *)*v100;
              v102 = *v100;
              v103 = (_QWORD *)v100[1];
              if ( *(_QWORD **)(v102 + 8) != v101 || (_QWORD *)*v103 != v101 )
                __fastfail(3u);
              *v103 = v102;
              *(_QWORD *)(v102 + 8) = v103;
              v104 = *((_BYTE *)v101 + 16);
              if ( v104 == 1 )
              {
                if ( (unsigned __int8)KiTryUnwaitThread(v120, v101, *((unsigned __int16 *)v101 + 9), 0LL) )
                {
                  v61 = (*(_DWORD *)(v7 + 156))-- == 1;
                  if ( v61 )
                    goto LABEL_28;
                }
              }
              else if ( v104 == 2 )
              {
                *((_BYTE *)v101 + 17) = 5;
                v119 = v101[3];
                *v101 = 0LL;
                KeGetCurrentIrql();
                __writecr8(2uLL);
                v125 = KeGetCurrentPrcb();
                v141 = v125->CurrentThread;
                if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
                {
                  v105 = KeIsThreadRunning(v125->CurrentThread);
                  EtwTraceEnqueueWork(v107, v106, v105);
                }
                KiAcquireKobjectLockSafe(v119);
                v108 = (_QWORD *)(v119 + 8);
                v109 = v119;
                if ( (_QWORD *)*v108 == v108
                  || *(_DWORD *)(v119 + 40) >= *(_DWORD *)(v119 + 44)
                  || v141->Queue == (_DISPATCHER_HEADER *volatile)v119 && v141->WaitReason == 15 )
                {
                  v110 = 0;
                }
                else
                {
                  v110 = KiWakeQueueWaiter((__int64)v125, v119, (__int64)v130);
                  v109 = v119;
                  v108 = (_QWORD *)(v119 + 8);
                }
                if ( !v110 )
                {
                  v111 = *(_DWORD *)(v109 + 4);
                  *(_DWORD *)(v109 + 4) = v111 + 1;
                  v112 = *(_QWORD **)(v109 + 32);
                  if ( *v112 != v109 + 24 )
                    __fastfail(3u);
                  *v130 = v109 + 24;
                  v130[1] = v112;
                  *v112 = v130;
                  *(_QWORD *)(v109 + 32) = v130;
                  if ( !v111 && (_QWORD *)*v108 != v108 )
                  {
                    KiWakeOtherQueueWaiters((__int64)v125, v109);
                    v109 = v119;
                  }
                }
                _InterlockedAnd((volatile signed __int32 *)v109, 0xFFFFFF7F);
                v61 = (*(_DWORD *)(v7 + 156))-- == 1;
                if ( v61 )
                  goto LABEL_28;
              }
              else
              {
                KiTryUnwaitThread(v120, v101, 256LL, 0LL);
              }
              v100 = v135;
              if ( v135 == (_QWORD *)(v7 + 160) )
                goto LABEL_28;
            }
          }
          goto LABEL_28;
        }
        v18 = (_QWORD *)(v7 + 160);
        v19 = *(_QWORD **)(v7 + 160);
        if ( v19 == (_QWORD *)(v7 + 160) )
        {
LABEL_27:
          *(_QWORD *)(v7 + 168) = v7 + 160;
          *v18 = v18;
LABEL_28:
          _InterlockedAnd((volatile signed __int32 *)(v7 + 152), 0xFFFFFF7F);
          KiExitDispatcher((_DWORD)v120, 0, 1, 0, v136);
          goto LABEL_29;
        }
        while ( 1 )
        {
          v128 = v19;
          v133 = (_QWORD *)*v19;
          v79 = *((_BYTE *)v19 + 16);
          if ( v79 == 1 )
          {
            v113 = *((unsigned __int16 *)v19 + 9);
          }
          else
          {
            if ( v79 == 2 )
            {
              *((_BYTE *)v19 + 17) = 5;
              v118 = v19[3];
              *v19 = 0LL;
              KeGetCurrentIrql();
              __writecr8(2uLL);
              v124 = KeGetCurrentPrcb();
              v140 = v124->CurrentThread;
              if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
              {
                v114 = KeIsThreadRunning(v124->CurrentThread);
                EtwTraceEnqueueWork(v116, v115, v114);
              }
              KiAcquireKobjectLockSafe(v118);
              v80 = (_QWORD *)(v118 + 8);
              v81 = v118;
              if ( (_QWORD *)*v80 == v80
                || *(_DWORD *)(v118 + 40) >= *(_DWORD *)(v118 + 44)
                || v140->Queue == (_DISPATCHER_HEADER *volatile)v118 && v140->WaitReason == 15 )
              {
                v82 = 0;
              }
              else
              {
                v82 = KiWakeQueueWaiter((__int64)v124, v118, (__int64)v128);
                v81 = v118;
                v80 = (_QWORD *)(v118 + 8);
              }
              if ( !v82 )
              {
                v83 = *(_DWORD *)(v81 + 4);
                *(_DWORD *)(v81 + 4) = v83 + 1;
                v84 = *(_QWORD **)(v81 + 32);
                if ( *v84 != v81 + 24 )
                  __fastfail(3u);
                *v128 = v81 + 24;
                v128[1] = v84;
                *v84 = v128;
                *(_QWORD *)(v81 + 32) = v128;
                if ( !v83 && (_QWORD *)*v80 != v80 )
                {
                  KiWakeOtherQueueWaiters((__int64)v124, v81);
                  v81 = v118;
                }
              }
              _InterlockedAnd((volatile signed __int32 *)v81, 0xFFFFFF7F);
              goto LABEL_229;
            }
            v113 = 256LL;
          }
          KiTryUnwaitThread(v120, v19, v113, 0LL);
LABEL_229:
          v19 = v133;
          if ( v133 == v18 )
            goto LABEL_27;
        }
      }
    }
    v131 = 2LL;
    goto LABEL_29;
  }
  v20 = 2LL;
  v131 = 2LL;
LABEL_31:
  v21 = *(_DWORD *)(v5 + 16);
  if ( (v21 & 0x2000) != 0 )
    v22 = (volatile signed __int64 *)(*(_QWORD *)(v5 + 88) & 0xFFFFFFFFFFFFFFF9uLL);
  else
    v22 = 0LL;
  if ( (v21 & 0x100) != 0 )
  {
    v64 = *(unsigned int *)(v5 + 56);
    if ( v22 )
    {
      _InterlockedExchangeAdd64(v22 + 154, (unsigned int)v64);
    }
    else
    {
      v67 = KeGetCurrentThread();
      v67->ReadTransferCount += v64;
    }
    __addgsqword(0x2EE8u, v64);
  }
  else if ( (v21 & 0x200) != 0 )
  {
    v65 = *(unsigned int *)(v5 + 56);
    if ( v22 )
    {
      _InterlockedExchangeAdd64(v22 + 155, (unsigned int)v65);
    }
    else
    {
      v68 = KeGetCurrentThread();
      v68->WriteTransferCount += v65;
    }
    __addgsqword(0x2EF0u, v65);
  }
  else if ( *(__int64 *)(v5 + 56) >= 0 )
  {
    v23 = *(unsigned int *)(v5 + 56);
    if ( v22 )
    {
      _InterlockedExchangeAdd64(v22 + 156, v23);
    }
    else
    {
      v24 = KeGetCurrentThread();
      v24->OtherTransferCount += v23;
    }
    __addgsqword(0x2EF8u, v23);
  }
  if ( (*(_DWORD *)(v5 + 16) & 0x2000) != 0 )
  {
    v46 = (volatile signed __int32 *)(v7 + 184);
    v144 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented(v7 + 184);
    }
    else if ( _interlockedbittestandset64(v46, 0LL) )
    {
      KxWaitForSpinLockAndAcquire(v7 + 184);
    }
    v47 = (_QWORD *)(v5 + 32);
    v48 = *(_QWORD *)(v5 + 32);
    v49 = *(_QWORD **)(v5 + 40);
    if ( *(_QWORD *)(v48 + 8) != v5 + 32 || (_QWORD *)*v49 != v47 )
      __fastfail(3u);
    *v49 = v48;
    *(_QWORD *)(v48 + 8) = v49;
    *(_QWORD *)(v5 + 40) = v5 + 32;
    *v47 = v47;
    ObfDereferenceObjectWithTag((PVOID)(*(_QWORD *)(v5 + 88) & 0xFFFFFFFFFFFFFFF9uLL), 0x70436F49u);
    *(_DWORD *)(v5 + 16) = *(_DWORD *)(v5 + 16) & 0xFFFF5FFF | 0x8000;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(v7 + 184, retaddr);
    else
      _InterlockedAnd64((volatile signed __int64 *)v46, 0LL);
    v31 = v144;
    goto LABEL_50;
  }
  *(_QWORD *)(v5 + 152) = CurrentThread;
  v25 = 0;
  if ( CurrentThread )
  {
    v26 = (volatile signed __int32 *)&CurrentThread[1].WaitBlockFill11[16];
    v25 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented(v26);
    }
    else if ( _interlockedbittestandset64(v26, 0LL) )
    {
      KxWaitForSpinLockAndAcquire(v26);
    }
  }
  v27 = (_QWORD *)(v5 + 32);
  v28 = *(_QWORD *)(v5 + 32);
  v29 = *(_QWORD **)(v5 + 40);
  if ( *(_QWORD *)(v28 + 8) != v5 + 32 || (_QWORD *)*v29 != v27 )
    __fastfail(3u);
  *v29 = v28;
  *(_QWORD *)(v28 + 8) = v29;
  *(_QWORD *)(v5 + 40) = v5 + 32;
  *v27 = v27;
  if ( CurrentThread )
  {
    v30 = (volatile signed __int64 *)&CurrentThread[1].WaitBlockFill11[16];
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(v30, retaddr);
    else
      _InterlockedAnd64(v30, 0LL);
    v31 = v25;
LABEL_50:
    __writecr8(v31);
  }
  v32 = *(_DWORD *)(v5 + 16) & 0x8000;
  if ( !v32 )
  {
    *(_QWORD *)(v5 + 88) &= ~1uLL;
    v33 = *(_QWORD *)(v5 + 88);
    if ( v33 )
    {
      if ( v146 )
        v72 = *(char *)(v5 + 70);
      else
        v72 = 2;
      KeInitializeApc(
        v5 + 120,
        (__int64)CurrentThread,
        v72,
        (__int64)IopUserRundown,
        (__int64)IopUserRundown,
        v33,
        *(_BYTE *)(v5 + 64),
        *(_QWORD *)(v5 + 96));
      KeInsertQueueApc(v5 + 120, *(_QWORD *)(v5 + 72), 0LL, 2LL);
      goto LABEL_73;
    }
  }
  if ( v11
    && *(_QWORD *)(v5 + 96)
    && ((*(_DWORD *)(v7 + 80) & 0x2000000) == 0
     || *(_BYTE *)(v5 + 65)
     || (*(_DWORD *)(v5 + 48) & 0xC0000000) == 0x80000000) )
  {
    v70 = 0LL;
    v71 = *(_DWORD *)(*(_QWORD *)(v7 + 8) + 72LL);
    if ( v71 == 8 || v71 == 20 )
      v70 = 1LL;
    *(_QWORD *)(v5 + 120) = v12;
    *(_DWORD *)(v5 + 184) = 0;
    KeInsertQueueEx(v11, v5 + 168, v70, 0LL);
    goto LABEL_73;
  }
  if ( v32 )
  {
    v50 = *(_QWORD *)(v5 + 88);
    do
    {
      v51 = v50;
      v52 = ((v50 >> 1) & 3) - 1;
      v50 = _InterlockedCompareExchange64(
              (volatile signed __int64 *)(v5 + 88),
              v50 & 0xFFFFFFFFFFFFFFF9uLL | (2 * v52),
              v50);
    }
    while ( v51 != v50 );
    if ( (_DWORD)v52 )
      goto LABEL_73;
    if ( !IopDispatchFreeIrp )
    {
      if ( *(_WORD *)v5 != 6 )
        KeBugCheckEx(0x44u, v5, 0x2566uLL, 0LL, 0LL);
      *(_WORD *)v5 = 0;
      if ( (*(_BYTE *)(v5 + 71) & 0x40) != 0 )
      {
        LOBYTE(v51) = 1;
        IopFreeIrpExtension(v5, 0xFFFFFFFFLL, v51);
      }
      if ( (*(_BYTE *)(v5 + 71) & 0x21) != 0x21 )
      {
        v53 = *(unsigned __int16 *)(v5 + 4);
        if ( (unsigned int)v53 >= (unsigned int)KeNumberProcessors_0 )
        {
          v54 = KeGetCurrentPrcb();
        }
        else
        {
          _mm_lfence();
          v54 = (struct _KPRCB *)KiProcessorBlock[v53];
        }
        v55 = *(_BYTE *)(v5 + 71);
        if ( (v55 & 8) != 0 )
        {
          *(_BYTE *)(v5 + 71) = v55 ^ 8;
          _InterlockedIncrement(&v54->LookasideIrpFloat);
        }
        if ( (*(_BYTE *)(v5 + 71) & 4) == 0 )
          goto LABEL_151;
        v37 = (unsigned __int8)IopLargeIrpStackLocations;
        if ( (IopIrpStackProfilerFlags & 3) != 0 )
        {
          v56 = *(_WORD *)(v5 + 2);
          if ( v56 != 72 * (char)IopLargeIrpStackLocations + 208
            && v56 != 72 * (char)IopMediumIrpStackLocations + 208
            && v56 != 280 )
          {
            goto LABEL_151;
          }
        }
        v39 = *(unsigned __int16 *)(v5 + 2);
        if ( (unsigned __int16)v39 >= (unsigned __int16)(72 * (char)IopLargeIrpStackLocations + 208) )
          v57 = 2LL;
        else
          v57 = (unsigned __int16)v39 >= (unsigned __int16)(72 * (char)IopMediumIrpStackLocations + 208);
        *(_QWORD *)(v5 + 56) = (unsigned __int16)v39;
        L = v54->PPLookasideList[v57].P;
        ++L->TotalFrees;
        if ( LOWORD(L->ListHead.Alignment) >= L->Depth )
        {
          ++L->FreeMisses;
          L = v54->PPLookasideList[v57].L;
          ++L->TotalFrees;
          if ( LOWORD(L->ListHead.Alignment) >= L->Depth )
          {
LABEL_166:
            ++L->FreeMisses;
            ExFreePoolWithTag((PVOID)v5, 0);
            goto LABEL_73;
          }
        }
        v41 = *(_BYTE *)(v5 + 71);
        if ( (v41 & 1) == 0 )
        {
LABEL_72:
          RtlpInterlockedPushEntrySList(&L->ListHead, (PSLIST_ENTRY)v5);
          goto LABEL_73;
        }
LABEL_184:
        *(_BYTE *)(v5 + 71) = v41 ^ 1;
        ExReturnPoolQuota(v5, 208LL, v39, v37);
        goto LABEL_72;
      }
      goto LABEL_318;
    }
  }
  else if ( !IopDispatchFreeIrp )
  {
    if ( *(_WORD *)v5 != 6 )
      KeBugCheckEx(0x44u, v5, 0x2566uLL, 0LL, 0LL);
    *(_WORD *)v5 = 0;
    if ( (*(_BYTE *)(v5 + 71) & 0x40) != 0 )
    {
      LOBYTE(v20) = 1;
      IopFreeIrpExtension(v5, 0xFFFFFFFFLL, v20);
    }
    if ( (*(_BYTE *)(v5 + 71) & 0x21) != 0x21 )
    {
      v34 = *(unsigned __int16 *)(v5 + 4);
      if ( (unsigned int)v34 >= (unsigned int)KeNumberProcessors_0 )
      {
        v35 = KeGetCurrentPrcb();
      }
      else
      {
        _mm_lfence();
        v35 = (struct _KPRCB *)KiProcessorBlock[v34];
      }
      v36 = *(_BYTE *)(v5 + 71);
      if ( (v36 & 8) != 0 )
      {
        *(_BYTE *)(v5 + 71) = v36 ^ 8;
        _InterlockedIncrement(&v35->LookasideIrpFloat);
      }
      if ( (*(_BYTE *)(v5 + 71) & 4) == 0
        || (v37 = (unsigned __int8)IopMediumIrpStackLocations, (IopIrpStackProfilerFlags & 3) != 0)
        && (v38 = *(_WORD *)(v5 + 2), v38 != 72 * (char)IopLargeIrpStackLocations + 208)
        && v38 != 72 * (char)IopMediumIrpStackLocations + 208
        && v38 != 280 )
      {
LABEL_151:
        ExFreePoolWithTag((PVOID)v5, 0);
        goto LABEL_73;
      }
      v39 = *(unsigned __int16 *)(v5 + 2);
      if ( (unsigned __int16)v39 < (unsigned __int16)(72 * (char)IopLargeIrpStackLocations + 208) )
        v131 = (unsigned __int16)v39 >= (unsigned __int16)(72 * (char)IopMediumIrpStackLocations + 208);
      *(_QWORD *)(v5 + 56) = (unsigned __int16)v39;
      L = v35->PPLookasideList[v131].P;
      ++L->TotalFrees;
      if ( LOWORD(L->ListHead.Alignment) >= L->Depth )
      {
        ++L->FreeMisses;
        L = v35->PPLookasideList[v131].L;
        ++L->TotalFrees;
        if ( LOWORD(L->ListHead.Alignment) >= L->Depth )
          goto LABEL_166;
      }
      v41 = *(_BYTE *)(v5 + 71);
      if ( (v41 & 1) == 0 )
        goto LABEL_72;
      goto LABEL_184;
    }
LABEL_318:
    IopFreeReserveIrp(v5);
    goto LABEL_73;
  }
  IovFreeIrpPrivate(v5);
LABEL_73:
  if ( v7 )
    ObDereferenceObjectDeferDelete((PVOID)v7);
}
