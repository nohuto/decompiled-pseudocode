/*
 * XREFs of IopfCompleteRequest @ 0x1400FA0B0
 * Callers:
 *     IofCompleteRequest @ 0x1400FA080 (IofCompleteRequest.c)
 *     IopPerfCompleteRequest @ 0x1402381FC (IopPerfCompleteRequest.c)
 *     IovCompleteRequest @ 0x140811DB4 (IovCompleteRequest.c)
 * Callees:
 *     KiWakeQueueWaiter @ 0x14002F920 (KiWakeQueueWaiter.c)
 *     KiSignalThread @ 0x14002F9B0 (KiSignalThread.c)
 *     KxAcquireSpinLock @ 0x1400347F0 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     IoFreeMdl @ 0x140041DB0 (IoFreeMdl.c)
 *     KeInsertQueueApc @ 0x140044AB0 (KeInsertQueueApc.c)
 *     IopVerifyDeviceObjectOnStack @ 0x1400651D4 (IopVerifyDeviceObjectOnStack.c)
 *     KeReleaseQueuedSpinLock @ 0x140068140 (KeReleaseQueuedSpinLock.c)
 *     KxWaitForSpinLockAndAcquire @ 0x140069440 (KxWaitForSpinLockAndAcquire.c)
 *     KiRequestSoftwareInterrupt @ 0x14007C130 (KiRequestSoftwareInterrupt.c)
 *     KiSendSoftwareInterrupt @ 0x14007CC8C (KiSendSoftwareInterrupt.c)
 *     KiWakeOtherQueueWaiters @ 0x140084FB0 (KiWakeOtherQueueWaiters.c)
 *     KxWaitForLockChainValid @ 0x1400889A0 (KxWaitForLockChainValid.c)
 *     IopFreeIrpExtension @ 0x1400A4884 (IopFreeIrpExtension.c)
 *     KeAcquireQueuedSpinLock @ 0x1400DF7F0 (KeAcquireQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x1400E0660 (KxWaitForLockOwnerShip.c)
 *     KiAcquireKobjectLockSafe @ 0x1400EA710 (KiAcquireKobjectLockSafe.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KeAreInterruptsEnabled @ 0x1400F0B30 (KeAreInterruptsEnabled.c)
 *     IopCompleteRequest @ 0x1400F9010 (IopCompleteRequest.c)
 *     IofCompleteRequest @ 0x1400FA080 (IofCompleteRequest.c)
 *     KiExitDispatcher @ 0x1400FB620 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x1400FD2A0 (KiTryUnwaitThread.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     IoFreeIrp @ 0x140106E30 (IoFreeIrp.c)
 *     IopFreeIrp @ 0x140106E60 (IopFreeIrp.c)
 *     IopDequeueIrpFromThread @ 0x140107260 (IopDequeueIrpFromThread.c)
 *     MmUnlockPages @ 0x14010FB60 (MmUnlockPages.c)
 *     KeInitializeApc @ 0x140132910 (KeInitializeApc.c)
 *     IopDropIrp @ 0x14013FD64 (IopDropIrp.c)
 *     PoDeviceReleaseIrp @ 0x140166C5C (PoDeviceReleaseIrp.c)
 *     PoDeviceAcquireIrp @ 0x140166D58 (PoDeviceAcquireIrp.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     KeIsThreadRunning @ 0x14023FDC4 (KeIsThreadRunning.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140242390 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140242518 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiAcquireSpinLockInstrumented @ 0x140242718 (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402427F0 (KiReleaseSpinLockInstrumented.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 *     EtwTraceEnqueueWork @ 0x1402AEBAC (EtwTraceEnqueueWork.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     IovFreeIrpPrivate @ 0x140811FCC (IovFreeIrpPrivate.c)
 */

