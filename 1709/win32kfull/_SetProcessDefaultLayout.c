/*
 * XREFs of _SetProcessDefaultLayout @ 0x1C01B5710
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 */

__int64 __fastcall SetProcessDefaultLayout(__int64 a1, __int64 a2)
{
  if ( (a1 & 0xFFFFFFF8) != 0 )
  {
    UserSetLastError(87LL, a2);
    return 0LL;
  }
  else
  {
    *(_DWORD *)(PsGetCurrentProcessWin32Process(a1) + 780) = a1;
    return 1LL;
  }
}
