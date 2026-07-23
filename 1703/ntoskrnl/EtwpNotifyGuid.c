/*
 * XREFs of EtwpNotifyGuid @ 0x140551CB4
 * Callers:
 *     NtTraceControl @ 0x14047FD70 (NtTraceControl.c)
 *     EtwpSendSessionNotification @ 0x140551BF8 (EtwpSendSessionNotification.c)
 * Callees:
 *     PsGetCurrentThreadProcessId @ 0x14003C360 (PsGetCurrentThreadProcessId.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     PsGetProcessId @ 0x140100A50 (PsGetProcessId.c)
 *     memset @ 0x140192D80 (memset.c)
 *     EtwpCreateUmReplyObject @ 0x14043FEB4 (EtwpCreateUmReplyObject.c)
 *     EtwpApplyTransientFilters @ 0x14045E770 (EtwpApplyTransientFilters.c)
 *     EtwpUnreferenceGuidEntry @ 0x140480BE4 (EtwpUnreferenceGuidEntry.c)
 *     EtwpFindGuidEntryByGuid @ 0x140480CD0 (EtwpFindGuidEntryByGuid.c)
 *     EtwpAccessCheck @ 0x1404F2AB8 (EtwpAccessCheck.c)
 *     EtwpSendDataBlock @ 0x1405535DC (EtwpSendDataBlock.c)
 *     EtwpUnreferenceDataBlock @ 0x140553DE0 (EtwpUnreferenceDataBlock.c)
 *     EtwpFreeFilterInfo @ 0x140553DFC (EtwpFreeFilterInfo.c)
 *     EtwpAllocDataBlock @ 0x1405541BC (EtwpAllocDataBlock.c)
 *     EtwpCheckGuidAccess @ 0x140554B20 (EtwpCheckGuidAccess.c)
 *     EtwpDemuxPrivateTraceHandle @ 0x14071161C (EtwpDemuxPrivateTraceHandle.c)
 *     EtwpValidateTraceControlFilterDescriptors @ 0x140713054 (EtwpValidateTraceControlFilterDescriptors.c)
 *     EtwpCheckCurrentUserProcessAccess @ 0x140713190 (EtwpCheckCurrentUserProcessAccess.c)
 */

