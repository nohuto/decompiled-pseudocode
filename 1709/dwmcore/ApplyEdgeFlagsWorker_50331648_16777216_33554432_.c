/*
 * XREFs of ApplyEdgeFlagsWorker_50331648_16777216_33554432_ @ 0x1801D7F40
 * Callers:
 *     ApplyEdgeFlags @ 0x1801D7FFC (ApplyEdgeFlags.c)
 * Callees:
 *     ceil_0 @ 0x1800C5D3E (ceil_0.c)
 */

float __fastcall ApplyEdgeFlagsWorker_50331648_16777216_33554432_(int a1, float a2, float a3)
{
  int v3; // ecx

  v3 = a1 & 0x3000000;
  switch ( v3 )
  {
    case 16777216:
      a2 = a2 - a3;
      break;
    case 33554432:
      a2 = a2 + a3;
      break;
    case 50331648:
      return a2;
  }
  return (float)(int)ceil_0(a2 - 0.5);
}
