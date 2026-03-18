/*
 * XREFs of EtwpEnableGuid @ 0x1404EE2B8
 * Callers:
 *     NtTraceControl @ 0x14049AB40 (NtTraceControl.c)
 *     EtwpEnableTrace @ 0x1405A88D0 (EtwpEnableTrace.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     PsGetCurrentThreadProcessId @ 0x1400851E0 (PsGetCurrentThreadProcessId.c)
 *     PsGetProcessServerSilo @ 0x1400893E0 (PsGetProcessServerSilo.c)
 *     MmGetSessionById @ 0x140089C70 (MmGetSessionById.c)
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     EtwEventEnabled @ 0x1400A0940 (EtwEventEnabled.c)
 *     PsDetachSiloFromCurrentThread @ 0x1400AF180 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x1400AF1A0 (PsAttachSiloToCurrentThread.c)
 *     MmDetachSession @ 0x1400B4910 (MmDetachSession.c)
 *     MmAttachSession @ 0x1400B4990 (MmAttachSession.c)
 *     PsGetProcessId @ 0x1400BAF50 (PsGetProcessId.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     EtwpAddGuidEntry @ 0x14048972C (EtwpAddGuidEntry.c)
 *     EtwpUnreferenceGuidEntry @ 0x140491D2C (EtwpUnreferenceGuidEntry.c)
 *     EtwpFindGuidEntryByGuid @ 0x140491E20 (EtwpFindGuidEntryByGuid.c)
 *     EtwpReleaseLoggerContext @ 0x14049227C (EtwpReleaseLoggerContext.c)
 *     EtwpBuildNotificationPacket @ 0x1404EE23C (EtwpBuildNotificationPacket.c)
 *     EtwpFreeFilterInfo @ 0x1404EE99C (EtwpFreeFilterInfo.c)
 *     EtwpValidateEnableNotification @ 0x1404EEA30 (EtwpValidateEnableNotification.c)
 *     EtwpEnableDisableSpecialGuids @ 0x1404EEB84 (EtwpEnableDisableSpecialGuids.c)
 *     EtwpUpdateGuidEnableInfo @ 0x1404EEC8C (EtwpUpdateGuidEnableInfo.c)
 *     EtwpSendDataBlock @ 0x1404EF6A0 (EtwpSendDataBlock.c)
 *     EtwpAllocDataBlock @ 0x1404EFAC4 (EtwpAllocDataBlock.c)
 *     EtwpUnreferenceDataBlock @ 0x1404EFD38 (EtwpUnreferenceDataBlock.c)
 *     EtwpIsRegEntryAllowed @ 0x1404EFD60 (EtwpIsRegEntryAllowed.c)
 *     EtwpCalculateUpdateNotification @ 0x1404EFE84 (EtwpCalculateUpdateNotification.c)
 *     EtwpUpdateRegEntryEnableMask @ 0x1404EFF44 (EtwpUpdateRegEntryEnableMask.c)
 *     EtwpProviderArrivalCallback @ 0x1404F0FC4 (EtwpProviderArrivalCallback.c)
 *     EtwpAcquireTokenAccessInformation @ 0x1405E34FC (EtwpAcquireTokenAccessInformation.c)
 *     EtwpCreateUmReplyObject @ 0x1407441E8 (EtwpCreateUmReplyObject.c)
 *     EtwpEventWriteProviderEnabled @ 0x140749200 (EtwpEventWriteProviderEnabled.c)
 *     EtwpEventWriteTemplateSessAndProv @ 0x14074959C (EtwpEventWriteTemplateSessAndProv.c)
 *     EtwpDemuxPrivateTraceHandle @ 0x14074F16C (EtwpDemuxPrivateTraceHandle.c)
 *     EtwpReferenceStackLookasideList @ 0x14074FEB0 (EtwpReferenceStackLookasideList.c)
 */

