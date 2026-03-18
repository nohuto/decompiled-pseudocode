/*
 * XREFs of ?IsOutOfBounds@CInteractionTracker@@QEAA_NW4ScrollAxis@@@Z @ 0x18016D27C
 * Callers:
 *     ?IsOutOfBounds@CInteractionTracker@@QEAA_NXZ @ 0x18016D2D0 (-IsOutOfBounds@CInteractionTracker@@QEAA_NXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CInteractionTracker::IsOutOfBounds(float *a1, int a2)
{
  __int64 result; // rax
  int v3; // edx
  float v4; // xmm1_4
  bool v5; // cc
  float v6; // xmm1_4
  float v7; // xmm0_4

  result = 0LL;
  if ( !a2 )
  {
    v6 = a1[16];
    if ( v6 > a1[22] )
      return 1LL;
    v7 = a1[19];
    goto LABEL_10;
  }
  v3 = a2 - 1;
  if ( !v3 )
  {
    v6 = a1[17];
    if ( v6 > a1[23] )
      return 1LL;
    v7 = a1[20];
LABEL_10:
    v5 = v7 <= v6;
LABEL_11:
    if ( v5 )
      return result;
    return 1LL;
  }
  if ( v3 != 1 )
    return result;
  v4 = a1[28];
  if ( a1[29] <= v4 )
  {
    v5 = v4 <= a1[30];
    goto LABEL_11;
  }
  return 1LL;
}
