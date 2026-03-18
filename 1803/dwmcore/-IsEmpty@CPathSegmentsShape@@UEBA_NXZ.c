/*
 * XREFs of ?IsEmpty@CPathSegmentsShape@@UEBA_NXZ @ 0x18020C910
 * Callers:
 *     <none>
 * Callees:
 *     ?GetControlPointCount@CPathData@@QEBAIXZ @ 0x18020911C (-GetControlPointCount@CPathData@@QEBAIXZ.c)
 */

bool __fastcall CPathSegmentsShape::IsEmpty(CPathData **this)
{
  return (unsigned int)CPathData::GetControlPointCount(this[2]) == 0;
}
