/*
 * XREFs of AlpcpDispatchNewMessage @ 0x140524DE0
 * Callers:
 *     AlpcpDispatchMessage @ 0x140475DF8 (AlpcpDispatchMessage.c)
 *     AlpcpSendMessage @ 0x140524190 (AlpcpSendMessage.c)
 * Callees:
 *     ObReferenceObjectSafe @ 0x14000CFD0 (ObReferenceObjectSafe.c)
 *     PsGetProcessJob @ 0x14002C5E0 (PsGetProcessJob.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1400EEA40 (ObfReferenceObject.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 *     PsGetJobEffectiveFreezeCount @ 0x140238DB4 (PsGetJobEffectiveFreezeCount.c)
 *     AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo @ 0x140470C5C (AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo.c)
 *     AlpcpUnlockMessage @ 0x14047CEA8 (AlpcpUnlockMessage.c)
 *     AlpcpCompleteDispatchMessage @ 0x140525120 (AlpcpCompleteDispatchMessage.c)
 */

__int64 __fastcall AlpcpDispatchNewMessage(__int64 *a1)
{
  __int64 v1; // rbp
  ULONG_PTR v2; // rbx
  int v4; // r12d
  __int64 *v5; // r15
  struct _KTHREAD *CurrentThread; // r13
  int v7; // edi
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int16 v10; // cx
  __int16 v11; // cx
  int v12; // edx
  __int64 v14; // rcx
  __int64 ProcessJob; // rax

  v1 = *a1;
  v2 = a1[1];
  v4 = *((_DWORD *)a1 + 12);
  a1[4] = 0LL;
  a1[3] = 0LL;
  a1[5] = 0LL;
  v5 = *(__int64 **)(v1 + 16);
  CurrentThread = KeGetCurrentThread();
  v7 = (*(_DWORD *)(v1 + 416) >> 1) & 3;
  ExAcquirePushLockSharedEx((ULONG_PTR)(v5 - 2), 0LL);
  if ( v7 == 2 )
  {
    v8 = *v5;
    v9 = v5[1];
  }
  else if ( v7 == 1 )
  {
    v8 = *v5;
    v9 = *v5;
  }
  else
  {
    v8 = v5[2];
    v9 = v8;
  }
  if ( v8 && !ObReferenceObjectSafe(v8) )
    v8 = 0LL;
  if ( v9 && !ObReferenceObjectSafe(v9) )
    v9 = 0LL;
  if ( !v8 || !v9 )
  {
    if ( _InterlockedCompareExchange64(v5 - 2, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v5 - 2);
    KeAbPostRelease((ULONG_PTR)(v5 - 2));
    if ( v8 )
      ObfDereferenceObject((PVOID)v8);
    if ( v9 )
      ObfDereferenceObject((PVOID)v9);
    goto LABEL_37;
  }
  ExAcquirePushLockSharedEx(v8 + 352, 0LL);
  if ( v9 != v8 )
    ExAcquirePushLockSharedEx(v9 + 352, 0LL);
  if ( (*(_DWORD *)(v8 + 416) & 0x20) != 0
    || (*(_DWORD *)(v9 + 416) & 0x20) != 0
    || (*(_DWORD *)(v1 + 416) & 0x20) != 0 && (*(_DWORD *)(v1 + 256) & 0x1000) == 0 )
  {
    AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo((__int64)v5, (signed __int64 *)v8, (signed __int64 *)v9);
LABEL_37:
    AlpcpUnlockMessage(v2);
    return 3221225527LL;
  }
  if ( (*(_DWORD *)(*a1 + 256) & 0x800000) != 0
    && (*(_DWORD *)(a1[1] + 40) & 0x200) == 0
    && (v14 = *(_QWORD *)(v8 + 24), (v14 & 1) == 0)
    && v14
    && (ProcessJob = PsGetProcessJob(v14)) != 0
    && (unsigned int)PsGetJobEffectiveFreezeCount(ProcessJob) )
  {
    AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo((__int64)v5, (signed __int64 *)v8, (signed __int64 *)v9);
    AlpcpUnlockMessage(v2);
    return 3221225526LL;
  }
  else if ( (*(_DWORD *)(v8 + 256) & 0x20000) != 0 )
  {
    if ( (unsigned __int64)*((unsigned __int16 *)a1 + 26) > *(_QWORD *)(v8 + 272) )
    {
      AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo((__int64)v5, (signed __int64 *)v8, (signed __int64 *)v9);
      AlpcpUnlockMessage(v2);
      return 3221225507LL;
    }
    else
    {
      *(_QWORD *)(v2 + 200) = 0LL;
      *(_WORD *)(v2 + 242) = *((_WORD *)a1 + 26);
      *(_WORD *)(v2 + 240) = *((_WORD *)a1 + 26) - 40;
      v10 = *((_WORD *)a1 + 27);
      *(_WORD *)(v2 + 244) = v10;
      *(_WORD *)(v2 + 246) = *((_WORD *)a1 + 28);
      *(_OWORD *)(v2 + 248) = *(_OWORD *)&CurrentThread[1].CurrentRunTime;
      if ( (v4 & 0x10000) != 0 )
      {
        *(_DWORD *)(v2 + 40) |= 0x200u;
        v11 = v10 & 0xDFFF;
      }
      else
      {
        *(_DWORD *)(v2 + 40) &= ~0x200u;
        v11 = v10 | 0x2000;
      }
      v12 = *(_DWORD *)(v2 + 40);
      *(_WORD *)(v2 + 244) = v11;
      if ( (v12 & 0x200) != 0 && (*(_DWORD *)(v1 + 416) & 0x2000) != 0 )
      {
        *(_DWORD *)(v2 + 40) = v12 & 0xFFFFEFFF;
      }
      else
      {
        ObfReferenceObject((PVOID)v1);
        *(_DWORD *)(v2 + 40) |= 0x1000u;
      }
      *(_QWORD *)(v2 + 24) = v1;
      *(_DWORD *)(v2 + 44) = _InterlockedIncrement((volatile signed __int32 *)(v9 + 400));
      *(_QWORD *)(v2 + 120) = *(_QWORD *)(v9 + 56);
      *(_QWORD *)(v2 + 184) = v5;
      *(_QWORD *)(v2 + 192) = *v5;
      if ( v9 != v8 )
      {
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v9 + 352), 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v9 + 352));
        KeAbPostRelease(v9 + 352);
      }
      if ( (v4 & 0x20000) != 0 )
      {
        *(_DWORD *)(v2 + 40) &= ~0x100u;
        *(_QWORD *)(v2 + 32) = CurrentThread;
        *(_WORD *)(v2 - 30) += 2;
        _InterlockedExchange64((volatile __int64 *)&CurrentThread[1].Teb, v2);
      }
      a1[4] = v8;
      a1[2] = (__int64)v5;
      AlpcpCompleteDispatchMessage(a1);
      ObfDereferenceObject((PVOID)v9);
      return 0LL;
    }
  }
  else
  {
    AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo((__int64)v5, (signed __int64 *)v8, (signed __int64 *)v9);
    AlpcpUnlockMessage(v2);
    return 3221227271LL;
  }
}