__int64 __fastcall EtwpEnableGuid(__int64 a1, __int64 a2, char a3)
{
  void *v3; // r13
  int v4; // edi
  char *v8; // r15
  int v9; // r8d
  _WORD *v10; // r14
  _KPROCESS *v11; // rbx
  __int64 v12; // r8
  int v13; // ecx
  struct _KTHREAD *CurrentThread; // rax
  int CurrentThreadProcessId; // eax
  char v16; // di
  unsigned int *v17; // r14
  char *GuidEntryByGuid; // rax
  unsigned int v19; // r13d
  int v20; // ebx
  struct _KTHREAD *v21; // rax
  char v22; // r14
  unsigned int *v23; // rdi
  __int16 v24; // cx
  char v25; // al
  __int64 v26; // r8
  __int16 v28; // ax
  __int64 v29; // rcx
  void *v30; // rbx
  size_t v31; // rcx
  int v32; // eax
  int v33; // r12d
  _DWORD *v34; // rdx
  unsigned __int8 i; // cl
  char *v36; // rax
  _WORD *v37; // r12
  char *v38; // r13
  int v39; // r8d
  int v40; // r9d
  char v41; // bl
  int v42; // r14d
  int v43; // r9d
  int v44; // edx
  int v45; // r8d
  char updated; // al
  __int16 v47; // cx
  void *v48; // rdx
  int v49; // eax
  const EVENT_DESCRIPTOR *v50; // r12
  __int64 v51; // r8
  __int64 ProcessServerSilo; // rax
  __int64 v53; // rbx
  __int64 v54; // rdx
  __int64 v55; // rax
  __int64 v56; // r11
  _BYTE *v57; // r10
  _BYTE *v58; // r9
  _DWORD *v59; // rdx
  __int64 v60; // rcx
  int v61; // eax
  signed __int32 v62; // eax
  __int64 v63; // rcx
  signed __int32 v64; // ett
  struct _KTHREAD *v65; // rax
  _KPROCESS *SessionById; // rax
  unsigned int ProcessId; // eax
  __int16 v68; // r12
  __int64 v69; // rcx
  unsigned __int8 v70; // [rsp+50h] [rbp-B0h]
  char v71; // [rsp+51h] [rbp-AFh]
  _WORD v72[7]; // [rsp+52h] [rbp-AEh] BYREF
  _WORD *v73; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int *v74; // [rsp+68h] [rbp-98h] BYREF
  int v75; // [rsp+70h] [rbp-90h]
  void *Src; // [rsp+78h] [rbp-88h] BYREF
  void *v77; // [rsp+80h] [rbp-80h]
  _WORD *v78; // [rsp+88h] [rbp-78h]
  __int16 v79[2]; // [rsp+90h] [rbp-70h] BYREF
  int v80; // [rsp+94h] [rbp-6Ch]
  int v81; // [rsp+98h] [rbp-68h]
  char *v82; // [rsp+A0h] [rbp-60h]
  PVOID Object; // [rsp+A8h] [rbp-58h]
  _QWORD v84[2]; // [rsp+B0h] [rbp-50h] BYREF
  int v85; // [rsp+C0h] [rbp-40h]
  __int64 v86; // [rsp+C8h] [rbp-38h] BYREF
  unsigned int *v87; // [rsp+D0h] [rbp-30h]
  _BYTE v88[80]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v89[48]; // [rsp+130h] [rbp+30h] BYREF
  $709EDFC2F9E0D4565D6AA3C4377BC643 v90; // [rsp+160h] [rbp+60h] BYREF
  _BYTE v91[4]; // [rsp+190h] [rbp+90h] BYREF
  _BYTE v92[8]; // [rsp+194h] [rbp+94h] BYREF
  int v93; // [rsp+19Ch] [rbp+9Ch]

  v3 = 0LL;
  v4 = *(_DWORD *)(a2 + 80) & 0x20;
  v86 = 0LL;
  Object = 0LL;
  v81 = 0;
  v71 = 0;
  LOBYTE(v80) = 0;
  v70 = v4 != 0 ? 2 : 0;
  v72[0] = 0;
  v75 = v4;
  v8 = 0LL;
  memset(v88, 0, sizeof(v88));
  v73 = 0LL;
  v84[0] = 0LL;
  v84[1] = 0LL;
  LOBYTE(v9) = a3;
  v85 = 0;
  Src = 0LL;
  v10 = 0LL;
  LODWORD(v11) = EtwpValidateEnableNotification(a1, a2, v9, (unsigned int)v84, (__int64)&v74, (__int64)v88);
  if ( (int)v11 < 0 )
    goto LABEL_31;
  v12 = *(unsigned int *)(a2 + 116);
  v13 = *(_DWORD *)(a2 + 72);
  *(_DWORD *)&v72[3] = v13;
  if ( (unsigned int)(v12 - 1) <= 1 )
  {
    v55 = a2 + 120;
    if ( (_DWORD)v12 )
    {
      v56 = v12;
      v57 = &v92[-v55];
      v58 = &v91[-v55];
      v59 = (_DWORD *)(a2 + 128);
      do
      {
        v60 = a2 + *((_QWORD *)v59 - 1);
        *(_DWORD *)((char *)v59 + (_QWORD)v57) = v59[1];
        v61 = *v59;
        *(_QWORD *)&v58[(_QWORD)v59 - 8] = v60;
        *(_DWORD *)((char *)v59 + (_QWORD)v58) = v61;
        v59 += 4;
        --v56;
      }
      while ( v56 );
      v13 = *(_DWORD *)&v72[3];
    }
  }
  else
  {
    LODWORD(v12) = 0;
    v93 = 0;
  }
  if ( !v4 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    LODWORD(v11) = EtwpEnableDisableSpecialGuids(
                     a1,
                     (int)a2 + 40,
                     *(unsigned __int16 *)(a2 + 78),
                     v13,
                     *(_DWORD *)(a2 + 88),
                     (__int64)v91,
                     v12,
                     (__int64)&v72[1]);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( LOBYTE(v72[1]) )
    {
LABEL_31:
      v23 = v74;
      goto LABEL_32;
    }
    v10 = v73;
    v3 = Src;
  }
  if ( (*(_WORD *)(a2 + 78) & 0xFFFD) == 0 )
  {
    v23 = v74;
    LODWORD(v11) = -1073741790;
    goto LABEL_84;
  }
  CurrentThreadProcessId = PsGetCurrentThreadProcessId();
  v16 = BYTE2(v85);
  *(_DWORD *)(a2 + 36) = CurrentThreadProcessId;
  if ( v16 )
  {
    GuidEntryByGuid = (char *)EtwpFindGuidEntryByGuid(a1, &PrivateLoggerNotificationGuid, v70);
    v17 = (unsigned int *)(a2 + 40);
  }
  else
  {
    v17 = (unsigned int *)(a2 + 40);
    GuidEntryByGuid = (char *)EtwpFindGuidEntryByGuid(a1, (_DWORD *)(a2 + 40), v70);
  }
  v8 = GuidEntryByGuid;
  if ( GuidEntryByGuid )
  {
    v19 = *(_DWORD *)&v72[3];
    v20 = v75;
    if ( *(_DWORD *)&v72[3] == 1 )
    {
      v28 = *((_WORD *)GuidEntryByGuid + 36);
      if ( v28 )
      {
        if ( !v75 && *(_WORD *)(a2 + 78) != v28 )
        {
          v29 = 0x4719A4EB910C653DLL - *((_QWORD *)v8 + 3);
          if ( *((_QWORD *)v8 + 3) == 0x4719A4EB910C653DLL )
            v29 = 0x91ECBAE3884509B9uLL - *((_QWORD *)v8 + 4);
          if ( !v29 )
          {
            LODWORD(v11) = -1073741053;
            goto LABEL_31;
          }
        }
      }
    }
  }
  else
  {
    if ( v16 || (v19 = *(_DWORD *)&v72[3], *(_DWORD *)&v72[3] != 1) )
    {
      LODWORD(v11) = -1073741163;
      goto LABEL_31;
    }
    v8 = EtwpAddGuidEntry(a1, v17, v70);
    if ( !v8 )
    {
      LODWORD(v11) = -1073741801;
      goto LABEL_31;
    }
    v20 = v75;
  }
  v21 = KeGetCurrentThread();
  --v21->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(v8 + 384), 0LL);
  v22 = 1;
  v23 = v74;
  *((_QWORD *)v8 + 49) = KeGetCurrentThread();
  HIBYTE(v72[0]) = 1;
  if ( v23 && (v23[208] & 0x40) != 0 )
  {
    LODWORD(v11) = -1073741162;
    goto LABEL_30;
  }
  if ( v20 )
  {
    LODWORD(v11) = EtwpAcquireTokenAccessInformation(v23);
    if ( (_DWORD)v11 )
      goto LABEL_30;
  }
  *(_DWORD *)(a2 + 112) = v19;
  LODWORD(v11) = 0;
  v24 = *(_WORD *)(a2 + 78);
  *(_WORD *)(a2 + 104) = v24;
  *(_BYTE *)(a2 + 106) = *(_BYTE *)(a2 + 76);
  *(_DWORD *)(a2 + 108) = *(_DWORD *)(a2 + 88);
  v25 = BYTE2(v85);
  v26 = *(_QWORD *)(a2 + 88);
  if ( BYTE2(v85) )
  {
    *(_BYTE *)(a2 + 107) = 1;
    *(_WORD *)(a2 + 104) = v24 & 0x7FFF;
  }
  if ( !v26 )
    *(_QWORD *)(a2 + 88) = -1LL;
  if ( !*(_BYTE *)(a2 + 76) )
    *(_BYTE *)(a2 + 76) = -1;
  if ( v19 != 2 && !v25 )
  {
    LODWORD(v11) = EtwpUpdateGuidEnableInfo((ULONG_PTR)v8, (__int64)v72);
    if ( (int)v11 < 0 )
    {
LABEL_30:
      *((_QWORD *)v8 + 49) = 0LL;
      ExReleasePushLockEx((ULONG_PTR)(v8 + 384), 0LL);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      goto LABEL_31;
    }
    *(_OWORD *)(a2 + 72) = *((_OWORD *)v8 + 5);
    *(_OWORD *)(a2 + 88) = *((_OWORD *)v8 + 6);
    if ( (*(_DWORD *)(a2 + 80) & 4) != 0 )
    {
      _m_prefetchw(v23 + 208);
      v62 = v23[208];
      do
      {
        v63 = v62 | 0x2000u;
        v64 = v62;
        v62 = _InterlockedCompareExchange((volatile signed __int32 *)v23 + 208, v63, v62);
      }
      while ( v64 != v62 );
      if ( (v62 & 0x2000) == 0 )
        EtwpReferenceStackLookasideList(v63, 0x2000LL);
      v23 = v74;
    }
    LODWORD(v11) = 0;
  }
  if ( *((char **)v8 + 5) == v8 + 40 )
    goto LABEL_30;
  if ( *(_BYTE *)(a2 + 12) )
  {
    LODWORD(v11) = EtwpCreateUmReplyObject((ULONG_PTR)v8, (__int64)&v86);
    if ( (int)v11 < 0 )
      goto LABEL_30;
    *(_QWORD *)(a2 + 24) = Object;
  }
  if ( (int)EtwpBuildNotificationPacket((__int64)v8, (_OWORD *)a2, 0xFFu, &Src) < 0 )
  {
    v3 = Src;
    LODWORD(v11) = -1073741801;
    goto LABEL_87;
  }
  v30 = Src;
  v31 = *((unsigned int *)Src + 1);
  v87 = (unsigned int *)((char *)Src + 4);
  v32 = EtwpAllocDataBlock(v31, Src);
  v10 = v73;
  if ( v32 < 0 )
    goto LABEL_117;
  v33 = v80;
  v34 = v8 + 112;
  v78 = v73;
  for ( i = 0; i < 8u; ++i )
  {
    if ( *v34 )
      v33 = (unsigned __int8)v33 | (1 << i);
    v34 += 8;
  }
  v80 = v33;
  v36 = (char *)*((_QWORD *)v8 + 5);
  v37 = v73;
  v82 = v36;
  if ( v36 == v8 + 40 )
  {
    LODWORD(v11) = 0;
LABEL_78:
    *(_DWORD *)(a2 + 20) = v81;
    *(_QWORD *)(a2 + 24) = v86;
    if ( v23 && v19 <= 1 )
    {
      v50 = (const EVENT_DESCRIPTOR *)&ETW_EVENT_PROVIDER_ENABLED;
      if ( v19 != 1 )
        v50 = &ETW_EVENT_PROVIDER_DISABLED;
      if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, v50) )
      {
        v69 = a2 + 40;
        if ( v19 == 1 )
          EtwpEventWriteProviderEnabled(
            v69,
            (_DWORD)v50,
            v51,
            (_DWORD)v23 + 152,
            a2 + 40,
            *(_QWORD *)(a2 + 88),
            *(_QWORD *)(a2 + 96),
            *(_DWORD *)(a2 + 80),
            *(_BYTE *)(a2 + 76));
        else
          EtwpEventWriteTemplateSessAndProv(v69, v50, v51, 2LL, v23 + 38, a2 + 40);
      }
    }
    goto LABEL_83;
  }
  while ( 1 )
  {
    if ( v75 )
    {
      v38 = v36 - 16;
      v65 = KeGetCurrentThread();
      --v65->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(*((_QWORD *)v38 + 4) + 384LL, 0LL);
      v10 = v73;
      v23 = v74;
      v30 = Src;
      *(_QWORD *)(*((_QWORD *)v38 + 4) + 392LL) = KeGetCurrentThread();
      v36 = v82;
      v71 = 1;
    }
    else
    {
      v38 = v36;
    }
    v82 = *(char **)v36;
    if ( !(unsigned __int8)EtwpIsRegEntryAllowed((_DWORD)v38, (_DWORD)v23, (unsigned int)v84, a2, (__int64)v88, v70) )
    {
LABEL_132:
      LODWORD(v11) = 0;
      goto LABEL_74;
    }
    v77 = v30;
    if ( BYTE2(v85) )
      break;
    if ( *(_DWORD *)&v72[3] == 2 )
    {
      v11 = 0LL;
      goto LABEL_66;
    }
    if ( v75 )
      v41 = v38[101];
    else
      v41 = v38[100];
    v42 = *(_DWORD *)&v72[3];
    LOBYTE(v40) = v70;
    LOBYTE(v39) = v72[0];
    EtwpUpdateRegEntryEnableMask((_DWORD)v38, (_DWORD)v23, v39, v40, *(_DWORD *)&v72[3]);
    LOBYTE(v43) = v80;
    LOBYTE(v44) = v72[0];
    LOBYTE(v45) = v41;
    updated = EtwpCalculateUpdateNotification((_DWORD)v38, v44, v45, v43, v70, v42, (__int64)&v73);
    v10 = v73;
    v11 = 0LL;
    if ( updated )
    {
      if ( v73 )
      {
        v77 = v73;
        if ( v73 != v37 )
        {
          EtwpUnreferenceDataBlock(v37);
          v78 = v10;
        }
      }
      else
      {
        v10 = v37;
        v73 = v37;
      }
LABEL_66:
      if ( (unsigned int)(*(_DWORD *)&v72[3] - 1) > 1
        || (v47 = *((_WORD *)v38 + 49), (v47 & 8) == 0) && (v47 & 0x20) == 0 && (v23[208] & 0x2000000) == 0 )
      {
LABEL_70:
        v48 = v77;
LABEL_71:
        v49 = EtwpSendDataBlock(v38, v48);
        v37 = v78;
        if ( v49 >= 0 && (v38[98] & 2) != 0 )
          ++v81;
        goto LABEL_74;
      }
      if ( (v47 & 1) == 0 )
      {
        if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(*((_QWORD *)v38 + 10) + 760LL)) )
          goto LABEL_70;
        ProcessServerSilo = PsGetProcessServerSilo(*((_QWORD *)v38 + 10));
        v53 = PsAttachSiloToCurrentThread(ProcessServerSilo);
        KiStackAttachProcess(*((_KPROCESS **)v38 + 10), 0, (__int64)&v90);
        LOBYTE(v54) = 1;
        EtwpProviderArrivalCallback(v23, v54, v38);
        KiUnstackDetachProcess(&v90, 0LL);
        PsDetachSiloFromCurrentThread(v53);
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(*((_QWORD *)v38 + 10) + 760LL));
        goto LABEL_95;
      }
      if ( (v47 & 0x10) != 0 )
      {
        SessionById = (_KPROCESS *)MmGetSessionById(*((_DWORD *)v38 + 14));
        v11 = SessionById;
        if ( SessionById )
        {
          if ( (int)MmAttachSession(SessionById, (__int64)v89) >= 0 )
            goto LABEL_99;
LABEL_126:
          ObfDereferenceObject(v11);
        }
      }
      else
      {
LABEL_99:
        EtwpProviderArrivalCallback(v23, 0LL, v38);
        if ( v11 )
        {
          MmDetachSession((__int64)v11, (__int64)v89);
          goto LABEL_126;
        }
      }
