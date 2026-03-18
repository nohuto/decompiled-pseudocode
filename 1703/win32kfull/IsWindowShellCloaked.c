/*
 * XREFs of IsWindowShellCloaked @ 0x1C0017F98
 * Callers:
 *     xxxSetParentWorker @ 0x1C0018034 (xxxSetParentWorker.c)
 *     xxxSetWindowData @ 0x1C004EA08 (xxxSetWindowData.c)
 *     xxxTrackPopupMenuEx @ 0x1C0213DB0 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     _GetWindowCompositionInfo @ 0x1C0061E00 (_GetWindowCompositionInfo.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z @ 0x1C0062854 (-IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z.c)
 *     ?GetTopLevelHost@CoreWindowProp@@SAPEAUtagWND@@PEAU2@@Z @ 0x1C00B46D4 (-GetTopLevelHost@CoreWindowProp@@SAPEAUtagWND@@PEAU2@@Z.c)
 */

__int64 __fastcall IsWindowShellCloaked(struct tagWND *a1, int a2)
{
  struct tagWND *TopLevelHost; // rbx
  unsigned int v4; // edi
  struct tagWND *v5; // rcx
  _DWORD v7[14]; // [rsp+20h] [rbp-38h] BYREF

  TopLevelHost = a1;
  v4 = 0;
  while ( 1 )
  {
    if ( (unsigned int)CoreWindowProp::IsComponent(a1) )
      TopLevelHost = CoreWindowProp::GetTopLevelHost(v5);
    if ( !(unsigned int)GetWindowCompositionInfo(TopLevelHost, v7) )
      break;
    if ( (v7[0] & 0x800) != 0 )
      return 1;
    if ( a2 )
      return v4;
    TopLevelHost = (struct tagWND *)*((_QWORD *)TopLevelHost + 13);
    a1 = TopLevelHost;
  }
  return v4;
}
