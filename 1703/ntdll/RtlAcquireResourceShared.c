/*
 * XREFs of RtlAcquireResourceShared @ 0x1800738A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x180004BD0 (RtlRaiseStatus.c)
 *     DbgPrintEx @ 0x18005FEB0 (DbgPrintEx.c)
 *     sub_180073B48 @ 0x180073B48 (sub_180073B48.c)
 *     ZwWaitForSingleObject @ 0x1800A5380 (ZwWaitForSingleObject.c)
 *     sub_1800E758C @ 0x1800E758C (sub_1800E758C.c)
 */

char __fastcall RtlAcquireResourceShared(__int64 a1, char a2)
{
  signed __int32 v2; // r9d
  bool v5; // zf
  signed __int32 v6; // eax
  int v8; // esi
  __int64 *v9; // rdi
  int v10; // eax

  v2 = *(_DWORD *)(a1 + 68);
  if ( v2 >= 0 )
  {
LABEL_2:
    v6 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 68), v2 + 1, v2);
    v5 = v2 == v6;
    v2 = v6;
    if ( !v5 )
      goto LABEL_6;
    return 1;
  }
  if ( *(HANDLE *)(a1 + 72) != NtCurrentTeb()->ClientId.UniqueThread )
  {
LABEL_6:
    while ( v2 < 0 )
    {
      if ( !a2 )
        return 0;
      ++*(_DWORD *)(*(_QWORD *)(a1 + 88) + 36LL);
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 48));
      if ( *(int *)(a1 + 68) < 0 || !(unsigned int)sub_180073B48() )
      {
        v8 = 0;
        while ( 1 )
        {
          v9 = 0LL;
          if ( (*(_BYTE *)(a1 + 80) & 1) == 0 )
            v9 = &qword_18015AEA0;
          v10 = ZwWaitForSingleObject(*(_QWORD *)(a1 + 40), 0LL, v9);
          if ( v10 != 258 )
            break;
          DbgPrintEx(
            101,
            0,
            "RTL: Acquire Shared Sem Timeout %d(%I64u secs)\n",
            v8,
            ((unsigned __int64)(((unsigned __int128)(*v9 * (__int128)0x29406B2A1A85BD43LL) >> 64) - *v9) >> 63)
          + ((__int64)(((unsigned __int128)(*v9 * (__int128)0x29406B2A1A85BD43LL) >> 64) - *v9) >> 23));
          DbgPrintEx(101, 0, "RTL: Resource at %p\n", (const void *)a1);
          if ( (unsigned int)++v8 > 2 )
            sub_1800E758C(a1);
          DbgPrintEx(101, 0, "RTL: Re-Waiting\n");
        }
        if ( v10 < 0 )
          RtlRaiseStatus(v10);
        v2 = *(_DWORD *)(a1 + 68);
      }
    }
    goto LABEL_2;
  }
  _InterlockedDecrement((volatile signed __int32 *)(a1 + 68));
  return 1;
}
