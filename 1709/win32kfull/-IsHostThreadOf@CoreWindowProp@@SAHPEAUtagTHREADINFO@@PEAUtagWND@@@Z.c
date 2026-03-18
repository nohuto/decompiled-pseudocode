/*
 * XREFs of ?IsHostThreadOf@CoreWindowProp@@SAHPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x1C0120B14
 * Callers:
 *     xxxSetForegroundWindow2 @ 0x1C00CDBE4 (xxxSetForegroundWindow2.c)
 *     ?IsHostOrComponentThreadOf@CoreWindowProp@@SAHPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x1C0120AB4 (-IsHostOrComponentThreadOf@CoreWindowProp@@SAHPEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 * Callees:
 *     ?GetHost@CoreWindowProp@@SAPEAUtagWND@@PEAU2@@Z @ 0x1C00090EC (-GetHost@CoreWindowProp@@SAPEAUtagWND@@PEAU2@@Z.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z @ 0x1C005EBDC (-IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z.c)
 */

__int64 __fastcall CoreWindowProp::IsHostThreadOf(struct tagTHREADINFO *a1, struct tagWND *a2)
{
  unsigned int v4; // ebx
  struct tagWND *Host; // rax

  v4 = 0;
  if ( !(unsigned int)CoreWindowProp::IsComponent(a2) )
    return 0LL;
  Host = CoreWindowProp::GetHost(a2);
  if ( Host )
    return a1 == *((struct tagTHREADINFO **)Host + 2);
  return v4;
}
