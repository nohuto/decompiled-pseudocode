/*
 * XREFs of ?UpdateTransition@CPressTapVisual@@MEAAJXZ @ 0x18008EE00
 * Callers:
 *     <none>
 * Callees:
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x180023260 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?Hide@CVisual@@QEAAXXZ @ 0x1800237B0 (-Hide@CVisual@@QEAAXXZ.c)
 *     ?SetInsetFromParentLeft@CVisual@@QEAAXH@Z @ 0x180023840 (-SetInsetFromParentLeft@CVisual@@QEAAXH@Z.c)
 *     ?SetInsetFromParentTop@CVisual@@QEAAXH@Z @ 0x180023874 (-SetInsetFromParentTop@CVisual@@QEAAXH@Z.c)
 *     ?SetOpacity@CImage@@UEAAXN@Z @ 0x18007C3C0 (-SetOpacity@CImage@@UEAAXN@Z.c)
 *     ?Stop@CPressTapVisual@@UEAAXXZ @ 0x18008ED80 (-Stop@CPressTapVisual@@UEAAXXZ.c)
 */

__int64 __fastcall CPressTapVisual::UpdateTransition(CPressTapVisual *this)
{
  float v1; // xmm0_4
  float v3; // xmm8_4
  float v4; // xmm8_4
  float v5; // xmm2_4
  int v6; // esi
  LONG v7; // edi
  int v8; // ebp
  struct tagSIZE *v9; // rcx
  LONG v10; // ebx
  CImage *v11; // rcx
  double v12; // xmm1_8
  float v13; // xmm1_4
  float v14; // xmm8_4
  float v15; // xmm2_4
  float v16; // xmm6_4
  __m128i v17; // xmm0
  struct tagSIZE *v18; // rcx
  LONG v19; // edi
  LONG v20; // ebx
  struct tagSIZE v22; // [rsp+70h] [rbp+8h] BYREF

  v1 = *((float *)this + 91);
  v3 = *(double *)(*((_QWORD *)this + 50) + 48LL);
  if ( v1 < v3 )
  {
    v13 = (float)*((int *)this + 83);
    v14 = (float)(v3 - v1) / *((float *)this + 92);
    v15 = *((float *)this + 93) + (float)((float)(*((float *)this + 94) - *((float *)this + 93)) * v14);
    v16 = (float)(1.0 - *((float *)this + 98)) * v14;
    v17 = _mm_cvtsi32_si128(*((_DWORD *)this + 82));
    v18 = (struct tagSIZE *)*((_QWORD *)this + 43);
    v19 = (int)(float)(v13 * v15);
    v20 = (int)(float)(_mm_cvtepi32_ps(v17).m128_f32[0] * v15);
    if ( v20 < 1 )
      v20 = 1;
    v22.cx = v20;
    if ( v19 < 1 )
      v19 = 1;
    v22.cy = v19;
    CVisual::SetSize(v18, &v22);
    CVisual::SetInsetFromParentLeft(*((CVisual **)this + 43), *((_DWORD *)this + 76) - v20 / 2);
    CVisual::SetInsetFromParentTop(*((CVisual **)this + 43), *((_DWORD *)this + 77) - v19 / 2);
    CVisual::Hide(*((CVisual **)this + 44));
    v11 = (CImage *)*((_QWORD *)this + 43);
    v12 = (float)(1.0 - v16);
  }
  else
  {
    v4 = v3 / v1;
    v5 = *((float *)this + 95) + (float)((float)(*((float *)this + 96) - *((float *)this + 95)) * v4);
    v6 = *((_DWORD *)this + 78) + (int)(float)((float)(*((_DWORD *)this + 80) - *((_DWORD *)this + 78)) * v4);
    v7 = (int)(float)((float)*((int *)this + 85) * v5);
    v8 = *((_DWORD *)this + 79) + (int)(float)((float)(*((_DWORD *)this + 81) - *((_DWORD *)this + 79)) * v4);
    v9 = (struct tagSIZE *)*((_QWORD *)this + 44);
    v10 = (int)(float)((float)*((int *)this + 84) * v5);
    if ( v10 < 1 )
      v10 = 1;
    v22.cx = v10;
    if ( v7 < 1 )
      v7 = 1;
    v22.cy = v7;
    CVisual::SetSize(v9, &v22);
    CVisual::SetInsetFromParentLeft(*((CVisual **)this + 44), v6 - v10 / 2);
    CVisual::SetInsetFromParentTop(*((CVisual **)this + 44), v8 - v7 / 2);
    v11 = (CImage *)*((_QWORD *)this + 44);
    v12 = (float)(1.0 - (float)((float)(1.0 - *((float *)this + 97)) * v4));
  }
  CImage::SetOpacity(v11, v12);
  if ( *(_BYTE *)(*((_QWORD *)this + 50) + 72LL) )
    CPressTapVisual::Stop(this);
  return 0LL;
}
