/*
 * XREFs of _SetClassWord @ 0x1C01C5E7C
 * Callers:
 *     NtUserSetClassWord @ 0x1C01EB2C0 (NtUserSetClassWord.c)
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 */

__int64 __fastcall SetClassWord(__int64 a1, int a2, __int16 a3)
{
  __int64 v4; // rdi
  __int64 v6; // rdx
  __int64 v7; // rdx
  unsigned int v8; // r8d
  __int64 v9; // rcx
  unsigned int v10; // eax
  __int64 result; // rax
  _QWORD *i; // rcx

  v4 = a2;
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 16) + 400LL) != PsGetCurrentProcessWin32Process(a1) )
  {
    UserSetLastError(5LL, v6);
    return 0LL;
  }
  v7 = 0xFFFFFFFFLL;
  v8 = v4;
  v9 = *(_QWORD *)(*(_QWORD *)(a1 + 168) + 64LL);
  if ( (int)v4 < 0 )
    v8 = -1;
  if ( (int)v4 >> 31 == -1 || (v10 = v8 + 2, v8 + 2 < v8) || (v7 = v10, v10 > *(_DWORD *)(v9 + 112)) )
  {
    UserSetLastError(1413LL, v7);
    return 0LL;
  }
  result = *(unsigned __int16 *)(v4 + v9 + 176);
  *(_WORD *)(v4 + v9 + 176) = a3;
  for ( i = *(_QWORD **)(v9 + 72); i; i = (_QWORD *)*i )
    *(_WORD *)((char *)i + v4 + 176) = a3;
  return result;
}
