/*
 * XREFs of MiRetryNonPagedAllocation @ 0x140089300
 * Callers:
 *     MiFindNonPagedPoolPages @ 0x140089100 (MiFindNonPagedPoolPages.c)
 * Callees:
 *     KeResetEvent @ 0x1400241B0 (KeResetEvent.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiSufficientAvailablePages @ 0x1400649E0 (MiSufficientAvailablePages.c)
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeAreInterruptsEnabled @ 0x140088EB8 (KeAreInterruptsEnabled.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 */

__int64 MiRetryNonPagedAllocation()
{
  unsigned int v0; // ebx
  unsigned __int64 v1; // rcx
  unsigned __int16 **v3; // rdx
  unsigned __int16 *v4; // r8
  unsigned int v5; // r9d
  LARGE_INTEGER *Timeout; // rsi
  NTSTATUS i; // edi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  v0 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( KeGetCurrentIrql() > 1u
    || (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0
    || !KeAreInterruptsEnabled()
    || (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 2) != 0 )
  {
    return 0LL;
  }
  v1 = qword_14038B800;
  if ( (unsigned __int64)qword_14038B800 < 0xA0 )
  {
    v3 = (unsigned __int16 **)&unk_14038B0A8;
    while ( 1 )
    {
      v4 = *v3;
      v5 = 0;
      if ( dword_140388544 )
        break;
LABEL_12:
      if ( (__int64)++v3 > (__int64)&qword_14038B0B0 )
      {
        Timeout = (LARGE_INTEGER *)&Mi30Milliseconds;
        for ( i = 1; ; i = KeWaitForSingleObject(&stru_14038B3A8, WrFreePage, 0, 0, Timeout) )
        {
          KeAcquireInStackQueuedSpinLock(&qword_14038B380, &LockHandle);
          if ( (unsigned int)MiSufficientAvailablePages((__int64)&MiSystemPartition, 0xA0uLL) )
            break;
          if ( i == 1 )
          {
            if ( byte_14038802C == 1 )
            {
              if ( dword_140388028 == dword_14038B3C0 )
                goto LABEL_27;
              byte_14038802C = 0;
            }
          }
          else
          {
            if ( i == 258 )
            {
              if ( !byte_14038802C )
              {
                dword_140388028 = dword_14038B3C0;
                byte_14038802C = 1;
              }
              goto LABEL_27;
            }
            Timeout = (LARGE_INTEGER *)&Mi10Milliseconds;
          }
          KeResetEvent(&stru_14038B3A8);
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          __writecr8(LockHandle.OldIrql);
        }
        if ( byte_14038802C == 1 )
          byte_14038802C = 0;
        v0 = 1;
LABEL_27:
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        __writecr8(LockHandle.OldIrql);
        return v0;
      }
    }
    while ( 1 )
    {
      v1 += *v4;
      if ( v1 >= 0xA0 )
        break;
      ++v5;
      v4 += 8;
      if ( v5 >= dword_140388544 )
        goto LABEL_12;
    }
  }
  return 1LL;
}
