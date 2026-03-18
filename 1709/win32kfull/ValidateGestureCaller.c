/*
 * XREFs of ValidateGestureCaller @ 0x1C01F9B38
 * Callers:
 *     NtUserInjectGesture @ 0x1C01E83E0 (NtUserInjectGesture.c)
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 */

__int64 __fastcall ValidateGestureCaller(__int64 a1, __int64 a2)
{
  __int64 v3; // r8
  __int64 v5; // rax
  __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rax

  v3 = *(_QWORD *)(a1 + 432);
  if ( v3 == grpdeskRitInput && v3 == *(_QWORD *)(a2 + 24) )
  {
    v5 = *(_QWORD *)(a2 + 16);
    v6 = gbEnforceUIPI;
    v7 = *(_QWORD *)(*(_QWORD *)(a1 + 400) + 832LL);
    v8 = *(_QWORD *)(*(_QWORD *)(v5 + 400) + 832LL);
    if ( !gbEnforceUIPI )
      return 1LL;
    if ( (unsigned int)v7 > (unsigned int)v8 )
      return 1LL;
    if ( (_DWORD)v7 == (_DWORD)v8 )
    {
      v9 = HIDWORD(v7);
      v10 = HIDWORD(v8);
      if ( (_DWORD)v9 == (_DWORD)v10 )
        return 1LL;
      v6 = 0xFFFFFFFFLL;
      if ( (_DWORD)v9 == -1 || (_DWORD)v10 == -1 )
        return 1LL;
    }
    UserSetLastError(5LL, v6);
    EtwTraceUIPIMsgError(*(_QWORD *)(a1 + 400), *(_QWORD *)(*(_QWORD *)(a2 + 16) + 400LL), 281LL, 0LL, 0LL);
  }
  else
  {
    UserSetLastError(5LL, a2);
  }
  return 0LL;
}
