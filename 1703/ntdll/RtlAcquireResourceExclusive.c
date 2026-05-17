/*
 * XREFs of RtlAcquireResourceExclusive @ 0x180073980
 * Callers:
 *     RtlConvertSharedToExclusive @ 0x180073840 (RtlConvertSharedToExclusive.c)
 * Callees:
 *     RtlRaiseStatus @ 0x180004BD0 (RtlRaiseStatus.c)
 *     DbgPrintEx @ 0x18005FEB0 (DbgPrintEx.c)
 *     sub_180073B48 @ 0x180073B48 (sub_180073B48.c)
 *     ZwWaitForSingleObject @ 0x1800A5380 (ZwWaitForSingleObject.c)
 *     sub_1800E758C @ 0x1800E758C (sub_1800E758C.c)
 */

char __fastcall RtlAcquireResourceExclusive(__int64 a1, char a2)
{
  int v2; // r9d
  int v6; // ebp
  __int64 *v7; // rsi
  int v8; // eax

  v2 = *(_DWORD *)(a1 + 68);
  if ( v2 < 0 && *(HANDLE *)(a1 + 72) == NtCurrentTeb()->ClientId.UniqueThread )
  {
    _InterlockedAdd((volatile signed __int32 *)(a1 + 68), 0xFFFFFFFF);
    return 1;
  }
  else
  {
    while ( 1 )
    {
      while ( !v2 )
      {
        v2 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 68), -1, 0);
        if ( !v2 )
        {
          *(_QWORD *)(a1 + 72) = NtCurrentTeb()->ClientId.UniqueThread;
          return 1;
        }
      }
      if ( !a2 )
        break;
      ++*(_DWORD *)(*(_QWORD *)(a1 + 88) + 36LL);
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 64));
      if ( *(_DWORD *)(a1 + 68) || !(unsigned int)sub_180073B48() )
      {
        v6 = 0;
        while ( 1 )
        {
          v7 = 0LL;
          if ( (*(_BYTE *)(a1 + 80) & 1) == 0 )
            v7 = &qword_18015AEA0;
          v8 = ZwWaitForSingleObject(*(_QWORD *)(a1 + 56), 0LL, v7);
          if ( v8 != 258 )
            break;
          DbgPrintEx(
            101,
            0,
            "RTL: Acquire Exclusive Sem Timeout %d (%I64u secs)\n",
            v6,
            ((unsigned __int64)(((unsigned __int128)(*v7 * (__int128)0x29406B2A1A85BD43LL) >> 64) - *v7) >> 63)
          + ((__int64)(((unsigned __int128)(*v7 * (__int128)0x29406B2A1A85BD43LL) >> 64) - *v7) >> 23));
          DbgPrintEx(101, 0, "RTL: Resource at %p\n", (const void *)a1);
          if ( (unsigned int)++v6 > 2 )
            sub_1800E758C(a1);
          DbgPrintEx(101, 0, "RTL: Re-Waiting\n");
        }
        if ( v8 < 0 )
          RtlRaiseStatus(v8);
        v2 = *(_DWORD *)(a1 + 68);
      }
    }
    return 0;
  }
}
