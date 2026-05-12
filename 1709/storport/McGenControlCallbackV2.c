/*
 * XREFs of McGenControlCallbackV2 @ 0x1C001B5D0
 * Callers:
 *     <none>
 * Callees:
 *     RaidGetPortData @ 0x1C000292C (RaidGetPortData.c)
 *     RaidReleasePortData @ 0x1C000299C (RaidReleasePortData.c)
 *     RaidAcquireAdapterRemoveLock @ 0x1C0005EC4 (RaidAcquireAdapterRemoveLock.c)
 *     StorEtwEnableAdapter @ 0x1C001A57C (StorEtwEnableAdapter.c)
 *     memset @ 0x1C001F680 (memset.c)
 *     StorEtwAdapterNeedsUpdate @ 0x1C00414A8 (StorEtwAdapterNeedsUpdate.c)
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
  int v7; // ebx
  ULONG v8; // ebp
  unsigned int v9; // r11d
  unsigned __int8 v10; // cl
  __int64 v11; // rdx
  KSPIN_LOCK *PortData; // rax
  KSPIN_LOCK *v13; // r13
  KSPIN_LOCK *v14; // r15
  KSPIN_LOCK i; // rbx
  unsigned __int16 v16; // ax
  __int64 v17; // rdi
  __int64 *v18; // rsi
  __int64 v19; // rdx
  _QWORD **v20; // r14
  _QWORD *v21; // r8
  char v22; // al
  unsigned int v23; // ecx
  __int64 *PoolWithTag; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  _QWORD *v27; // r15
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 *v30; // r14
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  char v32; // [rsp+78h] [rbp+10h]
  KSPIN_LOCK *CallbackContexta; // [rsp+A0h] [rbp+38h]

  v32 = ControlCode;
  v7 = MatchAnyKeyword;
  v8 = ControlCode;
  if ( !CallbackContext )
    return;
  if ( ControlCode )
  {
    if ( ControlCode == 1 )
    {
      v9 = 0;
      *((_QWORD *)CallbackContext + 3) = MatchAllKeyword;
      *((_BYTE *)CallbackContext + 40) = Level;
      *((_QWORD *)CallbackContext + 2) = MatchAnyKeyword;
      for ( *((_DWORD *)CallbackContext + 9) = 1; v9 < *((unsigned __int16 *)CallbackContext + 21); ++v9 )
      {
        v10 = *((_BYTE *)CallbackContext + 40);
        if ( *(_BYTE *)(v9 + *((_QWORD *)CallbackContext + 8)) > v10 && v10
          || (v11 = *(_QWORD *)(*((_QWORD *)CallbackContext + 7) + 8LL * v9)) != 0
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
  if ( v8 )
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
  CallbackContexta = PortData;
  v13 = PortData;
  if ( PortData )
  {
    v14 = PortData + 1;
    for ( i = PortData[1]; (KSPIN_LOCK *)i != v14; i = *(_QWORD *)i )
    {
      v17 = 0LL;
      v18 = 0LL;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(i + 56), &LockHandle);
      if ( *(_DWORD *)(i + 48) )
      {
        v20 = (_QWORD **)(i + 32);
        v21 = *(_QWORD **)(i + 32);
        if ( v21 != (_QWORD *)(i + 32) )
        {
          do
          {
            LOBYTE(v19) = v8;
            v22 = StorEtwAdapterNeedsUpdate(v21 - 8, v19, *v21);
            v23 = v17 + 1;
            if ( !v22 )
              v23 = v17;
            v17 = v23;
          }
          while ( v21 != v20 );
          if ( v23 )
          {
            PoolWithTag = (__int64 *)ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * v23, 0x54456152u);
            v18 = PoolWithTag;
            if ( PoolWithTag )
            {
              v8 = 0;
              memset(PoolWithTag, 0, 8LL * (unsigned int)v17);
              v27 = *v20;
              if ( *v20 != v20 )
              {
                do
                {
                  if ( v8 >= (unsigned int)v17 )
                    break;
                  LOBYTE(v25) = v32;
                  if ( (unsigned __int8)StorEtwAdapterNeedsUpdate(v27 - 8, v25, v26)
                    && (int)RaidAcquireAdapterRemoveLock((__int64)(v27 - 8)) >= 0 )
                  {
                    v28 = v8++;
                    v18[v28] = (__int64)(v27 - 8);
                  }
                  v27 = (_QWORD *)*v27;
                }
                while ( v27 != v20 );
                v13 = CallbackContexta;
              }
              v17 = v8;
              LOBYTE(v8) = v32;
            }
            v14 = v13 + 1;
          }
        }
      }
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( v18 )
      {
        if ( (_DWORD)v17 )
        {
          v30 = v18;
          do
          {
            LOBYTE(v29) = v8;
            StorEtwEnableAdapter(*v30, v29);
            ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*v30++ + 256));
            --v17;
          }
          while ( v17 );
        }
        ExFreePoolWithTag(v18, 0x54456152u);
      }
    }
    RaidReleasePortData(v13);
  }
}