LABEL_95:
      LODWORD(v11) = 0;
      goto LABEL_70;
    }
    if ( !v73 )
    {
      v10 = v37;
      v73 = v37;
    }
LABEL_74:
    if ( v71 )
    {
      *(_QWORD *)(*((_QWORD *)v38 + 4) + 392LL) = 0LL;
      ExReleasePushLockEx(*((_QWORD *)v38 + 4) + 384LL, 0LL);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      v10 = v73;
      v23 = v74;
      v71 = 0;
    }
    v36 = v82;
    if ( v82 == v8 + 40 )
    {
      v19 = *(_DWORD *)&v72[3];
      goto LABEL_78;
    }
    v30 = Src;
  }
  ProcessId = (unsigned int)PsGetProcessId(*((PEPROCESS *)v38 + 10));
  if ( (unsigned int)EtwpDemuxPrivateTraceHandle(ProcessId, *(_WORD *)(a2 + 78) & 0x7FFF, v79) )
    goto LABEL_132;
  v68 = v79[0];
  if ( v79[0] == v10[39] )
  {
LABEL_131:
    v48 = v10;
    LODWORD(v11) = 0;
    goto LABEL_71;
  }
  if ( (int)EtwpAllocDataBlock(*v87, v30) >= 0 )
  {
    EtwpUnreferenceDataBlock(v78);
    v10 = v73;
    v78 = v73;
    v73[39] = v68 | 0x8000;
    v10[52] = v68;
    goto LABEL_131;
  }
  v10 = v78;
  v73 = v78;
  if ( v71 )
  {
    *(_QWORD *)(*((_QWORD *)v38 + 4) + 392LL) = 0LL;
    ExReleasePushLockEx(*((_QWORD *)v38 + 4) + 384LL, 0LL);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v10 = v73;
    v23 = v74;
  }
LABEL_117:
  LODWORD(v11) = -1073741801;
LABEL_83:
  v3 = Src;
LABEL_84:
  if ( v10 )
    EtwpUnreferenceDataBlock(v10);
  v22 = HIBYTE(v72[0]);
LABEL_87:
  if ( v3 )
    EtwpUnreferenceDataBlock(v3);
  if ( v22 == 1 )
    goto LABEL_30;
LABEL_32:
  if ( v23 )
    EtwpReleaseLoggerContext(v23, 0);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v8 )
    EtwpUnreferenceGuidEntry((__int64 *)v8);
  EtwpFreeFilterInfo(v88);
  return (unsigned int)v11;
}
