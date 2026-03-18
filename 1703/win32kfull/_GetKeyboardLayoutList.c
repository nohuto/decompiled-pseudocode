/*
 * XREFs of _GetKeyboardLayoutList @ 0x1C00109B8
 * Callers:
 *     NtUserGetKeyboardLayoutList @ 0x1C0010930 (NtUserGetKeyboardLayoutList.c)
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 */

__int64 __fastcall GetKeyboardLayoutList(__int64 a1, int a2, _QWORD *a3)
{
  unsigned int v4; // r9d
  __int64 v5; // rdx
  __int64 v6; // r11

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
      if ( (*(_DWORD *)(v5 + 32) & 0x20000000) == 0 )
        ++v4;
      v5 = *(_QWORD *)(v5 + 16);
    }
    while ( v5 != v6 );
  }
  return v4;
}
