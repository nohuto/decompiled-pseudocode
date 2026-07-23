/*
 * XREFs of EtwpNotifyGuid @ 0x14058B468
 * Callers:
 *     EtwpSendSessionNotification @ 0x14058A040 (EtwpSendSessionNotification.c)
 *     NtTraceControl @ 0x14058F8F0 (NtTraceControl.c)
 * Callees:
 *     PsGetProcessId @ 0x14006ECF0 (PsGetProcessId.c)
 *     PsGetCurrentThreadProcessId @ 0x1400A1C70 (PsGetCurrentThreadProcessId.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     EtwpApplyTransientFilters @ 0x140584534 (EtwpApplyTransientFilters.c)
 *     EtwpAllocDataBlock @ 0x14058B9A8 (EtwpAllocDataBlock.c)
 *     EtwpFreeFilterInfo @ 0x14058D9F0 (EtwpFreeFilterInfo.c)
 *     EtwpCheckGuidAccess @ 0x14058DC64 (EtwpCheckGuidAccess.c)
 *     EtwpUnreferenceDataBlock @ 0x14058DCB4 (EtwpUnreferenceDataBlock.c)
 *     EtwpSendDataBlock @ 0x14058DED0 (EtwpSendDataBlock.c)
 *     EtwpAccessCheck @ 0x14058F44C (EtwpAccessCheck.c)
 *     EtwpUnreferenceGuidEntry @ 0x1405906D4 (EtwpUnreferenceGuidEntry.c)
 *     EtwpFindGuidEntryByGuid @ 0x1405907D0 (EtwpFindGuidEntryByGuid.c)
 *     EtwpCreateUmReplyObject @ 0x1405C3160 (EtwpCreateUmReplyObject.c)
 *     EtwpDemuxPrivateTraceHandle @ 0x1407AFF8C (EtwpDemuxPrivateTraceHandle.c)
 *     EtwpValidateTraceControlFilterDescriptors @ 0x1407B2160 (EtwpValidateTraceControlFilterDescriptors.c)
 *     EtwpCheckCurrentUserProcessAccess @ 0x1407B28DC (EtwpCheckCurrentUserProcessAccess.c)
 */

