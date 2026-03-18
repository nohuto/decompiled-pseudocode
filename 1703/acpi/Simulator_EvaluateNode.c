/*
 * XREFs of Simulator_EvaluateNode @ 0x1C005B1E4
 * Callers:
 *     Simulator_CallbackWorker @ 0x1C005AFF0 (Simulator_CallbackWorker.c)
 * Callees:
 *     AMLIEvalNameSpaceObject @ 0x1C0002820 (AMLIEvalNameSpaceObject.c)
 *     DereferenceObjectEx @ 0x1C00156D8 (DereferenceObjectEx.c)
 *     GetNameSpaceObject @ 0x1C00171C0 (GetNameSpaceObject.c)
 */

__int64 __fastcall Simulator_EvaluateNode(__int64 a1)
{
  unsigned int NameSpaceObject; // esi

  NameSpaceObject = GetNameSpaceObject(*(_BYTE **)(a1 + 16));
  DereferenceObjectEx(0LL);
  return NameSpaceObject;
}
