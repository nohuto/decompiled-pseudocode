/*
 * XREFs of Simulator_EvaluateNode @ 0x1C0044744
 * Callers:
 *     Simulator_CallbackWorker @ 0x1C0044550 (Simulator_CallbackWorker.c)
 * Callees:
 *     AMLIEvalNameSpaceObject @ 0x1C00022D8 (AMLIEvalNameSpaceObject.c)
 *     DereferenceObjectEx @ 0x1C0002FD4 (DereferenceObjectEx.c)
 *     GetNameSpaceObject @ 0x1C004A1E0 (GetNameSpaceObject.c)
 */

__int64 __fastcall Simulator_EvaluateNode(__int64 a1)
{
  unsigned int NameSpaceObject; // esi

  NameSpaceObject = GetNameSpaceObject(*(void **)(a1 + 16));
  DereferenceObjectEx(0LL);
  return NameSpaceObject;
}
