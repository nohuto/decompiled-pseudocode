/*
 * XREFs of ?GetVerticesCore@CMeshGeometry2D@@MEAAJPEAUMilVertexXYZDUV2@@I@Z @ 0x180172380
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetVertexCount@CMeshGeometry2D@@UEAAIXZ @ 0x180172330 (-GetVertexCount@CMeshGeometry2D@@UEAAIXZ.c)
 */

__int64 __fastcall CMeshGeometry2D::GetVerticesCore(
        CMeshGeometry2D *this,
        struct MilVertexXYZDUV2 *a2,
        unsigned int a3)
{
  unsigned int v6; // edi
  unsigned int VertexCount; // eax
  __int64 v8; // r8
  __int64 v9; // r11
  __int64 v10; // r10
  float *v11; // rdx
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // xmm0_8
  int v15; // ecx
  double v16; // xmm0_8
  double v17; // xmm1_8

  v6 = 0;
  VertexCount = CMeshGeometry2D::GetVertexCount(this);
  if ( a3 >= VertexCount )
  {
    if ( VertexCount )
    {
      v8 = 0LL;
      v9 = VertexCount;
      v10 = 0LL;
      v11 = (float *)((char *)a2 + 16);
      v12 = 0LL;
      do
      {
        v13 = *((_QWORD *)this + 15);
        v14 = *(_QWORD *)(v12 + v13);
        v12 += 12LL;
        *((_QWORD *)v11 - 2) = v14;
        *(v11 - 2) = *(float *)(v12 + v13 - 4);
        v15 = *(_DWORD *)(v10 + *((_QWORD *)this + 19));
        v10 += 4LL;
        *((_DWORD *)v11 - 1) = v15;
        v16 = *(double *)(*((_QWORD *)this + 17) + v8);
        v8 += 16LL;
        *v11 = v16;
        v11 += 8;
        v17 = *(double *)(*((_QWORD *)this + 17) + v8 - 8);
        *((_QWORD *)v11 - 3) = 0LL;
        *(v11 - 7) = v17;
        --v9;
      }
      while ( v9 );
    }
  }
  else
  {
    v6 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0x12Du);
  }
  return v6;
}
