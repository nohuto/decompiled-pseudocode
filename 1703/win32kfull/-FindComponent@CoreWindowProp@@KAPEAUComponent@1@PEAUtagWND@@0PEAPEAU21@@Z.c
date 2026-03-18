/*
 * XREFs of ?FindComponent@CoreWindowProp@@KAPEAUComponent@1@PEAUtagWND@@0PEAPEAU21@@Z @ 0x1C0003AD0
 * Callers:
 *     ?RemoveComponentInternal@CoreWindowProp@@KAJPEAUtagWND@@0@Z @ 0x1C0003870 (-RemoveComponentInternal@CoreWindowProp@@KAJPEAUtagWND@@0@Z.c)
 *     ?AddComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1C0003A48 (-AddComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z.c)
 * Callees:
 *     ??$GetProp@VCoreWindowProp@@@CWindowProp@@SAHQEAUtagWND@@PEAPEAVCoreWindowProp@@@Z @ 0x1C006288C (--$GetProp@VCoreWindowProp@@@CWindowProp@@SAHQEAUtagWND@@PEAPEAVCoreWindowProp@@@Z.c)
 */

struct CoreWindowProp::Component *__fastcall CoreWindowProp::FindComponent(
        struct tagWND *a1,
        struct tagWND *a2,
        struct CoreWindowProp::Component **a3)
{
  struct CoreWindowProp::Component *v5; // rcx
  struct CoreWindowProp::Component *result; // rax
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  if ( a3 )
    *a3 = 0LL;
  if ( (unsigned int)CWindowProp::GetProp<CoreWindowProp>(a1, &v7) )
  {
    v5 = 0LL;
    for ( result = *(struct CoreWindowProp::Component **)(v7 + 32);
          result;
          result = *(struct CoreWindowProp::Component **)result )
    {
      if ( a2 == *((struct tagWND **)result + 1) )
      {
        if ( a3 )
          *a3 = v5;
        return result;
      }
      v5 = result;
    }
  }
  return 0LL;
}
