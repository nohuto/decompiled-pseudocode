/*
 * XREFs of AlpcpDispatchNewMessage @ 0x1404CCD20
 * Callers:
 *     AlpcpSendMessage @ 0x1404CC2E0 (AlpcpSendMessage.c)
 *     AlpcpDispatchMessage @ 0x1404DC48C (AlpcpDispatchMessage.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     ObReferenceObjectSafe @ 0x1400A9D20 (ObReferenceObjectSafe.c)
 *     PsGetProcessJob @ 0x1400C1820 (PsGetProcessJob.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1401038E0 (ObfReferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     PsGetJobEffectiveFreezeCount @ 0x140284284 (PsGetJobEffectiveFreezeCount.c)
 *     AlpcpCompleteDispatchMessage @ 0x1404CD0A0 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpUnlockMessage @ 0x1404CF164 (AlpcpUnlockMessage.c)
 *     AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo @ 0x140576718 (AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo.c)
 */

__int64 __fastcall AlpcpDispatchNewMessage(__int64 *a1)
{
  __int64 v1; // r13
  int v2; // eax
  ULONG_PTR v4; // rsi
  __int64 *v5; // r14
  struct _KTHREAD *CurrentThread; // r12
  int v7; // ebx
  int v8; // ebx
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 ProcessJob; // rax
  __int64 v14; // r8
  __int16 v15; // cx
  int v16; // eax
  __int16 v17; // cx
  unsigned int v18; // eax
  ULONG_PTR v19; // rdx
  int v20; // eax
  int v21; // [rsp+60h] [rbp+8h]

  v1 = *a1;
  v2 = *((_DWORD *)a1 + 12);
  v4 = a1[1];
  a1[4] = 0LL;
  a1[3] = 0LL;
  a1[5] = 0LL;
  v5 = *(__int64 **)(v1 + 16);
  CurrentThread = KeGetCurrentThread();
  v21 = v2;
  v7 = (*(_DWORD *)(v1 + 416) >> 1) & 3;
  ExAcquirePushLockSharedEx((ULONG_PTR)(v5 - 2), 0LL);
  v8 = v7 - 1;
  if ( !v8 )
  {
    v9 = *v5;
    goto LABEL_6;
  }
  if ( v8 != 1 )
  {
    v9 = v5[2];
LABEL_6:
    v10 = v9;
    goto LABEL_7;
  }
  v9 = *v5;
  v10 = v5[1];
LABEL_7:
  if ( v9 && !ObReferenceObjectSafe(v9) )
    v9 = 0LL;
  if ( v10 && !ObReferenceObjectSafe(v10) )
    v10 = 0LL;
  if ( !v9 || !v10 )
  {
    if ( _InterlockedCompareExchange64(v5 - 2, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v5 - 2);
    KeAbPostRelease((ULONG_PTR)(v5 - 2));
    if ( v9 )
      ObfDereferenceObject((PVOID)v9);
    if ( v10 )
      ObfDereferenceObject((PVOID)v10);
    goto LABEL_53;
  }
  ExAcquirePushLockSharedEx(v9 + 352, 0LL);
  if ( v10 != v9 )
    ExAcquirePushLockSharedEx(v10 + 352, 0LL);
  if ( (*(_DWORD *)(v9 + 416) & 0x20) != 0
    || (*(_DWORD *)(v10 + 416) & 0x20) != 0
    || (*(_DWORD *)(v1 + 416) & 0x20) != 0 && (*(_DWORD *)(v1 + 256) & 0x1000) == 0 )
  {
    AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo(v5, v9, v10);
LABEL_53:
    AlpcpUnlockMessage(v4);
    return 3221225527LL;
  }
  if ( (*(_DWORD *)(*a1 + 256) & 0x800000) != 0
    && (*(_DWORD *)(a1[1] + 40) & 0x200) == 0
    && (v11 = *(_QWORD *)(v9 + 24), (v11 & 1) == 0)
    && v11
    && (ProcessJob = PsGetProcessJob(v11)) != 0
    && (unsigned int)PsGetJobEffectiveFreezeCount(ProcessJob) )
  {
    AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo(v5, v9, v10);
    AlpcpUnlockMessage(v4);
    return 3221225526LL;
  }
  else if ( (*(_DWORD *)(v9 + 256) & 0x20000) != 0 )
  {
    if ( (unsigned __int64)*((unsigned __int16 *)a1 + 26) <= *(_QWORD *)(v9 + 272) )
    {
      *(_QWORD *)(v4 + 200) = 0LL;
      v14 = 0x2000LL;
      *(_WORD *)(v4 + 242) = *((_WORD *)a1 + 26);
      *(_WORD *)(v4 + 240) = *((_WORD *)a1 + 26) - 40;
      v15 = *((_WORD *)a1 + 27);
      *(_WORD *)(v4 + 244) = v15;
      *(_WORD *)(v4 + 246) = *((_WORD *)a1 + 28);
      v16 = *(_DWORD *)(v4 + 40);
      *(_OWORD *)(v4 + 248) = *(_OWORD *)&CurrentThread[1].CycleTime;
      if ( (v21 & 0x10000) != 0 )
      {
        v17 = v15 & 0xDFFF;
        v18 = v16 | 0x200;
      }
      else
      {
        v17 = v15 | 0x2000;
        v18 = v16 & 0xFFFFFDFF;
      }
      *(_DWORD *)(v4 + 40) = v18;
      v19 = v4 + 40;
      *(_WORD *)(v4 + 244) = v17;
      if ( (*(_DWORD *)(v1 + 416) & 0x2000) != 0 && (v20 = *(_DWORD *)(v4 + 40), (v20 & 0x200) != 0) )
      {
        *(_DWORD *)(v4 + 40) = v20 & 0xFFFFEFFF;
      }
      else
      {
        ObfReferenceObject((PVOID)v1);
        *(_DWORD *)(v4 + 40) |= 0x1000u;
      }
      *(_QWORD *)(v4 + 24) = v1;
      *(_DWORD *)(v4 + 44) = _InterlockedIncrement((volatile signed __int32 *)(v10 + 400));
      *(_QWORD *)(v4 + 120) = *(_QWORD *)(v10 + 56);
      *(_QWORD *)(v4 + 184) = v5;
      *(_QWORD *)(v4 + 192) = *v5;
      if ( v10 != v9 )
      {
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 352), 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v10 + 352));
        KeAbPostRelease(v10 + 352);
      }
      if ( (v21 & 0x20000) != 0 )
      {
        *(_DWORD *)(v4 + 40) &= ~0x100u;
        *(_QWORD *)(v4 + 32) = CurrentThread;
        *(_WORD *)(v4 - 30) += 2;
        _InterlockedExchange64((volatile __int64 *)&CurrentThread[1].Teb, v4);
      }
      a1[4] = v9;
      a1[2] = (__int64)v5;
      AlpcpCompleteDispatchMessage(a1, v19, v14);
      ObfDereferenceObject((PVOID)v10);
      return 0LL;
    }
    else
    {
      AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo(v5, v9, v10);
      AlpcpUnlockMessage(v4);
      return 3221225507LL;
    }
  }
  else
  {
    AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo(v5, v9, v10);
    AlpcpUnlockMessage(v4);
    return 3221227271LL;
  }
}
