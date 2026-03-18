/*
 * XREFs of IopfCompleteRequest @ 0x1400713E0
 * Callers:
 *     IofCompleteRequest @ 0x1400713B0 (IofCompleteRequest.c)
 *     IopPerfCompleteRequest @ 0x1401FB4C4 (IopPerfCompleteRequest.c)
 *     IovCompleteRequest @ 0x1407A4DE8 (IovCompleteRequest.c)
 * Callees:
 *     KeInitializeApc @ 0x140025DA0 (KeInitializeApc.c)
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     KxAcquireSpinLock @ 0x140061000 (KxAcquireSpinLock.c)
 *     KiWakeOtherQueueWaiters @ 0x140061290 (KiWakeOtherQueueWaiters.c)
 *     KiWakeQueueWaiter @ 0x140061410 (KiWakeQueueWaiter.c)
 *     KiSignalThread @ 0x1400621E0 (KiSignalThread.c)
 *     IopCompleteRequest @ 0x140070200 (IopCompleteRequest.c)
 *     IofCompleteRequest @ 0x1400713B0 (IofCompleteRequest.c)
 *     KiExitDispatcher @ 0x1400728B0 (KiExitDispatcher.c)
 *     MmUnlockPages @ 0x140074480 (MmUnlockPages.c)
 *     KiTryUnwaitThread @ 0x1400757E0 (KiTryUnwaitThread.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     IoFreeIrp @ 0x1400853A0 (IoFreeIrp.c)
 *     IopFreeIrp @ 0x1400853D0 (IopFreeIrp.c)
 *     IopDequeueIrpFromThread @ 0x1400857A0 (IopDequeueIrpFromThread.c)
 *     KeAreInterruptsEnabled @ 0x140088EB8 (KeAreInterruptsEnabled.c)
 *     KxWaitForLockOwnerShip @ 0x14008A720 (KxWaitForLockOwnerShip.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400931F0 (KxWaitForSpinLockAndAcquire.c)
 *     KiRequestSoftwareInterrupt @ 0x140093244 (KiRequestSoftwareInterrupt.c)
 *     KeAcquireQueuedSpinLock @ 0x1400A3FD0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400A4D50 (KeReleaseQueuedSpinLock.c)
 *     KeInsertQueueApc @ 0x1400AB220 (KeInsertQueueApc.c)
 *     IopDropIrp @ 0x1400DD9D0 (IopDropIrp.c)
 *     KiAcquireKobjectLockSafe @ 0x1400E3300 (KiAcquireKobjectLockSafe.c)
 *     IoFreeMdl @ 0x1400E6070 (IoFreeMdl.c)
 *     KxWaitForLockChainValid @ 0x1400F1CA0 (KxWaitForLockChainValid.c)
 *     IopFreeIrpExtension @ 0x140117B28 (IopFreeIrpExtension.c)
 *     PoDeviceAcquireIrp @ 0x14012A8E0 (PoDeviceAcquireIrp.c)
 *     PoDeviceReleaseIrp @ 0x14012A99C (PoDeviceReleaseIrp.c)
 *     HvlNotifyLongSpinWait @ 0x140153060 (HvlNotifyLongSpinWait.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     KeIsThreadRunning @ 0x14020277C (KeIsThreadRunning.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140204BB0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140204D38 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiAcquireSpinLockInstrumented @ 0x140204F88 (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x14020503C (KiReleaseSpinLockInstrumented.c)
 *     EtwTraceEnqueueWork @ 0x14027B28C (EtwTraceEnqueueWork.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     IovFreeIrpPrivate @ 0x1407A5000 (IovFreeIrpPrivate.c)
 */

