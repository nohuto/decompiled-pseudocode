/*
 * XREFs of ?ComputeLayoutSize@CVisual@@QEAA_NXZ @ 0x1800867A0
 * Callers:
 *     ?PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@@Z @ 0x180097B50 (-PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@@Z.c)
 *     ?UpdateRelativeLayout@CPreComputeHelper@@IEAAXPEAVCVisual@@@Z @ 0x1801360A8 (-UpdateRelativeLayout@CPreComputeHelper@@IEAAXPEAVCVisual@@@Z.c)
 * Callees:
 *     ?GetRelativeOffsetInternal@CVisual@@QEBA?AUD2D_VECTOR_3F@@XZ @ 0x180085F64 (-GetRelativeOffsetInternal@CVisual@@QEBA-AUD2D_VECTOR_3F@@XZ.c)
 *     ?GetRelativeLayoutSizeInternal@CVisual@@QEBA?AUD2D_SIZE_F@@XZ @ 0x180085FC4 (-GetRelativeLayoutSizeInternal@CVisual@@QEBA-AUD2D_SIZE_F@@XZ.c)
 *     ?ClearContentTreeDataCaches@CVisual@@IEAAXXZ @ 0x1800869D8 (-ClearContentTreeDataCaches@CVisual@@IEAAXXZ.c)
 *     ?OnClipChanged@CVisual@@AEAAXXZ @ 0x180086BB0 (-OnClipChanged@CVisual@@AEAAXXZ.c)
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
  float v14; // xmm1_4
  float v15; // xmm0_4
  char v16; // si
  char v17; // di
  __int64 v19; // rax
  D2D_VECTOR_3F v20; // [rsp+20h] [rbp-68h] BYREF
  float v21; // [rsp+90h] [rbp+8h] BYREF
  float v22; // [rsp+94h] [rbp+Ch]

  v1 = 0;
  v2 = *((float *)this + 28);
  v3 = 0.0;
  v4 = *((float *)this + 29);
  v5 = *((float *)this + 33);
  v6 = *((_QWORD *)this + 10);
  v7 = *((float *)this + 32);
  if ( v6 )
    v3 = *(float *)(v6 + 128);
  CVisual::GetRelativeOffsetInternal(this, &v20);
  v10 = (float)(v20.y * v8) + v9[26];
  v9[28] = (float)(v20.x * v3) + v9[25];
  v9[29] = v10;
  CVisual::GetRelativeLayoutSizeInternal((CVisual *)v9, (__int64)&v21);
  v14 = (float)(v21 * v3) + *(float *)(v11 + 120);
  v15 = (float)(v22 * v13) + *(float *)(v11 + 124);
  *(float *)(v11 + 132) = v15;
  *(float *)(v11 + 128) = v14;
  if ( v14 < 0.0 )
    *(_DWORD *)(v11 + 128) = 0;
  if ( v15 < 0.0 )
    *(_DWORD *)(v11 + 132) = 0;
  if ( v2 != v12 || (v16 = 0, v4 != v10) )
    v16 = 1;
  if ( v7 == *(float *)(v11 + 128) && v5 == *(float *)(v11 + 132) )
  {
    v17 = 0;
  }
  else
  {
    v19 = *(_QWORD *)(v11 + 232);
    v17 = 1;
    if ( v19 && *(_BYTE *)(v19 + 96) )
      CVisual::OnClipChanged((CVisual *)v11);
    CVisual::ClearContentTreeDataCaches((CVisual *)v11);
  }
  if ( v16 || v17 )
    return 1;
  return v1;
}
