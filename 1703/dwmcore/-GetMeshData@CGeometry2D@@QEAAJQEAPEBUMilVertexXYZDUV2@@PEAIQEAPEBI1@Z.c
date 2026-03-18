/*
 * XREFs of ?GetMeshData@CGeometry2D@@QEAAJQEAPEBUMilVertexXYZDUV2@@PEAIQEAPEBI1@Z @ 0x18012F19C
 * Callers:
 *     ?DrawMesh2D@CHwSurfaceRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextState@@PEAVCGeometry2D@@PEAVIBitmapSource@@@Z @ 0x1800D09EC (-DrawMesh2D@CHwSurfaceRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextStat.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?FreeCaches@CGeometry2D@@AEAAXXZ @ 0x1801790FC (-FreeCaches@CGeometry2D@@AEAAXXZ.c)
 */

__int64 __fastcall CGeometry2D::GetMeshData(
        CGeometry2D *this,
        const struct MilVertexXYZDUV2 **const a2,
        unsigned int *a3,
        const unsigned int **const a4,
        unsigned int *a5)
{
  int v5; // ebx
  unsigned int v10; // eax
  unsigned __int64 v11; // rcx
  unsigned int v12; // ebx
  int v13; // r9d
  SIZE_T v14; // r8
  LPVOID v15; // rdx
  int v16; // eax
  unsigned int v17; // eax
  unsigned __int64 v18; // rcx
  unsigned int v19; // ebx
  SIZE_T v20; // r8
  LPVOID v21; // r8
  int v22; // eax
  unsigned int v24; // [rsp+20h] [rbp-28h]

  v5 = 0;
  if ( *((_QWORD *)this + 7) )
  {
LABEL_21:
    *a2 = (const struct MilVertexXYZDUV2 *)*((_QWORD *)this + 7);
    *a3 = (*(__int64 (__fastcall **)(CGeometry2D *))(*(_QWORD *)this + 136LL))(this);
    *a4 = (const unsigned int *)*((_QWORD *)this + 8);
    *a5 = (*(__int64 (__fastcall **)(CGeometry2D *))(*(_QWORD *)this + 144LL))(this);
    goto LABEL_22;
  }
  v10 = (*(__int64 (__fastcall **)(CGeometry2D *))(*(_QWORD *)this + 136LL))(this);
  v11 = 32LL * v10;
  v12 = v10;
  if ( v11 > 0xFFFFFFFF )
  {
    v13 = -2147024362;
    v24 = 47;
LABEL_9:
    v5 = v13;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, v24);
LABEL_23:
    CGeometry2D::FreeCaches(this);
    return (unsigned int)v5;
  }
  v14 = (unsigned int)v11;
  if ( !(_DWORD)v11 )
    v14 = 1LL;
  v15 = HeapAlloc(WPF::g_processHeap, 0, v14);
  *((_QWORD *)this + 7) = v15;
  if ( !v15 )
  {
    v24 = 49;
LABEL_8:
    v13 = -2147024882;
    goto LABEL_9;
  }
  v16 = (*(__int64 (__fastcall **)(CGeometry2D *, LPVOID, _QWORD))(*(_QWORD *)this + 176LL))(this, v15, v12);
  v5 = v16;
  if ( v16 >= 0 )
  {
    v17 = (*(__int64 (__fastcall **)(CGeometry2D *))(*(_QWORD *)this + 144LL))(this);
    v18 = 4LL * v17;
    v19 = v17;
    if ( v18 > 0xFFFFFFFF )
    {
      v13 = -2147024362;
      v24 = 56;
      goto LABEL_9;
    }
    v20 = (unsigned int)v18;
    if ( !(_DWORD)v18 )
      v20 = 1LL;
    v21 = HeapAlloc(WPF::g_processHeap, 0, v20);
    *((_QWORD *)this + 8) = v21;
    if ( !v21 )
    {
      v24 = 58;
      goto LABEL_8;
    }
    v22 = (*(__int64 (__fastcall **)(CGeometry2D *, _QWORD, LPVOID, _QWORD))(*(_QWORD *)this + 168LL))(
            this,
            0LL,
            v21,
            v19);
    v5 = v22;
    if ( v22 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0x3Bu);
      goto LABEL_22;
    }
    goto LABEL_21;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x32u);
LABEL_22:
  if ( v5 < 0 )
    goto LABEL_23;
  return (unsigned int)v5;
}
