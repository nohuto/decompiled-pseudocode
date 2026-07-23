/*
 * XREFs of EtwpEnableGuid @ 0x14058D2FC
 * Callers:
 *     NtTraceControl @ 0x14058F8F0 (NtTraceControl.c)
 *     EtwpEnableTrace @ 0x14060DE44 (EtwpEnableTrace.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     PsGetProcessServerSilo @ 0x14006CFF0 (PsGetProcessServerSilo.c)
 *     PsGetProcessId @ 0x14006ECF0 (PsGetProcessId.c)
 *     PsDetachSiloFromCurrentThread @ 0x140073540 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x140073560 (PsAttachSiloToCurrentThread.c)
 *     MmDetachSession @ 0x14008A5E0 (MmDetachSession.c)
 *     MmAttachSession @ 0x14008A660 (MmAttachSession.c)
 *     PsGetCurrentThreadProcessId @ 0x1400A1C70 (PsGetCurrentThreadProcessId.c)
 *     MmGetSessionById @ 0x1400E1680 (MmGetSessionById.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     EtwEventEnabled @ 0x1400F3870 (EtwEventEnabled.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     EtwpBuildNotificationPacket @ 0x14058B92C (EtwpBuildNotificationPacket.c)
 *     EtwpAllocDataBlock @ 0x14058B9A8 (EtwpAllocDataBlock.c)
 *     EtwpUpdateRegEntryEnableMask @ 0x14058C580 (EtwpUpdateRegEntryEnableMask.c)
 *     EtwpCalculateUpdateNotification @ 0x14058C620 (EtwpCalculateUpdateNotification.c)
 *     EtwpIsRegEntryAllowed @ 0x14058C6E4 (EtwpIsRegEntryAllowed.c)
 *     EtwpProviderArrivalCallback @ 0x14058C90C (EtwpProviderArrivalCallback.c)
 *     EtwpUpdateGuidEnableInfo @ 0x14058CED4 (EtwpUpdateGuidEnableInfo.c)
 *     EtwpEnableDisableSpecialGuids @ 0x14058D1F4 (EtwpEnableDisableSpecialGuids.c)
 *     EtwpFreeFilterInfo @ 0x14058D9F0 (EtwpFreeFilterInfo.c)
 *     EtwpValidateEnableNotification @ 0x14058DA84 (EtwpValidateEnableNotification.c)
 *     EtwpUnreferenceDataBlock @ 0x14058DCB4 (EtwpUnreferenceDataBlock.c)
 *     EtwpSendDataBlock @ 0x14058DED0 (EtwpSendDataBlock.c)
 *     EtwpAddGuidEntry @ 0x14058E46C (EtwpAddGuidEntry.c)
 *     EtwpUnreferenceGuidEntry @ 0x1405906D4 (EtwpUnreferenceGuidEntry.c)
 *     EtwpFindGuidEntryByGuid @ 0x1405907D0 (EtwpFindGuidEntryByGuid.c)
 *     EtwpReleaseLoggerContext @ 0x140590D4C (EtwpReleaseLoggerContext.c)
 *     EtwpCreateUmReplyObject @ 0x1405C3160 (EtwpCreateUmReplyObject.c)
 *     EtwpAcquireTokenAccessInformation @ 0x1407A565C (EtwpAcquireTokenAccessInformation.c)
 *     EtwpReferenceStackLookasideList @ 0x1407A741C (EtwpReferenceStackLookasideList.c)
 *     EtwpEventWriteProviderEnabled @ 0x1407AAECC (EtwpEventWriteProviderEnabled.c)
 *     EtwpEventWriteTemplateSessAndProv @ 0x1407AB268 (EtwpEventWriteTemplateSessAndProv.c)
 *     EtwpDemuxPrivateTraceHandle @ 0x1407AFF8C (EtwpDemuxPrivateTraceHandle.c)
 */

