/*
 * XREFs of ?IsHostOrComponentThreadOf@CoreWindowProp@@SAHPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x1C0120AB4
 * Callers:
 *     xxxSetFocus @ 0x1C0085260 (xxxSetFocus.c)
 * Callees:
 *     ?IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z @ 0x1C005EBDC (-IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z.c)
 *     ??$GetProp@VCoreWindowProp@@@CWindowProp@@SAHQEAUtagWND@@PEAPEAVCoreWindowProp@@@Z @ 0x1C00622F0 (--$GetProp@VCoreWindowProp@@@CWindowProp@@SAHQEAUtagWND@@PEAPEAVCoreWindowProp@@@Z.c)
 *     ?IsHostThreadOf@CoreWindowProp@@SAHPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x1C0120B14 (-IsHostThreadOf@CoreWindowProp@@SAHPEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 */

__int64 __fastcall CoreWindowProp::IsHostOrComponentThreadOf(struct tagTHREADINFO *a1, struct tagWND *a2)
{
  unsigned int v4; // ebx
  __int64 **i; // rdi
  __int64 v7; // rsi
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  if ( CoreWindowProp::IsHostThreadOf(a1, a2) )
  {
    return 1;
  }
  else if ( (unsigned int)CWindowProp::GetProp<CoreWindowProp>((__int64)a2, &v8) )
  {
    for ( i = *(__int64 ***)(v8 + 32); i; i = (__int64 **)*i )
    {
      v7 = (__int64)i[1];
      if ( v7
        && (unsigned int)CoreWindowProp::IsComponent((struct tagWND *)i[1])
        && a1 == *(struct tagTHREADINFO **)(v7 + 16) )
      {
        return 1;
      }
    }
  }
  return v4;
}
