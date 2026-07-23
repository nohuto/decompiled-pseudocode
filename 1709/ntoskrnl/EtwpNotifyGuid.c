/*
 * XREFs of EtwpNotifyGuid @ 0x1404EDE90
 * Callers:
 *     NtTraceControl @ 0x14049AB40 (NtTraceControl.c)
 *     EtwpSendSessionNotification @ 0x1404EDDD4 (EtwpSendSessionNotification.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     PsGetCurrentThreadProcessId @ 0x1400851E0 (PsGetCurrentThreadProcessId.c)
 *     PsGetProcessId @ 0x1400BAF50 (PsGetProcessId.c)
 *     memset @ 0x140192F40 (memset.c)
 *     EtwpApplyTransientFilters @ 0x14045213C (EtwpApplyTransientFilters.c)
 *     EtwpAccessCheck @ 0x140490118 (EtwpAccessCheck.c)
 *     EtwpUnreferenceGuidEntry @ 0x140491D2C (EtwpUnreferenceGuidEntry.c)
 *     EtwpFindGuidEntryByGuid @ 0x140491E20 (EtwpFindGuidEntryByGuid.c)
 *     EtwpFreeFilterInfo @ 0x1404EE99C (EtwpFreeFilterInfo.c)
 *     EtwpCheckGuidAccess @ 0x1404EF040 (EtwpCheckGuidAccess.c)
 *     EtwpSendDataBlock @ 0x1404EF6A0 (EtwpSendDataBlock.c)
 *     EtwpAllocDataBlock @ 0x1404EFAC4 (EtwpAllocDataBlock.c)
 *     EtwpUnreferenceDataBlock @ 0x1404EFD38 (EtwpUnreferenceDataBlock.c)
 *     EtwpCreateUmReplyObject @ 0x1407441E8 (EtwpCreateUmReplyObject.c)
 *     EtwpDemuxPrivateTraceHandle @ 0x14074F16C (EtwpDemuxPrivateTraceHandle.c)
 *     EtwpValidateTraceControlFilterDescriptors @ 0x14075141C (EtwpValidateTraceControlFilterDescriptors.c)
 *     EtwpCheckCurrentUserProcessAccess @ 0x140751B88 (EtwpCheckCurrentUserProcessAccess.c)
 */

