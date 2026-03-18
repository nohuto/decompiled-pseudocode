/*
 * XREFs of _GetSubMenu @ 0x1C00C283C
 * Callers:
 *     xxxGetSysMenu @ 0x1C00C1A64 (xxxGetSysMenu.c)
 *     xxxGetSystemMenu @ 0x1C00C1EA0 (xxxGetSystemMenu.c)
 *     xxxSetSysMenu @ 0x1C00C1FC0 (xxxSetSysMenu.c)
 *     xxxMNKeyDown @ 0x1C020589C (xxxMNKeyDown.c)
 *     ?xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z @ 0x1C020E620 (-xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetSubMenu(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  result = 0LL;
  if ( *(_DWORD *)(a1 + 68) )
  {
    v2 = *(_QWORD *)(a1 + 96);
    if ( *(_QWORD *)(v2 + 16) )
      return *(_QWORD *)(v2 + 16);
  }
  return result;
}
