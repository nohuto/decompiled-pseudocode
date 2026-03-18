/*
 * XREFs of VidSchiSwitchFromSuspendedDevices @ 0x1C000F2B0
 * Callers:
 *     <none>
 * Callees:
 *     VidSchIsTDRPending @ 0x1C000AB80 (VidSchIsTDRPending.c)
 *     VidSchiSwitchNodeFromContext @ 0x1C0071610 (VidSchiSwitchNodeFromContext.c)
 *     VidSchiSubmitPreemptionCommand @ 0x1C0071AE8 (VidSchiSubmitPreemptionCommand.c)
 *     VidSchiWaitForCompletePreemption @ 0x1C007592C (VidSchiWaitForCompletePreemption.c)
 *     VidSchiWaitForEmptyHwQueue @ 0x1C00B3FF0 (VidSchiWaitForEmptyHwQueue.c)
 */

void __fastcall VidSchiSwitchFromSuspendedDevices(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // r14
  unsigned int v4; // ebp
  KSPIN_LOCK *v5; // rax
  char v6; // r13
  __int64 v7; // rdi
  __int64 v8; // rcx
  unsigned int i; // esi
  unsigned int j; // edi
  __int64 v11; // rbp
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // r15
  __int64 v15; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF

  v2 = a1;
  if ( !*(_DWORD *)(a1 + 2836) )
  {
    if ( (*(_DWORD *)(a1 + 2168) & 1) != 0 )
    {
      v3 = 0LL;
      v4 = 0;
      if ( *(_DWORD *)(a1 + 60) )
      {
        v5 = (KSPIN_LOCK *)(a1 + 1888);
        do
        {
          v6 = 0;
          v7 = *(_QWORD *)(v2 + 8LL * v4 + 424);
          KeAcquireInStackQueuedSpinLock(v5, &LockHandle);
          for ( i = *(_DWORD *)(v7 + 1552); i != *(_DWORD *)(v7 + 1544); i = ((_BYTE)i + 1) & 0xF )
          {
            v14 = *(_QWORD *)(v7 + 8LL * i + 1560);
            if ( v14 )
            {
              if ( (*(_DWORD *)(v14 + 176) & 0x200) != 0
                || (v8 = *(_QWORD *)(v14 + 104), *(_BYTE *)(v8 + 164))
                || _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 160), 0, 0) )
              {
                v6 = 1;
                v15 = WdLogNewEntry5_WdEvent(v8, 0LL);
                *(_QWORD *)(v15 + 24) = v7;
                *(_QWORD *)(v15 + 32) = v14;
                WdLogEvent5_WdEvent(v15);
              }
            }
          }
          KeReleaseInStackQueuedSpinLock(&LockHandle);
          if ( v6 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v2 + 956));
            if ( _InterlockedIncrement((volatile signed __int32 *)(v7 + 2800)) == 1 )
            {
              *(_QWORD *)(v7 + 232) = 0LL;
              VidSchiSubmitPreemptionCommand(v7);
              _bittestandset64(&v3, v4);
            }
            else
            {
              _InterlockedDecrement((volatile signed __int32 *)(v7 + 2800));
              _bittestandset64(&v3, v4);
              _InterlockedDecrement((volatile signed __int32 *)(v2 + 956));
            }
          }
          ++v4;
          v5 = (KSPIN_LOCK *)(v2 + 1888);
        }
        while ( v4 < *(_DWORD *)(v2 + 60) );
      }
      for ( j = 0; j < *(_DWORD *)(v2 + 60); ++j )
      {
        v11 = *(_QWORD *)(v2 + 8LL * j + 424);
        if ( _bittest64(&v3, j) )
        {
          if ( *(_DWORD *)(v11 + 2804) )
            VidSchiWaitForCompletePreemption(*(_QWORD *)(v2 + 8LL * j + 424));
          if ( VidSchIsTDRPending(v2) )
            break;
        }
        if ( *(_BYTE *)(v2 + 52) )
        {
          v12 = *(_QWORD *)(v11 + 224);
          if ( v12 )
          {
            if ( (*(_DWORD *)(v12 + 176) & 0x100) != 0
              || (a1 = *(_QWORD *)(v12 + 104), *(_BYTE *)(a1 + 164))
              || _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 160), 0, 0) )
            {
              v13 = WdLogNewEntry5_WdEvent(a1, a2);
              *(_QWORD *)(v13 + 24) = v11;
              *(_QWORD *)(v13 + 32) = v12;
              WdLogEvent5_WdEvent(v13);
              VidSchiSwitchNodeFromContext(v12);
              if ( VidSchIsTDRPending(v2) )
                break;
            }
          }
        }
      }
    }
    else
    {
      VidSchiWaitForEmptyHwQueue();
    }
  }
}
