/*
 * XREFs of TpReleaseTimer @ 0x180058900
 * Callers:
 *     RtlDeleteTimerQueueEx @ 0x1800550D0 (RtlDeleteTimerQueueEx.c)
 *     sub_1800569F0 @ 0x1800569F0 (sub_1800569F0.c)
 *     RtlDeleteTimer @ 0x180057EA0 (RtlDeleteTimer.c)
 * Callees:
 *     sub_180025DA4 @ 0x180025DA4 (sub_180025DA4.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_18002888C @ 0x18002888C (sub_18002888C.c)
 *     sub_180058A78 @ 0x180058A78 (sub_180058A78.c)
 *     sub_180058AD0 @ 0x180058AD0 (sub_180058AD0.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TpReleaseTimer(__int64 a1)
{
  int v2; // edi
  __int64 result; // rax
  unsigned __int64 v4; // rdx
  unsigned __int64 *v5; // r8
  __int64 v6; // r9
  __int64 (__fastcall *v7)(__int64); // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v2 = 1;
  result = sub_180025DA4((struct _PEB_LDR_DATA *)a1, 1LL, 0LL);
  if ( (_DWORD)result )
  {
    result = sub_180058A78(a1, 1LL);
    if ( (_DWORD)result )
    {
      *(_QWORD *)(a1 + 184) = retaddr;
      RtlAcquireSRWLockExclusive(a1 + 240, v4, v5, v6);
      ++*(_BYTE *)(a1 + 355);
      if ( sub_18002888C(a1, (volatile signed __int64 *)(*(_QWORD *)(a1 + 144) + 112LL), 0) )
        v2 = 2;
      result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)a1, -v2);
      if ( (_DWORD)result == v2 )
      {
        v7 = **(__int64 (__fastcall ***)(__int64))(a1 + 8);
        if ( v7 == sub_180058AD0 )
          return sub_180058AD0(a1);
        else
          return v7(a1);
      }
    }
  }
  return result;
}
