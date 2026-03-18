/*
 * XREFs of NtGdiChangeGhostFont @ 0x1C028CF00
 * Callers:
 *     <none>
 * Callees:
 *     GreChangeGhostFont @ 0x1C02559D0 (GreChangeGhostFont.c)
 */

__int64 __fastcall NtGdiChangeGhostFont(void **a1, int a2)
{
  unsigned int v3; // ebx
  void **v4; // rcx

  v3 = 1;
  v4 = a1 + 1;
  if ( v4 < a1 || (unsigned __int64)v4 > W32UserProbeAddress )
    *W32UserProbeAddress = 0;
  if ( !(unsigned int)GreChangeGhostFont(*a1, a2) )
    return 0;
  return v3;
}
