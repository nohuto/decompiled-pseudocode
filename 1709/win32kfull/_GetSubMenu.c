/*
 * XREFs of _GetSubMenu @ 0x1C007C554
 * Callers:
 *     xxxGetSysMenu @ 0x1C0046740 (xxxGetSysMenu.c)
 *     xxxSetSysMenu @ 0x1C007AD30 (xxxSetSysMenu.c)
 *     xxxGetSystemMenu @ 0x1C007C624 (xxxGetSystemMenu.c)
 *     xxxMNKeyDown @ 0x1C0207450 (xxxMNKeyDown.c)
 *     ?xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z @ 0x1C020FE4C (-xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z.c)
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