void __fastcall IopfCompleteRequest(ULONG_PTR BugCheckParameter1, unsigned __int8 a2)
{
  char v3; // cl
  unsigned __int8 v4; // r15
  _QWORD *v5; // r8
  __int64 v6; // rdi
  char v7; // r14
  int v8; // r12d
  char v9; // al
  char *v10; // rdi
  __int64 v11; // rax
  char v12; // al
  unsigned __int8 v13; // r15
  __int64 v14; // rsi
  int v15; // ecx
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rdx
  int v23; // eax
  void *v24; // rcx
  int v25; // edi
  struct _MDL *i; // rdi
  int v27; // eax
  __int64 v28; // r14
  __int64 v29; // rsi
  volatile signed __int32 *v30; // rdi
  unsigned __int8 v31; // r12
  int v32; // eax
  char v33; // r14
  struct _KPRCB *v34; // r15
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rdx
  char v38; // al
  _QWORD *v39; // rcx
  _QWORD *j; // rax
  __int64 v41; // rdx
  _QWORD *v42; // rcx
  __int64 v43; // rdi
  __int64 v44; // rdx
  char v45; // al
  int v46; // eax
  __int64 v47; // rcx
  __int64 v48; // rbx
  __int64 v49; // rdx
  _QWORD *v50; // rcx
  int v51; // r9d
  unsigned __int64 v52; // rcx
  int v53; // edi
  __int64 v54; // rsi
  int v55; // r12d
  int v56; // eax
  _QWORD *v57; // r13
  unsigned __int8 v58; // di
  __int64 *v59; // rax
  __int64 v60; // rdi
  unsigned __int8 v61; // al
  int v62; // esi
  _QWORD *v63; // r13
  _QWORD *v64; // r8
  struct _KPRCB *v65; // r9
  struct _KPRCB *v66; // r10
  _KTHREAD *v67; // r14
  unsigned int v68; // esi
  _QWORD *v69; // rdx
  _QWORD *v70; // r14
  __int64 v71; // rcx
  _QWORD *v72; // rax
  char v73; // r15
  __int64 v74; // rsi
  char v75; // cl
  int v76; // eax
  __int64 v77; // rcx
  __int64 v78; // r15
  __int64 v79; // rdx
  _QWORD *v80; // rcx
  char v81; // di
  __int64 v82; // rax
  ULONG_PTR v83; // rdx
  int v84; // edx
  _QWORD *v85; // rcx
  __int64 v86; // rsi
  unsigned __int8 CurrentIrql; // r14
  __int64 v88; // rdx
  _QWORD *v89; // rax
  _QWORD *v90; // rcx
  _QWORD *v91; // rax
  _QWORD *v92; // r13
  __int64 *v93; // rdx
  __int64 v94; // rcx
  struct _KPRCB *v95; // rax
  struct _KPRCB *v96; // r12
  char v97; // cl
  __int64 v98; // r8
  struct _MDL *v99; // rcx
  IRP *v100; // rsi
  struct _MDL *Next; // rdi
  KIRQL v102; // al
  __int64 *v103; // rcx
  KIRQL v104; // si
  void *v105; // r10
  unsigned __int64 v106; // rax
  _QWORD *v107; // rdx
  __int64 v108; // rcx
  _QWORD *v109; // rax
  char v110; // al
  bool v111; // zf
  _KTHREAD *CurrentThread; // r9
  unsigned __int8 IsThreadRunning; // al
  __int64 v114; // rdx
  __int64 v115; // r9
  struct _KPRCB *v116; // rdx
  __int64 v117; // rcx
  char v118; // al
  int v119; // r10d
  _QWORD *v120; // r9
  _QWORD *v121; // rax
  _KTHREAD *v122; // r9
  unsigned __int8 v123; // al
  __int64 v124; // rdx
  __int64 v125; // r9
  struct _KPRCB *v126; // r8
  __int64 v127; // rcx
  char v128; // al
  int v129; // r10d
  _QWORD *v130; // r9
  _QWORD *v131; // rax
  unsigned __int8 v132; // al
  _QWORD *v133; // rcx
  __int64 *v134; // r8
  __int64 v135; // rax
  _QWORD *v136; // rcx
  __int64 v137; // r8
  _QWORD *v138; // rax
  char v139; // cl
  __int64 v140; // rdx
  __int64 *v141; // rax
  signed __int32 v142[6]; // [rsp+8h] [rbp-100h] BYREF
  struct _KPRCB *v143; // [rsp+48h] [rbp-C0h]
  struct _KPRCB *CurrentPrcb; // [rsp+50h] [rbp-B8h]
  __int64 v145; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v146; // [rsp+60h] [rbp-A8h] BYREF
  struct _KPRCB *p_CurrentThread; // [rsp+68h] [rbp-A0h]
  _QWORD *v148; // [rsp+70h] [rbp-98h]
  struct _KPRCB *v149; // [rsp+78h] [rbp-90h]
  __int64 v150; // [rsp+80h] [rbp-88h] BYREF
  volatile signed __int64 *v151; // [rsp+88h] [rbp-80h]
  unsigned __int8 v152; // [rsp+90h] [rbp-78h]
  int v153; // [rsp+98h] [rbp-70h] BYREF
  int v154; // [rsp+9Ch] [rbp-6Ch] BYREF
  _KTHREAD *v155; // [rsp+A0h] [rbp-68h]
  _QWORD *v156; // [rsp+A8h] [rbp-60h]
  __int64 v157; // [rsp+B0h] [rbp-58h] BYREF
  int v158; // [rsp+B8h] [rbp-50h]
  _QWORD *v159; // [rsp+C0h] [rbp-48h]
  __int64 v160; // [rsp+C8h] [rbp-40h] BYREF
  char v161[8]; // [rsp+D0h] [rbp-38h] BYREF
  char v162[16]; // [rsp+D8h] [rbp-30h] BYREF
  void *retaddr; // [rsp+130h] [rbp+28h]
  int v164; // [rsp+138h] [rbp+30h] BYREF
  int v165; // [rsp+140h] [rbp+38h]
  int v166; // [rsp+148h] [rbp+40h] BYREF
  int v167; // [rsp+150h] [rbp+48h] BYREF

  LOBYTE(v165) = a2;
  v3 = *(_BYTE *)(BugCheckParameter1 + 66);
  v4 = a2;
  v146 = 0LL;
  v5 = (_QWORD *)*(unsigned __int8 *)(BugCheckParameter1 + 67);
  if ( (char)v5 > (char)(v3 + 1) || *(_WORD *)BugCheckParameter1 != 6 )
    KeBugCheckEx(0x44u, BugCheckParameter1, 0x120CuLL, 0LL, 0LL);
  v6 = *(_QWORD *)(BugCheckParameter1 + 184);
  if ( (char)v5 <= v3 && *(_BYTE *)v6 == 22 )
  {
    v7 = 1;
    PoDeviceReleaseIrp(BugCheckParameter1, *(unsigned __int8 *)(v6 + 1), *(_QWORD *)(v6 + 40));
  }
  else
  {
    v7 = 0;
  }
  if ( (*(_BYTE *)(BugCheckParameter1 + 211) & 2) != 0 )
    v8 = *(_DWORD *)(BugCheckParameter1 + 240);
  else
    v8 = 0;
  v9 = *(_BYTE *)(BugCheckParameter1 + 66);
  ++*(_BYTE *)(BugCheckParameter1 + 67);
  *(_QWORD *)(BugCheckParameter1 + 184) += 72LL;
  if ( *(char *)(BugCheckParameter1 + 67) <= (char)(v9 + 1) )
  {
    v10 = (char *)(v6 + 3);
    while ( 1 )
    {
      *(_BYTE *)(BugCheckParameter1 + 65) = *v10 & 1;
      v11 = *(int *)(BugCheckParameter1 + 48);
      if ( (int)v11 >= 0 )
        goto LABEL_11;
      if ( (_DWORD)v11 != v8 )
      {
        *v10 |= 2u;
        v8 = v11;
        *(_BYTE *)(BugCheckParameter1 + 211) |= 2u;
        *(_QWORD *)(BugCheckParameter1 + 240) = v11;
      }
      if ( *(int *)(BugCheckParameter1 + 48) >= 0 )
      {
LABEL_11:
        v12 = *v10;
        if ( (*v10 & 0x40) != 0 )
          goto LABEL_12;
      }
      else
      {
        v12 = *v10;
        if ( *v10 < 0 )
          goto LABEL_12;
      }
      if ( *(_BYTE *)(BugCheckParameter1 + 68) && (v12 & 0x20) != 0 )
      {
LABEL_12:
        v13 = *(v10 - 2);
        *v10 = v12 & 2;
        *((_WORD *)v10 - 1) = 0;
        *(_QWORD *)(v10 + 5) = 0LL;
        *(_QWORD *)(v10 + 13) = 0LL;
        *(_QWORD *)(v10 + 21) = 0LL;
        *(_QWORD *)(v10 + 45) = 0LL;
        if ( *(_BYTE *)(BugCheckParameter1 + 67) == *(_BYTE *)(BugCheckParameter1 + 66) + 1 )
          v14 = 0LL;
        else
          v14 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter1 + 184) + 40LL);
        if ( v7 )
          PoDeviceAcquireIrp(BugCheckParameter1, v13, v14);
        if ( (*(unsigned int (__fastcall **)(__int64, ULONG_PTR, _QWORD))(v10 + 53))(
               v14,
               BugCheckParameter1,
               *(_QWORD *)(v10 + 61)) == -1073741802 )
          return;
        if ( v7 )
          PoDeviceReleaseIrp(BugCheckParameter1, v13, v14);
        goto LABEL_28;
      }
      if ( *(_BYTE *)(BugCheckParameter1 + 65)
        && *(_BYTE *)(BugCheckParameter1 + 67) <= *(_BYTE *)(BugCheckParameter1 + 66) )
      {
        *(_BYTE *)(*(_QWORD *)(BugCheckParameter1 + 184) + 3LL) |= 1u;
      }
      *v10 &= 2u;
      *((_WORD *)v10 - 1) = 0;
      *(_QWORD *)(v10 + 5) = 0LL;
      *(_QWORD *)(v10 + 13) = 0LL;
      *(_QWORD *)(v10 + 21) = 0LL;
      *(_QWORD *)(v10 + 45) = 0LL;
LABEL_28:
      ++*(_BYTE *)(BugCheckParameter1 + 67);
      v10 += 72;
      *(_QWORD *)(BugCheckParameter1 + 184) += 72LL;
      if ( *(char *)(BugCheckParameter1 + 67) > (char)(*(_BYTE *)(BugCheckParameter1 + 66) + 1) )
      {
        v4 = v165;
        break;
      }
    }
  }
  v15 = *(_DWORD *)(BugCheckParameter1 + 16);
  if ( (v15 & 8) != 0 )
  {
    v99 = *(struct _MDL **)(BugCheckParameter1 + 8);
    v100 = *(IRP **)(BugCheckParameter1 + 24);
    if ( v99 )
    {
      do
      {
        Next = v99->Next;
        IoFreeMdl(v99);
        v99 = Next;
      }
      while ( Next );
    }
    IoFreeIrp((PIRP)BugCheckParameter1);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v100->AssociatedIrp, 0xFFFFFFFF) == 1 )
      IofCompleteRequest(v100, v4);
    return;
  }
  v16 = 4194817LL;
  if ( *(_DWORD *)(BugCheckParameter1 + 48) == 260 )
  {
    v106 = *(_QWORD *)(BugCheckParameter1 + 56);
    if ( v106 > 2 )
    {
      if ( v106 - 2684354563u <= 0x16 && _bittest64(&v16, v106 - 2684354563u) )
      {
        v146 = *(_QWORD *)(BugCheckParameter1 + 160);
        *(_QWORD *)(BugCheckParameter1 + 160) = 0LL;
      }
      else
      {
        *(_DWORD *)(BugCheckParameter1 + 48) = -1073741191;
      }
    }
  }
  if ( !v4 )
  {
    v17 = *(_QWORD *)(BugCheckParameter1 + 192);
    if ( v17 )
    {
      if ( (v15 & 0x400) == 0 )
      {
        v18 = *(_QWORD *)(v17 + 16);
        if ( (!v18 || (v20 = *(_QWORD *)(v18 + 8)) == 0)
          && ((*(_DWORD *)(v17 + 80) & 0x800) != 0
           || (v19 = *(_QWORD *)(*(_QWORD *)(v17 + 8) + 56LL)) == 0
           || (v20 = *(_QWORD *)(v19 + 8)) == 0) )
        {
          v20 = *(_QWORD *)(v17 + 8);
        }
        v21 = *(_QWORD *)(v20 + 24);
        if ( v21 )
        {
          v5 = *(_QWORD **)(v17 + 208);
          if ( v5 )
          {
            if ( v5 != IopRevocationExtension )
            {
              v93 = (__int64 *)v5[2];
              if ( v93 )
              {
                v22 = *v93;
                if ( v22 )
                {
                  while ( v20 != v22 )
                  {
                    v20 = *(_QWORD *)(v20 + 24);
                    if ( !v20 )
                      goto LABEL_119;
                  }
                  goto LABEL_41;
                }
              }
            }
          }
          do
          {
LABEL_119:
            v20 = v21;
            v21 = *(_QWORD *)(v21 + 24);
          }
          while ( v21 );
        }
        v22 = v20;
LABEL_41:
        v23 = *(_DWORD *)(v22 + 72);
        if ( v23 == 8 || v23 == 20 )
        {
          v4 = 1;
          LOBYTE(v165) = 1;
        }
      }
    }
  }
  v24 = *(void **)(BugCheckParameter1 + 160);
  if ( v24 )
  {
    ExFreePoolWithTag(v24, 0);
    *(_QWORD *)(BugCheckParameter1 + 160) = 0LL;
  }
  if ( (*(_BYTE *)(BugCheckParameter1 + 71) & 0x40) != 0 )
  {
    LOBYTE(v5) = 1;
    IopFreeIrpExtension(BugCheckParameter1, 0xFFFFFFFFLL, v5);
  }
  v25 = *(_DWORD *)(BugCheckParameter1 + 16);
  if ( (v25 & 0x402) != 0 )
  {
    if ( (v25 & 0x440) == 0 )
    {
      IopDequeueIrpFromThread(BugCheckParameter1);
      KeInitializeApc(
        BugCheckParameter1 + 120,
        *(_QWORD *)(BugCheckParameter1 + 152),
        *(char *)(BugCheckParameter1 + 70),
        (__int64)IopCompletePageWrite,
        0LL,
        0LL,
        0,
        0LL);
      KeInsertQueueApc(BugCheckParameter1 + 120, 0LL, 0LL, v4);
      return;
    }
    *(_OWORD *)*(_QWORD *)(BugCheckParameter1 + 72) = *(_OWORD *)(BugCheckParameter1 + 48);
    v53 = v25 & 0x42;
    if ( v53 )
    {
      v86 = *(_QWORD *)(BugCheckParameter1 + 152);
      CurrentIrql = 0;
      if ( v86 )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        KxAcquireSpinLock((PKSPIN_LOCK)(v86 + 1856));
      }
      v88 = *(_QWORD *)(BugCheckParameter1 + 32);
      v89 = (_QWORD *)(BugCheckParameter1 + 32);
      v90 = *(_QWORD **)(BugCheckParameter1 + 40);
      if ( *(_QWORD *)(v88 + 8) != BugCheckParameter1 + 32 || (_QWORD *)*v90 != v89 )
        __fastfail(3u);
      *v90 = v88;
      *(_QWORD *)(v88 + 8) = v90;
      *(_QWORD *)(BugCheckParameter1 + 40) = BugCheckParameter1 + 32;
      *v89 = v89;
      if ( v86 )
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          KiReleaseSpinLockInstrumented(v86 + 1856, retaddr);
        else
          _InterlockedAnd64((volatile signed __int64 *)(v86 + 1856), 0LL);
        __writecr8(CurrentIrql);
      }
    }
    v54 = *(_QWORD *)(BugCheckParameter1 + 80);
    if ( (*(_BYTE *)v54 & 0x7F) != 0 )
    {
      v55 = 0;
    }
    else
    {
      if ( *(_DWORD *)(v54 + 4) == 1 )
      {
LABEL_113:
        if ( v53 )
        {
          if ( IopDispatchFreeIrp )
            IovFreeIrpPrivate(BugCheckParameter1);
          else
            IopFreeIrp(BugCheckParameter1);
        }
        return;
      }
      v55 = 1;
    }
    v156 = (_QWORD *)KeGetCurrentIrql();
    __writecr8(2uLL);
    v164 = 0;
    CurrentPrcb = KeGetCurrentPrcb();
    while ( _interlockedbittestandset((volatile signed __int32 *)v54, 7u) )
    {
      do
        KeYieldProcessorEx(&v164);
      while ( (*(_DWORD *)v54 & 0x80u) != 0 );
    }
    v56 = *(_DWORD *)(v54 + 4);
    *(_DWORD *)(v54 + 4) = 1;
    if ( v56 )
    {
LABEL_112:
      _InterlockedAnd((volatile signed __int32 *)v54, 0xFFFFFF7F);
      KiExitDispatcher((_DWORD)CurrentPrcb, 0, 1, (unsigned __int8)v165, (char)v156);
      goto LABEL_113;
    }
    if ( !v55 )
    {
      v57 = *(_QWORD **)(v54 + 8);
      if ( v57 == (_QWORD *)(v54 + 8) )
        goto LABEL_112;
      while ( 1 )
      {
        v107 = v57;
        v57 = (_QWORD *)*v57;
        v148 = v107;
        v108 = *v107;
        v109 = (_QWORD *)v107[1];
        if ( *(_QWORD **)(*v107 + 8LL) != v107 || (_QWORD *)*v109 != v107 )
          __fastfail(3u);
        *v109 = v108;
        *(_QWORD *)(v108 + 8) = v109;
        v110 = *((_BYTE *)v107 + 16);
        if ( v110 == 1 )
        {
          if ( (unsigned __int8)KiTryUnwaitThread(CurrentPrcb, v107, *((unsigned __int16 *)v107 + 9), 0LL) )
          {
            v111 = (*(_DWORD *)(v54 + 4))-- == 1;
            if ( v111 )
              goto LABEL_112;
          }
        }
        else
        {
          if ( v110 == 2 )
          {
            *((_BYTE *)v107 + 17) = 5;
            v143 = (struct _KPRCB *)v107[3];
            p_CurrentThread = (struct _KPRCB *)&v143->CurrentThread;
            *v107 = 0LL;
            KeGetCurrentIrql();
            __writecr8(2uLL);
            v149 = KeGetCurrentPrcb();
            CurrentThread = v149->CurrentThread;
            v155 = CurrentThread;
            if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
            {
              IsThreadRunning = KeIsThreadRunning(CurrentThread);
              EtwTraceEnqueueWork(v115, v114, IsThreadRunning);
            }
            KiAcquireKobjectLockSafe(v143);
            v116 = p_CurrentThread;
            v117 = (__int64)v143;
            if ( *(struct _KPRCB **)&v116->MxCsr == v116
              || LODWORD(v143->RspBase) >= HIDWORD(v143->RspBase)
              || (struct _KPRCB *)v155->Queue == v143 && v155->WaitReason == 15 )
            {
LABEL_286:
              v119 = *(_DWORD *)(v117 + 4);
              *(_DWORD *)(v117 + 4) = v119 + 1;
              v120 = *(_QWORD **)(v117 + 32);
              if ( *v120 != v117 + 24 )
                __fastfail(3u);
              v121 = v148;
              *v148 = v117 + 24;
              v121[1] = v120;
              *v120 = v121;
              *(_QWORD *)(v117 + 32) = v121;
              if ( !v119 && *(struct _KPRCB **)&v116->MxCsr != v116 )
              {
                KiWakeOtherQueueWaiters((__int64)v149, v117);
                v117 = (__int64)v143;
              }
            }
            else
            {
              v118 = KiWakeQueueWaiter((__int64)v149, (__int64)v143, (__int64)v148);
              v117 = (__int64)v143;
              if ( !v118 )
              {
                v116 = p_CurrentThread;
                goto LABEL_286;
              }
            }
            _InterlockedAnd((volatile signed __int32 *)v117, 0xFFFFFF7F);
            v111 = (*(_DWORD *)(v54 + 4))-- == 1;
            if ( v111 )
              goto LABEL_112;
            goto LABEL_293;
          }
          KiTryUnwaitThread(CurrentPrcb, v107, 256LL, 0LL);
        }
LABEL_293:
        if ( v57 == (_QWORD *)(v54 + 8) )
          goto LABEL_112;
      }
    }
    v91 = *(_QWORD **)(v54 + 8);
    v92 = (_QWORD *)(v54 + 8);
    if ( v91 == (_QWORD *)(v54 + 8) )
    {
LABEL_194:
      *(_QWORD *)(v54 + 16) = v54 + 8;
      *v92 = v92;
      goto LABEL_112;
    }
    v96 = CurrentPrcb;
    while ( 1 )
    {
      v148 = v91;
      v159 = (_QWORD *)*v91;
      v97 = *((_BYTE *)v91 + 16);
      if ( v97 == 1 )
      {
        v98 = *((unsigned __int16 *)v91 + 9);
      }
      else
      {
        if ( v97 == 2 )
        {
          *((_BYTE *)v91 + 17) = 5;
          v143 = (struct _KPRCB *)v91[3];
          v149 = (struct _KPRCB *)&v143->CurrentThread;
          *v91 = 0LL;
          KeGetCurrentIrql();
          __writecr8(2uLL);
          p_CurrentThread = KeGetCurrentPrcb();
          v122 = p_CurrentThread->CurrentThread;
          v155 = v122;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            v123 = KeIsThreadRunning(v122);
            EtwTraceEnqueueWork(v125, v124, v123);
          }
          KiAcquireKobjectLockSafe(v143);
          v126 = v149;
          v127 = (__int64)v143;
          if ( *(struct _KPRCB **)&v126->MxCsr == v126
            || LODWORD(v143->RspBase) >= HIDWORD(v143->RspBase)
            || (struct _KPRCB *)v155->Queue == v143 && v155->WaitReason == 15 )
          {
LABEL_306:
            v129 = *(_DWORD *)(v127 + 4);
            *(_DWORD *)(v127 + 4) = v129 + 1;
            v130 = *(_QWORD **)(v127 + 32);
            if ( *v130 != v127 + 24 )
              __fastfail(3u);
            v131 = v148;
            *v148 = v127 + 24;
            v131[1] = v130;
            *v130 = v131;
            *(_QWORD *)(v127 + 32) = v131;
            if ( !v129 && *(struct _KPRCB **)&v126->MxCsr != v126 )
            {
              KiWakeOtherQueueWaiters((__int64)p_CurrentThread, v127);
              v127 = (__int64)v143;
            }
          }
          else
          {
            v128 = KiWakeQueueWaiter((__int64)p_CurrentThread, (__int64)v143, (__int64)v148);
            v127 = (__int64)v143;
            if ( !v128 )
            {
              v126 = v149;
              goto LABEL_306;
            }
          }
          _InterlockedAnd((volatile signed __int32 *)v127, 0xFFFFFF7F);
          goto LABEL_224;
        }
        v98 = 256LL;
      }
      KiTryUnwaitThread(v96, v91, v98, 0LL);
