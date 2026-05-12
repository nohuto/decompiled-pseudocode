/*
 * XREFs of McGenControlCallbackV2 @ 0x1C001B890
 * Callers:
 *     <none>
 * Callees:
 *     RaidGetPortData @ 0x1C0001D0C (RaidGetPortData.c)
 *     RaidReleasePortData @ 0x1C0001D80 (RaidReleasePortData.c)
 *     RaidAcquireAdapterRemoveLock @ 0x1C00056D4 (RaidAcquireAdapterRemoveLock.c)
 *     _guard_dispatch_icall_nop @ 0x1C001ED80 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001F180 (memset.c)
 */

void __stdcall McGenControlCallbackV2(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword,
        ULONGLONG MatchAllKeyword,
        PEVENT_FILTER_DESCRIPTOR FilterData,
        PVOID CallbackContext)
{
  int v7; // edi
  unsigned int v9; // r9d
  unsigned __int8 v10; // cl
  __int64 v11; // rdx
  KSPIN_LOCK *PortData; // rax
  KSPIN_LOCK *v13; // rbp
  KSPIN_LOCK *v14; // r14
  KSPIN_LOCK *i; // rbx
  unsigned __int16 v16; // ax
  KSPIN_LOCK *j; // rdi
  KSPIN_LOCK *v18; // rsi
  __int64 v19; // rdx
  KSPIN_LOCK *k; // rdi
  KSPIN_LOCK *v21; // rax
  void (__fastcall *v22)(KSPIN_LOCK, __int64); // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF

  v7 = MatchAnyKeyword;
  if ( !CallbackContext )
    return;
  if ( ControlCode )
  {
    if ( ControlCode == 1 )
    {
      *((_QWORD *)CallbackContext + 2) = MatchAnyKeyword;
      v9 = 0;
      *((_QWORD *)CallbackContext + 3) = MatchAllKeyword;
      *((_BYTE *)CallbackContext + 40) = Level;
      for ( *((_DWORD *)CallbackContext + 9) = 1; v9 < *((unsigned __int16 *)CallbackContext + 21); ++v9 )
      {
        v10 = *((_BYTE *)CallbackContext + 40);
        v11 = *(_QWORD *)(*((_QWORD *)CallbackContext + 7) + 8LL * v9);
        if ( *(_BYTE *)(v9 + *((_QWORD *)CallbackContext + 8)) > v10 && v10
          || v11
          && ((v11 & *((_QWORD *)CallbackContext + 2)) == 0
           || (v11 & *((_QWORD *)CallbackContext + 3)) != *((_QWORD *)CallbackContext + 3)) )
        {
          *(_DWORD *)(*((_QWORD *)CallbackContext + 6) + 4 * ((unsigned __int64)v9 >> 5)) &= ~(1 << (v9 & 0x1F));
        }
        else
        {
          *(_DWORD *)(*((_QWORD *)CallbackContext + 6) + 4 * ((unsigned __int64)v9 >> 5)) |= 1 << (v9 & 0x1F);
        }
      }
      goto LABEL_10;
    }
  }
  else
  {
    v16 = *((_WORD *)CallbackContext + 21);
    *((_DWORD *)CallbackContext + 9) = 0;
    *((_BYTE *)CallbackContext + 40) = 0;
    *((_QWORD *)CallbackContext + 2) = 0LL;
    *((_QWORD *)CallbackContext + 3) = 0LL;
    if ( !v16 )
      goto LABEL_24;
    memset(*((void **)CallbackContext + 6), 0, 4LL * ((v16 - 1) / 32 + 1));
  }
  if ( ControlCode )
  {
LABEL_10:
    StorEtwLoggingEnabled = 1;
    goto LABEL_11;
  }
LABEL_24:
  StorEtwLoggingEnabled = 0;
LABEL_11:
  StorRequestThresholdTime = 0LL;
  if ( (*(_QWORD *)&v7 & 0x100000LL) != 0 && FilterData && FilterData->Size == 8 )
    StorRequestThresholdTime = *(_QWORD *)FilterData->Ptr;
  PortData = RaidGetPortData();
  v13 = PortData;
  if ( PortData )
  {
    v14 = PortData + 1;
    for ( i = (KSPIN_LOCK *)PortData[1]; i != v14; i = (KSPIN_LOCK *)*i )
    {
      KeAcquireInStackQueuedSpinLock(i + 7, &LockHandle);
      for ( j = (KSPIN_LOCK *)i[4]; ; j = (KSPIN_LOCK *)*j )
      {
        v18 = 0LL;
        if ( j == i + 4 )
          break;
        v18 = j - 8;
        if ( (int)RaidAcquireAdapterRemoveLock((__int64)(j - 8)) >= 0 )
          break;
      }
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( v18 )
      {
        for ( k = (KSPIN_LOCK *)i[9]; k != i + 9; k = (KSPIN_LOCK *)*k )
        {
          v21 = k - 26;
          if ( k != (KSPIN_LOCK *)208 && *(_DWORD *)v21 == 208 )
          {
            v22 = (void (__fastcall *)(KSPIN_LOCK, __int64))v21[22];
            if ( v22 )
            {
              LOBYTE(v19) = ControlCode;
              v22(v18[67] + 16, v19);
            }
          }
        }
        ExReleaseRundownProtectionCacheAware((PEX_RUNDOWN_REF_CACHE_AWARE)v18[32]);
      }
    }
    RaidReleasePortData(v13);
  }
}
