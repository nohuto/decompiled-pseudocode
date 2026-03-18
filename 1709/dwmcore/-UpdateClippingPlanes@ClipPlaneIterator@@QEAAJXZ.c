/*
 * XREFs of ?UpdateClippingPlanes@ClipPlaneIterator@@QEAAJXZ @ 0x18014B088
 * Callers:
 *     ?DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x1800231D0 (-DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRe.c)
 *     ?EmitDrawListCache@CDrawingContext@@AEAAJPEAVCDrawListCache@@MW4Enum@MilCompositingMode@@@Z @ 0x18003E988 (-EmitDrawListCache@CDrawingContext@@AEAAJPEAVCDrawListCache@@MW4Enum@MilCompositingMode@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?GetMorePlaceholderClipPlanes@ClipPlaneIterator@@AEAAXPEAUD2D_VECTOR_4F@@PEAI@Z @ 0x18014A82C (-GetMorePlaceholderClipPlanes@ClipPlaneIterator@@AEAAXPEAUD2D_VECTOR_4F@@PEAI@Z.c)
 *     ?GetMoreStandardClipPlanes@ClipPlaneIterator@@AEAAXPEAUD2D_VECTOR_4F@@PEAI@Z @ 0x18014A8F8 (-GetMoreStandardClipPlanes@ClipPlaneIterator@@AEAAXPEAUD2D_VECTOR_4F@@PEAI@Z.c)
 *     ?HasMoreClipPlanes@ClipPlaneIterator@@QEBA_NXZ @ 0x18014AA4C (-HasMoreClipPlanes@ClipPlaneIterator@@QEBA_NXZ.c)
 *     ??4?$ComPtr@VCPolygon@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPolygon@@@Z @ 0x18017DC80 (--4-$ComPtr@VCPolygon@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPolygon@@@Z.c)
 */

__int64 __fastcall ClipPlaneIterator::UpdateClippingPlanes(ClipPlaneIterator *this)
{
  unsigned int v1; // ebx
  _DWORD *v3; // rax
  _DWORD *v4; // rdi
  unsigned int v5; // r8d
  D2D_VECTOR_4F *v6; // rax
  float *v7; // rcx
  __int64 v8; // rdx
  float x; // xmm2_4
  bool v10; // cc
  float v11; // xmm0_4
  _OWORD *v12; // rcx
  _DWORD *v13; // rdx
  __int64 v14; // r8
  unsigned int v16[4]; // [rsp+30h] [rbp-68h] BYREF
  D2D_VECTOR_4F v17; // [rsp+40h] [rbp-58h] BYREF

  v1 = 0;
  v16[0] = 0;
  if ( *(_BYTE *)this || !ClipPlaneIterator::HasMoreClipPlanes(this) )
  {
    Microsoft::WRL::ComPtr<CPolygon>::operator=(*((_QWORD *)this + 15) + 256LL, 0LL);
  }
  else
  {
    if ( *((_DWORD *)this + 1) )
      ClipPlaneIterator::GetMorePlaceholderClipPlanes(this, &v17, v16);
    else
      ClipPlaneIterator::GetMoreStandardClipPlanes(this, &v17, v16);
    v3 = HeapAlloc(WPF::g_processHeap, 0, 0x60uLL);
    v4 = v3;
    if ( v3 )
    {
      memset_0(v3, 0, 0x60uLL);
      *(_QWORD *)v4 = &CMILRefCountBase::`vftable';
      *(_QWORD *)v4 = &ClipPlaneInfoRef::`vftable';
      v4[2] = 0;
    }
    else
    {
      v4 = 0LL;
    }
    if ( v4 )
    {
      (**(void (__fastcall ***)(_DWORD *))v4)(v4);
      v5 = 0;
      if ( !v16[0] )
        goto LABEL_20;
      v5 = v16[0];
      v6 = &v17;
      v7 = (float *)(v4 + 20);
      v8 = v16[0];
      do
      {
        x = v6->x;
        *(D2D_VECTOR_4F *)((char *)v6 + (char *)v4 - (char *)&v17.y + 20) = *v6;
        if ( x == 0.0 )
          v10 = v6->y <= 0.0;
        else
          v10 = x <= 0.0;
        if ( v10 )
          v11 = 0.0;
        else
          v11 = FLOAT_0_5;
        *v7 = v11;
        ++v6;
        ++v7;
        --v8;
      }
      while ( v8 );
      if ( v5 < 4 )
      {
LABEL_20:
        v12 = &v4[4 * v5 + 4];
        v13 = &v4[v5 + 20];
        v14 = 4 - v5;
        do
        {
          *v12 = 0LL;
          *v13++ = 0;
          ++v12;
          --v14;
        }
        while ( v14 );
      }
      Microsoft::WRL::ComPtr<CPolygon>::operator=(*((_QWORD *)this + 15) + 256LL, v4);
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v4 + 8LL))(v4);
    }
    else
    {
      v1 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x2B6u);
    }
  }
  return v1;
}
