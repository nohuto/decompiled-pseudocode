/*
 * XREFs of _SetKeyboardState @ 0x1C00F3AE0
 * Callers:
 *     NtUserSetKeyboardState @ 0x1C00F3A30 (NtUserSetKeyboardState.c)
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 */

__int64 __fastcall SetKeyboardState(char *a1)
{
  char *v1; // r8
  __int64 v2; // rdi
  int i; // edx
  _BYTE *v5; // r9
  int v6; // ecx
  char v7; // al
  int v8; // ecx
  char v9; // al
  int v10; // ecx

  v1 = a1;
  v2 = *(_QWORD *)(gptiCurrent + 384LL);
  for ( i = 0; i < 256; ++i )
  {
    v5 = (_BYTE *)(((unsigned __int64)(unsigned __int8)i >> 2) + v2 + 192);
    v6 = (unsigned __int8)*v5;
    v7 = 2 * (i & 3);
    if ( *v1 < 0 )
      v8 = v6 | (1 << v7);
    else
      v8 = v6 & ~(1 << v7);
    *v5 = v8;
    v9 = 2 * (i & 3) + 1;
    if ( (*v1 & 1) != 0 )
      v10 = (unsigned __int8)v8 | (1 << v9);
    else
      v10 = (unsigned __int8)v8 & ~(1 << v9);
    *v5 = v10;
    ++v1;
  }
  if ( v1 != a1 )
    ++*(_DWORD *)(gpsi + 5688LL);
  return 1LL;
}
