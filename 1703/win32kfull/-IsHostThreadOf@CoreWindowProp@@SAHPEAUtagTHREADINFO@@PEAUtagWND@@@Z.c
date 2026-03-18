/*
 * XREFs of ?IsHostThreadOf@CoreWindowProp@@SAHPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x1C0117260
 * Callers:
 *     xxxSetForegroundWindow2 @ 0x1C00B489C (xxxSetForegroundWindow2.c)
 *     xxxSetFocus @ 0x1C00B507C (xxxSetFocus.c)
 * Callees:
 *     ?GetHost@CoreWindowProp@@SAPEAUtagWND@@PEAU2@@Z @ 0x1C0004F34 (-GetHost@CoreWindowProp@@SAPEAUtagWND@@PEAU2@@Z.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z @ 0x1C0062854 (-IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z.c)
 */

__int64 __fastcall CoreWindowProp::IsHostThreadOf(struct tagTHREADINFO *a1, struct tagWND *a2)
{
  struct tagWND *v3; // rcx
  unsigned int v4; // ebx
  struct tagWND *Host; // rax

  v4 = 0;
  if ( !(unsigned int)CoreWindowProp::IsComponent(a2) )
    return 0LL;
  Host = CoreWindowProp::GetHost(v3);
  if ( Host )
    return a1 == *((struct tagTHREADINFO **)Host + 2);
  return v4;
}
