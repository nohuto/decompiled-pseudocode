/*
 * XREFs of ?SetTopmostEnum@@YAXPEAUtagWND@@HH@Z @ 0x1C0054300
 * Callers:
 *     ?ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z @ 0x1C0056D64 (-ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C0068CCC (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 * Callees:
 *     ?SetTopmost@@YAXPEAUtagWND@@HH@Z @ 0x1C0055B48 (-SetTopmost@@YAXPEAUtagWND@@HH@Z.c)
 *     ?GetRootOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0119290 (-GetRootOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
 */

void __fastcall SetTopmostEnum(struct tagWND *a1, int a2, int a3)
{
  int v3; // r9d
  int v4; // r10d
  struct tagWND *RootOwner; // rax

  v3 = a3;
  v4 = a2;
  RootOwner = a1;
  if ( !a2 && !a3 )
    RootOwner = GetRootOwner(a1);
  SetTopmost(RootOwner, v4, v3);
}
