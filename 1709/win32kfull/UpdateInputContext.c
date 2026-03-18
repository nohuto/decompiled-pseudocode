/*
 * XREFs of UpdateInputContext @ 0x1C01089FC
 * Callers:
 *     NtUserUpdateInputContext @ 0x1C0108970 (NtUserUpdateInputContext.c)
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 */

__int64 __fastcall UpdateInputContext(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rcx

  if ( *(_QWORD *)(*(_QWORD *)(a1 + 16) + 400LL) != *(_QWORD *)(gptiCurrent + 400LL) )
  {
    v5 = 5LL;
LABEL_11:
    UserSetLastError(v5, a2);
    return 0LL;
  }
  if ( !(_DWORD)a2 )
  {
    v4 = *(_QWORD *)(a1 + 40);
    if ( !*(_QWORD *)(v4 + 16) )
    {
      *(_QWORD *)(v4 + 16) = a3;
      return 1LL;
    }
    v5 = 1247LL;
    goto LABEL_11;
  }
  if ( (_DWORD)a2 == 1 )
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 40) + 24LL) = a3;
    return 1LL;
  }
  return 0LL;
}