LABEL_224:
      v91 = v159;
      if ( v159 == v92 )
        goto LABEL_194;
    }
  }
  for ( i = *(struct _MDL **)(BugCheckParameter1 + 8); i; i = i->Next )
    MmUnlockPages(i);
  if ( (*(_DWORD *)(BugCheckParameter1 + 16) & 0x2000) != 0 )
    ObfDereferenceObject(*(PVOID *)(BugCheckParameter1 + 152));
  v27 = *(_DWORD *)(BugCheckParameter1 + 16);
  if ( (v27 & 0x800) != 0 && !*(_BYTE *)(BugCheckParameter1 + 65) )
  {
    if ( *(_DWORD *)(BugCheckParameter1 + 48) == 260 )
    {
      v52 = *(_QWORD *)(BugCheckParameter1 + 56) - 2684354563LL;
      if ( v52 <= 0x16 )
      {
        if ( _bittest64(&v16, v52) )
          *(_QWORD *)(BugCheckParameter1 + 160) = v146;
      }
    }
    return;
  }
  v28 = *(_QWORD *)(BugCheckParameter1 + 192);
  v29 = *(_QWORD *)(BugCheckParameter1 + 152);
  v145 = v28;
  if ( (v27 & 0x2000) != 0 )
  {
    v157 = 0LL;
    if ( *(_BYTE *)(BugCheckParameter1 + 65)
      || (*(_DWORD *)(BugCheckParameter1 + 48) & 0xC0000000) != 0xC0000000
      && ((*(_DWORD *)(v28 + 80) & 0x2000000) == 0 || *(int *)(BugCheckParameter1 + 48) < 0) )
    {
      v59 = *(__int64 **)(v28 + 176);
      if ( !v59 )
      {
        IopCompleteRequest(BugCheckParameter1 + 120, (__int64)v161, &v157, (__int64 *)(BugCheckParameter1 + 192), &v157);
        return;
      }
      v60 = *v59;
      *(_QWORD *)(BugCheckParameter1 + 120) = v59[1];
      *(_DWORD *)(BugCheckParameter1 + 184) = 0;
      v150 = 0LL;
      v151 = (volatile signed __int64 *)(v60 + 64);
      v61 = KeGetCurrentIrql();
      __writecr8(2uLL);
      v152 = v61;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireQueuedSpinLockInstrumented(&v150, v60 + 64);
      }
      else if ( _InterlockedExchange64((volatile __int64 *)(v60 + 64), (__int64)&v150) )
      {
        KxWaitForLockOwnerShip(&v150);
      }
      *(_DWORD *)(BugCheckParameter1 + 16) |= 0x10000u;
      if ( *(_BYTE *)(v60 + 72) )
      {
        v81 = 1;
        goto LABEL_167;
      }
      v62 = (char)v165;
      v63 = (_QWORD *)(BugCheckParameter1 + 168);
      v165 = (char)v165;
      v64 = (_QWORD *)(v60 + 8);
      v65 = (struct _KPRCB *)KeGetCurrentIrql();
      CurrentPrcb = v65;
      __writecr8(2uLL);
      v66 = KeGetCurrentPrcb();
      v143 = v66;
      v67 = v66->CurrentThread;
      if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
      {
        v132 = KeIsThreadRunning(v66->CurrentThread);
        EtwTraceEnqueueWork(v67, BugCheckParameter1 + 168, v132);
        v66 = v143;
        v64 = (_QWORD *)(v60 + 8);
        LOBYTE(v65) = (_BYTE)CurrentPrcb;
      }
      if ( v62 && (*(_BYTE *)(v60 + 1) & 2) != 0 )
        v165 = 0;
      v68 = 0;
      if ( _interlockedbittestandset((volatile signed __int32 *)v60, 7u) )
      {
        do
        {
          if ( (++v68 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v68);
        }
        while ( (*(_DWORD *)v60 & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)v60, 7u) );
        v66 = v143;
        v64 = (_QWORD *)(v60 + 8);
        LOBYTE(v65) = (_BYTE)CurrentPrcb;
      }
      v158 = *(_DWORD *)(v60 + 4);
      if ( (_QWORD *)*v64 == v64
        || *(_DWORD *)(v60 + 40) >= *(_DWORD *)(v60 + 44)
        || v67->Queue == (_DISPATCHER_HEADER *volatile)v60 && v67->WaitReason == 15 )
      {
LABEL_176:
        v84 = *(_DWORD *)(v60 + 4);
        *(_DWORD *)(v60 + 4) = v84 + 1;
        v85 = *(_QWORD **)(v60 + 32);
        if ( *v85 != v60 + 24 )
          __fastfail(3u);
        *v63 = v60 + 24;
        *(_QWORD *)(BugCheckParameter1 + 176) = v85;
        *v85 = v63;
        *(_QWORD *)(v60 + 32) = v63;
        if ( !v84 && (_QWORD *)*v64 != v64 )
        {
          KiWakeOtherQueueWaiters((__int64)v66, v60);
          LODWORD(v66) = (_DWORD)v143;
LABEL_165:
          LOBYTE(v65) = (_BYTE)CurrentPrcb;
        }
        _InterlockedAnd((volatile signed __int32 *)v60, 0xFFFFFF7F);
        KiExitDispatcher((_DWORD)v66, 0, 1, v165, (char)v65);
        v81 = 0;
LABEL_167:
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        {
          KiReleaseQueuedSpinLockInstrumented(&v150, retaddr);
          goto LABEL_170;
        }
        _m_prefetchw(&v150);
        v82 = v150;
        if ( !v150 )
        {
          if ( (__int64 *)_InterlockedCompareExchange64(v151, 0LL, (signed __int64)&v150) == &v150 )
          {
LABEL_170:
            __writecr8(v152);
            if ( !v81 )
              return;
            v83 = *(_QWORD *)(BugCheckParameter1 + 192);
LABEL_172:
            IopDropIrp((PIRP)BugCheckParameter1, v83);
            return;
          }
          v82 = KxWaitForLockChainValid(&v150);
        }
        v150 = 0LL;
        _InterlockedXor64((volatile signed __int64 *)(v82 + 8), 1uLL);
        goto LABEL_170;
      }
      v69 = (_QWORD *)*v64;
      while ( 1 )
      {
        v70 = v69;
        v156 = (_QWORD *)*v69;
        if ( *((_BYTE *)v69 + 16) != 3 )
        {
LABEL_175:
          LOBYTE(v65) = (_BYTE)CurrentPrcb;
          goto LABEL_176;
        }
        v71 = *v69;
        v72 = (_QWORD *)v69[1];
        if ( *(_QWORD **)(*v69 + 8LL) != v69 || (_QWORD *)*v72 != v69 )
          __fastfail(3u);
        *v72 = v71;
        v73 = 0;
        *(_QWORD *)(v71 + 8) = v72;
        v74 = v69[3];
        v166 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v74 + 64), 0LL) )
        {
          do
            KeYieldProcessorEx(&v166);
          while ( *(_QWORD *)(v74 + 64) );
        }
        if ( *(_BYTE *)(v74 + 388) == 5 )
        {
          v75 = *(_BYTE *)(v74 + 112);
          v73 = 0;
          v76 = v75 & 7;
          if ( v76 == 1 || v76 == 4 )
          {
            v77 = *(_QWORD *)(v74 + 232);
            if ( v77 )
            {
              if ( (*(_BYTE *)v77 & 0x7F) == 0x15 )
              {
                *(_DWORD *)(v74 + 540) = (unsigned __int8)*(_DWORD *)(v74 + 540);
                _InterlockedIncrement((volatile signed __int32 *)(v77 + 4LL * *(unsigned int *)(v74 + 540) + 536));
              }
              else
              {
                _InterlockedIncrement((volatile signed __int32 *)(v77 + 40));
              }
            }
            v78 = *(_QWORD *)(v74 + 712);
            if ( v78 )
            {
              v167 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v78 + 22800), 0LL) )
              {
                do
                  KeYieldProcessorEx(&v167);
                while ( *(_QWORD *)(v78 + 22800) );
              }
              if ( *(_QWORD *)(v74 + 712) )
              {
                v79 = *(_QWORD *)(v74 + 216);
                v80 = *(_QWORD **)(v74 + 224);
                if ( *(_QWORD *)(v79 + 8) != v74 + 216 || *v80 != v74 + 216 )
                  __fastfail(3u);
                *v80 = v79;
                *(_QWORD *)(v79 + 8) = v80;
                *(_QWORD *)(v74 + 712) = 0LL;
              }
              _InterlockedAnd64((volatile signed __int64 *)(v78 + 22800), 0LL);
            }
            v66 = v143;
            *(_BYTE *)(v74 + 388) = 7;
            v73 = 1;
            *(_QWORD *)(v74 + 216) = v66->DeferredReadyListHead.Next;
            v66->DeferredReadyListHead.Next = (struct _SINGLE_LIST_ENTRY *)(v74 + 216);
            *(_QWORD *)(v74 + 200) = v63;
            goto LABEL_164;
          }
          if ( (*(_BYTE *)(v74 + 112) & 7) != 0 )
          {
            if ( v76 != 5 )
            {
              v66 = v143;
              if ( v76 == 3 )
                *((_BYTE *)v70 + 17) = 2;
              goto LABEL_164;
            }
            *(_BYTE *)(v74 + 112) = v75 & 0xF8 | 6;
          }
          else
          {
            v73 = 1;
            *(_BYTE *)(v74 + 112) = v75 & 0xF8 | 2;
            *(_QWORD *)(v74 + 200) = v63;
            *((_BYTE *)v70 + 17) = 0;
          }
        }
        v66 = v143;
