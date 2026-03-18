/*
 * XREFs of ?GetNextComponentWindow@CoreWindowProp@@SAPEAUtagWND@@PEAU2@0@Z @ 0x1C020BF98
 * Callers:
 *     zzzSetWindowCompositionCloak @ 0x1C00578F4 (zzzSetWindowCompositionCloak.c)
 *     CoreWindowProp::ForEachDescendantInComponentHierarchy__lambda_3f591c061a26dc8c636baef7d4393c9a___ @ 0x1C010F3CC (CoreWindowProp--ForEachDescendantInComponentHierarchy__lambda_3f591c061a26dc8c636baef7d4393c9a__.c)
 * Callees:
 *     ??$GetProp@VCoreWindowProp@@@CWindowProp@@SAHQEAUtagWND@@PEAPEAVCoreWindowProp@@@Z @ 0x1C00622F0 (--$GetProp@VCoreWindowProp@@@CWindowProp@@SAHQEAUtagWND@@PEAPEAVCoreWindowProp@@@Z.c)
 */

struct tagWND *__fastcall CoreWindowProp::GetNextComponentWindow(struct tagWND *a1, struct tagWND *a2)
{
  int v3; // eax
  __int64 v4; // rcx
  struct tagWND **v5; // r8
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  v3 = CWindowProp::GetProp<CoreWindowProp>((__int64)a1, &v7);
  v4 = 0LL;
  if ( !v3 )
    return 0LL;
  v5 = *(struct tagWND ***)(v7 + 32);
  if ( a2 )
  {
    while ( v5 )
    {
      if ( a2 == v5[1] )
      {
        if ( *v5 )
          return (struct tagWND *)*((_QWORD *)*v5 + 1);
        return (struct tagWND *)v4;
      }
      v5 = (struct tagWND **)*v5;
    }
    return 0LL;
  }
  if ( v5 )
    return v5[1];
  return (struct tagWND *)v4;
}