void __fastcall IopfCompleteRequest(ULONG_PTR BugCheckParameter1, unsigned __int8 a2)
{
  char v2; // r8
  char v4; // cl
  unsigned __int8 v5; // r14
  __int64 v6; // r13
  __int64 v7; // rdi
  char v8; // r15
  __int64 v9; // rdx
  int v10; // r12d
  char v11; // cl
  char *v12; // rdi
  __int64 v13; // rax
  char v14; // al
  char v15; // cl
  unsigned __int8 v16; // r14
  __int64 v17; // rsi
  int v18; // eax
  __int64 v19; // r12
  __int64 v20; // rcx
  __int64 v21; // rdi
  __int64 v22; // rdi
  __int64 v23; // rdi
  __int64 v24; // r14
  int v25; // eax
  void *v26; // rcx
  int v27; // edi
  struct _MDL *v28; // rsi
  __int64 v29; // rsi
  ULONG_PTR *v30; // r15
  __int64 v31; // r14
  volatile signed __int32 *v32; // rdi
  unsigned __int8 v33; // r14
  struct _KPRCB *v34; // r10
  _DWORD *v35; // rcx
  struct _KPRCB *v36; // rcx
  _DWORD *v37; // rdx
  int v38; // eax
  char v39; // r13
  struct _KPRCB *v40; // r15
  _DWORD *v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rdx
  char v45; // al
  _QWORD *v46; // rcx
  _QWORD *j; // rax
  __int64 v48; // rdx
  _QWORD *v49; // rcx
  __int64 v50; // rdi
  __int64 v51; // rdx
  char v52; // al
  char v53; // al
  int v54; // ecx
  __int64 v55; // rcx
  __int64 v56; // rbx
  struct _KPRCB *v57; // r14
  _DWORD *v58; // rcx
  __int64 v59; // rdx
  _QWORD *v60; // rcx
  struct _KPRCB *v61; // rcx
  _DWORD *v62; // rdx
  struct _KPRCB *v63; // rcx
  _DWORD *v64; // rdx
  int v65; // edi
  __int64 v66; // rsi
  int v67; // r13d
  int v68; // eax
  __int64 *v69; // rax
  __int64 *v70; // r15
  bool v71; // zf
  struct _KPRCB *v72; // r13
  unsigned __int64 v73; // rcx
  _QWORD *v74; // rax
  __int64 i; // rax
  unsigned __int8 v76; // di
  __int64 *v77; // rax
  _QWORD *v78; // rcx
  __int64 v79; // rdi
  volatile __int64 *v80; // r10
  unsigned __int8 v81; // al
  struct _KPRCB *v82; // rcx
  _DWORD *SchedulerAssist; // rdx
  _QWORD *v84; // rdx
  int v85; // r13d
  _QWORD *v86; // rsi
  struct _KPRCB *v87; // rcx
  _KTHREAD *v88; // r14
  _QWORD *v89; // r14
  __int64 v90; // rsi
  _QWORD *v91; // rax
  char v92; // r12
  struct _KPRCB *v93; // rdx
  __int64 v94; // r13
  _DWORD *v95; // rcx
  struct _KPRCB *v96; // r15
  struct _KPRCB *v97; // rcx
  _DWORD *v98; // rdx
  char v99; // di
  __int64 v100; // rax
  struct _KPRCB *v101; // rcx
  _DWORD *v102; // rdx
  ULONG_PTR v103; // rdx
  __int64 v104; // rsi
  unsigned __int8 CurrentIrql; // r14
  __int64 v106; // rdx
  _QWORD *v107; // rax
  _QWORD *v108; // rcx
  __int64 *v109; // r14
  int v110; // edx
  _QWORD *v111; // rcx
  __int64 v112; // rcx
  char v113; // cl
  __int64 v114; // r8
  struct _MDL *v115; // rcx
  IRP *v116; // rsi
  struct _MDL *Next; // rdi
  __int64 v118; // rdx
  __int64 v119; // rdx
  __int64 v120; // rdx
  KIRQL v121; // al
  __int64 v122; // rcx
  KIRQL v123; // si
  void *v124; // r10
  unsigned __int64 v125; // rcx
  __int64 v126; // rdx
  __int64 v127; // rcx
  __int64 *v128; // rdx
  __int64 *v129; // rax
  char v130; // al
  _KTHREAD *CurrentThread; // r9
  unsigned __int8 IsThreadRunning; // al
  __int64 v133; // rdx
  __int64 v134; // r9
  struct _KPRCB *v135; // rdx
  volatile signed __int32 *v136; // rcx
  char v137; // al
  int v138; // r10d
  volatile signed __int32 **v139; // r9
  volatile signed __int32 *v140; // rax
  _KTHREAD *v141; // r9
  unsigned __int8 v142; // al
  __int64 v143; // rdx
  __int64 v144; // r9
  struct _KPRCB *v145; // r8
  volatile signed __int32 *v146; // rcx
  char v147; // al
  int v148; // r10d
  volatile signed __int32 **v149; // r9
  volatile signed __int32 *v150; // rax
  int v151; // eax
  unsigned __int8 v152; // al
  int v153; // eax
  int v154; // eax
  int v155; // eax
  int v156; // eax
  int v157; // eax
  int v158; // eax
  _QWORD *v159; // rcx
  __int64 *v160; // r8
  __int64 v161; // rax
  _QWORD *v162; // rcx
  __int64 v163; // r8
  _QWORD *v164; // rax
  int v165; // eax
  int v166; // eax
  char v167; // cl
  int v168; // eax
  __int64 *v169; // rdx
  __int64 **v170; // rax
  signed __int32 v171[6]; // [rsp+8h] [rbp-B9h] BYREF
  struct _KPRCB *CurrentPrcb; // [rsp+48h] [rbp-79h]
  __int64 *v173; // [rsp+50h] [rbp-71h]
  struct _KPRCB *p_CurrentThread; // [rsp+58h] [rbp-69h]
  __int64 *v175; // [rsp+60h] [rbp-61h]
  struct _KPRCB *v176; // [rsp+68h] [rbp-59h]
  _KTHREAD *v177; // [rsp+70h] [rbp-51h]
  __int64 v178; // [rsp+78h] [rbp-49h] BYREF
  __int64 v179; // [rsp+80h] [rbp-41h] BYREF
  volatile signed __int64 *v180; // [rsp+88h] [rbp-39h]
  unsigned __int8 v181; // [rsp+90h] [rbp-31h]
  int v182; // [rsp+98h] [rbp-29h] BYREF
  int v183; // [rsp+9Ch] [rbp-25h] BYREF
  __int64 v184; // [rsp+A0h] [rbp-21h] BYREF
  struct _KPRCB *v185; // [rsp+A8h] [rbp-19h]
  __int64 v186; // [rsp+B0h] [rbp-11h] BYREF
  int v187; // [rsp+B8h] [rbp-9h]
  __int64 v188; // [rsp+C0h] [rbp-1h] BYREF
  char v189[8]; // [rsp+C8h] [rbp+7h] BYREF
  char v190[8]; // [rsp+D0h] [rbp+Fh] BYREF
  void *retaddr; // [rsp+120h] [rbp+5Fh]
  int v192; // [rsp+128h] [rbp+67h] BYREF
  int v193; // [rsp+130h] [rbp+6Fh]
  int v194; // [rsp+138h] [rbp+77h] BYREF
  int v195; // [rsp+140h] [rbp+7Fh] BYREF

  LOBYTE(v193) = a2;
  v2 = *(_BYTE *)(BugCheckParameter1 + 66);
  v178 = 0LL;
  v4 = *(_BYTE *)(BugCheckParameter1 + 67);
  v5 = a2;
  v6 = 0LL;
  if ( v4 > (char)(v2 + 1) || *(_WORD *)BugCheckParameter1 != 6 )
    KeBugCheckEx(0x44u, BugCheckParameter1, 0x121BuLL, 0LL, 0LL);
  v7 = *(_QWORD *)(BugCheckParameter1 + 184);
  if ( v4 <= v2 && *(_BYTE *)v7 == 22 )
  {
    v8 = 1;
    PoDeviceReleaseIrp(BugCheckParameter1, *(unsigned __int8 *)(v7 + 1), *(_QWORD *)(v7 + 40));
    v4 = *(_BYTE *)(BugCheckParameter1 + 67);
    v9 = *(_QWORD *)(BugCheckParameter1 + 184);
    v2 = *(_BYTE *)(BugCheckParameter1 + 66);
  }
  else
  {
    v8 = 0;
    v9 = *(_QWORD *)(BugCheckParameter1 + 184);
  }
  if ( (*(_BYTE *)(BugCheckParameter1 + 211) & 2) != 0 )
    v10 = *(_DWORD *)(BugCheckParameter1 + 240);
  else
    v10 = 0;
  v11 = v4 + 1;
  *(_BYTE *)(BugCheckParameter1 + 67) = v11;
  *(_QWORD *)(BugCheckParameter1 + 184) = v9 + 72;
  if ( v11 <= (char)(v2 + 1) )
  {
    v12 = (char *)(v7 + 3);
    while ( 1 )
    {
      *(_BYTE *)(BugCheckParameter1 + 65) = *v12 & 1;
      v13 = *(int *)(BugCheckParameter1 + 48);
      if ( (int)v13 >= 0 )
        goto LABEL_11;
      if ( (_DWORD)v13 != v10 )
      {
        *v12 |= 2u;
        v10 = v13;
        *(_BYTE *)(BugCheckParameter1 + 211) |= 2u;
        *(_QWORD *)(BugCheckParameter1 + 240) = v13;
        LODWORD(v13) = *(_DWORD *)(BugCheckParameter1 + 48);
      }
      if ( (int)v13 >= 0 )
      {
LABEL_11:
        v14 = *v12;
        v15 = *v12;
        if ( (*v12 & 0x40) != 0 )
          goto LABEL_12;
      }
      else
      {
        v14 = *v12;
        v15 = *v12;
        if ( *v12 < 0 )
          goto LABEL_12;
      }
      if ( *(_BYTE *)(BugCheckParameter1 + 68) && (v14 & 0x20) != 0 )
      {
LABEL_12:
        v16 = *(v12 - 2);
        *v12 = v14 & 2;
        *((_WORD *)v12 - 1) = 0;
        *(_QWORD *)(v12 + 5) = 0LL;
        *(_QWORD *)(v12 + 13) = 0LL;
        *(_QWORD *)(v12 + 21) = 0LL;
        *(_QWORD *)(v12 + 45) = 0LL;
        if ( *(_BYTE *)(BugCheckParameter1 + 67) == *(_BYTE *)(BugCheckParameter1 + 66) + 1 )
          v17 = 0LL;
        else
          v17 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter1 + 184) + 40LL);
        if ( v8 )
          PoDeviceAcquireIrp(BugCheckParameter1, v16, v17);
        if ( (*(unsigned int (__fastcall **)(__int64, ULONG_PTR, _QWORD))(v12 + 53))(
               v17,
               BugCheckParameter1,
               *(_QWORD *)(v12 + 61)) == -1073741802 )
          return;
        if ( v8 )
          PoDeviceReleaseIrp(BugCheckParameter1, v16, v17);
        goto LABEL_29;
      }
      if ( *(_BYTE *)(BugCheckParameter1 + 65)
        && *(_BYTE *)(BugCheckParameter1 + 67) <= *(_BYTE *)(BugCheckParameter1 + 66) )
      {
        *(_BYTE *)(*(_QWORD *)(BugCheckParameter1 + 184) + 3LL) |= 1u;
        v15 = *v12;
      }
      *((_WORD *)v12 - 1) = 0;
      *v12 = v15 & 2;
      *(_QWORD *)(v12 + 5) = 0LL;
      *(_QWORD *)(v12 + 13) = 0LL;
      *(_QWORD *)(v12 + 21) = 0LL;
      *(_QWORD *)(v12 + 45) = 0LL;
LABEL_29:
      ++*(_BYTE *)(BugCheckParameter1 + 67);
      v12 += 72;
      *(_QWORD *)(BugCheckParameter1 + 184) += 72LL;
      if ( *(char *)(BugCheckParameter1 + 67) > (char)(*(_BYTE *)(BugCheckParameter1 + 66) + 1) )
      {
        v5 = v193;
        break;
      }
    }
  }
  v18 = *(_DWORD *)(BugCheckParameter1 + 16);
  if ( (v18 & 8) != 0 )
  {
    v115 = *(struct _MDL **)(BugCheckParameter1 + 8);
    v116 = *(IRP **)(BugCheckParameter1 + 24);
    if ( v115 )
    {
      do
      {
        Next = v115->Next;
        IoFreeMdl(v115);
        v115 = Next;
      }
      while ( Next );
    }
    IoFreeIrp((PIRP)BugCheckParameter1);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v116->AssociatedIrp, 0xFFFFFFFF) == 1 )
      IofCompleteRequest(v116, v5);
    return;
  }
  v19 = 4194817LL;
  if ( *(_DWORD *)(BugCheckParameter1 + 48) == 260 )
  {
    v125 = *(_QWORD *)(BugCheckParameter1 + 56);
    if ( v125 > 2 )
    {
      if ( v125 - 2684354563u <= 0x16 && _bittest64(&v19, v125 - 2684354563u) )
      {
        v6 = *(_QWORD *)(BugCheckParameter1 + 160);
        v178 = v6;
        *(_QWORD *)(BugCheckParameter1 + 160) = 0LL;
      }
      else
      {
        *(_DWORD *)(BugCheckParameter1 + 48) = -1073741191;
      }
    }
  }
  if ( !v5 )
  {
    v20 = *(_QWORD *)(BugCheckParameter1 + 192);
    if ( v20 )
    {
      if ( (v18 & 0x400) == 0 )
      {
        v21 = *(_QWORD *)(v20 + 16);
        if ( (!v21 || (v23 = *(_QWORD *)(v21 + 8)) == 0)
          && ((*(_DWORD *)(v20 + 80) & 0x800) != 0
           || (v22 = *(_QWORD *)(*(_QWORD *)(v20 + 8) + 56LL)) == 0
           || (v23 = *(_QWORD *)(v22 + 8)) == 0) )
        {
          v23 = *(_QWORD *)(v20 + 8);
        }
        if ( *(_QWORD *)(v23 + 24) )
        {
          v74 = *(_QWORD **)(v20 + 208);
          if ( v74 )
          {
            if ( v74 != IopRevocationExtension )
            {
              v109 = (__int64 *)v74[2];
              if ( v109 )
              {
                v24 = *v109;
                if ( v24 )
                {
                  if ( IopVerifyDeviceObjectOnStack(v23, v24, 0) )
                  {
LABEL_42:
                    v25 = *(_DWORD *)(v24 + 72);
                    if ( v25 == 8 || v25 == 20 )
                    {
                      v5 = 1;
                      LOBYTE(v193) = 1;
                    }
                    else
                    {
                      v5 = v193;
                    }
                    goto LABEL_45;
                  }
                }
              }
            }
          }
          for ( i = *(_QWORD *)(v23 + 24); i; i = *(_QWORD *)(i + 24) )
            v23 = i;
        }
        v24 = v23;
        goto LABEL_42;
      }
    }
  }
