/*
 * XREFs of AlpcpDispatchNewMessage @ 0x1404A0B50
 * Callers:
 *     AlpcpDispatchMessage @ 0x140465C50 (AlpcpDispatchMessage.c)
 *     AlpcpSendMessage @ 0x1404A01A0 (AlpcpSendMessage.c)
 * Callees:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140084290 (ObfReferenceObject.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     PsGetProcessJob @ 0x140123E70 (PsGetProcessJob.c)
 *     PsGetJobEffectiveFreezeCount @ 0x14024DED4 (PsGetJobEffectiveFreezeCount.c)
 *     AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo @ 0x140468B3C (AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo.c)
 *     AlpcpUnlockMessage @ 0x14049DAB4 (AlpcpUnlockMessage.c)
 *     AlpcpReferenceAndLockTargetPortsAndCommunicationInfo @ 0x1404A0D90 (AlpcpReferenceAndLockTargetPortsAndCommunicationInfo.c)
 *     AlpcpCompleteDispatchMessage @ 0x1404A1000 (AlpcpCompleteDispatchMessage.c)
 */

__int64 __fastcall AlpcpDispatchNewMessage(__int64 *a1)
{
  __int64 v1; // rsi
  ULONG_PTR v2; // rdi
  int v3; // r15d
  _QWORD *v5; // r14
  struct _KTHREAD *CurrentThread; // r12
  int v7; // ebp
  signed __int64 *v8; // rbp
  __int16 v9; // cx
  __int16 v10; // cx
  int v11; // edx
  volatile signed __int32 *v12; // rax
  signed __int32 v13; // ecx
  signed __int64 *v14; // rsi
  __int64 v16; // rcx
  __int64 ProcessJob; // rax
  PVOID Object; // [rsp+60h] [rbp+8h] BYREF
  signed __int64 *v19; // [rsp+68h] [rbp+10h] BYREF

  v1 = *a1;
  v2 = a1[1];
  v3 = *((_DWORD *)a1 + 12);
  a1[4] = 0LL;
  a1[3] = 0LL;
  a1[5] = 0LL;
  v5 = *(_QWORD **)(v1 + 16);
  CurrentThread = KeGetCurrentThread();
  v7 = AlpcpReferenceAndLockTargetPortsAndCommunicationInfo(v1, &v19, &Object);
  if ( v7 < 0 )
  {
    AlpcpUnlockMessage(v2);
    return (unsigned int)v7;
  }
  else if ( (*(_DWORD *)(v1 + 416) & 0x20) == 0 || (*(_DWORD *)(v1 + 256) & 0x1000) != 0 )
  {
    v8 = v19;
    if ( (*(_DWORD *)(*a1 + 256) & 0x800000) != 0
      && (*(_DWORD *)(a1[1] + 40) & 0x200) == 0
      && (v16 = v19[3], (v16 & 1) == 0)
      && v16
      && (ProcessJob = PsGetProcessJob(v16)) != 0
      && (unsigned int)PsGetJobEffectiveFreezeCount(ProcessJob) )
    {
      AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo((__int64)v5, v8, (signed __int64 *)Object);
      AlpcpUnlockMessage(v2);
      return 3221225526LL;
    }
    else if ( (v8[32] & 0x20000) != 0 )
    {
      if ( *((unsigned __int16 *)a1 + 26) > (unsigned __int64)v8[34] )
      {
        AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo((__int64)v5, v8, (signed __int64 *)Object);
        AlpcpUnlockMessage(v2);
        return 3221225507LL;
      }
      else
      {
        *(_QWORD *)(v2 + 200) = 0LL;
        *(_WORD *)(v2 + 242) = *((_WORD *)a1 + 26);
        *(_WORD *)(v2 + 240) = *((_WORD *)a1 + 26) - 40;
        v9 = *((_WORD *)a1 + 27);
        *(_WORD *)(v2 + 244) = v9;
        *(_WORD *)(v2 + 246) = *((_WORD *)a1 + 28);
        *(_OWORD *)(v2 + 248) = *(_OWORD *)&CurrentThread[1].CycleTime;
        if ( (v3 & 0x10000) != 0 )
        {
          *(_DWORD *)(v2 + 40) |= 0x200u;
          v10 = v9 & 0xDFFF;
        }
        else
        {
          *(_DWORD *)(v2 + 40) &= ~0x200u;
          v10 = v9 | 0x2000;
        }
        v11 = *(_DWORD *)(v2 + 40);
        *(_WORD *)(v2 + 244) = v10;
        if ( (*(_DWORD *)(v1 + 416) & 0x2000) != 0 && (v11 & 0x200) != 0 )
        {
          *(_DWORD *)(v2 + 40) = v11 & 0xFFFFEFFF;
        }
        else
        {
          ObfReferenceObject((PVOID)v1);
          *(_DWORD *)(v2 + 40) |= 0x1000u;
        }
        v12 = (volatile signed __int32 *)Object;
        *(_QWORD *)(v2 + 24) = v1;
        v13 = _InterlockedExchangeAdd(v12 + 100, 1u);
        v14 = (signed __int64 *)Object;
        *(_DWORD *)(v2 + 44) = v13 + 1;
        *(_QWORD *)(v2 + 120) = v14[7];
        *(_QWORD *)(v2 + 184) = v5;
        *(_QWORD *)(v2 + 192) = *v5;
        if ( v14 != v19 )
        {
          if ( _InterlockedCompareExchange64(v14 + 44, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared(v14 + 44);
          KeAbPostRelease((ULONG_PTR)(v14 + 44));
          v14 = (signed __int64 *)Object;
        }
        if ( (v3 & 0x20000) != 0 )
        {
          *(_DWORD *)(v2 + 40) &= ~0x100u;
          *(_QWORD *)(v2 + 32) = CurrentThread;
          *(_WORD *)(v2 - 30) += 2;
          _InterlockedExchange64((volatile __int64 *)&CurrentThread[1].Teb, v2);
          v14 = (signed __int64 *)Object;
        }
        a1[4] = (__int64)v19;
        a1[2] = (__int64)v5;
        AlpcpCompleteDispatchMessage(a1);
        ObfDereferenceObject(v14);
        return 0LL;
      }
    }
    else
    {
      AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo((__int64)v5, v8, (signed __int64 *)Object);
      AlpcpUnlockMessage(v2);
      return 3221227271LL;
    }
  }
  else
  {
    AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo((__int64)v5, v19, (signed __int64 *)Object);
    AlpcpUnlockMessage(v2);
    return 3221225527LL;
  }
}
