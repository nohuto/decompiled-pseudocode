/*
 * XREFs of PsOpenProcess @ 0x1404C4620
 * Callers:
 *     NtAlpcOpenSenderProcess @ 0x140467C20 (NtAlpcOpenSenderProcess.c)
 *     NtOpenProcess @ 0x1404C0C60 (NtOpenProcess.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ObFastDereferenceObject @ 0x140081E20 (ObFastDereferenceObject.c)
 *     SepDeleteAccessState @ 0x140081E70 (SepDeleteAccessState.c)
 *     ObFastReferenceObject @ 0x140081EF0 (ObFastReferenceObject.c)
 *     SepCreateAccessStateFromSubjectContext @ 0x140082000 (SepCreateAccessStateFromSubjectContext.c)
 *     ExSlowReplenishHandleTableEntry @ 0x140082980 (ExSlowReplenishHandleTableEntry.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140084290 (ObfReferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     SepPrivilegeCheck @ 0x140087BC0 (SepPrivilegeCheck.c)
 *     RtlEqualSid @ 0x140087C60 (RtlEqualSid.c)
 *     EtwWrite @ 0x140087CA0 (EtwWrite.c)
 *     ObReferenceObjectByPointerWithTag @ 0x140088FC0 (ObReferenceObjectByPointerWithTag.c)
 *     PsIsProcessInSilo @ 0x140089050 (PsIsProcessInSilo.c)
 *     PsGetCurrentServerSilo @ 0x140089070 (PsGetCurrentServerSilo.c)
 *     ObFastReferenceObjectLocked @ 0x14008AA44 (ObFastReferenceObjectLocked.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     ExLockHandleTableEntry @ 0x1400BD9D4 (ExLockHandleTableEntry.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x1401324CC (ExfAcquireReleasePushLockExclusive.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ExfUnblockPushLock @ 0x14017D4F0 (ExfUnblockPushLock.c)
 *     ObpPushStackInfo @ 0x140239558 (ObpPushStackInfo.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x14046BB90 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SepFilterPrivilegeAudits @ 0x14046C45C (SepFilterPrivilegeAudits.c)
 *     PsLookupProcessThreadByCid @ 0x14046C560 (PsLookupProcessThreadByCid.c)
 *     SeReleaseSubjectContext @ 0x1404AC530 (SeReleaseSubjectContext.c)
 *     ObpCreateHandle @ 0x1404AE7E0 (ObpCreateHandle.c)
 *     ExpLookupHandleTableEntry @ 0x1404B1720 (ExpLookupHandleTableEntry.c)
 *     ExpBlockOnLockedHandleEntry @ 0x14059D508 (ExpBlockOnLockedHandleEntry.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PsOpenProcess(unsigned __int64 a1, ACCESS_MASK a2, __int64 a3, __int128 *a4, char a5, char a6)
{
  bool v6; // cl
  char v7; // al
  char v8; // r12
  GENERIC_MAPPING *v9; // r15
  _KPROCESS *Process; // rdi
  struct _KTHREAD *CurrentThread; // rbx
  void *v12; // r14
  unsigned __int64 *v13; // r14
  ULONG_PTR v14; // rbx
  int v15; // ebx
  _KPROCESS *v16; // r14
  struct _KTHREAD *v17; // rdi
  _QWORD *v18; // rbx
  unsigned __int64 *v19; // r15
  ULONG_PTR v20; // rdi
  __int64 v21; // rcx
  char v22; // r14
  _QWORD *v23; // rax
  void *v24; // r15
  struct _KTHREAD *v25; // r14
  volatile __int64 *v26; // rcx
  volatile signed __int64 *v27; // rax
  volatile signed __int64 *v28; // r15
  __int64 v29; // r13
  signed __int64 v30; // rcx
  __int64 v31; // rdi
  unsigned __int128 v32; // rt0
  unsigned __int8 v33; // tt
  unsigned __int64 v34; // rax
  _BYTE *v35; // rdi
  __int64 CurrentServerSilo; // rax
  __int64 v37; // rbx
  bool v38; // zf
  char *v39; // r14
  POBJECT_TYPE *v40; // rdi
  ACCESS_MASK v41; // eax
  int v43; // eax
  int v44; // ebx
  PSE_EXPORTS v45; // r13
  struct _KTHREAD *v46; // r13
  signed __int64 v47; // rax
  signed __int64 v48; // rtt
  __int64 v49; // rcx
  struct _KTHREAD *v50; // rbx
  signed __int64 *v51; // r14
  struct _KTHREAD *v52; // r13
  signed __int64 *p_Lock; // rdi
  signed __int32 v54[8]; // [rsp+0h] [rbp-338h] BYREF
  bool v55; // [rsp+60h] [rbp-2D8h]
  char v56; // [rsp+61h] [rbp-2D7h]
  bool v57; // [rsp+62h] [rbp-2D6h]
  bool v58; // [rsp+63h] [rbp-2D5h]
  bool v59; // [rsp+64h] [rbp-2D4h]
  bool v60; // [rsp+65h] [rbp-2D3h]
  ACCESS_MASK v61; // [rsp+68h] [rbp-2D0h]
  unsigned int v62; // [rsp+6Ch] [rbp-2CCh]
  PVOID v63; // [rsp+70h] [rbp-2C8h] BYREF
  int v64; // [rsp+78h] [rbp-2C0h]
  ULONG_PTR v65; // [rsp+80h] [rbp-2B8h]
  struct _LIST_ENTRY *v66; // [rsp+88h] [rbp-2B0h]
  ACCESS_MASK v67; // [rsp+90h] [rbp-2A8h]
  int v68; // [rsp+98h] [rbp-2A0h]
  PVOID Object; // [rsp+A0h] [rbp-298h] BYREF
  unsigned __int128 v70; // [rsp+A8h] [rbp-290h]
  int v71; // [rsp+B8h] [rbp-280h] BYREF
  ACCESS_MASK v72; // [rsp+C0h] [rbp-278h] BYREF
  int v73; // [rsp+C8h] [rbp-270h] BYREF
  __int128 v74; // [rsp+D8h] [rbp-260h] BYREF
  unsigned __int64 v75; // [rsp+E8h] [rbp-250h] BYREF
  struct _KTHREAD *v76; // [rsp+F0h] [rbp-248h]
  PVOID v77; // [rsp+F8h] [rbp-240h] BYREF
  _QWORD *v78; // [rsp+100h] [rbp-238h]
  __int128 v79; // [rsp+108h] [rbp-230h] BYREF
  ULONG_PTR v80; // [rsp+118h] [rbp-220h]
  struct _LIST_ENTRY *Flink; // [rsp+120h] [rbp-218h]
  unsigned int v82; // [rsp+128h] [rbp-210h] BYREF
  int v83; // [rsp+12Ch] [rbp-20Ch]
  LUID v84; // [rsp+130h] [rbp-208h] BYREF
  int v85; // [rsp+138h] [rbp-200h]
  _QWORD v86[2]; // [rsp+140h] [rbp-1F8h] BYREF
  int v87; // [rsp+150h] [rbp-1E8h]
  int v88; // [rsp+154h] [rbp-1E4h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+160h] [rbp-1D8h] BYREF
  __int64 v90[28]; // [rsp+1E0h] [rbp-158h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+2C0h] [rbp-78h] BYREF
  ACCESS_MASK *v92; // [rsp+2D0h] [rbp-68h]
  __int64 v93; // [rsp+2D8h] [rbp-60h]
  int *v94; // [rsp+2E0h] [rbp-58h]
  __int64 v95; // [rsp+2E8h] [rbp-50h]

  v61 = a2;
  v78 = (_QWORD *)a1;
  v67 = a2;
  v74 = 0uLL;
  v68 = -1;
  if ( a5 )
  {
    if ( a1 >= 0x7FFFFFFF0000LL )
      a1 = 0x7FFFFFFF0000LL;
    *(_QWORD *)a1 = *(_QWORD *)a1;
    if ( (a3 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v6 = *(_QWORD *)(a3 + 16) != 0LL;
    v55 = v6;
    v62 = *(_DWORD *)(a3 + 24) & 0x1DF2;
    if ( a4 )
    {
      if ( ((unsigned __int8)a4 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v74 = *a4;
      v7 = 1;
      v56 = 1;
      v6 = v55;
    }
    else
    {
      v7 = 0;
      v56 = 0;
    }
    v8 = a6;
  }
  else
  {
    v6 = *(_QWORD *)(a3 + 16) != 0LL;
    v55 = v6;
    v8 = a6;
    if ( a6 )
      v43 = *(_DWORD *)(a3 + 24) & 0x1DF2;
    else
      v43 = *(_DWORD *)(a3 + 24) & 0x11FF2;
    v62 = v43;
    if ( a4 )
    {
      v74 = *a4;
      v7 = 1;
    }
    else
    {
      v7 = 0;
    }
    v56 = v7;
  }
  if ( v6 || !v7 )
  {
    v15 = -1073741776;
    goto LABEL_82;
  }
  v9 = (GENERIC_MAPPING *)((char *)PsProcessType + 76);
  Process = KeGetCurrentThread()->ApcState.Process;
  CurrentThread = KeGetCurrentThread();
  Flink = Process[1].Header.WaitListHead.Flink;
  if ( CurrentThread )
  {
    if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
    {
      v76 = KeGetCurrentThread();
      --v76->KernelApcDisable;
      ExAcquirePushLockSharedEx((ULONG_PTR)&CurrentThread[1].WaitBlockList, 0LL);
      if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
      {
        v12 = (void *)(*(_QWORD *)((char *)&CurrentThread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
        v57 = (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 0x100) != 0;
        ObfReferenceObject(v12);
        DWORD2(v79) = *((_DWORD *)&CurrentThread[1].0 + 1) & 3;
        v58 = (*(_BYTE *)(&CurrentThread[1].MiscFlags + 1) & 4) != 0;
      }
      else
      {
        v12 = 0LL;
      }
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CurrentThread[1].WaitBlockList, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&CurrentThread[1].WaitBlockList);
      KeAbPostRelease((ULONG_PTR)&CurrentThread[1].WaitBlockList);
      KeLeaveCriticalRegionThread((__int64)v76);
    }
    else
    {
      v12 = 0LL;
    }
    *(_QWORD *)&v79 = v12;
  }
  else
  {
    *(_QWORD *)&v79 = 0LL;
  }
  v13 = &Process[1].Affinity.Bitmap[5];
  v14 = ObFastReferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5]);
  if ( !v14 )
  {
    v52 = KeGetCurrentThread();
    --v52->KernelApcDisable;
    p_Lock = (signed __int64 *)&Process[1].Header.Lock;
    ExAcquirePushLockSharedEx((ULONG_PTR)p_Lock, 0LL);
    v14 = ObFastReferenceObjectLocked(v13);
    if ( _InterlockedCompareExchange64(p_Lock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(p_Lock);
    KeAbPostRelease((ULONG_PTR)p_Lock);
    KeLeaveCriticalRegionThread((__int64)v52);
  }
  v80 = v14;
  if ( SeTokenLeakTracking )
  {
    if ( v14 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v14 + 1144) + 284LL));
      if ( v14 == SepTokenLeakToken )
        __debugbreak();
    }
    if ( (_QWORD)v79 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v79 + 1144) + 284LL));
      if ( (_QWORD)v79 == SepTokenLeakToken )
        __debugbreak();
    }
  }
  v15 = SepCreateAccessStateFromSubjectContext(&v79, v86, v90, v61, v9);
  if ( v15 < 0 )
    goto LABEL_82;
  v82 = 1;
  v83 = 1;
  v84 = SeDebugPrivilege;
  v85 = 0;
  v16 = KeGetCurrentThread()->ApcState.Process;
  v17 = KeGetCurrentThread();
  v66 = v16[1].Header.WaitListHead.Flink;
  if ( v17 )
  {
    if ( (*(_DWORD *)(&v17[1].SwapListEntry + 1) & 8) != 0 )
    {
      v46 = KeGetCurrentThread();
      --v46->KernelApcDisable;
      ExAcquirePushLockSharedEx((ULONG_PTR)&v17[1].WaitBlockList, 0LL);
      if ( (*(_DWORD *)(&v17[1].SwapListEntry + 1) & 8) != 0 )
      {
        v18 = (_QWORD *)(*(_QWORD *)((char *)&v17[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
        v59 = (*(_DWORD *)(&v17[1].SwapListEntry + 1) & 0x100) != 0;
        ObfReferenceObject(v18);
        v64 = *((_DWORD *)&v17[1].0 + 1) & 3;
        v60 = (*(_BYTE *)(&v17[1].MiscFlags + 1) & 4) != 0;
      }
      else
      {
        v18 = 0LL;
      }
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&v17[1].WaitBlockList, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&v17[1].WaitBlockList);
      KeAbPostRelease((ULONG_PTR)&v17[1].WaitBlockList);
      KeLeaveCriticalRegionThread((__int64)v46);
    }
    else
    {
      v18 = 0LL;
    }
  }
  else
  {
    v18 = 0LL;
  }
  v63 = v18;
  v19 = &v16[1].Affinity.Bitmap[5];
  v20 = ObFastReferenceObject((signed __int64 *)&v16[1].Affinity.Bitmap[5]);
  if ( !v20 )
  {
    v50 = KeGetCurrentThread();
    --v50->KernelApcDisable;
    v51 = (signed __int64 *)&v16[1].Header.Lock;
    ExAcquirePushLockSharedEx((ULONG_PTR)v51, 0LL);
    v20 = ObFastReferenceObjectLocked(v19);
    if ( _InterlockedCompareExchange64(v51, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v51);
    KeAbPostRelease((ULONG_PTR)v51);
    KeLeaveCriticalRegionThread((__int64)v50);
    v18 = v63;
  }
  v65 = v20;
  if ( SeTokenLeakTracking )
  {
    if ( v20 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v20 + 1144) + 284LL));
      if ( v20 == SepTokenLeakToken )
        __debugbreak();
      v18 = v63;
      v20 = v65;
    }
    if ( v18 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v18[143] + 284LL));
      v18 = v63;
      if ( v63 == (PVOID)SepTokenLeakToken )
        __debugbreak();
      v20 = v65;
    }
  }
  if ( v8 )
  {
    if ( v18 )
    {
      if ( v64 < 2 )
      {
        v22 = 0;
        goto LABEL_30;
      }
      v21 = (__int64)v18;
    }
    else
    {
      v21 = v20;
    }
    v22 = SepPrivilegeCheck(v21, (__int64)&v84, v82, v83, v8);
  }
  else
  {
    v22 = 1;
  }
LABEL_30:
  if ( v8 )
  {
    v23 = v18 ? v18 : (_QWORD *)v20;
    v24 = *(void **)v23[19];
    if ( !RtlEqualSid(SeLocalSystemSid, v24) )
    {
      if ( (v45 = SeExports, !RtlEqualSid(SeExports->SeNetworkServiceSid, v24))
        && !RtlEqualSid(v45->SeLocalServiceSid, v24)
        || SepFilterPrivilegeAudits(1, &v82) )
      {
        SepAdtPrivilegedServiceAuditAlarm((int)&v63, &SeSubsystemName, 0LL, (__int64)v18, v20, (int *)&v82, v22);
        v20 = v65;
        v18 = v63;
      }
    }
  }
  if ( SeTokenLeakTracking )
  {
    if ( v20 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v20 + 1144) + 284LL));
      if ( v65 == SepTokenLeakToken )
        __debugbreak();
      v18 = v63;
    }
    if ( v18 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v18[143] + 284LL));
      if ( v63 == (PVOID)SepTokenLeakToken )
        __debugbreak();
    }
  }
  ObFastDereferenceObject((signed __int64 *)&KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[5], v65);
  v65 = 0LL;
  if ( v63 )
    ObfDereferenceObject(v63);
  v63 = 0LL;
  if ( v22 )
  {
    if ( (v87 & 0x2000000) != 0 )
      v88 |= 0x1FFFFFu;
    else
      v88 |= v87;
    v87 = 0;
  }
  if ( *((_QWORD *)&v74 + 1) )
  {
    v15 = PsLookupProcessThreadByCid((__int64)&v74, &Object, &v77);
    if ( v15 < 0 )
      goto LABEL_81;
    ObfDereferenceObject(v77);
    v39 = (char *)Object;
    goto LABEL_60;
  }
  v25 = KeGetCurrentThread();
  --v25->SpecialApcDisable;
  v26 = *(volatile __int64 **)((char *)&Mm64BitPhysicalAddress + 5);
  if ( (v74 & 0x3FC) == 0 )
    goto LABEL_80;
  v27 = (volatile signed __int64 *)ExpLookupHandleTableEntry(
                                     *(unsigned int **)((char *)&Mm64BitPhysicalAddress + 5),
                                     v74);
  v28 = v27;
  if ( !v27 )
    goto LABEL_80;
  v29 = *(__int64 *)((char *)&Mm64BitPhysicalAddress + 5);
  _m_prefetchw((const void *)v27);
  *(_QWORD *)&v70 = *v27;
  v30 = *((_QWORD *)v27 + 1);
  *((_QWORD *)&v70 + 1) = v30;
  v31 = v70;
  while ( (v31 & 0x1FFFE) != 0 )
  {
    if ( (v31 & 1) != 0 )
    {
      *(_QWORD *)&v32 = v31;
      *((_QWORD *)&v32 + 1) = v30;
      v33 = _InterlockedCompareExchange128(v28, v30, v31 - 2, (signed __int64 *)&v32);
      v30 = v32 >> 64;
      v34 = v32;
      v31 = v32;
      v70 = v32;
      if ( v33 )
      {
        v26 = (volatile __int64 *)(v34 >> 1);
        if ( (unsigned __int16)(v34 >> 1) == 16 )
        {
          v31 = ((unsigned int)v31 ^ (2 * (_DWORD)v26 - 2)) & 0x1FFFE ^ (unsigned __int64)v31;
          *(_QWORD *)&v70 = v31;
        }
        v35 = (_BYTE *)((v31 >> 16) & 0xFFFFFFFFFFFFFFF0uLL);
        if ( (*v35 & 0x7F) == 3 )
          goto LABEL_50;
        ObfDereferenceObject(v35);
LABEL_80:
        v35 = 0LL;
        goto LABEL_53;
      }
    }
    else
    {
      ExpBlockOnLockedHandleEntry(v29, v28, v31);
      _m_prefetchw((const void *)v28);
      *(_QWORD *)&v70 = *v28;
      v30 = *((_QWORD *)v28 + 1);
      *((_QWORD *)&v70 + 1) = v30;
      v31 = v70;
    }
  }
  v44 = 0;
  if ( !ExLockHandleTableEntry(*(__int64 *)((char *)&Mm64BitPhysicalAddress + 5), v28) )
    goto LABEL_80;
  v35 = (_BYTE *)((*(__int64 *)v28 >> 16) & 0xFFFFFFFFFFFFFFF0uLL);
  if ( (*v35 & 0x7F) == 3 )
  {
    if ( (*(_DWORD *)(((*(__int64 *)v28 >> 16) & 0xFFFFFFFFFFFFFFF0uLL) + 0x304) & 0x400000C) == 0x4000000 )
      v44 = ExSlowReplenishHandleTableEntry((unsigned __int64 *)v28);
    _m_prefetchw(v35 - 48);
    v47 = *((_QWORD *)v35 - 6);
    if ( v47 )
    {
      while ( 1 )
      {
        v48 = v47;
        v47 = _InterlockedCompareExchange64((volatile signed __int64 *)v35 - 6, v47 + (unsigned int)(v44 + 1), v47);
        if ( v48 == v47 )
          break;
        if ( !v47 )
          goto LABEL_112;
      }
      if ( ObpTraceFlags )
        ObpPushStackInfo((__int64)(v35 - 48), 1, v44 + 1, 1953261124);
      goto LABEL_106;
    }
LABEL_112:
    *v28 &= 0xFFFFFFFFFFFE0001uLL;
  }
  v35 = 0LL;
LABEL_106:
  v49 = *(__int64 *)((char *)&Mm64BitPhysicalAddress + 5);
  _InterlockedExchangeAdd64(v28, 1uLL);
  v26 = (volatile __int64 *)(v49 + 48);
  _InterlockedOr(v54, 0);
  if ( *v26 )
    ExfUnblockPushLock(v26, 0LL);
LABEL_50:
  if ( v35 )
  {
    CurrentServerSilo = PsGetCurrentServerSilo();
    v37 = CurrentServerSilo;
    if ( (*((_DWORD *)v35 + 193) & 0x4000000) != 0 )
    {
      if ( PsIsProcessInSilo((struct _KPROCESS *)v35, CurrentServerSilo) )
        goto LABEL_53;
    }
    else
    {
      _InterlockedOr(v54, 0);
      if ( (*((_QWORD *)v35 + 91) & 1) != 0 )
        ExfAcquireReleasePushLockExclusive((unsigned __int64 *)v35 + 91);
      if ( (*((_DWORD *)v35 + 193) & 0x4000000) != 0 && PsIsProcessInSilo((struct _KPROCESS *)v35, v37) )
        goto LABEL_53;
    }
    ObfDereferenceObjectWithTag(v35, 0x746C6644u);
    goto LABEL_80;
  }
LABEL_53:
  v38 = v25->SpecialApcDisable++ == -1;
  if ( v38 && ($B476B70DB57F76B110DA5B9238C3E934 *)v25->ApcState.ApcListHead[0].Flink != &v25->152 )
    KiCheckForKernelApcDelivery((__int64)v26);
  v39 = (char *)Object;
  if ( v35 )
    v39 = v35;
  Object = v39;
  if ( !v35 )
  {
    v15 = -1073741813;
LABEL_81:
    SepDeleteAccessState((__int64)v86);
    SeReleaseSubjectContext(&SubjectContext);
LABEL_82:
    v41 = v61;
    goto LABEL_72;
  }
LABEL_60:
  v40 = PsProcessType;
  v75 = 0LL;
  v15 = ObReferenceObjectByPointerWithTag(v39, 0, (POBJECT_TYPE)PsProcessType, v8, 0x6E48624Fu);
  if ( v15 >= 0 )
  {
    if ( !v40 )
      v40 = (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*(v39 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v39 - 48) >> 8)];
    if ( (v62 & (_DWORD)v40[9]) != 0 || (*(v39 - 21) & 1) != 0 && *((_QWORD *)v39 - 2) )
    {
      ++ObpInvalidOpenByPointer;
      ObfDereferenceObjectWithTag(v39, 0x6E48624Fu);
      v15 = -1073741811;
    }
    else
    {
      v15 = ObpCreateHandle(1, v39, 0, (__int64)v86, 0, v62, v8, 0LL, 0, 0LL, &v75);
      if ( v15 < 0 )
        ObfDereferenceObjectWithTag(v39, 0x6E48624Fu);
    }
  }
  SepDeleteAccessState((__int64)v86);
  if ( SeTokenLeakTracking )
  {
    if ( SubjectContext.PrimaryToken )
    {
      _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)SubjectContext.PrimaryToken + 143) + 284LL));
      if ( SubjectContext.PrimaryToken == (PACCESS_TOKEN)SepTokenLeakToken )
        __debugbreak();
    }
    if ( SubjectContext.ClientToken )
    {
      _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)SubjectContext.ClientToken + 143) + 284LL));
      if ( SubjectContext.ClientToken == (PACCESS_TOKEN)SepTokenLeakToken )
        __debugbreak();
    }
  }
  ObFastDereferenceObject(
    (signed __int64 *)&KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[5],
    (unsigned __int64)SubjectContext.PrimaryToken);
  SubjectContext.PrimaryToken = 0LL;
  if ( SubjectContext.ClientToken )
    ObfDereferenceObject(SubjectContext.ClientToken);
  SubjectContext.ClientToken = 0LL;
  v68 = *((_DWORD *)Object + 184);
  ObfDereferenceObjectWithTag(Object, 0x746C6644u);
  if ( v15 < 0 )
    goto LABEL_82;
  *v78 = v75;
  v41 = v61;
LABEL_72:
  v73 = v15;
  v72 = v41;
  v71 = v68;
  UserData.Ptr = (ULONGLONG)&v71;
  *(_QWORD *)&UserData.Size = 4LL;
  v92 = &v72;
  v93 = 4LL;
  v94 = &v73;
  v95 = 4LL;
  EtwWrite(EtwApiCallsProvRegHandle, &KERNEL_AUDIT_API_OPENPROCESS, 0LL, 3u, &UserData);
  return (unsigned int)v15;
}
