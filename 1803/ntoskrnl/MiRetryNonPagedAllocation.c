/*
 * XREFs of MiRetryNonPagedAllocation @ 0x1400F0A50
 * Callers:
 *     MiGetPoolPages @ 0x1400F0860 (MiGetPoolPages.c)
 * Callees:
 *     KeResetEvent @ 0x140060F40 (KeResetEvent.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeAreInterruptsEnabled @ 0x1400F0B30 (KeAreInterruptsEnabled.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     MiSufficientAvailablePages @ 0x1400FF320 (MiSufficientAvailablePages.c)
 */

__int64 __fastcall MiRetryNonPagedAllocation(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rcx
  unsigned __int16 **v6; // rdx
  unsigned int v7; // ebx
  unsigned __int16 *v8; // r8
  unsigned int v9; // r9d
  LARGE_INTEGER *Timeout; // rsi
  NTSTATUS i; // edi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( KeGetCurrentIrql() > 1u
    || (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0
    || !(unsigned __int8)KeAreInterruptsEnabled(a1, a2, a3, a4)
    || (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 2) != 0 )
  {
    return 0LL;
  }
  v4 = qword_1403CFAC0;
  if ( (unsigned __int64)qword_1403CFAC0 < 0xA0 )
  {
    v6 = (unsigned __int16 **)&unk_1403CEF68;
    v7 = 0;
    while ( 1 )
    {
      v8 = *v6;
      v9 = 0;
      if ( dword_1403CB6DC )
        break;
LABEL_13:
      if ( (__int64)++v6 > (__int64)&qword_1403CEF70 )
      {
        Timeout = (LARGE_INTEGER *)&Mi30Milliseconds;
        for ( i = 1; ; i = KeWaitForSingleObject(&stru_1403CF268, WrFreePage, 0, 0, Timeout) )
        {
          KeAcquireInStackQueuedSpinLock(&qword_1403CF240, &LockHandle);
          if ( (unsigned int)MiSufficientAvailablePages(&MiSystemPartition, 160LL) )
            break;
          if ( i == 1 )
          {
            if ( byte_1403CB12C == 1 )
            {
              if ( dword_1403CB128 == dword_1403CF280 )
                goto LABEL_28;
              byte_1403CB12C = 0;
            }
          }
          else
          {
            if ( i == 258 )
            {
              if ( !byte_1403CB12C )
              {
                dword_1403CB128 = dword_1403CF280;
                byte_1403CB12C = 1;
              }
              goto LABEL_28;
            }
            Timeout = (LARGE_INTEGER *)&Mi10Milliseconds;
          }
          KeResetEvent(&stru_1403CF268);
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          __writecr8(LockHandle.OldIrql);
        }
        if ( byte_1403CB12C == 1 )
          byte_1403CB12C = 0;
        v7 = 1;
LABEL_28:
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        __writecr8(LockHandle.OldIrql);
        return v7;
      }
    }
    while ( 1 )
    {
      v4 += *v8;
      if ( v4 >= 0xA0 )
        break;
      ++v9;
      v8 += 8;
      if ( v9 >= dword_1403CB6DC )
        goto LABEL_13;
    }
  }
  return 1LL;
}
