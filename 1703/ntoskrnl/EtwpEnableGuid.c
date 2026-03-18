/*
 * XREFs of EtwpEnableGuid @ 0x140552C6C
 * Callers:
 *     NtTraceControl @ 0x14047FD70 (NtTraceControl.c)
 *     EtwpEnableTrace @ 0x1405524C8 (EtwpEnableTrace.c)
 * Callees:
 *     PsGetCurrentThreadProcessId @ 0x14003C360 (PsGetCurrentThreadProcessId.c)
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     PsDetachSiloFromCurrentThread @ 0x14006F590 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x14006F5B0 (PsAttachSiloToCurrentThread.c)
 *     MmDetachSession @ 0x140073870 (MmDetachSession.c)
 *     MmAttachSession @ 0x1400738F0 (MmAttachSession.c)
 *     PsGetProcessServerSilo @ 0x140085020 (PsGetProcessServerSilo.c)
 *     MmGetSessionById @ 0x140094460 (MmGetSessionById.c)
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     PsGetProcessId @ 0x140100A50 (PsGetProcessId.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     EtwpCreateUmReplyObject @ 0x14043FEB4 (EtwpCreateUmReplyObject.c)
 *     EtwpProviderArrivalCallback @ 0x140448030 (EtwpProviderArrivalCallback.c)
 *     EtwpUnreferenceGuidEntry @ 0x140480BE4 (EtwpUnreferenceGuidEntry.c)
 *     EtwpFindGuidEntryByGuid @ 0x140480CD0 (EtwpFindGuidEntryByGuid.c)
 *     EtwpReleaseLoggerContext @ 0x1404F2B5C (EtwpReleaseLoggerContext.c)
 *     EtwpIsRegEntryAllowed @ 0x1405533E4 (EtwpIsRegEntryAllowed.c)
 *     EtwpSendDataBlock @ 0x1405535DC (EtwpSendDataBlock.c)
 *     EtwpCalculateUpdateNotification @ 0x1405539C8 (EtwpCalculateUpdateNotification.c)
 *     EtwpUpdateRegEntryEnableMask @ 0x140553B64 (EtwpUpdateRegEntryEnableMask.c)
 *     EtwpUnreferenceDataBlock @ 0x140553DE0 (EtwpUnreferenceDataBlock.c)
 *     EtwpFreeFilterInfo @ 0x140553DFC (EtwpFreeFilterInfo.c)
 *     EtwpValidateEnableNotification @ 0x140553E90 (EtwpValidateEnableNotification.c)
 *     EtwpEnableDisableSpecialGuids @ 0x140553FF8 (EtwpEnableDisableSpecialGuids.c)
 *     EtwpBuildNotificationPacket @ 0x140554118 (EtwpBuildNotificationPacket.c)
 *     EtwpAllocDataBlock @ 0x1405541BC (EtwpAllocDataBlock.c)
 *     EtwpUpdateGuidEnableInfo @ 0x140554260 (EtwpUpdateGuidEnableInfo.c)
 *     EtwpAddGuidEntry @ 0x140554888 (EtwpAddGuidEntry.c)
 *     EtwpAcquireTokenAccessInformation @ 0x1405CBEF4 (EtwpAcquireTokenAccessInformation.c)
 *     EtwpEventWriteProviderEnabled @ 0x14070D88C (EtwpEventWriteProviderEnabled.c)
 *     EtwpEventWriteTemplateSessAndProv @ 0x14070DD08 (EtwpEventWriteTemplateSessAndProv.c)
 *     EtwpDemuxPrivateTraceHandle @ 0x14071161C (EtwpDemuxPrivateTraceHandle.c)
 *     EtwpReferenceStackLookasideList @ 0x140712350 (EtwpReferenceStackLookasideList.c)
 */