LABEL_45:
  v26 = *(void **)(BugCheckParameter1 + 160);
  if ( v26 )
  {
    ExFreePoolWithTag(v26, 0);
    *(_QWORD *)(BugCheckParameter1 + 160) = 0LL;
  }
  if ( (*(_BYTE *)(BugCheckParameter1 + 71) & 0x40) != 0 )
    IopFreeIrpExtension(BugCheckParameter1, -1, 1);
  v27 = *(_DWORD *)(BugCheckParameter1 + 16);
  if ( (v27 & 0x402) != 0 )
  {
    if ( (v27 & 0x440) == 0 )
    {
      IopDequeueIrpFromThread(BugCheckParameter1);
      KeInitializeApc(
        BugCheckParameter1 + 120,
        *(_QWORD *)(BugCheckParameter1 + 152),
        *(char *)(BugCheckParameter1 + 70),
        (unsigned int)IopCompletePageWrite,
        0LL,
        0LL,
        0,
        0LL);
      KeInsertQueueApc(BugCheckParameter1 + 120, 0LL, 0LL, v5);
      return;
    }
    *(_OWORD *)*(_QWORD *)(BugCheckParameter1 + 72) = *(_OWORD *)(BugCheckParameter1 + 48);
    v65 = v27 & 0x42;
    if ( v65 )
    {
      v104 = *(_QWORD *)(BugCheckParameter1 + 152);
      CurrentIrql = 0;
      if ( v104 )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        KxAcquireSpinLock((PKSPIN_LOCK)(v104 + 1856));
      }
      v106 = *(_QWORD *)(BugCheckParameter1 + 32);
      v107 = (_QWORD *)(BugCheckParameter1 + 32);
      v108 = *(_QWORD **)(BugCheckParameter1 + 40);
      if ( *(_QWORD *)(v106 + 8) != BugCheckParameter1 + 32 || (_QWORD *)*v108 != v107 )
        __fastfail(3u);
      *v108 = v106;
      *(_QWORD *)(v106 + 8) = v108;
      *(_QWORD *)(BugCheckParameter1 + 40) = BugCheckParameter1 + 32;
      *v107 = v107;
      if ( v104 )
      {
        KxReleaseSpinLock((PKSPIN_LOCK)(v104 + 1856));
        __writecr8(CurrentIrql);
      }
    }
    v66 = *(_QWORD *)(BugCheckParameter1 + 80);
    if ( (*(_BYTE *)v66 & 0x7F) != 0 )
    {
      v67 = 0;
    }
    else
    {
      if ( *(_DWORD *)(v66 + 4) == 1 )
      {
LABEL_110:
        if ( v65 )
        {
          if ( IopDispatchFreeIrp )
            IovFreeIrpPrivate(BugCheckParameter1);
          else
            IopFreeIrp(BugCheckParameter1);
        }
        return;
      }
      v67 = 1;
    }
    v185 = (struct _KPRCB *)KeGetCurrentIrql();
    __writecr8(2uLL);
    v192 = 0;
    CurrentPrcb = KeGetCurrentPrcb();
    while ( _interlockedbittestandset((volatile signed __int32 *)v66, 7u) )
    {
      do
        KeYieldProcessorEx(&v192);
      while ( (*(_DWORD *)v66 & 0x80u) != 0 );
    }
    v68 = *(_DWORD *)(v66 + 4);
    *(_DWORD *)(v66 + 4) = 1;
    if ( v68 )
    {
      LODWORD(v72) = (_DWORD)CurrentPrcb;
      goto LABEL_109;
    }
    v69 = *(__int64 **)(v66 + 8);
    v70 = (__int64 *)(v66 + 8);
    v71 = v67 == 0;
    v72 = CurrentPrcb;
    if ( v71 )
    {
      if ( v69 == v70 )
      {
LABEL_109:
        _InterlockedAnd((volatile signed __int32 *)v66, 0xFFFFFF7F);
        KiExitDispatcher((_DWORD)v72, 0, 1, (unsigned __int8)v193, (char)v185);
        goto LABEL_110;
      }
      while ( 1 )
      {
        v127 = *v69;
        v128 = v69;
        v175 = v69;
        v129 = (__int64 *)v69[1];
        v173 = (__int64 *)v127;
        if ( *(__int64 **)(v127 + 8) != v128 || (__int64 *)*v129 != v128 )
          __fastfail(3u);
        *v129 = v127;
        *(_QWORD *)(v127 + 8) = v129;
        v130 = *((_BYTE *)v128 + 16);
        if ( v130 == 1 )
        {
          if ( (unsigned __int8)KiTryUnwaitThread(v72, v128, *((unsigned __int16 *)v128 + 9), 0LL) )
          {
            v71 = (*(_DWORD *)(v66 + 4))-- == 1;
            if ( v71 )
              goto LABEL_109;
          }
        }
        else
        {
          if ( v130 == 2 )
          {
            *((_BYTE *)v128 + 17) = 5;
            CurrentPrcb = (struct _KPRCB *)v128[3];
            p_CurrentThread = (struct _KPRCB *)&CurrentPrcb->CurrentThread;
            *v128 = 0LL;
            KeGetCurrentIrql();
            __writecr8(2uLL);
            v176 = KeGetCurrentPrcb();
            CurrentThread = v176->CurrentThread;
            v177 = CurrentThread;
            if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
            {
              IsThreadRunning = KeIsThreadRunning(CurrentThread);
              EtwTraceEnqueueWork(v134, v133, IsThreadRunning);
            }
            KiAcquireKobjectLockSafe((volatile signed __int32 *)CurrentPrcb);
            v135 = p_CurrentThread;
            v136 = (volatile signed __int32 *)CurrentPrcb;
            if ( *(struct _KPRCB **)&v135->MxCsr == v135
              || LODWORD(CurrentPrcb->RspBase) >= HIDWORD(CurrentPrcb->RspBase)
              || (struct _KPRCB *)v177->Queue == CurrentPrcb && v177->WaitReason == 15 )
            {
LABEL_273:
              v138 = *((_DWORD *)v136 + 1);
              *((_DWORD *)v136 + 1) = v138 + 1;
              v139 = (volatile signed __int32 **)*((_QWORD *)v136 + 4);
              if ( *v139 != v136 + 6 )
                __fastfail(3u);
              v140 = (volatile signed __int32 *)v175;
              *v175 = (__int64)(v136 + 6);
              *((_QWORD *)v140 + 1) = v139;
              *v139 = v140;
              *((_QWORD *)v136 + 4) = v140;
              if ( !v138 && *(struct _KPRCB **)&v135->MxCsr != v135 )
              {
                KiWakeOtherQueueWaiters((__int64)v176, (__int64)v136);
                v136 = (volatile signed __int32 *)CurrentPrcb;
              }
            }
            else
            {
              v137 = KiWakeQueueWaiter((__int64)v176, (__int64)CurrentPrcb, (__int64)v175);
              v136 = (volatile signed __int32 *)CurrentPrcb;
              if ( !v137 )
              {
                v135 = p_CurrentThread;
                goto LABEL_273;
              }
            }
            _InterlockedAnd(v136, 0xFFFFFF7F);
            v71 = (*(_DWORD *)(v66 + 4))-- == 1;
            if ( v71 )
              goto LABEL_109;
            goto LABEL_280;
          }
          KiTryUnwaitThread(v72, v128, 256LL, 0LL);
        }
LABEL_280:
        v69 = v173;
        if ( v173 == v70 )
          goto LABEL_109;
      }
    }
    if ( v69 == v70 )
    {
LABEL_183:
      *(_QWORD *)(v66 + 16) = v66 + 8;
      *v70 = (__int64)v70;
      goto LABEL_109;
    }
    while ( 1 )
    {
      v175 = v69;
      v173 = (__int64 *)*v69;
      v113 = *((_BYTE *)v69 + 16);
      if ( v113 == 1 )
      {
        v114 = *((unsigned __int16 *)v69 + 9);
      }
      else
      {
        if ( v113 == 2 )
        {
          *((_BYTE *)v69 + 17) = 5;
          CurrentPrcb = (struct _KPRCB *)v69[3];
          v176 = (struct _KPRCB *)&CurrentPrcb->CurrentThread;
          *v69 = 0LL;
          KeGetCurrentIrql();
          __writecr8(2uLL);
          p_CurrentThread = KeGetCurrentPrcb();
          v141 = p_CurrentThread->CurrentThread;
          v177 = v141;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            v142 = KeIsThreadRunning(v141);
            EtwTraceEnqueueWork(v144, v143, v142);
          }
          KiAcquireKobjectLockSafe((volatile signed __int32 *)CurrentPrcb);
          v145 = v176;
          v146 = (volatile signed __int32 *)CurrentPrcb;
          if ( *(struct _KPRCB **)&v145->MxCsr == v145
            || LODWORD(CurrentPrcb->RspBase) >= HIDWORD(CurrentPrcb->RspBase)
            || (struct _KPRCB *)v177->Queue == CurrentPrcb && v177->WaitReason == 15 )
          {
LABEL_293:
            v148 = *((_DWORD *)v146 + 1);
            *((_DWORD *)v146 + 1) = v148 + 1;
            v149 = (volatile signed __int32 **)*((_QWORD *)v146 + 4);
            if ( *v149 != v146 + 6 )
              __fastfail(3u);
            v150 = (volatile signed __int32 *)v175;
            *v175 = (__int64)(v146 + 6);
            *((_QWORD *)v150 + 1) = v149;
            *v149 = v150;
            *((_QWORD *)v146 + 4) = v150;
            if ( !v148 && *(struct _KPRCB **)&v145->MxCsr != v145 )
            {
              KiWakeOtherQueueWaiters((__int64)p_CurrentThread, (__int64)v146);
              v146 = (volatile signed __int32 *)CurrentPrcb;
            }
          }
          else
          {
            v147 = KiWakeQueueWaiter((__int64)p_CurrentThread, (__int64)CurrentPrcb, (__int64)v175);
            v146 = (volatile signed __int32 *)CurrentPrcb;
            if ( !v147 )
            {
              v145 = v176;
              goto LABEL_293;
            }
          }
          _InterlockedAnd(v146, 0xFFFFFF7F);
          goto LABEL_208;
        }
        v114 = 256LL;
      }
      KiTryUnwaitThread(v72, v69, v114, 0LL);
