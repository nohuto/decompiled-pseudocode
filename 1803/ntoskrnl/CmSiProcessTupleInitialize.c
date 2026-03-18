/*
 * XREFs of CmSiProcessTupleInitialize @ 0x1400D2EC0
 * Callers:
 *     CmpInitializeRegistryProcess @ 0x14062C3D8 (CmpInitializeRegistryProcess.c)
 * Callees:
 *     <none>
 */

__int64 CmSiProcessTupleInitialize()
{
  __int64 result; // rax

  result = 0LL;
  CmpRegistryProcess = 0LL;
  qword_1403CA2E8 = 0LL;
  return result;
}