__int64 __fastcall EtwpEnableGuid(__int64 a1, __int64 a2, char a3)
{
  int v3; // eax
  ULONG_PTR v4; // r15
  _WORD *v8; // rsi
  void *v9; // r13
  int v10; // r8d
  int updated; // ebx
  __int64 v12; // r8
  int v13; // r12d
  struct _KTHREAD *CurrentThread; // rax
  int CurrentThreadProcessId; // eax
  char v16; // si
  __int64 v17; // r13
  _QWORD *GuidEntryByGuid; // rax
  struct _KTHREAD *v19; // rax
  char v20; // si
  unsigned int *v21; // r14
  __int16 v22; // cx
  char v23; // al
  __int64 v24; // r8
  int v26; // eax
  size_t v27; // rcx
  int v28; // eax
  int v29; // r14d
  _DWORD *v30; // rdx
  _WORD *v31; // r12
  unsigned __int8 i; // cl
  _QWORD *v33; // rbx
  struct _KTHREAD *v34; // rax
  __int64 v35; // r14
  __int64 v36; // rdx
  __int64 v37; // r8
  int v38; // eax
  char v39; // bl
  int v40; // esi
  int v41; // r9d
  int v42; // edx
  int v43; // r8d
  char v44; // al
  __int16 v45; // cx
  void *v46; // rdx
  int v47; // eax
  unsigned int *v48; // r14
  const EVENT_DESCRIPTOR *v49; // r12
  __int64 v50; // r8
  __int64 ProcessServerSilo; // rax
  __int64 v52; // rbx
  __int64 v53; // rax
  __int64 v54; // r11
  _BYTE *v55; // r10
  _BYTE *v56; // r9
  _DWORD *v57; // rdx
  __int64 v58; // rcx
  int v59; // eax
  void *v60; // rbx
  unsigned int *v61; // rdx
  signed __int32 *v62; // roff
  signed __int32 v63; // eax
  __int64 v64; // rcx
  signed __int32 v65; // ett
  ULONG_PTR SessionById; // rax
  unsigned int ProcessId; // eax
  __int16 v68; // bx
  __int64 v69; // rcx
  unsigned __int8 v70; // [rsp+50h] [rbp-B0h]
  char v71; // [rsp+51h] [rbp-AFh]
  _WORD v72[7]; // [rsp+52h] [rbp-AEh] BYREF
  _WORD *v73; // [rsp+60h] [rbp-A0h] BYREF
  int v74; // [rsp+68h] [rbp-98h]
  void *v75; // [rsp+70h] [rbp-90h]
  unsigned int *v76; // [rsp+78h] [rbp-88h] BYREF
  __int16 v77[2]; // [rsp+80h] [rbp-80h] BYREF
  int v78; // [rsp+84h] [rbp-7Ch]
  int v79; // [rsp+88h] [rbp-78h]
  void *Src; // [rsp+90h] [rbp-70h] BYREF
  _QWORD *v81; // [rsp+98h] [rbp-68h]
  PVOID Object; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v83[2]; // [rsp+A8h] [rbp-58h] BYREF
  int v84; // [rsp+B8h] [rbp-48h]
  __int64 v85; // [rsp+C0h] [rbp-40h] BYREF
  unsigned int *v86; // [rsp+C8h] [rbp-38h]
  _BYTE v87[64]; // [rsp+D0h] [rbp-30h] BYREF
  char v88[48]; // [rsp+110h] [rbp+10h] BYREF
  $5BC46E0569261879018906DEC3127961 v89; // [rsp+140h] [rbp+40h] BYREF
  _BYTE v90[4]; // [rsp+170h] [rbp+70h] BYREF
  _BYTE v91[8]; // [rsp+174h] [rbp+74h] BYREF
  int v92; // [rsp+17Ch] [rbp+7Ch]

  v3 = *(_DWORD *)(a2 + 80);
  v4 = 0LL;
  v85 = 0LL;
  Object = 0LL;
  v79 = 0;
  v74 = v3 & 0x20;
  v71 = 0;
  LOBYTE(v78) = 0;
  v72[0] = 0;
  v70 = v74 != 0 ? 2 : 0;
  memset(v87, 0, sizeof(v87));
  v83[0] = 0LL;
  v8 = 0LL;
  v83[1] = 0LL;
  v9 = 0LL;
  v84 = 0;
  LOBYTE(v10) = a3;
  v73 = 0LL;
  Src = 0LL;
  updated = EtwpValidateEnableNotification(a1, a2, v10, (unsigned int)v83, (__int64)&v76, (__int64)v87);
  if ( updated < 0 )
    goto LABEL_30;
  v12 = *(unsigned int *)(a2 + 116);
  v13 = *(_DWORD *)(a2 + 72);
  *(_DWORD *)&v72[3] = v13;
  if ( (unsigned int)(v12 - 1) <= 1 )
  {
    v53 = a2 + 120;
    if ( (_DWORD)v12 )
    {
      v54 = v12;
      v55 = &v91[-v53];
      v56 = &v90[-v53];
      v57 = (_DWORD *)(a2 + 128);
      do
      {
        v58 = a2 + *((_QWORD *)v57 - 1);
        *(_DWORD *)((char *)v57 + (_QWORD)v55) = v57[1];
        v59 = *v57;
        *(_QWORD *)((char *)v57 + (_QWORD)v56 - 8) = v58;
        *(_DWORD *)((char *)v57 + (_QWORD)v56) = v59;
        v57 += 4;
        --v54;
      }
      while ( v54 );
    }
  }
  else
  {
    LODWORD(v12) = 0;
    v92 = 0;
  }
  if ( !v74 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    updated = EtwpEnableDisableSpecialGuids(
                a1,
                (int)a2 + 40,
                *(unsigned __int16 *)(a2 + 78),
                v13,
                *(_DWORD *)(a2 + 88),
                (__int64)v90,
                v12,
                (__int64)&v72[1]);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    if ( LOBYTE(v72[1]) )
      goto LABEL_30;
    v8 = v73;
    v9 = Src;
  }
  if ( (*(_WORD *)(a2 + 78) & 0xFFFD) == 0 )
  {
    updated = -1073741790;
    goto LABEL_73;
  }
  CurrentThreadProcessId = PsGetCurrentThreadProcessId();
  v16 = BYTE2(v84);
  *(_DWORD *)(a2 + 36) = CurrentThreadProcessId;
  if ( v16 )
  {
    GuidEntryByGuid = EtwpFindGuidEntryByGuid(a1, &PrivateLoggerNotificationGuid, v70);
    v17 = a2 + 40;
  }
  else
  {
    v17 = a2 + 40;
    GuidEntryByGuid = EtwpFindGuidEntryByGuid(a1, (_DWORD *)(a2 + 40), v70);
  }
  v4 = (ULONG_PTR)GuidEntryByGuid;
  if ( !GuidEntryByGuid )
  {
    if ( v16 || v13 != 1 )
    {
      updated = -1073741163;
      goto LABEL_30;
    }
    v4 = EtwpAddGuidEntry(a1, v17, v70);
    if ( !v4 )
    {
      updated = -1073741801;
      goto LABEL_30;
    }
  }
  v19 = KeGetCurrentThread();
  --v19->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(v4 + 384, 0LL);
  v20 = 1;
  v21 = v76;
  *(_QWORD *)(v4 + 392) = KeGetCurrentThread();
  HIBYTE(v72[0]) = 1;
  if ( v21 && (v21[204] & 0x40) != 0 )
  {
    updated = -1073741162;
    goto LABEL_29;
  }
  if ( v74 )
  {
    updated = EtwpAcquireTokenAccessInformation(v76);
    if ( updated )
      goto LABEL_29;
  }
  *(_DWORD *)(a2 + 112) = v13;
  v22 = *(_WORD *)(a2 + 78);
  *(_WORD *)(a2 + 104) = v22;
  *(_BYTE *)(a2 + 106) = *(_BYTE *)(a2 + 76);
  *(_DWORD *)(a2 + 108) = *(_DWORD *)(a2 + 88);
  v23 = BYTE2(v84);
  v24 = *(_QWORD *)(a2 + 88);
  if ( BYTE2(v84) )
  {
    *(_BYTE *)(a2 + 107) = 1;
    *(_WORD *)(a2 + 104) = v22 & 0x7FFF;
  }
  if ( !v24 )
    *(_QWORD *)(a2 + 88) = -1LL;
  if ( !*(_BYTE *)(a2 + 76) )
    *(_BYTE *)(a2 + 76) = -1;
  if ( v13 != 2 && !v23 )
  {
    updated = EtwpUpdateGuidEnableInfo(v4, (__int64)v72);
    if ( updated < 0 )
    {
LABEL_29:
      *(_QWORD *)(v4 + 392) = 0LL;
      ExReleasePushLockEx(v4 + 384, 0LL);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      goto LABEL_30;
    }
    *(_OWORD *)(a2 + 72) = *(_OWORD *)(v4 + 80);
    *(_OWORD *)(a2 + 88) = *(_OWORD *)(v4 + 96);
    if ( (*(_DWORD *)(a2 + 80) & 4) != 0 )
    {
      v61 = v76;
      v62 = (signed __int32 *)(v76 + 204);
      _m_prefetchw(v76 + 204);
      v63 = *v62;
      v24 = 0x2000LL;
      do
      {
        v64 = v63 | 0x2000u;
        v65 = v63;
        v63 = _InterlockedCompareExchange((volatile signed __int32 *)v61 + 204, v64, v63);
      }
      while ( v65 != v63 );
      if ( (v63 & 0x2000) == 0 )
        EtwpReferenceStackLookasideList(v64, v61, 0x2000LL);
    }
  }
  if ( *(_QWORD *)(v4 + 40) == v4 + 40 )
  {
    updated = 0;
    goto LABEL_29;
  }
  if ( *(_BYTE *)(a2 + 12) )
  {
    updated = EtwpCreateUmReplyObject(v4, (__int64)&v85, (volatile signed __int16 **)&Object);
    if ( updated < 0 )
      goto LABEL_29;
    *(_QWORD *)(a2 + 24) = Object;
  }
  LOBYTE(v24) = -1;
  v26 = EtwpBuildNotificationPacket(v4, a2, v24, &Src);
  v9 = Src;
  if ( v26 < 0 )
  {
    updated = -1073741801;
    goto LABEL_76;
  }
  v27 = *((unsigned int *)Src + 1);
  v86 = (unsigned int *)((char *)Src + 4);
  v28 = EtwpAllocDataBlock(v27, Src);
  v8 = v73;
  if ( v28 < 0 )
    goto LABEL_105;
  v29 = v78;
  v30 = (_DWORD *)(v4 + 112);
  v31 = v73;
  for ( i = 0; i < 8u; ++i )
  {
    if ( *v30 )
      v29 = (unsigned __int8)v29 | (1 << i);
    v30 += 8;
  }
  v78 = v29;
  v33 = *(_QWORD **)(v4 + 40);
  if ( v33 == (_QWORD *)(v4 + 40) )
  {
LABEL_68:
    updated = 0;
    v48 = v76;
    *(_DWORD *)(a2 + 20) = v79;
    *(_QWORD *)(a2 + 24) = v85;
    if ( v48 && *(_DWORD *)&v72[3] <= 1u )
    {
      v49 = (const EVENT_DESCRIPTOR *)&ETW_EVENT_PROVIDER_ENABLED;
      if ( *(_DWORD *)&v72[3] != 1 )
        v49 = &ETW_EVENT_PROVIDER_DISABLED;
      if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, v49) )
      {
        v69 = a2 + 40;
        if ( *(_DWORD *)&v72[3] == 1 )
          EtwpEventWriteProviderEnabled(
            v69,
            (_DWORD)v49,
            v50,
            (_DWORD)v48 + 136,
            a2 + 40,
            *(_QWORD *)(a2 + 88),
            *(_QWORD *)(a2 + 96),
            *(_DWORD *)(a2 + 80),
            *(_BYTE *)(a2 + 76));
        else
          EtwpEventWriteTemplateSessAndProv(v69, v49, v50, 2LL, v76 + 34, a2 + 40);
      }
    }
    goto LABEL_73;
  }
  while ( 1 )
  {
    if ( v74 )
    {
      v34 = KeGetCurrentThread();
      v35 = (__int64)(v33 - 2);
      --v34->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(v33[2] + 384LL, 0LL);
      v8 = v73;
      v9 = Src;
      v71 = 1;
      *(_QWORD *)(v33[2] + 392LL) = KeGetCurrentThread();
    }
    else
    {
      v35 = (__int64)v33;
    }
    v33 = (_QWORD *)*v33;
    v81 = v33;
    if ( (unsigned __int8)EtwpIsRegEntryAllowed(v35, (_DWORD)v76, (unsigned int)v83, a2, (__int64)v87, v70) )
    {
      v75 = v9;
      if ( !BYTE2(v84) )
      {
        v38 = *(_DWORD *)&v72[3];
        if ( *(_DWORD *)&v72[3] != 2 )
        {
          if ( v74 )
            v39 = *(_BYTE *)(v35 + 101);
          else
            v39 = *(_BYTE *)(v35 + 100);
          LOBYTE(v37) = v70;
          LOBYTE(v36) = v72[0];
          v40 = *(_DWORD *)&v72[3];
          EtwpUpdateRegEntryEnableMask(v35, v36, v37, *(unsigned int *)&v72[3]);
          LOBYTE(v41) = v78;
          LOBYTE(v42) = v72[0];
          LOBYTE(v43) = v39;
          v44 = EtwpCalculateUpdateNotification(v35, v42, v43, v41, v70, v40, (__int64)&v73);
          v8 = v73;
          if ( !v44 )
          {
            v33 = v81;
            if ( !v73 )
            {
              v8 = v31;
              v73 = v31;
            }
            goto LABEL_65;
          }
          if ( v73 )
          {
            v75 = v73;
            if ( v73 != v31 )
            {
              EtwpUnreferenceDataBlock(v31);
              v31 = v8;
            }
          }
          else
          {
            v8 = v31;
            v73 = v31;
          }
          v38 = *(_DWORD *)&v72[3];
        }
        if ( (unsigned int)(v38 - 1) > 1 )
          goto LABEL_61;
        v45 = *(_WORD *)(v35 + 98);
        if ( (v45 & 8) == 0 && (v45 & 0x20) == 0 )
          goto LABEL_61;
        if ( (v45 & 1) == 0 )
        {
          if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)(v35 + 80) + 760LL)) )
          {
            ProcessServerSilo = PsGetProcessServerSilo(*(_QWORD *)(v35 + 80));
            v52 = PsAttachSiloToCurrentThread(ProcessServerSilo);
            KiStackAttachProcess(*(_KPROCESS **)(v35 + 80), 0, (__int64)&v89);
            EtwpProviderArrivalCallback((__int64)v76, 1, v35);
            KiUnstackDetachProcess(&v89, 0LL);
            PsDetachSiloFromCurrentThread(v52);
            ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)(v35 + 80) + 760LL));
          }
          goto LABEL_61;
        }
        v60 = 0LL;
        if ( (v45 & 0x10) != 0 )
        {
          SessionById = MmGetSessionById(*(_DWORD *)(v35 + 56));
          v60 = (void *)SessionById;
          if ( !SessionById )
            goto LABEL_61;
          if ( (int)MmAttachSession(SessionById) < 0 )
            goto LABEL_110;
        }
        EtwpProviderArrivalCallback((__int64)v76, 0, v35);
        if ( v60 )
        {
          MmDetachSession((__int64)v60, (__int64)v88);
LABEL_110:
          ObfDereferenceObject(v60);
        }
