/*
 * XREFs of VidSchiSwitchFromSuspendedDevices @ 0x1C0002C30
 * Callers:
 *     <none>
 * Callees:
 *     VidSchIsTDRPending @ 0x1C000B250 (VidSchIsTDRPending.c)
 *     VidSchiSwitchNodeFromContext @ 0x1C0055710 (VidSchiSwitchNodeFromContext.c)
 *     VidSchiSubmitPreemptionCommand @ 0x1C0055818 (VidSchiSubmitPreemptionCommand.c)
 *     VidSchiWaitForCompletePreemption @ 0x1C00BCA34 (VidSchiWaitForCompletePreemption.c)
 *     VidSchiWaitForEmptyHwQueue @ 0x1C00BCBBC (VidSchiWaitForEmptyHwQueue.c)
 */

void __fastcall VidSchiSwitchFromSuspendedDevices(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int v3; // eax
  __int64 v4; // r14
  unsigned int v5; // ebp
  char v6; // r13
  __int64 v7; // rdi
  __int64 v8; // rcx
  unsigned int i; // esi
  unsigned int v10; // edi
  __int64 v11; // rbp
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // r15
  __int64 v15; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF

  v2 = a1;
  if ( !*(_DWORD *)(a1 + 2860) )
  {
    if ( (*(_DWORD *)(a1 + 2192) & 1) != 0 )
    {
      v3 = *(_DWORD *)(a1 + 64);
      v4 = 0LL;
      v5 = 0;
      if ( v3 )
      {
        a1 += 1904LL;
        do
        {
          v6 = 0;
          v7 = *(_QWORD *)(v2 + 8LL * v5 + 440);
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1, &LockHandle);
          for ( i = *(_DWORD *)(v7 + 1552); i != *(_DWORD *)(v7 + 1544); i = ((_BYTE)i + 1) & 0xF )
          {
            v14 = *(_QWORD *)(v7 + 8LL * i + 1560);
            if ( v14 )
            {
              if ( (*(_DWORD *)(v14 + 184) & 0x200) != 0
                || (v8 = *(_QWORD *)(v14 + 104), *(_BYTE *)(v8 + 188))
                || _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 184), 0, 0) )
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
            _InterlockedIncrement((volatile signed __int32 *)(v2 + 972));
            if ( _InterlockedIncrement((volatile signed __int32 *)(v7 + 2832)) == 1 )
            {
              *(_QWORD *)(v7 + 232) = 0LL;
              VidSchiSubmitPreemptionCommand(v7);
              _bittestandset64(&v4, v5);
            }
            else
            {
              _InterlockedDecrement((volatile signed __int32 *)(v7 + 2832));
              _bittestandset64(&v4, v5);
              _InterlockedDecrement((volatile signed __int32 *)(v2 + 972));
            }
          }
          v3 = *(_DWORD *)(v2 + 64);
          a1 = v2 + 1904;
          ++v5;
        }
        while ( v5 < v3 );
      }
      v10 = 0;
      if ( v3 )
      {
        do
        {
          v11 = *(_QWORD *)(v2 + 8LL * v10 + 440);
          if ( _bittest64(&v4, v10) )
          {
            if ( *(_DWORD *)(v11 + 2836) )
              VidSchiWaitForCompletePreemption(*(_QWORD *)(v2 + 8LL * v10 + 440));
            if ( (unsigned __int8)VidSchIsTDRPending(v2) )
              break;
          }
          if ( *(_BYTE *)(v2 + 52) )
          {
            v12 = *(_QWORD *)(v11 + 224);
            if ( v12 )
            {
              if ( (*(_DWORD *)(v12 + 184) & 0x100) != 0
                || (a1 = *(_QWORD *)(v12 + 104), *(_BYTE *)(a1 + 188))
                || _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 184), 0, 0) )
              {
                v13 = WdLogNewEntry5_WdEvent(a1, a2);
                *(_QWORD *)(v13 + 24) = v11;
                *(_QWORD *)(v13 + 32) = v12;
                WdLogEvent5_WdEvent(v13);
                VidSchiSwitchNodeFromContext(v12);
                if ( (unsigned __int8)VidSchIsTDRPending(v2) )
                  break;
              }
            }
          }
          ++v10;
        }
        while ( v10 < *(_DWORD *)(v2 + 64) );
      }
    }
    else
    {
      VidSchiWaitForEmptyHwQueue();
    }
  }
}
