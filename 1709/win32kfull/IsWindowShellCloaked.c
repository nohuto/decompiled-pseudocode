/*
 * XREFs of IsWindowShellCloaked @ 0x1C00C8B24
 * Callers:
 *     xxxSetWindowData @ 0x1C00A40EC (xxxSetWindowData.c)
 *     xxxSetParentWorker @ 0x1C00C8434 (xxxSetParentWorker.c)
 *     xxxTrackPopupMenuEx @ 0x1C0214E34 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     ?GetTopLevelHost@CoreWindowProp@@SAPEAUtagWND@@PEAU2@@Z @ 0x1C005D1E0 (-GetTopLevelHost@CoreWindowProp@@SAPEAUtagWND@@PEAU2@@Z.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z @ 0x1C005EBDC (-IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z.c)
 *     _GetWindowCompositionInfo @ 0x1C0065464 (_GetWindowCompositionInfo.c)
 */

__int64 __fastcall IsWindowShellCloaked(struct tagWND *a1, int a2)
{
  struct tagWND *TopLevelHost; // rbx
  unsigned int v4; // edi
  _DWORD v6[14]; // [rsp+20h] [rbp-38h] BYREF

  TopLevelHost = a1;
  v4 = 0;
  while ( 1 )
  {
    if ( (unsigned int)CoreWindowProp::IsComponent(a1) )
      TopLevelHost = CoreWindowProp::GetTopLevelHost(TopLevelHost);
    if ( !(unsigned int)GetWindowCompositionInfo((__int64)TopLevelHost, (__int64)v6) )
      break;
    if ( (v6[0] & 0x800) != 0 )
      return 1;
    if ( a2 )
      return v4;
    TopLevelHost = (struct tagWND *)*((_QWORD *)TopLevelHost + 13);
    a1 = TopLevelHost;
  }
  return v4;
}
