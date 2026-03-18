/*
 * XREFs of UserGetHwnd @ 0x1C01C2D20
 * Callers:
 *     ?LookUpWndobjs@@YAHPEAVDCOBJ@@0PEAPEAUHDC__@@H@Z @ 0x1C0254F18 (-LookUpWndobjs@@YAHPEAVDCOBJ@@0PEAPEAUHDC__@@H@Z.c)
 *     ?vConstructor@DEVLOCKOBJ_WNDOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0255764 (-vConstructor@DEVLOCKOBJ_WNDOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     NtGdiSetPixelFormat @ 0x1C0298AC0 (NtGdiSetPixelFormat.c)
 * Callees:
 *     ?PwndFromHDC@@YAPEAUtagWND@@QEAUHDC__@@@Z @ 0x1C0048DE4 (-PwndFromHDC@@YAPEAUtagWND@@QEAUHDC__@@@Z.c)
 *     _GetProp @ 0x1C00624E0 (_GetProp.c)
 */

__int64 __fastcall UserGetHwnd(__int64 *a1, _QWORD *a2, __int64 *a3)
{
  unsigned int v6; // edi
  struct tagWND *v7; // rax
  __int16 v8; // dx
  unsigned int v9; // r8d

  v6 = 0;
  GreLockVisRgnShared(*(_QWORD *)(gpDispInfo + 32LL));
  v7 = PwndFromHDC(a1);
  if ( v7 )
  {
    v8 = atomWndObj;
    *a2 = *(_QWORD *)v7;
    *a3 = GetProp((__int64)v7, v8, 1);
    v6 = v9;
  }
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 32LL));
  return v6;
}