__int64 __fastcall EtwpNotifyGuid(__int64 a1, __int64 a2, char a3)
{
  unsigned int v3; // esi
  __int64 v7; // r8
  int UmReplyObject; // ebx
  unsigned __int64 v10; // rcx
  unsigned int v11; // eax
  ACCESS_MASK v12; // ebx
  int v13; // eax
  __int64 GuidEntryByGuid; // rax
  __int64 *v15; // rsi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 *v19; // r13
  int v20; // r14d
  __int64 v21; // rbx
  __int16 v22; // ax
  unsigned int ProcessId; // eax
  int v24; // eax
  __int64 v25; // rax
  bool v26; // zf
  int v27; // [rsp+20h] [rbp-69h]
  bool v28; // [rsp+24h] [rbp-65h]
  __int64 v29; // [rsp+40h] [rbp-49h]
  __int64 v30; // [rsp+50h] [rbp-39h] BYREF
  __int64 v31[16]; // [rsp+60h] [rbp-29h] BYREF
  __int16 v32; // [rsp+F8h] [rbp+6Fh] BYREF
  int v33; // [rsp+108h] [rbp+7Fh]

  v3 = 0;
  v30 = 0LL;
  v33 = 0;
  v28 = 0;
  v29 = 0LL;
  memset(v31, 0, 0x50uLL);
  v7 = *(unsigned int *)(a2 + 4);
  if ( (unsigned int)v7 > 0x10000 )
    return 3221225990LL;
  if ( *(_DWORD *)a2 != 11 )
  {
LABEL_11:
    *(_DWORD *)(a2 + 36) = PsGetCurrentThreadProcessId();
    if ( *(_DWORD *)a2 == 4 )
    {
      if ( *(_DWORD *)(a2 + 4) < 0xF8u )
      {
        UmReplyObject = -1073741789;
        goto LABEL_51;
      }
      v12 = 128;
      v28 = (int)EtwpCheckGuidAccess(&PrivateLoggerSecurityGuid, 128LL, 0LL) < 0;
      *(GUID *)(a2 + 40) = PrivateLoggerNotificationGuid;
    }
    else
    {
      v12 = 4;
      v3 = 1;
    }
    v13 = *(_DWORD *)(a2 + 32);
    *(_DWORD *)(a2 + 20) = 0;
    v27 = v13;
    GuidEntryByGuid = EtwpFindGuidEntryByGuid(a1, a2 + 40, v3);
    v15 = (__int64 *)GuidEntryByGuid;
    if ( !GuidEntryByGuid )
    {
      UmReplyObject = -1073741163;
      goto LABEL_51;
    }
    if ( a3 )
    {
      if ( *(_DWORD *)a2 != 4 )
      {
        UmReplyObject = EtwpAccessCheck(*(PSECURITY_DESCRIPTOR *)(GuidEntryByGuid + 56), v12, 0LL);
        if ( UmReplyObject < 0 )
        {
LABEL_50:
          EtwpUnreferenceGuidEntry(v15);
          goto LABEL_51;
        }
      }
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(v15 + 48), 0LL);
    v19 = v15 + 5;
    v15[49] = (__int64)KeGetCurrentThread();
    if ( (__int64 *)*v19 == v19 )
    {
      UmReplyObject = -1073741162;
LABEL_49:
      v15[49] = 0LL;
      ExReleasePushLockEx((ULONG_PTR)(v15 + 48), 0LL, v17, v18);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      goto LABEL_50;
    }
    if ( *(_BYTE *)(a2 + 12) )
    {
      UmReplyObject = EtwpCreateUmReplyObject((ULONG_PTR)v15, (__int64)&v30);
      if ( UmReplyObject < 0 )
        goto LABEL_49;
      *(_QWORD *)(a2 + 24) = 0LL;
    }
    v20 = EtwpAllocDataBlock(*(unsigned int *)(a2 + 4), (void *)a2);
    if ( v20 < 0 )
    {
LABEL_27:
      UmReplyObject = -1073741801;
      goto LABEL_49;
    }
    v21 = *v19;
    if ( (__int64 *)*v19 == v19 )
    {
LABEL_46:
      UmReplyObject = 0;
      v25 = v30;
      v26 = v33 == 0;
      *(_DWORD *)(a2 + 20) = v33;
      if ( v26 )
        UmReplyObject = v20;
      *(_QWORD *)(a2 + 24) = v25;
      goto LABEL_49;
    }
    while ( 1 )
    {
      v22 = *(_WORD *)(v21 + 98);
      if ( (v22 & 2) == 0 || (v22 & 0x40) != 0 || v29 && !EtwpApplyTransientFilters(v21, v29, v31[9], v31) )
        goto LABEL_45;
      if ( v27 && (unsigned int)PsGetProcessId(*(PEPROCESS *)(v21 + 80)) != v27 )
        goto LABEL_45;
      if ( v28 )
      {
        v20 = EtwpCheckCurrentUserProcessAccess(*(_QWORD *)(v21 + 80));
        if ( v20 < 0 )
          goto LABEL_45;
      }
      if ( *(_DWORD *)a2 != 4 || *(_DWORD *)(a2 + 76) == 1 )
        goto LABEL_42;
      ProcessId = (unsigned int)PsGetProcessId(*(PEPROCESS *)(v21 + 80));
      v20 = EtwpDemuxPrivateTraceHandle(ProcessId, *(_WORD *)(a2 + 80) & 0x7FFF, &v32);
      if ( v20 >= 0 )
        break;
LABEL_45:
      v21 = *(_QWORD *)v21;
      if ( (__int64 *)v21 == v19 )
        goto LABEL_46;
    }
    v20 = EtwpAllocDataBlock(*(unsigned int *)(a2 + 4), (void *)a2);
    if ( v20 < 0 )
      goto LABEL_27;
    MEMORY[0x50] = v32;
LABEL_42:
    v24 = EtwpSendDataBlock(v21, 0LL);
    if ( v24 < 0 )
      v20 = v24;
    else
      ++v33;
    goto LABEL_45;
  }
  if ( (unsigned int)v7 >= 0x78 )
  {
    v10 = (*(_DWORD *)(a2 + 72) + 7) & 0xFFFFFFF8;
    if ( v10 < v7 - 76 )
    {
      v11 = *(_DWORD *)(v10 + a2 + 72);
      if ( v11 )
      {
        v29 = v10 + a2 + 76;
        if ( (unsigned int)EtwpValidateTraceControlFilterDescriptors(v11, v29, (unsigned int)(v7 - (v10 + 76)), v31) )
        {
          UmReplyObject = -1073741811;
          goto LABEL_51;
        }
      }
      *(_DWORD *)a2 = 4;
      goto LABEL_11;
    }
  }
  UmReplyObject = -2147483643;
LABEL_51:
  EtwpFreeFilterInfo(v31);
  return (unsigned int)UmReplyObject;
}
