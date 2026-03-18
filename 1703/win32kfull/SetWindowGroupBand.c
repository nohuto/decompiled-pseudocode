/*
 * XREFs of SetWindowGroupBand @ 0x1C001ED20
 * Callers:
 *     zzzImeSetFutureOwner @ 0x1C001C368 (zzzImeSetFutureOwner.c)
 *     zzzImeSetOwnerWindow @ 0x1C001EA68 (zzzImeSetOwnerWindow.c)
 *     ?ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z @ 0x1C001EE80 (-ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z.c)
 *     xxxEndDeferWindowPosEx @ 0x1C006407C (xxxEndDeferWindowPosEx.c)
 *     xxxUpdateShadowZorder @ 0x1C020B794 (xxxUpdateShadowZorder.c)
 * Callees:
 *     SetOrClrWF @ 0x1C001C5B4 (SetOrClrWF.c)
 *     ?HasOwnedWindowInTree@@YAHPEAUtagWND@@0@Z @ 0x1C001EE30 (-HasOwnedWindowInTree@@YAHPEAUtagWND@@0@Z.c)
 *     UnlinkWindow @ 0x1C005FA3C (UnlinkWindow.c)
 *     LinkWindow @ 0x1C00614C0 (LinkWindow.c)
 *     GetBandOrdinal @ 0x1C00619A4 (GetBandOrdinal.c)
 *     ?SetWindowTreeBand@@YAXPEAUtagWND@@W4ZBID@@@Z @ 0x1C0100B34 (-SetWindowTreeBand@@YAXPEAUtagWND@@W4ZBID@@@Z.c)
 *     ?GetRootOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0105A30 (-GetRootOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
 */

__int64 __fastcall SetWindowGroupBand(struct tagWND *a1, unsigned int a2, int a3)
{
  struct tagWND *RootOwner; // rdi
  unsigned int v5; // ebp
  __int64 v6; // rbx
  __int64 result; // rax
  __int64 v8; // rsi

  RootOwner = a1;
  if ( !a3 )
    RootOwner = GetRootOwner(a1);
  v5 = *((_DWORD *)RootOwner + 80);
  GetBandOrdinal(v5);
  GetBandOrdinal(a2);
  v6 = (__int64)RootOwner;
  for ( result = *((_QWORD *)RootOwner + 12); result && *(_DWORD *)(result + 320) == v5; result = *(_QWORD *)(result + 96) )
    v6 = result;
  do
  {
    if ( *(_DWORD *)(v6 + 320) != v5 )
      break;
    v8 = *(_QWORD *)(v6 + 88);
    if ( (struct tagWND *)v6 != RootOwner )
    {
      result = HasOwnedWindowInTree((struct tagWND *)v6, RootOwner);
      if ( !(_DWORD)result )
        continue;
    }
    UnlinkWindow(v6, *(_QWORD *)(v6 + 104));
    if ( a2 != 1 )
    {
      SetOrClrWF(0, (_DWORD *)v6, 0x304u, 1);
      SetOrClrWF(1, (_DWORD *)v6, 0x808u, 1);
    }
    SetWindowTreeBand(v6, a2);
    result = LinkWindow((struct tagWND *)v6);
    v6 = v8;
  }
  while ( v8 );
  return result;
}
