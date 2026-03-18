/*
 * XREFs of ?IsSimpleGeometry@CPathData@@QEBA_NXZ @ 0x180209330
 * Callers:
 *     ?GetLength@CPathLengthOperation@@QEAAMPEBVCPathData@@@Z @ 0x18020B674 (-GetLength@CPathLengthOperation@@QEAAMPEBVCPathData@@@Z.c)
 *     ?Trim@CTrimPathOperation@@QEAAJPEBVCPathData@@MMMPEAPEAV2@@Z @ 0x18020C1D8 (-Trim@CTrimPathOperation@@QEAAJPEBVCPathData@@MMMPEAPEAV2@@Z.c)
 *     ?GetSimplifiedPathDataInternal@CPathSegmentsShape@@MEBAJPEAPEAVCPathData@@@Z @ 0x18020C870 (-GetSimplifiedPathDataInternal@CPathSegmentsShape@@MEBAJPEAPEAVCPathData@@@Z.c)
 * Callees:
 *     ??Econst_iterator@SegmentCollection@Path@@QEAAAEAV012@XZ @ 0x180208CB0 (--Econst_iterator@SegmentCollection@Path@@QEAAAEAV012@XZ.c)
 */

bool __fastcall CPathData::IsSimpleGeometry(CPathData *this)
{
  char v1; // di
  char *v3; // rax
  char v4; // di
  char *v5; // rbx
  char *v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_BYTE *)this + 80);
  if ( !v1 )
  {
    v3 = (char *)*((_QWORD *)this + 3);
    v4 = 1;
    v5 = (char *)*((_QWORD *)this + 4);
    v7 = v3;
    while ( v3 != v5 )
    {
      if ( (unsigned __int8)(*v3 - 3) <= 1u )
      {
        v4 = 0;
        break;
      }
      Path::SegmentCollection::const_iterator::operator++(&v7);
      v3 = v7;
    }
    v1 = 2 * v4 - 1;
    *((_BYTE *)this + 80) = v1;
  }
  return v1 == 1;
}
