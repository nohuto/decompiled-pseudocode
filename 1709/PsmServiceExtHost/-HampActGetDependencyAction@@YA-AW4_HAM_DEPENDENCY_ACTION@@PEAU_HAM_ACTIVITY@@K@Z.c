/*
 * XREFs of ?HampActGetDependencyAction@@YA?AW4_HAM_DEPENDENCY_ACTION@@PEAU_HAM_ACTIVITY@@K@Z @ 0x180047690
 * Callers:
 *     ?HampDepGroupEvaluateDependencies@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_LIST_ENTRY@@PEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z @ 0x18004478C (-HampDepGroupEvaluateDependencies@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_LIST_ENTRY@@PEAU_HAM_DEPEN.c)
 * Callees:
 *     <none>
 */

char __fastcall HampActGetDependencyAction(__int64 a1, char a2)
{
  int v3; // ecx
  bool v4; // al
  char v5; // dl
  char v6; // r8

  v3 = *(_DWORD *)(a1 + 496);
  if ( (v3 & 0x10) != 0 || (a2 & 2) != 0 )
    return 3;
  v4 = (a2 & 1) != 0;
  v5 = 0;
  v6 = 2 * (v4 && (v3 & 0x60) == 0) + 1;
  if ( (v6 == 1) != (*(_BYTE *)(a1 + 500) == 1) )
    return (v6 == 1) + 1;
  return v5;
}
