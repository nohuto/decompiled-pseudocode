/*
 * XREFs of ?ComputeLayoutSize@CVisual@@QEAA_NXZ @ 0x18004D47C
 * Callers:
 *     ?PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@@@Z @ 0x1800A2CF0 (-PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@@@Z.c)
 *     ?UpdateRelativeLayout@CPreComputeHelper@@IEAAXPEAVCVisual@@@Z @ 0x180140A0C (-UpdateRelativeLayout@CPreComputeHelper@@IEAAXPEAVCVisual@@@Z.c)
 * Callees:
 *     ?GetRelativeOffsetInternal@CVisual@@QEBA?AUD2D_VECTOR_3F@@XZ @ 0x18004CDE0 (-GetRelativeOffsetInternal@CVisual@@QEBA-AUD2D_VECTOR_3F@@XZ.c)
 *     ?GetRelativeLayoutSizeInternal@CVisual@@QEBA?AUD2D_SIZE_F@@XZ @ 0x18004CE3C (-GetRelativeLayoutSizeInternal@CVisual@@QEBA-AUD2D_SIZE_F@@XZ.c)
 *     ?OnClipChanged@CVisual@@AEAAXXZ @ 0x18004D6CC (-OnClipChanged@CVisual@@AEAAXXZ.c)
 *     ?ClearContentTreeDataCaches@CVisual@@IEAAXXZ @ 0x18004E754 (-ClearContentTreeDataCaches@CVisual@@IEAAXXZ.c)
 */

char __fastcall CVisual::ComputeLayoutSize(CVisual *this)
{
  char v1; // bl
  float v2; // xmm7_4
  float v3; // xmm3_4
  float v4; // xmm8_4
  float v5; // xmm9_4
  __int64 v6; // rax
  float v7; // xmm10_4
  float v8; // xmm4_4
  float *v9; // r11
  float v10; // xmm6_4
  __int64 v11; // r11
  float v12; // xmm5_4
  float v13; // xmm4_4
  float v14; // xmm2_4
  float v15; // xmm0_4
  char v16; // si
  char v17; // di
  __int64 v19; // rax
  D2D_VECTOR_3F v20; // [rsp+20h] [rbp-68h] BYREF
  __int64 v21; // [rsp+90h] [rbp+8h] BYREF

  v1 = 0;
  v2 = *((float *)this + 29);
  v3 = 0.0;
  v4 = *((float *)this + 30);
  v5 = *((float *)this + 34);
  v6 = *((_QWORD *)this + 10);
  v7 = *((float *)this + 33);
  if ( v6 )
    v3 = *(float *)(v6 + 132);
  CVisual::GetRelativeOffsetInternal(this, &v20);
  v10 = (float)(v20.y * v8) + v9[27];
  v9[29] = (float)(v20.x * v3) + v9[26];
  v9[30] = v10;
  CVisual::GetRelativeLayoutSizeInternal((CVisual *)v9, &v21);
  v14 = (float)(*(float *)&v21 * v3) + *(float *)(v11 + 124);
  v15 = (float)(*((float *)&v21 + 1) * v13) + *(float *)(v11 + 128);
  *(float *)(v11 + 136) = v15;
  *(float *)(v11 + 132) = v14;
  if ( v14 < 0.0 )
  {
    *(_DWORD *)(v11 + 132) = 0;
    v14 = 0.0;
  }
  if ( v15 < 0.0 )
  {
    *(_DWORD *)(v11 + 136) = 0;
    v15 = 0.0;
  }
  if ( v2 != v12 || (v16 = 0, v4 != v10) )
    v16 = 1;
  if ( v7 == v14 && v5 == v15 )
  {
    v17 = 0;
  }
  else
  {
    v19 = *(_QWORD *)(v11 + 240);
    v17 = 1;
    if ( v19 && *(_BYTE *)(v19 + 128) )
      CVisual::OnClipChanged((CVisual *)v11);
    CVisual::ClearContentTreeDataCaches((CVisual *)v11);
  }
  if ( v16 || v17 )
    return 1;
  return v1;
}
