/*
 * XREFs of ?CreateMeshFromRects@CD2DContext@@MEAAJPEBUMilRectU@@IPEAPEAVCD2DMesh@@@Z @ 0x180198060
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ?CreateRegionGeometry@CD2DFactory@@QEAAJPEBUtagRECT@@IPEAPEAUID2D1Geometry@@@Z @ 0x18004C31C (-CreateRegionGeometry@CD2DFactory@@QEAAJPEBUtagRECT@@IPEAPEAUID2D1Geometry@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CD2DMesh@@SAJPEAVCD2DResourceManager@@PEAUID2D1Geometry@@PEAPEAV1@@Z @ 0x18019EAC8 (-Create@CD2DMesh@@SAJPEAVCD2DResourceManager@@PEAUID2D1Geometry@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CD2DContext::CreateMeshFromRects(
        CD2DContext *this,
        const struct tagRECT *a2,
        __int64 a3,
        struct CD2DMesh **a4)
{
  struct CD2DMesh *v4; // rbx
  CD2DFactory *v7; // rcx
  int v8; // eax
  unsigned int v9; // edi
  int v10; // eax
  struct CD2DMesh *v12; // [rsp+50h] [rbp+8h] BYREF
  struct ID2D1Geometry *v13; // [rsp+68h] [rbp+20h] BYREF

  v4 = 0LL;
  *a4 = 0LL;
  v7 = (CD2DFactory *)*((_QWORD *)this + 19);
  v13 = 0LL;
  v12 = 0LL;
  v8 = CD2DFactory::CreateRegionGeometry(v7, a2, a3, &v13);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x955u);
  }
  else
  {
    v10 = CD2DMesh::Create(*((struct CD2DResourceManager **)this + 18), v13, &v12);
    v9 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x957u);
      v4 = v12;
    }
    else
    {
      *a4 = v12;
    }
  }
  ReleaseInterfaceNoNULL<CD2DPencil>((__int64)v4);
  ReleaseInterfaceNoNULL<CD2DPencil>((__int64)v13);
  return v9;
}
