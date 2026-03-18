/*
 * XREFs of PopPowerRequestCleanUp @ 0x140075F04
 * Callers:
 *     PspExitThread @ 0x1404B8D70 (PspExitThread.c)
 *     PopDeletePowerRequestObject @ 0x1405248C0 (PopDeletePowerRequestObject.c)
 *     PoDeletePowerRequest @ 0x140524D60 (PoDeletePowerRequest.c)
 *     PopClosePowerRequestObject @ 0x1405252A0 (PopClosePowerRequestObject.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140060520 (ObfReferenceObjectWithTag.c)
 *     PopPowerRequestExecuteCallbacks @ 0x14007505C (PopPowerRequestExecuteCallbacks.c)
 *     PoDestroyReasonContext @ 0x14007624C (PoDestroyReasonContext.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     PopAcquirePowerRequestPushLock @ 0x14051D5A8 (PopAcquirePowerRequestPushLock.c)
 *     PopPowerRequestIsExecutionRequiredCapable @ 0x14051D5E0 (PopPowerRequestIsExecutionRequiredCapable.c)
 *     PopUpdatePowerRequestProcessWakeCounter @ 0x14051D604 (PopUpdatePowerRequestProcessWakeCounter.c)
 *     PopUmpoSendPowerRequestOverrideCleanup @ 0x1405248D4 (PopUmpoSendPowerRequestOverrideCleanup.c)
 *     PopDiagTracePowerRequestClose @ 0x140524978 (PopDiagTracePowerRequestClose.c)
 *     PopStatsDeletePowerRequest @ 0x140524A08 (PopStatsDeletePowerRequest.c)
 *     PopReleasePowerRequestPushLock @ 0x140524B6C (PopReleasePowerRequestPushLock.c)
 *     PopPowerRequestDeleteEntryById @ 0x140524B88 (PopPowerRequestDeleteEntryById.c)
 *     PopProcessDisplayRequiredChange @ 0x140524F6C (PopProcessDisplayRequiredChange.c)
 */

_UNKNOWN **__fastcall PopPowerRequestCleanUp(PVOID *Object)
{
  _UNKNOWN **result; // rax
  char v2; // si
  PVOID v3; // rdi
  unsigned int v4; // ebp
  PVOID *v5; // rbx
  PVOID **v6; // rax
  PVOID **v7; // rcx
  char v8; // r14
  unsigned int v9; // ecx
  int *v10; // r8
  __int64 v11; // rdx
  _DWORD *v12; // r9
  int v13; // eax
  int v14; // eax
  PVOID **v15; // rcx
  PVOID **v16; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  result = &retaddr;
  v2 = *((_BYTE *)Object + 104);
  v3 = 0LL;
  v4 = 0;
  v5 = Object;
  if ( *Object )
  {
    LOBYTE(Object) = 1;
    PopAcquirePowerRequestPushLock(Object);
    v6 = (PVOID **)*v5;
    if ( *v5 )
    {
      if ( v6[1] != v5 || (v7 = (PVOID **)v5[1], *v7 != v5) )
        __fastfail(3u);
      *v7 = (PVOID *)v6;
      v6[1] = (PVOID *)v7;
      *v5 = 0LL;
      if ( *((_DWORD *)v5 + 11) && (byte_1403AAB74 || v2) )
      {
        *((_DWORD *)v5 + 11) = 0;
        if ( !v2 && ((_DWORD)v5[3] & 8) == 0 )
          --dword_140396300;
      }
      if ( (unsigned __int8)PopPowerRequestIsExecutionRequiredCapable(v5) )
        PopUpdatePowerRequestProcessWakeCounter(v5, 0LL);
      if ( v5[12] )
      {
        v3 = v5[12];
        ObfReferenceObjectWithTag(v3, 0x72506F50u);
        v5[12] = 0LL;
      }
      if ( v2 )
        --PopSpecialPowerRequestObjectCount;
      else
        --PopPowerRequestObjectCount;
      PopPowerRequestDeleteEntryById(*((unsigned int *)v5 + 7));
      PopReleasePowerRequestPushLock();
      PopStatsDeletePowerRequest(v5);
      PopDiagTracePowerRequestClose(v5);
      KeAcquireInStackQueuedSpinLock(&PopPowerRequestSpinLock, &LockHandle);
      v8 = *((_BYTE *)v5 + 78);
      if ( v8 )
      {
        v15 = (PVOID **)v5[7];
        if ( v15[1] != v5 + 7 || (v16 = (PVOID **)v5[8], *v16 != v5 + 7) )
          __fastfail(3u);
        *v16 = (PVOID *)v15;
        v15[1] = (PVOID *)v16;
        *((_BYTE *)v5 + 78) = 0;
      }
      v9 = 0;
      v10 = PopPowerRequestAttributes;
      v11 = 0LL;
      v12 = v5 + 4;
      do
      {
        v13 = *((_DWORD *)v5 + 6);
        if ( !_bittest(&v13, v9) && *v12 )
        {
          v14 = *v10 - 1;
          *v10 = v14;
          if ( !v9 || v9 == 3 || !v14 )
            --*((_BYTE *)v5 + v11 + 72);
          if ( !v9 )
            v4 = 2;
        }
        ++v9;
        ++v11;
        ++v12;
        v10 += 4;
      }
      while ( v9 < 6 );
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
      PopPowerRequestExecuteCallbacks((__int64)(v5 + 9), *((_DWORD *)v5 + 7), *((_DWORD *)v5 + 4));
      if ( v8 )
        ObfDereferenceObjectWithTag(v5, 0x72506F50u);
      result = (_UNKNOWN **)PoDestroyReasonContext(v5[10]);
      if ( !v2 )
        result = (_UNKNOWN **)PopUmpoSendPowerRequestOverrideCleanup(v5);
      if ( v3 )
      {
        PopProcessDisplayRequiredChange(v3, v4);
        return (_UNKNOWN **)ObfDereferenceObjectWithTag(v3, 0x72506F50u);
      }
    }
    else
    {
      return (_UNKNOWN **)PopReleasePowerRequestPushLock();
    }
  }
  return result;
}
