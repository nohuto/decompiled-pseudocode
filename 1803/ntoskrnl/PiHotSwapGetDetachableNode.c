/*
 * XREFs of PiHotSwapGetDetachableNode @ 0x1405E6320
 * Callers:
 *     PpHotSwapGetDevnodeRemovalPolicy @ 0x1405263FC (PpHotSwapGetDevnodeRemovalPolicy.c)
 *     PpHotSwapUpdateRemovalPolicy @ 0x1405E6214 (PpHotSwapUpdateRemovalPolicy.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PiHotSwapGetDetachableNode(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  while ( a1 )
  {
    result = *(unsigned int *)(a1 + 560);
    if ( (result & 0x18) != 0 )
      break;
    a1 = *(_QWORD *)(a1 + 16);
  }
  *a2 = a1;
  return result;
}
