/*
 * XREFs of ?Create@CD2DMesh@@SAJPEAVCD2DResourceManager@@PEAUID2D1Geometry@@PEAPEAV1@@Z @ 0x18019EAC8
 * Callers:
 *     ?CreateMeshFromRects@CD2DContext@@MEAAJPEBUMilRectU@@IPEAPEAVCD2DMesh@@@Z @ 0x180198060 (-CreateMeshFromRects@CD2DContext@@MEAAJPEBUMilRectU@@IPEAPEAVCD2DMesh@@@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ??0CD2DResource@@IEAA@PEAVCD2DResourceManager@@_N@Z @ 0x18004BDD4 (--0CD2DResource@@IEAA@PEAVCD2DResourceManager@@_N@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18004F8CC (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??$SetInterface@UID2D1Bitmap1@@U1@@@YAXAEAPEAUID2D1Bitmap1@@PEAU0@@Z @ 0x18007B300 (--$SetInterface@UID2D1Bitmap1@@U1@@@YAXAEAPEAUID2D1Bitmap1@@PEAU0@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DMesh::Create(struct CD2DResourceManager *a1, struct ID2D1Geometry *a2, struct CD2DMesh **a3)
{
  unsigned int v3; // ebx
  CD2DResource *v7; // rax
  struct CD2DMesh *v8; // rdi

  v3 = 0;
  *a3 = 0LL;
  v7 = (CD2DResource *)operator new(0x70uLL);
  v8 = v7;
  if ( v7 )
  {
    CD2DResource::CD2DResource(v7, a1, 0);
    *((_QWORD *)v8 + 13) = 0LL;
    *((_QWORD *)v8 + 2) = &CD2DGenericInk::`vftable'{for `IDeviceResource'};
    *(_QWORD *)v8 = &CD2DMesh::`vftable'{for `CMILCOMBase'};
  }
  else
  {
    v8 = 0LL;
  }
  if ( v8 )
  {
    (*(void (__fastcall **)(struct CD2DMesh *))(*(_QWORD *)v8 + 8LL))(v8);
    SetInterface<ID2D1Bitmap1,ID2D1Bitmap1>((_QWORD *)v8 + 13, (__int64)a2);
    *a3 = v8;
  }
  else
  {
    v3 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x13u);
  }
  ReleaseInterfaceNoNULL<CD2DPencil>(0LL);
  return v3;
}
