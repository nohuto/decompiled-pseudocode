/*
 * XREFs of ApplyEdgeFlagsWorker_196608_65536_131072_ @ 0x1801BF0E4
 * Callers:
 *     ApplyEdgeFlags @ 0x1801BF1EC (ApplyEdgeFlags.c)
 * Callees:
 *     ceil_0 @ 0x1800D534E (ceil_0.c)
 */

float __fastcall ApplyEdgeFlagsWorker_196608_65536_131072_(int a1, float a2, float a3)
{
  int v3; // ecx

  v3 = a1 & 0x30000;
  switch ( v3 )
  {
    case 65536:
      a2 = a2 - a3;
      break;
    case 131072:
      a2 = a2 + a3;
      break;
    case 196608:
      return a2;
  }
  return (float)(int)ceil_0(a2 - 0.5);
}
