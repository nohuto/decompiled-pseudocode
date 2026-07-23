/*
 * XREFs of ViAvlCompareNodeUseSessionId @ 0x140162F70
 * Callers:
 *     <none>
 * Callees:
 *     ViAvlCompareNode @ 0x140162FC0 (ViAvlCompareNode.c)
 */

RTL_GENERIC_COMPARE_RESULTS __fastcall ViAvlCompareNodeUseSessionId(_RTL_AVL_TABLE *a1, _DWORD *a2, _DWORD *a3)
{
  RTL_GENERIC_COMPARE_RESULTS result; // eax
  unsigned int v6; // ecx
  unsigned int v7; // edx

  result = ViAvlCompareNode(a1, a2, a3);
  if ( result == GenericEqual )
  {
    v6 = a2[4];
    v7 = a3[4];
    if ( v6 < v7 )
    {
      return 0;
    }
    else if ( v6 > v7 )
    {
      return 1;
    }
  }
  return result;
}
