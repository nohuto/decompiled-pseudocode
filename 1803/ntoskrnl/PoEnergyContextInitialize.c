/*
 * XREFs of PoEnergyContextInitialize @ 0x140577B20
 * Callers:
 *     PspAllocateProcess @ 0x1404ED888 (PspAllocateProcess.c)
 *     PopEtInit @ 0x1408C3458 (PopEtInit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PoEnergyContextInitialize(_QWORD *a1)
{
  __int64 result; // rax

  a1[54] = 0LL;
  a1[55] = 0LL;
  a1[54] = 0LL;
  result = PopEtGlobals;
  if ( PopEtGlobals )
  {
    result = PopEtGlobals + 768;
    a1[56] = PopEtGlobals + 768;
  }
  return result;
}
