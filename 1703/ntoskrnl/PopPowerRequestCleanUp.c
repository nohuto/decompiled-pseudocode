/*
 * XREFs of PopPowerRequestCleanUp @ 0x140071694
 * Callers:
 *     PopDeletePowerRequestObject @ 0x1404C7260 (PopDeletePowerRequestObject.c)
 *     PoDeletePowerRequest @ 0x1404C7540 (PoDeletePowerRequest.c)
 *     PopClosePowerRequestObject @ 0x1404C7F30 (PopClosePowerRequestObject.c)
 *     PspExitThread @ 0x1405401EC (PspExitThread.c)
 * Callees:
 *     PopPowerRequestExecuteCallbacks @ 0x14007141C (PopPowerRequestExecuteCallbacks.c)
 *     PoDestroyReasonContext @ 0x14007227C (PoDestroyReasonContext.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     PopReleasePowerRequestPushLock @ 0x1404C6290 (PopReleasePowerRequestPushLock.c)
 *     PopAcquirePowerRequestPushLock @ 0x1404C62C8 (PopAcquirePowerRequestPushLock.c)
 *     PopUmpoSendPowerRequestOverrideCleanup @ 0x1404C62F4 (PopUmpoSendPowerRequestOverrideCleanup.c)
 *     PopDiagTracePowerRequestClose @ 0x1404C714C (PopDiagTracePowerRequestClose.c)
 *     PopPowerRequestDeleteEntryById @ 0x1404C71DC (PopPowerRequestDeleteEntryById.c)
 *     PopDisablePowerExecutionRequest @ 0x1404C7214 (PopDisablePowerExecutionRequest.c)
 */

void __fastcall PopPowerRequestCleanUp(_BYTE *Object)
{
  _QWORD *v1; // rbx
  char v2; // di
  __int64 v3; // rax
  _QWORD *v4; // rcx
  char v5; // si
  unsigned int v6; // ecx
  int *v7; // r8
  __int64 v8; // rdx
  _DWORD *v9; // r9
  int v10; // eax
  int v11; // eax
  __int64 v12; // rdx
  _QWORD *v13; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v1 = Object;
  v2 = Object[104];
  if ( *(_QWORD *)Object )
  {
    LOBYTE(Object) = 1;
    PopAcquirePowerRequestPushLock(Object);
    v3 = *v1;
    if ( *v1 )
    {
      v4 = (_QWORD *)v1[1];
      if ( *(_QWORD **)(v3 + 8) != v1 || (_QWORD *)*v4 != v1 )
        __fastfail(3u);
      *v4 = v3;
      *(_QWORD *)(v3 + 8) = v4;
      *v1 = 0LL;
      if ( *((_DWORD *)v1 + 11) && (byte_14034BC94 || v2) )
      {
        *((_DWORD *)v1 + 11) = 0;
        if ( !v2 && (v1[3] & 8) == 0 )
          --dword_14033B6F0;
      }
      PopDisablePowerExecutionRequest(v1, 0LL, 0LL);
      v1[12] = 0LL;
      if ( v2 )
        --PopSpecialPowerRequestObjectCount;
      else
        --PopPowerRequestObjectCount;
      PopPowerRequestDeleteEntryById(*((unsigned int *)v1 + 7));
      PopReleasePowerRequestPushLock();
      PopDiagTracePowerRequestClose(v1);
      KeAcquireInStackQueuedSpinLock(&PopPowerRequestSpinLock, &LockHandle);
      v5 = *((_BYTE *)v1 + 78);
      if ( v5 )
      {
        v12 = v1[7];
        v13 = (_QWORD *)v1[8];
        if ( *(_QWORD **)(v12 + 8) != v1 + 7 || (_QWORD *)*v13 != v1 + 7 )
          __fastfail(3u);
        *v13 = v12;
        *(_QWORD *)(v12 + 8) = v13;
        *((_BYTE *)v1 + 78) = 0;
      }
      v6 = 0;
      v7 = PopPowerRequestAttributes;
      v8 = 0LL;
      v9 = v1 + 4;
      do
      {
        v10 = *((_DWORD *)v1 + 6);
        if ( !_bittest(&v10, v6) )
        {
          if ( *v9 )
          {
            v11 = *v7 - 1;
            *v7 = v11;
            if ( !v6 || v6 == 3 || !v11 )
              --*((_BYTE *)v1 + v8 + 72);
          }
        }
        ++v6;
        ++v8;
        ++v9;
        v7 += 4;
      }
      while ( v6 < 6 );
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
      PopPowerRequestExecuteCallbacks((__int64)(v1 + 9), *((_DWORD *)v1 + 7), *((_DWORD *)v1 + 4));
      if ( v5 )
        ObfDereferenceObject(v1);
      PoDestroyReasonContext(v1[10]);
      if ( !v2 )
        PopUmpoSendPowerRequestOverrideCleanup(v1);
    }
    else
    {
      PopReleasePowerRequestPushLock();
    }
  }
}