LABEL_208:
      v69 = v173;
      if ( v173 == v70 )
        goto LABEL_183;
    }
  }
  v28 = *(struct _MDL **)(BugCheckParameter1 + 8);
  if ( v28 )
  {
    do
    {
      MmUnlockPages(v28);
      v28 = v28->Next;
    }
    while ( v28 );
    v27 = *(_DWORD *)(BugCheckParameter1 + 16);
  }
  if ( (v27 & 0x2000) != 0 )
  {
    ObfDereferenceObject(*(PVOID *)(BugCheckParameter1 + 152));
    v27 = *(_DWORD *)(BugCheckParameter1 + 16);
  }
  if ( (v27 & 0x800) != 0 && !*(_BYTE *)(BugCheckParameter1 + 65) )
  {
    if ( *(_DWORD *)(BugCheckParameter1 + 48) == 260 )
    {
      v73 = *(_QWORD *)(BugCheckParameter1 + 56) - 2684354563LL;
      if ( v73 <= 0x16 )
      {
        if ( _bittest64(&v19, v73) )
          *(_QWORD *)(BugCheckParameter1 + 160) = v6;
      }
    }
    return;
  }
  v29 = *(_QWORD *)(BugCheckParameter1 + 152);
  v30 = (ULONG_PTR *)(BugCheckParameter1 + 192);
  v31 = *(_QWORD *)(BugCheckParameter1 + 192);
  v184 = v31;
  if ( (v27 & 0x2000) != 0 )
  {
    v186 = 0LL;
    if ( *(_BYTE *)(BugCheckParameter1 + 65)
      || (*(_DWORD *)(BugCheckParameter1 + 48) & 0xC0000000) != 0xC0000000
      && ((*(_DWORD *)(v31 + 80) & 0x2000000) == 0 || *(int *)(BugCheckParameter1 + 48) < 0) )
    {
      v77 = *(__int64 **)(v31 + 176);
      v78 = (_QWORD *)(BugCheckParameter1 + 120);
      if ( !v77 )
      {
        IopCompleteRequest((__int64)v78, (__int64)v189, &v186, (__int64 *)(BugCheckParameter1 + 192), &v186);
        return;
      }
      v79 = *v77;
      *v78 = v77[1];
      *(_DWORD *)(BugCheckParameter1 + 184) = 0;
      v80 = (volatile __int64 *)(v79 + 64);
      v179 = 0LL;
      v180 = (volatile signed __int64 *)(v79 + 64);
      v81 = KeGetCurrentIrql();
      __writecr8(2uLL);
      v181 = v81;
      v82 = KeGetCurrentPrcb();
      SchedulerAssist = v82->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( v82->NestingLevel <= 1u )
        {
          v151 = SchedulerAssist[5];
          SchedulerAssist[5] = v151 + 1;
          if ( v151 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
            KiPerformUnboostKick(v82);
        }
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireQueuedSpinLockInstrumented(&v179, v80);
      }
      else
      {
        v84 = (_QWORD *)_InterlockedExchange64(v80, (__int64)&v179);
        if ( v84 )
          KxWaitForLockOwnerShip((__int64)&v179, v84);
      }
      *(_DWORD *)(BugCheckParameter1 + 16) |= 0x10000u;
      if ( *(_BYTE *)(v79 + 72) )
      {
        v99 = 1;
      }
      else
      {
        v85 = (char)v193;
        v86 = (_QWORD *)(v79 + 8);
        v193 = (char)v193;
        v177 = (_KTHREAD *)KeGetCurrentIrql();
        __writecr8(2uLL);
        v87 = KeGetCurrentPrcb();
        v173 = (__int64 *)v87;
        v88 = v87->CurrentThread;
        if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
        {
          v152 = KeIsThreadRunning(v87->CurrentThread);
          EtwTraceEnqueueWork(v88, BugCheckParameter1 + 168, v152);
        }
        if ( v85 && (*(_BYTE *)(v79 + 1) & 2) != 0 )
          v193 = 0;
        v194 = 0;
        while ( _interlockedbittestandset((volatile signed __int32 *)v79, 7u) )
        {
          do
            KeYieldProcessorEx(&v194);
          while ( (*(_DWORD *)v79 & 0x80u) != 0 );
        }
        v187 = *(_DWORD *)(v79 + 4);
        if ( (_QWORD *)*v86 != v86
          && *(_DWORD *)(v79 + 40) < *(_DWORD *)(v79 + 44)
          && (v88->Queue != (_DISPATCHER_HEADER *volatile)v79 || v88->WaitReason != 15) )
        {
          v89 = (_QWORD *)*v86;
          while ( 1 )
          {
            v90 = (__int64)v89;
            v89 = (_QWORD *)*v89;
            if ( *(_BYTE *)(v90 + 16) != 3 )
              break;
            v91 = *(_QWORD **)(v90 + 8);
            if ( v89[1] != v90 || *v91 != v90 )
              __fastfail(3u);
            *v91 = v89;
            v92 = 0;
            v89[1] = v91;
            v93 = KeGetCurrentPrcb();
            v94 = *(_QWORD *)(v90 + 24);
            v185 = v93;
            v195 = 0;
            v95 = v93->SchedulerAssist;
            if ( v95 )
            {
              if ( v93->NestingLevel <= 1u )
              {
                v153 = v95[5];
                v95[5] = v153 + 1;
                if ( v153 == -1 && !*((_BYTE *)v95 + 25) && !*((_BYTE *)v95 + 27) )
                  KiPerformUnboostKick(v93);
              }
            }
            v96 = v185;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v94 + 64), 0LL) )
            {
              KiSetVpThreadSpinLockCount(v96, 0LL);
              do
                KeYieldProcessorEx(&v195);
              while ( *(_QWORD *)(v94 + 64) );
              LOBYTE(v120) = 1;
              KiSetVpThreadSpinLockCount(v96, v120);
            }
            v30 = (ULONG_PTR *)(BugCheckParameter1 + 192);
            if ( *(_BYTE *)(v94 + 388) == 5 )
              v92 = KiSignalThread((__int64)v173, v94, BugCheckParameter1 + 168, v90);
            *(_QWORD *)(v94 + 64) = 0LL;
            v97 = KeGetCurrentPrcb();
            v98 = v97->SchedulerAssist;
            if ( v98 )
            {
              if ( v97->NestingLevel <= 1u )
              {
                v154 = v98[5] - 1;
                v98[5] = v154;
                if ( !v154 && !*((_BYTE *)v98 + 25) && !*((_BYTE *)v98 + 27) )
                  KiPerformUnboostKick(v97);
              }
            }
            ++*(_BYTE *)(v90 + 17);
            if ( v92 )
              goto LABEL_161;
            v86 = (_QWORD *)(v79 + 8);
            if ( v89 == (_QWORD *)(v79 + 8) )
              goto LABEL_190;
          }
          v86 = (_QWORD *)(v79 + 8);
        }
