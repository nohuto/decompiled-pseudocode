/*
 * XREFs of _GetKeyboardLayoutList @ 0x1C00D8D20
 * Callers:
 *     NtUserGetKeyboardLayoutList @ 0x1C00D8C90 (NtUserGetKeyboardLayoutList.c)
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 */

__int64 __fastcall GetKeyboardLayoutList(__int64 a1, int a2, _QWORD *a3)
{
  unsigned int v4; // r9d
  __int64 v5; // rdx
  __int64 v6; // r11
  _DWORD *v9; // rcx
  bool v10; // cf
  unsigned int v11; // ecx

  v4 = 0;
  if ( !a1 )
    return 0LL;
  v5 = *(_QWORD *)(a1 + 40);
  if ( !v5 )
    return 0LL;
  v6 = *(_QWORD *)(a1 + 40);
  if ( a2 )
  {
    do
    {
      if ( (*(_DWORD *)(v5 + 32) & 0x20000000) == 0 )
      {
        if ( !a2-- )
          return v4;
        ++v4;
        *a3++ = *(_QWORD *)(v5 + 40);
      }
      v5 = *(_QWORD *)(v5 + 16);
    }
    while ( v5 != v6 );
  }
  else
  {
    do
    {
      v9 = (_DWORD *)(v5 + 32);
      v5 = *(_QWORD *)(v5 + 16);
      v10 = (*v9 & 0x20000000) != 0;
      v11 = v4 + 1;
      if ( v10 )
        v11 = v4;
      v4 = v11;
    }
    while ( v5 != v6 );
  }
  return v4;
}