LABEL_61:
        v46 = v75;
        goto LABEL_62;
      }
      ProcessId = (unsigned int)PsGetProcessId(*(PEPROCESS *)(v35 + 80));
      if ( !(unsigned int)EtwpDemuxPrivateTraceHandle(ProcessId, *(_WORD *)(a2 + 78) & 0x7FFF, v77) )
        break;
    }
LABEL_65:
    if ( v71 )
    {
      *(_QWORD *)(*(_QWORD *)(v35 + 32) + 392LL) = 0LL;
      ExReleasePushLockEx(*(_QWORD *)(v35 + 32) + 384LL, 0LL);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      v8 = v73;
      v9 = Src;
      v71 = 0;
    }
    if ( v33 == (_QWORD *)(v4 + 40) )
      goto LABEL_68;
  }
  v68 = v77[0];
  if ( v77[0] == v8[39] )
    goto LABEL_115;
  if ( (int)EtwpAllocDataBlock(*v86, v9) >= 0 )
  {
    EtwpUnreferenceDataBlock(v31);
    v8 = v73;
    v31 = v73;
    v73[39] = v68 | 0x8000;
    v31[52] = v68;
LABEL_115:
    v46 = v8;
LABEL_62:
    v47 = EtwpSendDataBlock(v35, v46);
    v33 = v81;
    if ( v47 >= 0 && (*(_BYTE *)(v35 + 98) & 2) != 0 )
      ++v79;
    goto LABEL_65;
  }
  v8 = v31;
  v73 = v31;
  if ( v71 )
  {
    *(_QWORD *)(*(_QWORD *)(v35 + 32) + 392LL) = 0LL;
    ExReleasePushLockEx(*(_QWORD *)(v35 + 32) + 384LL, 0LL);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v8 = v73;
    v9 = Src;
  }
LABEL_105:
  updated = -1073741801;
LABEL_73:
  if ( v8 )
    EtwpUnreferenceDataBlock(v8);
  v20 = HIBYTE(v72[0]);
LABEL_76:
  if ( v9 )
    EtwpUnreferenceDataBlock(v9);
  if ( v20 == 1 )
    goto LABEL_29;
LABEL_30:
  if ( v76 )
    EtwpReleaseLoggerContext(v76, 0);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v4 )
    EtwpUnreferenceGuidEntry((_QWORD *)v4);
  EtwpFreeFilterInfo(v87);
  return (unsigned int)updated;
}