LABEL_164:
        *(_QWORD *)(v74 + 64) = 0LL;
        ++*((_BYTE *)v70 + 17);
        if ( v73 )
          goto LABEL_165;
        v69 = v156;
        v64 = (_QWORD *)(v60 + 8);
        if ( v156 == (_QWORD *)(v60 + 8) )
          goto LABEL_175;
      }
    }
  }
  if ( v29 )
  {
    v30 = (volatile signed __int32 *)(v29 + 1856);
    v31 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented(v29 + 1856);
    }
    else
    {
      if ( _interlockedbittestandset64(v30, 0LL) )
        KxWaitForSpinLockAndAcquire(v29 + 1856);
      v28 = v145;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseSpinLockInstrumented(v29 + 1856, retaddr);
    }
    else
    {
      _InterlockedAnd64((volatile signed __int64 *)v30, 0LL);
      v28 = v145;
    }
    __writecr8(v31);
  }
  if ( *(_BYTE *)(BugCheckParameter1 + 68) )
  {
    v102 = KeAcquireQueuedSpinLock(0xBuLL);
    v103 = (__int64 *)IopDeadIrps;
    v104 = v102;
    v105 = *(void **)(BugCheckParameter1 + 152);
    if ( (__int64 *)IopDeadIrps == &IopDeadIrps )
    {
LABEL_249:
      if ( v105 )
      {
        KeInitializeApc(
          BugCheckParameter1 + 120,
          (__int64)v105,
          *(char *)(BugCheckParameter1 + 70),
          (__int64)IopCompleteRequest,
          (__int64)IopAbortRequest,
          0LL,
          0,
          0LL);
        KeInsertQueueApc(BugCheckParameter1 + 120, v28, v146, (unsigned __int8)v165);
        KeReleaseQueuedSpinLock(0xBuLL, v104);
        return;
      }
    }
    else
    {
      while ( v103 - 4 != (__int64 *)BugCheckParameter1 )
      {
        v103 = (__int64 *)*v103;
        if ( v103 == &IopDeadIrps )
          goto LABEL_249;
      }
      v140 = *v103;
      v141 = (__int64 *)v103[1];
      if ( *(__int64 **)(*v103 + 8) != v103 || (__int64 *)*v141 != v103 )
        __fastfail(3u);
      *v141 = v140;
      *(_QWORD *)(v140 + 8) = v141;
      v103[1] = (__int64)v103;
      *v103 = (__int64)v103;
      ObfDereferenceObject(v105);
    }
    KeReleaseQueuedSpinLock(0xBuLL, v104);
    v83 = v28;
    goto LABEL_172;
  }
  if ( (struct _KTHREAD *)v29 != KeGetCurrentThread()
    || KeGetCurrentThread()->SpecialApcDisable
    || !(unsigned __int8)KeAreInterruptsEnabled()
    || KeGetCurrentIrql()
    || KeGetCurrentThread()->ApcStateIndex == 1 )
  {
    v32 = *(char *)(BugCheckParameter1 + 70);
    *(_BYTE *)(BugCheckParameter1 + 120) = 18;
    *(_BYTE *)(BugCheckParameter1 + 122) = 88;
    if ( v32 == 2 )
      LOBYTE(v32) = *(_BYTE *)(v29 + 586);
    *(_BYTE *)(BugCheckParameter1 + 200) = v32;
    *(_QWORD *)(BugCheckParameter1 + 128) = v29;
    *(_QWORD *)(BugCheckParameter1 + 160) = IopAbortRequest;
    *(_QWORD *)(BugCheckParameter1 + 152) = IopCompleteRequest;
    *(_QWORD *)(BugCheckParameter1 + 168) = 0LL;
    *(_WORD *)(BugCheckParameter1 + 201) = 0;
    *(_QWORD *)(BugCheckParameter1 + 176) = 0LL;
    v33 = KeGetCurrentIrql();
    __writecr8(2uLL);
    v34 = KeGetCurrentPrcb();
    v153 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v29 + 64), 0LL) )
    {
      do
        KeYieldProcessorEx(&v153);
      while ( *(_QWORD *)(v29 + 64) );
    }
    if ( (*(_DWORD *)(v29 + 116) & 0x4000) != 0 && !*(_BYTE *)(BugCheckParameter1 + 202) )
    {
      v35 = *(_QWORD *)(BugCheckParameter1 + 128);
      *(_QWORD *)(BugCheckParameter1 + 184) = v145;
      *(_QWORD *)(BugCheckParameter1 + 192) = v146;
      *(_BYTE *)(BugCheckParameter1 + 202) = 1;
      if ( !*(_BYTE *)(BugCheckParameter1 + 200) && *(_BYTE *)(v35 + 586) )
      {
        v36 = 600LL;
      }
      else
      {
        *(_BYTE *)(BugCheckParameter1 + 200) = *(_BYTE *)(v35 + 586);
        v36 = 152LL;
      }
      v37 = v36 + v35;
      v38 = *(_BYTE *)(BugCheckParameter1 + 201);
      if ( *(_QWORD *)(BugCheckParameter1 + 168) )
      {
        if ( v38 && *(void (__fastcall __noreturn **)())(BugCheckParameter1 + 152) == KiSchedulerApcTerminate )
        {
          *(_BYTE *)(v35 + 194) = 1;
          v133 = (_QWORD *)(BugCheckParameter1 + 136);
          v134 = (__int64 *)(v37 + 16LL * v38);
          v135 = *v134;
          if ( *(__int64 **)(*v134 + 8) != v134 )
            __fastfail(3u);
          *v133 = v135;
          *(_QWORD *)(BugCheckParameter1 + 144) = v134;
          *(_QWORD *)(v135 + 8) = v133;
          *v134 = (__int64)v133;
        }
        else
        {
          v136 = (_QWORD *)(BugCheckParameter1 + 136);
          v137 = v37 + 16LL * v38;
          v138 = *(_QWORD **)(v137 + 8);
          if ( *v138 != v137 )
            __fastfail(3u);
          *v136 = v137;
          *(_QWORD *)(BugCheckParameter1 + 144) = v138;
          *v138 = v136;
          *(_QWORD *)(v137 + 8) = v136;
        }
      }
      else
      {
        v39 = (_QWORD *)(v37 + 16LL * v38);
        for ( j = (_QWORD *)v39[1]; j != v39; j = (_QWORD *)j[1] )
        {
          if ( !j[4] )
            break;
        }
        v41 = *j;
        v42 = (_QWORD *)(BugCheckParameter1 + 136);
        if ( *(_QWORD **)(*j + 8LL) != j )
          __fastfail(3u);
        *v42 = v41;
        *(_QWORD *)(BugCheckParameter1 + 144) = j;
        *(_QWORD *)(v41 + 8) = v42;
        *j = v42;
      }
      v43 = *(_QWORD *)(BugCheckParameter1 + 128);
      v44 = *(unsigned __int8 *)(BugCheckParameter1 + 201);
      if ( *(char *)(BugCheckParameter1 + 200) == *(unsigned __int8 *)(v43 + 586) )
      {
        if ( (_KTHREAD *)v43 == v34->CurrentThread )
        {
          if ( !(_BYTE)v44
            && (!*(_DWORD *)(v43 + 484) || !*(_QWORD *)(BugCheckParameter1 + 168) && !*(_WORD *)(v43 + 486)) )
          {
            *(_BYTE *)(v43 + 193) = 1;
            if ( v33 )
            {
              LOBYTE(v44) = 1;
              KiRequestSoftwareInterrupt(v34, v44);
            }
            else
            {
              *(_DWORD *)(v43 + 116) |= 0x40u;
            }
          }
        }
        else if ( (_BYTE)v44 )
        {
          if ( *(_BYTE *)(v43 + 388) == 5 && *(_BYTE *)(v43 + 391) == 1 )
          {
            v139 = *(_BYTE *)(v43 + 112);
            if ( (unsigned __int8)((v139 & 7) - 3) > 1u
              && ((*(_DWORD *)(v43 + 116) & 0x10) != 0 || *(_BYTE *)(v43 + 194)) )
            {
              *(_BYTE *)(v43 + 112) = v139 | 0x40;
              if ( KiSignalThread((__int64)v34, v43, 192LL, 0LL) )
                *(_BYTE *)(v43 + 194) = 1;
            }
          }
        }
        else
        {
          *(_BYTE *)(v43 + 193) = 1;
          _InterlockedOr(v142, 0);
          v45 = *(_BYTE *)(v43 + 388);
          if ( v45 == 2 )
          {
            v94 = *(unsigned int *)(v43 + 536);
            LOBYTE(v44) = 1;
            LODWORD(v94) = v94 & 0x7FFFFFFF;
            if ( KeGetPcr()->Prcb.Number == (_DWORD)v94 )
            {
              KiRequestSoftwareInterrupt(0LL, v44);
            }
            else
            {
              v95 = KeGetCurrentPrcb();
              ++v95->SynchCounters.IpiSendSoftwareInterruptCount;
              HalSendSoftwareInterrupt(v94, v44);
            }
          }
          else if ( v45 == 5
                 && !*(_BYTE *)(v43 + 390)
                 && !*(_WORD *)(v43 + 486)
                 && (!*(_QWORD *)(BugCheckParameter1 + 168) || !*(_WORD *)(v43 + 484) && !*(_BYTE *)(v43 + 192)) )
          {
            v46 = *(_BYTE *)(v43 + 112) & 7;
            if ( v46 == 1 || v46 == 4 )
            {
              v47 = *(_QWORD *)(v43 + 232);
              if ( v47 )
              {
                if ( (*(_BYTE *)v47 & 0x7F) == 0x15 )
                {
                  *(_DWORD *)(v43 + 540) = (unsigned __int8)*(_DWORD *)(v43 + 540);
                  _InterlockedIncrement((volatile signed __int32 *)(v47 + 4LL * *(unsigned int *)(v43 + 540) + 536));
                }
                else
                {
                  _InterlockedIncrement((volatile signed __int32 *)(v47 + 40));
                }
              }
              v48 = *(_QWORD *)(v43 + 712);
              if ( v48 )
              {
                v154 = 0;
                while ( _interlockedbittestandset64((volatile signed __int32 *)(v48 + 22800), 0LL) )
                {
                  do
                    KeYieldProcessorEx(&v154);
                  while ( *(_QWORD *)(v48 + 22800) );
                }
                if ( *(_QWORD *)(v43 + 712) )
                {
                  v49 = *(_QWORD *)(v43 + 216);
                  v50 = *(_QWORD **)(v43 + 224);
                  if ( *(_QWORD *)(v49 + 8) != v43 + 216 || *v50 != v43 + 216 )
                    __fastfail(3u);
                  *v50 = v49;
                  *(_QWORD *)(v49 + 8) = v50;
                  *(_QWORD *)(v43 + 712) = 0LL;
                }
                _InterlockedAnd64((volatile signed __int64 *)(v48 + 22800), 0LL);
              }
              *(_BYTE *)(v43 + 388) = 7;
              *(_QWORD *)(v43 + 216) = v34->DeferredReadyListHead.Next;
              v34->DeferredReadyListHead.Next = (struct _SINGLE_LIST_ENTRY *)(v43 + 216);
              *(_QWORD *)(v43 + 200) = 256LL;
            }
            *(_BYTE *)(v43 + 112) |= 0x20u;
          }
        }
      }
    }
    v51 = (unsigned __int8)v165;
    *(_QWORD *)(v29 + 64) = 0LL;
    KiExitDispatcher((_DWORD)v34, 0, 1, v51, v33);
  }
  else
  {
    v160 = 1LL;
    v58 = KeGetCurrentIrql();
    __writecr8(1uLL);
    IopCompleteRequest(BugCheckParameter1 + 120, (__int64)v162, &v160, &v145, &v146);
    __writecr8(v58);
  }
}
