/*
 * XREFs of vComputeRotatedXform @ 0x1C0236C94
 * Callers:
 *     ulGetRotate @ 0x1C0236B40 (ulGetRotate.c)
 * Callees:
 *     <none>
 */

void __fastcall vComputeRotatedXform(int *a1, int a2, int a3)
{
  int v3; // eax
  int v4; // eax

  if ( a2 )
  {
    *a1 = a2;
    if ( a2 < 0 )
      *a1 = -a2;
    v3 = *a1;
    if ( *a1 > 5 )
      v3 = 5;
    *a1 = v3;
  }
  else
  {
    *a1 = 1;
  }
  if ( a3 )
  {
    a1[1] = a3;
    if ( a3 < 0 )
      a1[1] = -a3;
    v4 = a1[1];
    if ( v4 > 255 )
      v4 = 255;
    a1[1] = v4;
  }
  else
  {
    a1[1] = 1;
  }
}