__int64 __fastcall EtwpNotifyGuid(__int64 a1, __int64 a2, char a3)
{
  int v3; // esi
  __int64 v7; // r8
  int UmReplyObject; // ebx
  unsigned __int64 v10; // rcx
  unsigned int v11; // eax
  ACCESS_MASK v12; // ebx
  int v13; // eax
  __int64 *GuidEntryByGuid; // rax
  __int64 *v15; // rsi
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v17; // r13
  int v18; // r14d
  __int64 v19; // rbx
  __int16 v20; // ax
  unsigned int ProcessId; // eax
  int v22; // eax
  __int64 v23; // rax
  bool v24; // zf
  int v25; // [rsp+20h] [rbp-69h]
  bool v26; // [rsp+24h] [rbp-65h]
  __int64 v27; // [rsp+40h] [rbp-49h]
  __int64 v28; // [rsp+50h] [rbp-39h] BYREF
  __int64 v29[16]; // [rsp+60h] [rbp-29h] BYREF
  __int16 v30; // [rsp+F8h] [rbp+6Fh] BYREF
  int v31; // [rsp+108h] [rbp+7Fh]

  v3 = 0;
  v28 = 0LL;
  v31 = 0;
  v26 = 0;
  v27 = 0LL;
  memset(v29, 0, 0x50uLL);
  v7 = *(unsigned int *)(a2 + 4);
  if ( (unsigned int)v7 > 0x10000 )
    return 3221225990LL;
  if ( *(_DWORD *)a2 != 11 )
  {
LABEL_11:
    *(_DWORD *)(a2 + 36) = PsGetCurrentThreadProcessId();
    if ( *(_DWORD *)a2 == 4 )
    {
      v12 = 128;
      v26 = (int)EtwpCheckGuidAccess(&PrivateLoggerSecurityGuid, 128LL, 0LL) < 0;
      *(GUID *)(a2 + 40) = PrivateLoggerNotificationGuid;
    }
    else
    {
      v12 = 4;
      v3 = 1;
    }
    v13 = *(_DWORD *)(a2 + 32);
    *(_DWORD *)(a2 + 20) = 0;
    v25 = v13;
    GuidEntryByGuid = EtwpFindGuidEntryByGuid(a1, (_DWORD *)(a2 + 40), v3);
    v15 = GuidEntryByGuid;
    if ( !GuidEntryByGuid )
    {
      UmReplyObject = -1073741163;
      goto LABEL_49;
    }
    if ( a3 )
    {
      if ( *(_DWORD *)a2 != 4 )
      {
        UmReplyObject = EtwpAccessCheck((PSECURITY_DESCRIPTOR)GuidEntryByGuid[7], v12, 0LL);
        if ( UmReplyObject < 0 )
        {
LABEL_48:
          EtwpUnreferenceGuidEntry(v15);
          goto LABEL_49;
        }
      }
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(v15 + 48), 0LL);
    v17 = v15 + 5;
    v15[49] = (__int64)KeGetCurrentThread();
    if ( (__int64 *)*v17 == v17 )
    {
      UmReplyObject = -1073741162;
LABEL_47:
      v15[49] = 0LL;
      ExReleasePushLockEx((ULONG_PTR)(v15 + 48), 0LL);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      goto LABEL_48;
    }
    if ( *(_BYTE *)(a2 + 12) )
    {
      UmReplyObject = EtwpCreateUmReplyObject((ULONG_PTR)v15, (__int64)&v28);
      if ( UmReplyObject < 0 )
        goto LABEL_47;
      *(_QWORD *)(a2 + 24) = 0LL;
    }
    v18 = EtwpAllocDataBlock(*(unsigned int *)(a2 + 4), (void *)a2);
    if ( v18 < 0 )
    {
LABEL_25:
      UmReplyObject = -1073741801;
      goto LABEL_47;
    }
    v19 = *v17;
    if ( (__int64 *)*v17 == v17 )
    {
LABEL_44:
      UmReplyObject = 0;
      v23 = v28;
      v24 = v31 == 0;
      *(_DWORD *)(a2 + 20) = v31;
      if ( v24 )
        UmReplyObject = v18;
      *(_QWORD *)(a2 + 24) = v23;
      goto LABEL_47;
    }
    while ( 1 )
    {
      v20 = *(_WORD *)(v19 + 98);
      if ( (v20 & 2) == 0 || (v20 & 0x40) != 0 || v27 && !EtwpApplyTransientFilters(v19, v27, v29[9], v29) )
        goto LABEL_43;
      if ( v25 && (unsigned int)PsGetProcessId(*(PEPROCESS *)(v19 + 80)) != v25 )
        goto LABEL_43;
      if ( v26 )
      {
        v18 = EtwpCheckCurrentUserProcessAccess(*(_QWORD *)(v19 + 80));
        if ( v18 < 0 )
          goto LABEL_43;
      }
      if ( *(_DWORD *)a2 != 4 || *(_DWORD *)(a2 + 76) == 1 )
        goto LABEL_40;
      ProcessId = (unsigned int)PsGetProcessId(*(PEPROCESS *)(v19 + 80));
      v18 = EtwpDemuxPrivateTraceHandle(ProcessId, *(_WORD *)(a2 + 80) & 0x7FFF, &v30);
      if ( v18 >= 0 )
        break;
LABEL_43:
      v19 = *(_QWORD *)v19;
      if ( (__int64 *)v19 == v17 )
        goto LABEL_44;
    }
    v18 = EtwpAllocDataBlock(*(unsigned int *)(a2 + 4), (void *)a2);
    if ( v18 < 0 )
      goto LABEL_25;
    MEMORY[0x50] = v30;
LABEL_40:
    v22 = EtwpSendDataBlock(v19, 0LL);
    if ( v22 < 0 )
      v18 = v22;
    else
      ++v31;
    goto LABEL_43;
  }
  if ( (unsigned int)v7 >= 0x78 )
  {
    v10 = (*(_DWORD *)(a2 + 72) + 7) & 0xFFFFFFF8;
    if ( v10 < v7 - 76 )
    {
      v11 = *(_DWORD *)(v10 + a2 + 72);
      if ( v11 )
      {
        v27 = v10 + a2 + 76;
        if ( (unsigned int)EtwpValidateTraceControlFilterDescriptors(v11, v27, (unsigned int)(v7 - (v10 + 76)), v29) )
        {
          UmReplyObject = -1073741811;
          goto LABEL_49;
        }
      }
      *(_DWORD *)a2 = 4;
      goto LABEL_11;
    }
  }
  UmReplyObject = -2147483643;
LABEL_49:
  EtwpFreeFilterInfo(v29);
  return (unsigned int)UmReplyObject;
}