LABEL_190:
        v110 = *(_DWORD *)(v79 + 4);
        *(_DWORD *)(v79 + 4) = v110 + 1;
        v111 = *(_QWORD **)(v79 + 32);
        if ( *v111 != v79 + 24 )
          __fastfail(3u);
        *(_QWORD *)(BugCheckParameter1 + 168) = v79 + 24;
        *(_QWORD *)(BugCheckParameter1 + 176) = v111;
        *v111 = BugCheckParameter1 + 168;
        *(_QWORD *)(v79 + 32) = BugCheckParameter1 + 168;
        if ( !v110 && (_QWORD *)*v86 != v86 )
          KiWakeOtherQueueWaiters((__int64)v173, v79);
LABEL_161:
        _InterlockedAnd((volatile signed __int32 *)v79, 0xFFFFFF7F);
        KiExitDispatcher((_DWORD)v173, 0, 1, v193, (char)v177);
        v99 = 0;
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        KiReleaseQueuedSpinLockInstrumented(&v179, retaddr);
        goto LABEL_165;
      }
      _m_prefetchw(&v179);
      v100 = v179;
      if ( !v179 )
      {
        if ( (__int64 *)_InterlockedCompareExchange64(v180, 0LL, (signed __int64)&v179) == &v179 )
        {
LABEL_165:
          v101 = KeGetCurrentPrcb();
          v102 = v101->SchedulerAssist;
          if ( v102 )
          {
            if ( v101->NestingLevel <= 1u )
            {
              v155 = v102[5] - 1;
              v102[5] = v155;
              if ( !v155 && !*((_BYTE *)v102 + 25) && !*((_BYTE *)v102 + 27) )
                KiPerformUnboostKick(v101);
            }
          }
          __writecr8(v181);
          if ( v99 )
          {
            v103 = *v30;
            goto LABEL_168;
          }
          return;
        }
        v100 = KxWaitForLockChainValid(&v179);
      }
      v179 = 0LL;
      _InterlockedXor64((volatile signed __int64 *)(v100 + 8), 1uLL);
      goto LABEL_165;
    }
  }
  if ( v29 )
  {
    v32 = (volatile signed __int32 *)(v29 + 1856);
    v33 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented(v29 + 1856);
    }
    else
    {
      v34 = KeGetCurrentPrcb();
      v35 = v34->SchedulerAssist;
      if ( v35 )
      {
        if ( v34->NestingLevel <= 1u )
        {
          v156 = v35[5];
          v35[5] = v156 + 1;
          if ( v156 == -1 && !*((_BYTE *)v35 + 25) && !*((_BYTE *)v35 + 27) )
            KiPerformUnboostKick(v34);
        }
      }
      if ( _interlockedbittestandset64(v32, 0LL) )
      {
        KiSetVpThreadSpinLockCount(v34, 0LL);
        KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(v29 + 1856), v119);
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(v29 + 1856, retaddr);
    else
      _InterlockedAnd64((volatile signed __int64 *)v32, 0LL);
    v36 = KeGetCurrentPrcb();
    v37 = v36->SchedulerAssist;
    if ( v37 )
    {
      if ( v36->NestingLevel <= 1u )
      {
        v157 = v37[5] - 1;
        v37[5] = v157;
        if ( !v157 && !*((_BYTE *)v37 + 25) && !*((_BYTE *)v37 + 27) )
          KiPerformUnboostKick(v36);
      }
    }
    __writecr8(v33);
    v6 = v178;
    v31 = v184;
  }
  if ( *(_BYTE *)(BugCheckParameter1 + 68) )
  {
    v121 = KeAcquireQueuedSpinLock(0xBuLL);
    v122 = IopDeadIrps;
    v123 = v121;
    v124 = *(void **)(BugCheckParameter1 + 152);
    if ( (__int64 *)IopDeadIrps == &IopDeadIrps )
    {
LABEL_237:
      if ( v124 )
      {
        KeInitializeApc(
          BugCheckParameter1 + 120,
          (_DWORD)v124,
          *(char *)(BugCheckParameter1 + 70),
          (unsigned int)IopCompleteRequest,
          (__int64)IopAbortRequest,
          0LL,
          0,
          0LL);
        KeInsertQueueApc(BugCheckParameter1 + 120, v31, v6, (unsigned __int8)v193);
        KeReleaseQueuedSpinLock(0xBuLL, v123);
        return;
      }
    }
    else
    {
      while ( 1 )
      {
        v169 = *(__int64 **)v122;
        if ( v122 - 32 == BugCheckParameter1 )
          break;
        v122 = *(_QWORD *)v122;
        if ( v169 == &IopDeadIrps )
          goto LABEL_237;
      }
      v170 = *(__int64 ***)(v122 + 8);
      if ( v169[1] != v122 || *v170 != (__int64 *)v122 )
        __fastfail(3u);
      *v170 = v169;
      v169[1] = (__int64)v170;
      *(_QWORD *)(v122 - 32 + 40) = v122;
      *(_QWORD *)v122 = v122;
      ObfDereferenceObject(v124);
    }
    KeReleaseQueuedSpinLock(0xBuLL, v123);
    v103 = v31;
LABEL_168:
    IopDropIrp((PIRP)BugCheckParameter1, v103);
    return;
  }
  if ( (struct _KTHREAD *)v29 != KeGetCurrentThread()
    || KeGetCurrentThread()->SpecialApcDisable
    || !KeAreInterruptsEnabled()
    || KeGetCurrentIrql()
    || KeGetCurrentThread()->ApcStateIndex == 1 )
  {
    v38 = *(char *)(BugCheckParameter1 + 70);
    *(_BYTE *)(BugCheckParameter1 + 120) = 18;
    *(_BYTE *)(BugCheckParameter1 + 122) = 88;
    if ( v38 == 2 )
      LOBYTE(v38) = *(_BYTE *)(v29 + 586);
    *(_BYTE *)(BugCheckParameter1 + 200) = v38;
    *(_QWORD *)(BugCheckParameter1 + 128) = v29;
    *(_QWORD *)(BugCheckParameter1 + 160) = IopAbortRequest;
    *(_QWORD *)(BugCheckParameter1 + 152) = IopCompleteRequest;
    *(_QWORD *)(BugCheckParameter1 + 168) = 0LL;
    *(_WORD *)(BugCheckParameter1 + 201) = 0;
    *(_QWORD *)(BugCheckParameter1 + 176) = 0LL;
    v39 = KeGetCurrentIrql();
    __writecr8(2uLL);
    v40 = KeGetCurrentPrcb();
    v182 = 0;
    v41 = v40->SchedulerAssist;
    if ( v41 )
    {
      if ( v40->NestingLevel <= 1u )
      {
        v158 = v41[5];
        v41[5] = v158 + 1;
        if ( v158 == -1 && !*((_BYTE *)v41 + 25) && !*((_BYTE *)v41 + 27) )
          KiPerformUnboostKick(v40);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v29 + 64), 0LL) )
    {
      KiSetVpThreadSpinLockCount(v40, 0LL);
      do
        KeYieldProcessorEx(&v182);
      while ( *(_QWORD *)(v29 + 64) );
      LOBYTE(v118) = 1;
      KiSetVpThreadSpinLockCount(v40, v118);
    }
    if ( (*(_DWORD *)(v29 + 116) & 0x4000) != 0 && !*(_BYTE *)(BugCheckParameter1 + 202) )
    {
      v42 = *(_QWORD *)(BugCheckParameter1 + 128);
      *(_QWORD *)(BugCheckParameter1 + 184) = v184;
      *(_QWORD *)(BugCheckParameter1 + 192) = v178;
      *(_BYTE *)(BugCheckParameter1 + 202) = 1;
      if ( !*(_BYTE *)(BugCheckParameter1 + 200) && *(_BYTE *)(v42 + 586) )
      {
        v43 = 600LL;
      }
      else
      {
        *(_BYTE *)(BugCheckParameter1 + 200) = *(_BYTE *)(v42 + 586);
        v43 = 152LL;
      }
      v44 = v42 + v43;
      v45 = *(_BYTE *)(BugCheckParameter1 + 201);
      if ( *(_QWORD *)(BugCheckParameter1 + 168) )
      {
        if ( v45 && *(void (__fastcall __noreturn **)())(BugCheckParameter1 + 152) == KiSchedulerApcTerminate )
        {
          *(_BYTE *)(v42 + 194) = 1;
          v159 = (_QWORD *)(BugCheckParameter1 + 136);
          v160 = (__int64 *)(v44 + 16LL * v45);
          v161 = *v160;
          if ( *(__int64 **)(*v160 + 8) != v160 )
            __fastfail(3u);
          *v159 = v161;
          *(_QWORD *)(BugCheckParameter1 + 144) = v160;
          *(_QWORD *)(v161 + 8) = v159;
          *v160 = (__int64)v159;
        }
        else
        {
          v162 = (_QWORD *)(BugCheckParameter1 + 136);
          v163 = v44 + 16LL * v45;
          v164 = *(_QWORD **)(v163 + 8);
          if ( *v164 != v163 )
            __fastfail(3u);
          *v162 = v163;
          *(_QWORD *)(BugCheckParameter1 + 144) = v164;
          *v164 = v162;
          *(_QWORD *)(v163 + 8) = v162;
        }
      }
      else
      {
        v46 = (_QWORD *)(v44 + 16LL * v45);
        for ( j = (_QWORD *)v46[1]; j != v46; j = (_QWORD *)j[1] )
        {
          if ( !j[4] )
            break;
        }
        v48 = *j;
        v49 = (_QWORD *)(BugCheckParameter1 + 136);
        if ( *(_QWORD **)(*j + 8LL) != j )
          __fastfail(3u);
        *v49 = v48;
        *(_QWORD *)(BugCheckParameter1 + 144) = j;
        *(_QWORD *)(v48 + 8) = v49;
        *j = v49;
      }
      v50 = *(_QWORD *)(BugCheckParameter1 + 128);
      v51 = *(unsigned __int8 *)(BugCheckParameter1 + 201);
      if ( *(char *)(BugCheckParameter1 + 200) == *(unsigned __int8 *)(v50 + 586) )
      {
        if ( (_KTHREAD *)v50 == v40->CurrentThread )
        {
          if ( !(_BYTE)v51
            && (!*(_DWORD *)(v50 + 484) || !*(_QWORD *)(BugCheckParameter1 + 168) && !HIWORD(*(_DWORD *)(v50 + 484))) )
          {
            *(_BYTE *)(v50 + 193) = 1;
            if ( v39 )
              KiRequestSoftwareInterrupt(v40, 1);
            else
              *(_DWORD *)(v50 + 116) |= 0x40u;
          }
        }
        else if ( (_BYTE)v51 )
        {
          if ( *(_BYTE *)(v50 + 388) == 5 && *(_BYTE *)(v50 + 391) == 1 )
          {
            v167 = *(_BYTE *)(v50 + 112);
            if ( (unsigned __int8)((v167 & 7) - 3) > 1u
              && ((*(_DWORD *)(v50 + 116) & 0x10) != 0 || *(_BYTE *)(v50 + 194)) )
            {
              *(_BYTE *)(v50 + 112) = v167 | 0x40;
              if ( KiSignalThread((__int64)v40, v50, 192LL, 0LL) )
                *(_BYTE *)(v50 + 194) = 1;
            }
          }
        }
        else
        {
          *(_BYTE *)(v50 + 193) = 1;
          _InterlockedOr(v171, 0);
          v52 = *(_BYTE *)(v50 + 388);
          if ( v52 == 2 )
          {
            v112 = *(unsigned int *)(v50 + 536);
            LOBYTE(v51) = 1;
            LODWORD(v112) = v112 & 0x7FFFFFFF;
            if ( KeGetPcr()->Prcb.Number == (_DWORD)v112 )
              KiRequestSoftwareInterrupt(0LL, 1);
            else
              KiSendSoftwareInterrupt(v112, v51);
          }
          else if ( v52 == 5
                 && !*(_BYTE *)(v50 + 390)
                 && !*(_WORD *)(v50 + 486)
                 && (!*(_QWORD *)(BugCheckParameter1 + 168) || !*(_WORD *)(v50 + 484) && !*(_BYTE *)(v50 + 192)) )
          {
            v53 = *(_BYTE *)(v50 + 112);
            v54 = v53 & 7;
            if ( v54 == 1 || v54 == 4 )
            {
              v55 = *(_QWORD *)(v50 + 232);
              if ( v55 )
              {
                if ( (*(_BYTE *)v55 & 0x7F) == 0x15 )
                {
                  *(_DWORD *)(v50 + 540) = (unsigned __int8)*(_DWORD *)(v50 + 540);
                  _InterlockedIncrement((volatile signed __int32 *)(v55 + 4LL * *(unsigned int *)(v50 + 540) + 536));
                }
                else
                {
                  _InterlockedIncrement((volatile signed __int32 *)(v55 + 40));
                }
              }
              v56 = *(_QWORD *)(v50 + 712);
              if ( v56 )
              {
                v57 = KeGetCurrentPrcb();
                v183 = 0;
                v58 = v57->SchedulerAssist;
                if ( v58 )
                {
                  if ( v57->NestingLevel <= 1u )
                  {
                    v165 = v58[5];
                    v58[5] = v165 + 1;
                    if ( v165 == -1 && !*((_BYTE *)v58 + 25) && !*((_BYTE *)v58 + 27) )
                      KiPerformUnboostKick(v57);
                  }
                }
                while ( _interlockedbittestandset64((volatile signed __int32 *)(v56 + 22800), 0LL) )
                {
                  KiSetVpThreadSpinLockCount(v57, 0LL);
                  do
                    KeYieldProcessorEx(&v183);
                  while ( *(_QWORD *)(v56 + 22800) );
                  LOBYTE(v126) = 1;
                  KiSetVpThreadSpinLockCount(v57, v126);
                }
                if ( *(_QWORD *)(v50 + 712) )
                {
                  v59 = *(_QWORD *)(v50 + 216);
                  v60 = *(_QWORD **)(v50 + 224);
                  if ( *(_QWORD *)(v59 + 8) != v50 + 216 || *v60 != v50 + 216 )
                    __fastfail(3u);
                  *v60 = v59;
                  *(_QWORD *)(v59 + 8) = v60;
                  *(_QWORD *)(v50 + 712) = 0LL;
                }
                _InterlockedAnd64((volatile signed __int64 *)(v56 + 22800), 0LL);
                v61 = KeGetCurrentPrcb();
                v62 = v61->SchedulerAssist;
                if ( v62 )
                {
                  if ( v61->NestingLevel <= 1u )
                  {
                    v166 = v62[5] - 1;
                    v62[5] = v166;
                    if ( !v166 && !*((_BYTE *)v62 + 25) && !*((_BYTE *)v62 + 27) )
                      KiPerformUnboostKick(v61);
                  }
                }
              }
              *(_BYTE *)(v50 + 388) = 7;
              *(_QWORD *)(v50 + 216) = v40->DeferredReadyListHead.Next;
              v40->DeferredReadyListHead.Next = (struct _SINGLE_LIST_ENTRY *)(v50 + 216);
              *(_QWORD *)(v50 + 200) = 256LL;
              v53 = *(_BYTE *)(v50 + 112);
            }
            *(_BYTE *)(v50 + 112) = v53 | 0x20;
          }
        }
      }
    }
    *(_QWORD *)(v29 + 64) = 0LL;
    v63 = KeGetCurrentPrcb();
    v64 = v63->SchedulerAssist;
    if ( v64 )
    {
      if ( v63->NestingLevel <= 1u )
      {
        v168 = v64[5] - 1;
        v64[5] = v168;
        if ( !v168 && !*((_BYTE *)v64 + 25) && !*((_BYTE *)v64 + 27) )
          KiPerformUnboostKick(v63);
      }
    }
    KiExitDispatcher((_DWORD)v40, 0, 1, (unsigned __int8)v193, v39);
  }
  else
  {
    v188 = 1LL;
    v76 = KeGetCurrentIrql();
    __writecr8(1uLL);
    IopCompleteRequest(BugCheckParameter1 + 120, (__int64)v190, &v188, &v184, &v178);
    __writecr8(v76);
  }
}
