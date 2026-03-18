/*
 * XREFs of PiHotSwapGetDetachableNode @ 0x1404502E4
 * Callers:
 *     PpHotSwapUpdateRemovalPolicy @ 0x1404501DC (PpHotSwapUpdateRemovalPolicy.c)
 *     PpHotSwapGetDevnodeRemovalPolicy @ 0x14055B5E4 (PpHotSwapGetDevnodeRemovalPolicy.c)
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