__int64 __fastcall EtwpEnableGuid(__int64 a1, __int64 a2, char a3)
{
  void *v3; // r13
  int v4; // edi
  __int64 v8; // r14
  int v9; // r8d
  _WORD *v10; // r15
  _KPROCESS *v11; // rbx
  __int64 v12; // r9
  __int64 v13; // r8
  int v14; // ecx
  struct _KTHREAD *CurrentThread; // rax
  int CurrentThreadProcessId; // eax
  char v17; // bl
  const GUID *v18; // rdx
  bool v19; // zf
  __int64 GuidEntryByGuid; // rax
  unsigned int v21; // r13d
  struct _KTHREAD *v22; // rax
  char v23; // r15
  __int64 v24; // rdi
  char v25; // dl
  __int16 v26; // cx
  __int16 v28; // ax
  __int64 v29; // rcx
  size_t v30; // rcx
  int v31; // eax
  int v32; // ebx
  _DWORD *v33; // rdx
  _WORD *v34; // r12
  unsigned __int8 i; // cl
  _QWORD *v36; // rax
  void *v37; // rbx
  __int64 v38; // r13
  int v39; // eax
  unsigned __int8 v40; // bl
  int v41; // r15d
  char updated; // al
  __int16 v43; // cx
  void *v44; // rdx
  const EVENT_DESCRIPTOR *v45; // r12
  __int64 ProcessServerSilo; // rax
  __int64 v47; // rbx
  __int64 v48; // rax
  __int64 v49; // r11
  _BYTE *v50; // r10
  _DWORD *v51; // rdx
  __int64 v52; // rcx
  int v53; // eax
  signed __int32 v54; // eax
  __int64 v55; // rcx
  signed __int32 v56; // ett
  struct _KTHREAD *v57; // rax
  _WORD *v58; // rcx
  _KPROCESS *SessionById; // rax
  unsigned int ProcessId; // eax
  __int16 v61; // cx
  __int64 v62; // rcx
  unsigned __int8 v63; // [rsp+50h] [rbp-B0h]
  char v64; // [rsp+51h] [rbp-AFh]
  __int16 v65; // [rsp+52h] [rbp-AEh] BYREF
  int v66; // [rsp+54h] [rbp-ACh]
  char v67; // [rsp+58h] [rbp-A8h] BYREF
  _WORD *v68; // [rsp+60h] [rbp-A0h] BYREF
  void *Src; // [rsp+68h] [rbp-98h] BYREF
  __int64 v70; // [rsp+70h] [rbp-90h] BYREF
  __int16 v71; // [rsp+78h] [rbp-88h] BYREF
  void *v72; // [rsp+80h] [rbp-80h]
  int v73; // [rsp+88h] [rbp-78h]
  int v74; // [rsp+8Ch] [rbp-74h]
  int v75; // [rsp+90h] [rbp-70h]
  _QWORD *v76; // [rsp+98h] [rbp-68h]
  PVOID Object; // [rsp+A0h] [rbp-60h]
  _QWORD v78[2]; // [rsp+A8h] [rbp-58h] BYREF
  int v79; // [rsp+B8h] [rbp-48h]
  __int64 v80; // [rsp+C0h] [rbp-40h] BYREF
  _WORD *v81; // [rsp+C8h] [rbp-38h]
  _WORD *v82; // [rsp+D0h] [rbp-30h]
  unsigned int *v83; // [rsp+D8h] [rbp-28h]
  _QWORD v84[10]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v85[48]; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v86[48]; // [rsp+160h] [rbp+60h] BYREF
  _BYTE v87[4]; // [rsp+190h] [rbp+90h] BYREF
  _BYTE v88[8]; // [rsp+194h] [rbp+94h] BYREF
  int v89; // [rsp+19Ch] [rbp+9Ch]

  v3 = 0LL;
  v4 = *(_DWORD *)(a2 + 80) & 0x20;
  v80 = 0LL;
  Object = 0LL;
  v75 = 0;
  v64 = 0;
  LOBYTE(v74) = 0;
  v63 = v4 != 0 ? 2 : 0;
  v65 = 0;
  v73 = v4;
  v8 = 0LL;
  memset(v84, 0, sizeof(v84));
  v68 = 0LL;
  v78[0] = 0LL;
  v78[1] = 0LL;
  LOBYTE(v9) = a3;
  v79 = 0;
  Src = 0LL;
  v10 = 0LL;
  LODWORD(v11) = EtwpValidateEnableNotification(a1, a2, v9, (unsigned int)v78, (__int64)&v70, (__int64)v84);
  if ( (int)v11 < 0 )
    goto LABEL_31;
  v13 = *(unsigned int *)(a2 + 116);
  v14 = *(_DWORD *)(a2 + 72);
  v66 = v14;
  if ( (unsigned int)(v13 - 1) <= 1 )
  {
    v48 = a2 + 120;
    if ( (_DWORD)v13 )
    {
      v49 = v13;
      v50 = &v88[-v48];
      v12 = (__int64)&v87[-v48];
      v51 = (_DWORD *)(a2 + 128);
      do
      {
        v52 = a2 + *((_QWORD *)v51 - 1);
        *(_DWORD *)((char *)v51 + (_QWORD)v50) = v51[1];
        v53 = *v51;
        *(_QWORD *)((char *)v51 + v12 - 8) = v52;
        *(_DWORD *)((char *)v51 + v12) = v53;
        v51 += 4;
        --v49;
      }
      while ( v49 );
      v14 = v66;
    }
  }
  else
  {
    v13 = 0LL;
    v89 = 0;
  }
  if ( !v4 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    LODWORD(v11) = EtwpEnableDisableSpecialGuids(
                     a1,
                     (__int64 *)(a2 + 40),
                     *(_WORD *)(a2 + 78),
                     v14,
                     *(_DWORD *)(a2 + 88),
                     (__int64)v87,
                     v13,
                     &v67);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( v67 )
    {
LABEL_31:
      v24 = v70;
      goto LABEL_32;
    }
    v10 = v68;
    v3 = Src;
  }
  if ( (*(_WORD *)(a2 + 78) & 0xFFFD) == 0 )
  {
    v24 = v70;
    LODWORD(v11) = -1073741790;
    goto LABEL_85;
  }
  CurrentThreadProcessId = PsGetCurrentThreadProcessId();
  v17 = BYTE2(v79);
  v18 = &PrivateLoggerNotificationGuid;
  v19 = BYTE2(v79) == 0;
  *(_DWORD *)(a2 + 36) = CurrentThreadProcessId;
  if ( v19 )
    v18 = (const GUID *)(a2 + 40);
  GuidEntryByGuid = EtwpFindGuidEntryByGuid(a1, v18, v63);
  v8 = GuidEntryByGuid;
  if ( GuidEntryByGuid )
  {
    v21 = v66;
    LODWORD(v11) = 0;
    if ( v66 == 1 )
    {
      v28 = *(_WORD *)(GuidEntryByGuid + 72);
      if ( v28 )
      {
        if ( !v73 && *(_WORD *)(a2 + 78) != v28 )
        {
          v29 = 0x4719A4EB910C653DLL - *(_QWORD *)(v8 + 24);
          if ( *(_QWORD *)(v8 + 24) == 0x4719A4EB910C653DLL )
            v29 = 0x91ECBAE3884509B9uLL - *(_QWORD *)(v8 + 32);
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
    if ( v17 || (v21 = v66, v66 != 1) )
    {
      LODWORD(v11) = -1073741163;
      goto LABEL_31;
    }
    LODWORD(v11) = 0;
    v8 = EtwpAddGuidEntry(a1, a2 + 40, v63);
    if ( !v8 )
    {
      LODWORD(v11) = -1073741801;
      goto LABEL_31;
    }
  }
  v22 = KeGetCurrentThread();
  --v22->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(v8 + 384, 0LL);
  v23 = 1;
  v24 = v70;
  *(_QWORD *)(v8 + 392) = KeGetCurrentThread();
  HIBYTE(v65) = 1;
  if ( v24 && (*(_DWORD *)(v24 + 832) & 0x40) != 0 )
  {
    LODWORD(v11) = -1073741162;
    goto LABEL_30;
  }
  if ( v73 )
  {
    LODWORD(v11) = EtwpAcquireTokenAccessInformation(v24);
    if ( (_DWORD)v11 )
      goto LABEL_30;
    LODWORD(v11) = 0;
  }
  v25 = BYTE2(v79);
  v12 = 0x7FFFLL;
  *(_DWORD *)(a2 + 112) = v21;
  v26 = *(_WORD *)(a2 + 78);
  *(_WORD *)(a2 + 104) = v26;
  *(_BYTE *)(a2 + 106) = *(_BYTE *)(a2 + 76);
  *(_DWORD *)(a2 + 108) = *(_DWORD *)(a2 + 88);
  v13 = *(_QWORD *)(a2 + 88);
  if ( v25 )
  {
    *(_BYTE *)(a2 + 107) = 1;
    *(_WORD *)(a2 + 104) = v26 & 0x7FFF;
  }
  if ( !v13 )
    *(_QWORD *)(a2 + 88) = -1LL;
  if ( !*(_BYTE *)(a2 + 76) )
    *(_BYTE *)(a2 + 76) = -1;
  if ( v21 != 2 && !v25 )
  {
    LODWORD(v11) = EtwpUpdateGuidEnableInfo(v8, a2, v13, (__int64)v84, &v65);
    if ( (int)v11 < 0 )
    {
LABEL_30:
      *(_QWORD *)(v8 + 392) = 0LL;
      ExReleasePushLockEx(v8 + 384, 0LL, v13, v12);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      goto LABEL_31;
    }
    *(_OWORD *)(a2 + 72) = *(_OWORD *)(v8 + 80);
    *(_OWORD *)(a2 + 88) = *(_OWORD *)(v8 + 96);
    if ( (*(_DWORD *)(a2 + 80) & 4) != 0 )
    {
      _m_prefetchw((const void *)(v24 + 832));
      v54 = *(_DWORD *)(v24 + 832);
      do
      {
        v55 = v54 | 0x2000u;
        v56 = v54;
        v54 = _InterlockedCompareExchange((volatile signed __int32 *)(v24 + 832), v55, v54);
      }
      while ( v56 != v54 );
      if ( (v54 & 0x2000) == 0 )
        EtwpReferenceStackLookasideList(v55, 0x2000LL);
      v24 = v70;
    }
    LODWORD(v11) = 0;
  }
  if ( *(_QWORD *)(v8 + 40) == v8 + 40 )
    goto LABEL_30;
  if ( *(_BYTE *)(a2 + 12) )
  {
    LODWORD(v11) = EtwpCreateUmReplyObject(v8, (__int64)&v80);
    if ( (int)v11 < 0 )
      goto LABEL_30;
    *(_QWORD *)(a2 + 24) = Object;
  }
  if ( (int)EtwpBuildNotificationPacket(v8, (_OWORD *)a2, 255, &Src) < 0 )
  {
    v3 = Src;
    LODWORD(v11) = -1073741801;
    goto LABEL_88;
  }
  v30 = *((unsigned int *)Src + 1);
  v83 = (unsigned int *)((char *)Src + 4);
  v31 = EtwpAllocDataBlock(v30, Src, &v68);
  v10 = v68;
  if ( v31 < 0 )
    goto LABEL_118;
  v32 = v74;
  v33 = (_DWORD *)(v8 + 112);
  v34 = v68;
  for ( i = 0; i < 8u; ++i )
  {
    if ( *v33 )
      v32 = (unsigned __int8)v32 | (1 << i);
    v33 += 8;
  }
  v74 = v32;
  v36 = *(_QWORD **)(v8 + 40);
  v37 = Src;
  v76 = v36;
  if ( v36 == (_QWORD *)(v8 + 40) )
  {
    LODWORD(v11) = 0;
LABEL_79:
    *(_DWORD *)(a2 + 20) = v75;
    *(_QWORD *)(a2 + 24) = v80;
    if ( v24 && v21 <= 1 )
    {
      v45 = (const EVENT_DESCRIPTOR *)&ETW_EVENT_PROVIDER_ENABLED;
      if ( v21 != 1 )
        v45 = &ETW_EVENT_PROVIDER_DISABLED;
      if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, v45) )
      {
        v62 = a2 + 40;
        if ( v21 == 1 )
          EtwpEventWriteProviderEnabled(
            v62,
            (_DWORD)v45,
            v13,
            v24 + 152,
            a2 + 40,
            *(_QWORD *)(a2 + 88),
            *(_QWORD *)(a2 + 96),
            *(_DWORD *)(a2 + 80),
            *(_BYTE *)(a2 + 76));
        else
          EtwpEventWriteTemplateSessAndProv(v62, v45, v13, 2LL, v24 + 152, a2 + 40);
      }
    }
    goto LABEL_84;
  }
  while ( 1 )
  {
    v82 = v34;
    v81 = v34;
    if ( v73 )
    {
      v38 = (__int64)(v36 - 2);
      v57 = KeGetCurrentThread();
      --v57->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(*(_QWORD *)(v38 + 32) + 384LL, 0LL);
      v10 = v68;
      v24 = v70;
      v37 = Src;
      *(_QWORD *)(*(_QWORD *)(v38 + 32) + 392LL) = KeGetCurrentThread();
      v36 = v76;
      v64 = 1;
    }
    else
    {
      v38 = (__int64)v36;
    }
    v76 = (_QWORD *)*v36;
    if ( !EtwpIsRegEntryAllowed(v38, v24, (__int64)v78, a2, v84, v63) )
    {
LABEL_92:
      LODWORD(v11) = 0;
      goto LABEL_74;
    }
    v72 = v37;
    if ( BYTE2(v79) )
      break;
    v39 = v66;
    if ( v66 == 2 )
    {
      v11 = 0LL;
      goto LABEL_66;
    }
    if ( v73 )
      v40 = *(_BYTE *)(v38 + 101);
    else
      v40 = *(_BYTE *)(v38 + 100);
    LOBYTE(v13) = v65;
    v41 = v66;
    EtwpUpdateRegEntryEnableMask(v38, v24, v13, v63, v66);
    updated = EtwpCalculateUpdateNotification(v38, v65, v40, v74, v63, v41, &v68);
    v10 = v68;
    v11 = 0LL;
    if ( updated )
    {
      if ( v68 )
      {
        v58 = v68;
        v72 = v68;
        if ( v68 != v34 )
        {
          EtwpUnreferenceDataBlock(v34);
          v58 = v10;
        }
        v34 = v58;
        if ( v58 == v81 )
          v34 = v82;
      }
      else
      {
        v10 = v34;
        v68 = v34;
      }
      v39 = v66;
LABEL_66:
      if ( (unsigned int)(v39 - 1) > 1
        || (v43 = *(_WORD *)(v38 + 98), (v43 & 8) == 0)
        && (v43 & 0x20) == 0
        && (*(_DWORD *)(v24 + 832) & 0x2000000) == 0 )
      {
LABEL_70:
        v44 = v72;
LABEL_71:
        if ( (int)EtwpSendDataBlock(v38, v44) >= 0 && (*(_BYTE *)(v38 + 98) & 2) != 0 )
          ++v75;
        goto LABEL_74;
      }
      if ( (v43 & 1) != 0 )
      {
        if ( (v43 & 0x10) == 0 )
          goto LABEL_102;
        SessionById = (_KPROCESS *)MmGetSessionById(*(_DWORD *)(v38 + 56));
        v11 = SessionById;
        if ( !SessionById )
          goto LABEL_99;
        if ( (int)MmAttachSession(SessionById, (__int64)v85) >= 0 )
        {
LABEL_102:
          EtwpProviderArrivalCallback(v24, 0, v38);
          if ( !v11 )
            goto LABEL_99;
          MmDetachSession((__int64)v11, (__int64)v85);
        }
        ObfDereferenceObject(v11);
      }
      else
      {
        if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)(v38 + 80) + 760LL)) )
          goto LABEL_70;
        ProcessServerSilo = PsGetProcessServerSilo(*(_QWORD *)(v38 + 80));
        v47 = PsAttachSiloToCurrentThread(ProcessServerSilo);
        KiStackAttachProcess(*(_KPROCESS **)(v38 + 80), 0, (__int64)v86);
        EtwpProviderArrivalCallback(v24, 1, v38);
        KiUnstackDetachProcess((__int64)v86, 0LL);
        PsDetachSiloFromCurrentThread(v47);
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)(v38 + 80) + 760LL));
      }
