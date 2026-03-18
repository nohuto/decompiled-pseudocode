/*
 * XREFs of Simulator_DuplicateObjData @ 0x1C005BD04
 * Callers:
 *     Simulator_CallbackWorker @ 0x1C005BB60 (Simulator_CallbackWorker.c)
 * Callees:
 *     DupObjData @ 0x1C00078C0 (DupObjData.c)
 *     FreeObjData @ 0x1C000CD80 (FreeObjData.c)
 */

__int64 __fastcall Simulator_DuplicateObjData(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdi

  if ( !a1 )
    return 3221225485LL;
  v6 = *(_QWORD *)(a1 + 16);
  if ( !v6 )
    return 3221225485LL;
  FreeObjData(*(_QWORD *)(a1 + 16), a2, a3, a4);
  return DupObjData(gpheapGlobal, v6, *(_QWORD *)(a1 + 24));
}
