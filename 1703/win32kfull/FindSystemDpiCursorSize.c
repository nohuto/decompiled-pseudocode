/*
 * XREFs of FindSystemDpiCursorSize @ 0x1C0049920
 * Callers:
 *     NtUserDrawIconEx @ 0x1C0044B50 (NtUserDrawIconEx.c)
 *     NtUserGetIconInfo @ 0x1C00483C0 (NtUserGetIconInfo.c)
 *     NtUserGetIconSize @ 0x1C00F47F0 (NtUserGetIconSize.c)
 *     NtUserGetCursorFrameInfo @ 0x1C010B080 (NtUserGetCursorFrameInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FindSystemDpiCursorSize(__int64 a1)
{
  unsigned __int16 v1; // ax
  int v2; // edx
  __int64 result; // rax

  v1 = *(_WORD *)(gpsi + 8678LL);
  if ( v1 >= 0x90u )
  {
    if ( v1 >= 0xC0u )
    {
      if ( v1 >= 0x120u )
        v2 = v1 < 0x180u ? 96 : 128;
      else
        v2 = 64;
    }
    else
    {
      v2 = 48;
    }
  }
  else
  {
    v2 = 32;
  }
  result = *(_QWORD *)(a1 + 48);
  if ( !result )
    return a1;
  do
  {
    if ( *(_DWORD *)(result + 76) == v2 )
      break;
    result = *(_QWORD *)(result + 40);
  }
  while ( result );
  if ( !result )
    return a1;
  return result;
}
