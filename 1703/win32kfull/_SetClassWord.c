/*
 * XREFs of _SetClassWord @ 0x1C01C3160
 * Callers:
 *     NtUserSetClassWord @ 0x1C01DF1B0 (NtUserSetClassWord.c)
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 */

__int64 __fastcall SetClassWord(__int64 a1, __int64 a2, __int16 a3)
{
  __int64 v4; // rdi
  unsigned int v6; // r8d
  __int64 v7; // rcx
  __int64 result; // rax
  _QWORD *i; // rcx

  v4 = (int)a2;
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 16) + 376LL) != PsGetCurrentProcessWin32Process(a1, a2) )
  {
    UserSetLastError(5LL);
    return 0LL;
  }
  v6 = v4;
  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 168) + 64LL);
  if ( (int)v4 < 0 )
    v6 = -1;
  if ( (int)v4 >> 31 == -1 || v6 + 2 < v6 || v6 + 2 > *(_DWORD *)(v7 + 104) )
  {
    UserSetLastError(1413LL);
    return 0LL;
  }
  result = *(unsigned __int16 *)(v4 + v7 + 168);
  *(_WORD *)(v4 + v7 + 168) = a3;
  for ( i = *(_QWORD **)(v7 + 72); i; i = (_QWORD *)*i )
    *(_WORD *)((char *)i + v4 + 168) = a3;
  return result;
}
