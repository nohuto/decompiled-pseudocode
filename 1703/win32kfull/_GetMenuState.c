/*
 * XREFs of _GetMenuState @ 0x1C01128F0
 * Callers:
 *     ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x1C00408F0 (-xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z.c)
 *     ?xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z @ 0x1C01127C4 (-xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z.c)
 *     xxxHandleNCMouseGuys @ 0x1C01394E4 (xxxHandleNCMouseGuys.c)
 *     xxxMNLoop @ 0x1C02022C0 (xxxMNLoop.c)
 * Callees:
 *     MNLookUpItem @ 0x1C004192C (MNLookUpItem.c)
 */

__int64 __fastcall GetMenuState(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax
  unsigned int v3; // edx
  __int64 v4; // rax

  v2 = MNLookUpItem(a1, a2, 0, 0LL);
  if ( !v2 )
    return 0xFFFFFFFFLL;
  v3 = *(_DWORD *)v2 | *(_DWORD *)(v2 + 4);
  v4 = *(_QWORD *)(v2 + 16);
  if ( v4 )
    return (*(_DWORD *)(v4 + 68) << 8) + (v3 & 0xEF | 0x10);
  return v3;
}
