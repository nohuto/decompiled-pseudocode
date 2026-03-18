/*
 * XREFs of ?IsHost@CoreWindowProp@@SAHPEAUtagWND@@@Z @ 0x1C0057C4C
 * Callers:
 *     xxxActivateThisWindow @ 0x1C0054748 (xxxActivateThisWindow.c)
 *     zzzSetWindowCompositionCloak @ 0x1C00578F4 (zzzSetWindowCompositionCloak.c)
 *     CoreWindowProp::ForEachDescendantInComponentHierarchy__lambda_3f591c061a26dc8c636baef7d4393c9a___ @ 0x1C010F3CC (CoreWindowProp--ForEachDescendantInComponentHierarchy__lambda_3f591c061a26dc8c636baef7d4393c9a__.c)
 * Callees:
 *     ??$GetProp@VCoreWindowProp@@@CWindowProp@@SAHQEAUtagWND@@PEAPEAVCoreWindowProp@@@Z @ 0x1C00622F0 (--$GetProp@VCoreWindowProp@@@CWindowProp@@SAHQEAUtagWND@@PEAPEAVCoreWindowProp@@@Z.c)
 */

__int64 __fastcall CoreWindowProp::IsHost(struct tagWND *a1)
{
  unsigned int v1; // ebx
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  if ( (unsigned int)CWindowProp::GetProp<CoreWindowProp>(a1, &v3) )
    return *(unsigned int *)(v3 + 16);
  return v1;
}