LABEL_99:
      v44 = v72;
LABEL_100:
      LODWORD(v11) = 0;
      goto LABEL_71;
    }
    if ( !v68 )
    {
      v10 = v34;
      v68 = v34;
    }
LABEL_74:
    if ( v64 )
    {
      *(_QWORD *)(*(_QWORD *)(v38 + 32) + 392LL) = 0LL;
      ExReleasePushLockEx(*(_QWORD *)(v38 + 32) + 384LL, 0LL, v13, v12);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      v10 = v68;
      v24 = v70;
      v64 = 0;
    }
    v36 = v76;
    if ( v76 == (_QWORD *)(v8 + 40) )
    {
      v21 = v66;
      goto LABEL_79;
    }
    v37 = Src;
  }
  ProcessId = (unsigned int)PsGetProcessId(*(PEPROCESS *)(v38 + 80));
  if ( (unsigned int)EtwpDemuxPrivateTraceHandle(ProcessId, *(_WORD *)(a2 + 78) & 0x7FFF, &v71) )
    goto LABEL_92;
  if ( v71 == v10[39] )
  {
LABEL_135:
    v44 = v10;
    goto LABEL_100;
  }
  if ( (int)EtwpAllocDataBlock(*v83, v37, &v68) >= 0 )
  {
    EtwpUnreferenceDataBlock(v34);
    v10 = v68;
    v61 = v71;
    v34 = v68;
    v68[39] = v71 | 0x8000;
    v34[52] = v61;
    goto LABEL_135;
  }
  v10 = v34;
  v68 = v34;
  if ( v64 )
  {
    *(_QWORD *)(*(_QWORD *)(v38 + 32) + 392LL) = 0LL;
    ExReleasePushLockEx(*(_QWORD *)(v38 + 32) + 384LL, 0LL, v13, v12);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v10 = v68;
    v24 = v70;
  }
LABEL_118:
  LODWORD(v11) = -1073741801;
LABEL_84:
  v3 = Src;
LABEL_85:
  if ( v10 )
    EtwpUnreferenceDataBlock(v10);
  v23 = HIBYTE(v65);
LABEL_88:
  if ( v3 )
    EtwpUnreferenceDataBlock(v3);
  if ( v23 == 1 )
    goto LABEL_30;
LABEL_32:
  if ( v24 )
    EtwpReleaseLoggerContext(v24, 0LL);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v8 )
    EtwpUnreferenceGuidEntry((PVOID)v8);
  EtwpFreeFilterInfo(v84);
  return (unsigned int)v11;
}
