/*
 * XREFs of Simulator_DuplicateObjData @ 0x1C00446F4
 * Callers:
 *     Simulator_CallbackWorker @ 0x1C0044550 (Simulator_CallbackWorker.c)
 * Callees:
 *     DupObjData @ 0x1C0003188 (DupObjData.c)
 *     FreeObjData @ 0x1C0046808 (FreeObjData.c)
 */

__int64 __fastcall Simulator_DuplicateObjData(__int64 a1)
{
  __int64 v3; // rdi

  if ( !a1 )
    return 3221225485LL;
  v3 = *(_QWORD *)(a1 + 16);
  if ( !v3 )
    return 3221225485LL;
  FreeObjData(*(_QWORD *)(a1 + 16));
  return DupObjData(gpheapGlobal, v3, *(_QWORD *)(a1 + 24));
}
