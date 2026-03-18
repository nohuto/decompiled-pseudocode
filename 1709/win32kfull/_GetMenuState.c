/*
 * XREFs of _GetMenuState @ 0x1C0046708
 * Callers:
 *     ?xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z @ 0x1C00465DC (-xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z.c)
 *     ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x1C0096704 (-xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z.c)
 *     xxxHandleNCMouseGuys @ 0x1C0140028 (xxxHandleNCMouseGuys.c)
 *     xxxMNLoop @ 0x1C0203CEC (xxxMNLoop.c)
 * Callees:
 *     MNLookUpItem @ 0x1C0077DF8 (MNLookUpItem.c)
 */

__int64 __fastcall GetMenuState(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v3; // edx
  __int64 v4; // rax

  v2 = MNLookUpItem(a1, a2, 0LL, 0LL);
  if ( !v2 )
    return 0xFFFFFFFFLL;
  v3 = *(_DWORD *)v2 | *(_DWORD *)(v2 + 4);
  v4 = *(_QWORD *)(v2 + 16);
  if ( v4 )
    return (*(_DWORD *)(v4 + 68) << 8) + (v3 & 0xEF | 0x10);
  return v3;
}
