/*
 * XREFs of EditionGetTopLevelWindowWithComponentUI @ 0x1C01D2B30
 * Callers:
 *     <none>
 * Callees:
 *     _GetTopLevelWindow @ 0x1C0062670 (_GetTopLevelWindow.c)
 *     ?GetTopLevelHost@CoreWindowProp@@SAPEAUtagWND@@PEAU2@@Z @ 0x1C00B46D4 (-GetTopLevelHost@CoreWindowProp@@SAPEAUtagWND@@PEAU2@@Z.c)
 */

__int64 __fastcall EditionGetTopLevelWindowWithComponentUI(__int64 a1)
{
  struct tagWND *TopLevelWindow; // rax
  struct tagWND *v2; // rbx
  struct tagWND *TopLevelHost; // rax
  __int64 v4; // rax

  TopLevelWindow = (struct tagWND *)GetTopLevelWindow(a1);
  v2 = TopLevelWindow;
  if ( TopLevelWindow )
  {
    TopLevelHost = CoreWindowProp::GetTopLevelHost(TopLevelWindow);
    v4 = GetTopLevelWindow((__int64)TopLevelHost);
    if ( v4 )
      return v4;
  }
  return (__int64)v2;
}