__int64 __fastcall EtwpNotifyGuid(__int64 a1, __int64 a2, char a3)
{
  int v3; // esi
  int v7; // r13d
  __int64 v8; // r8
  int UmReplyObject; // ebx
  unsigned __int64 v11; // rcx
  unsigned int v12; // eax
  ACCESS_MASK v13; // ebx
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  _QWORD *GuidEntryByGuid; // rax
  _QWORD *v18; // rsi
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v20; // r12
  int v21; // r14d
  __int64 v22; // rbx
  __int16 v23; // cx
  unsigned int ProcessId; // eax
  __int64 v25; // rdx
  int v26; // eax
  __int64 v27; // rax
  int v28; // [rsp+20h] [rbp-59h]
  int v29; // [rsp+24h] [rbp-55h]
  PVOID Object; // [rsp+38h] [rbp-41h] BYREF
  __int64 v31; // [rsp+40h] [rbp-39h]
  __int64 v32; // [rsp+48h] [rbp-31h]
  __int64 v33; // [rsp+50h] [rbp-29h] BYREF
  __int64 v34[14]; // [rsp+60h] [rbp-19h] BYREF
  __int16 v35; // [rsp+E8h] [rbp+6Fh] BYREF
  int v36; // [rsp+F8h] [rbp+7Fh]

  v3 = 0;
  v33 = 0LL;
  Object = 0LL;
  v28 = 0;
  v7 = 0;
  LOBYTE(v36) = 0;
  v31 = 0LL;
  memset(v34, 0, 0x40uLL);
  v8 = *(unsigned int *)(a2 + 4);
  if ( (unsigned int)v8 > 0x10000 )
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
        goto LABEL_55;
      }
      v13 = 128;
      v14 = EtwpCheckGuidAccess(&PrivateLoggerSecurityGuid, 128LL, 0LL);
      v15 = (unsigned __int8)v36;
      if ( v14 < 0 )
        v15 = 1;
      v36 = v15;
      *(GUID *)(a2 + 40) = PrivateLoggerNotificationGuid;
    }
    else
    {
      v13 = 4;
      v3 = 1;
    }
    v16 = *(_DWORD *)(a2 + 32);
    *(_DWORD *)(a2 + 20) = 0;
    v29 = v16;
    GuidEntryByGuid = EtwpFindGuidEntryByGuid(a1, (_DWORD *)(a2 + 40), v3);
    v18 = GuidEntryByGuid;
    if ( !GuidEntryByGuid )
    {
      UmReplyObject = -1073741163;
      goto LABEL_55;
    }
    if ( a3 )
    {
      if ( *(_DWORD *)a2 != 4 )
      {
        UmReplyObject = EtwpAccessCheck((PSECURITY_DESCRIPTOR)GuidEntryByGuid[7], v13, 0LL);
        if ( UmReplyObject < 0 )
        {
LABEL_54:
          EtwpUnreferenceGuidEntry(v18);
          goto LABEL_55;
        }
      }
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(v18 + 48), 0LL);
    v20 = v18 + 5;
    v18[49] = KeGetCurrentThread();
    if ( (__int64 *)*v20 == v20 )
    {
      UmReplyObject = -1073741162;
      goto LABEL_52;
    }
    if ( *(_BYTE *)(a2 + 12) )
    {
      UmReplyObject = EtwpCreateUmReplyObject((ULONG_PTR)v18, (__int64)&v33, (volatile signed __int16 **)&Object);
      if ( UmReplyObject < 0 )
        goto LABEL_52;
      *(_QWORD *)(a2 + 24) = Object;
    }
    v21 = EtwpAllocDataBlock(*(unsigned int *)(a2 + 4), (void *)a2);
    if ( v21 < 0 )
    {
LABEL_29:
      UmReplyObject = -1073741801;
LABEL_52:
      v18[49] = 0LL;
      ExReleasePushLockEx((ULONG_PTR)(v18 + 48), 0LL);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      if ( Object )
        ObfDereferenceObject(Object);
      goto LABEL_54;
    }
    v22 = *v20;
    if ( (__int64 *)*v20 == v20 )
    {
LABEL_50:
      v27 = v33;
      UmReplyObject = 0;
      *(_DWORD *)(a2 + 20) = v7;
      *(_QWORD *)(a2 + 24) = v27;
      if ( !v7 )
        UmReplyObject = v21;
      goto LABEL_52;
    }
    while ( 1 )
    {
      v23 = *(_WORD *)(v22 + 98);
      v32 = 0LL;
      if ( (v23 & 2) == 0 || (v23 & 0x40) != 0 || v31 && !EtwpApplyTransientFilters(v22, v31, v34[7], v34) )
        goto LABEL_48;
      if ( v29 && (unsigned int)PsGetProcessId(*(PEPROCESS *)(v22 + 80)) != v29 )
        goto LABEL_48;
      if ( (_BYTE)v36 == 1 )
      {
        v21 = EtwpCheckCurrentUserProcessAccess(*(_QWORD *)(v22 + 80));
        if ( v21 < 0 )
          goto LABEL_48;
      }
      if ( *(_DWORD *)a2 != 4 || *(_DWORD *)(a2 + 76) == 1 )
        break;
      ProcessId = (unsigned int)PsGetProcessId(*(PEPROCESS *)(v22 + 80));
      v21 = EtwpDemuxPrivateTraceHandle(ProcessId, *(unsigned __int16 *)(a2 + 80), &v35);
      if ( v21 >= 0 )
      {
        v21 = EtwpAllocDataBlock(*(unsigned int *)(a2 + 4), (void *)a2);
        if ( v21 < 0 )
          goto LABEL_29;
        v25 = 0LL;
        MEMORY[0x50] = v35;
        goto LABEL_45;
      }
LABEL_48:
      v22 = *(_QWORD *)v22;
      if ( (__int64 *)v22 == v20 )
      {
        v7 = v28;
        goto LABEL_50;
      }
    }
    v25 = v32;
LABEL_45:
    v26 = EtwpSendDataBlock(v22, v25);
    if ( v26 < 0 )
      v21 = v26;
    else
      ++v28;
    goto LABEL_48;
  }
  if ( (unsigned int)v8 >= 0x78 )
  {
    v11 = (*(_DWORD *)(a2 + 72) + 7) & 0xFFFFFFF8;
    if ( v11 < v8 - 76 )
    {
      v12 = *(_DWORD *)(v11 + a2 + 72);
      if ( v12 )
      {
        v31 = v11 + a2 + 76;
        if ( (unsigned int)EtwpValidateTraceControlFilterDescriptors(v12, v31, (unsigned int)(v8 - (v11 + 76)), v34) )
        {
          UmReplyObject = -1073741811;
          goto LABEL_55;
        }
      }
      *(_DWORD *)a2 = 4;
      goto LABEL_11;
    }
  }
  UmReplyObject = -2147483643;
LABEL_55:
  EtwpFreeFilterInfo(v34);
  return (unsigned int)UmReplyObject;
}
