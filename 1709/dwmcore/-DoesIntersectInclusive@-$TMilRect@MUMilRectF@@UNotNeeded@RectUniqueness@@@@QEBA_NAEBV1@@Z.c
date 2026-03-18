/*
 * XREFs of ?DoesIntersectInclusive@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1801CB528
 * Callers:
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18009711C (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesIntersectInclusive(float *a1, float *a2)
{
  if ( a1[2] < *a2 )
    return 0;
  if ( a2[2] >= *a1 && a1[3] >= a2[1] )
    return a2[3] >= a1[1];
  return 0;
}
