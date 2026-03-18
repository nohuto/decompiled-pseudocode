/*
 * XREFs of ApplyEdgeFlagsWorker_3_1_2_ @ 0x1801BF044
 * Callers:
 *     ApplyEdgeFlags @ 0x1801BF1EC (ApplyEdgeFlags.c)
 * Callees:
 *     ceil_0 @ 0x1800D534E (ceil_0.c)
 */

float __fastcall ApplyEdgeFlagsWorker_3_1_2_(char a1, float a2, float a3)
{
  int v3; // ecx
  int v4; // ecx

  v3 = (a1 & 3) - 1;
  if ( v3 )
  {
    v4 = v3 - 1;
    if ( v4 )
    {
      if ( v4 == 1 )
        return a2;
    }
    else
    {
      a2 = a2 + a3;
    }
  }
  else
  {
    a2 = a2 - a3;
  }
  return (float)(int)ceil_0(a2 - 0.5);
}
