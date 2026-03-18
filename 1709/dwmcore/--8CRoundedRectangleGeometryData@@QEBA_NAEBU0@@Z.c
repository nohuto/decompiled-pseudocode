/*
 * XREFs of ??8CRoundedRectangleGeometryData@@QEBA_NAEBU0@@Z @ 0x1800BDEC4
 * Callers:
 *     ?IsSameGeometry@CRectangleGeometry@@UEBA_NPEBVCGeometry@@@Z @ 0x180058AA0 (-IsSameGeometry@CRectangleGeometry@@UEBA_NPEBVCGeometry@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CRoundedRectangleGeometryData::operator==(float *a1, float *a2)
{
  bool result; // al

  result = 0;
  if ( *a1 == *a2
    && a1[1] == a2[1]
    && a1[2] == a2[2]
    && a1[3] == a2[3]
    && a1[4] == a2[4]
    && a1[5] == a2[5]
    && a1[6] == a2[6]
    && a1[7] == a2[7]
    && a1[8] == a2[8]
    && a1[9] == a2[9]
    && a1[10] == a2[10] )
  {
    return a1[11] == a2[11];
  }
  return result;
}
