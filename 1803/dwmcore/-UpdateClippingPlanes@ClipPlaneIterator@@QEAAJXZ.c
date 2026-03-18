/*
 * XREFs of ?UpdateClippingPlanes@ClipPlaneIterator@@QEAAJXZ @ 0x180173F08
 * Callers:
 *     ?EmitDrawListCache@CDrawingContext@@AEAAJPEAVCDrawListCache@@MW4Enum@MilCompositingMode@@@Z @ 0x18006CFF0 (-EmitDrawListCache@CDrawingContext@@AEAAJPEAVCDrawListCache@@MW4Enum@MilCompositingMode@@@Z.c)
 *     ?DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18009B2F0 (-DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRe.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?GetMorePlaceholderClipPlanes@ClipPlaneIterator@@AEAAXPEAUD2D_VECTOR_4F@@PEAI@Z @ 0x18017367C (-GetMorePlaceholderClipPlanes@ClipPlaneIterator@@AEAAXPEAUD2D_VECTOR_4F@@PEAI@Z.c)
 *     ?GetMoreStandardClipPlanes@ClipPlaneIterator@@AEAAXPEAUD2D_VECTOR_4F@@PEAI@Z @ 0x180173748 (-GetMoreStandardClipPlanes@ClipPlaneIterator@@AEAAXPEAUD2D_VECTOR_4F@@PEAI@Z.c)
 *     ?HasMoreClipPlanes@ClipPlaneIterator@@QEBA_NXZ @ 0x18017389C (-HasMoreClipPlanes@ClipPlaneIterator@@QEBA_NXZ.c)
 *     ??4?$ComPtr@VCPolygon@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPolygon@@@Z @ 0x1801AE470 (--4-$ComPtr@VCPolygon@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPolygon@@@Z.c)
 */

__int64 __fastcall ClipPlaneIterator::UpdateClippingPlanes(ClipPlaneIterator *this)
{
  unsigned int v1; // ebx
  _DWORD *v3; // rax
  _DWORD *v4; // rdi
  unsigned int v5; // ecx
  unsigned int v6; // edx
  __int64 v7; // r8
  float x; // xmm2_4
  bool v9; // cc
  float v10; // xmm0_4
  _OWORD *v11; // rcx
  _DWORD *v12; // r8
  __int64 v13; // rdx
  unsigned int v15[4]; // [rsp+30h] [rbp-68h] BYREF
  D2D_VECTOR_4F v16[4]; // [rsp+40h] [rbp-58h] BYREF

  v1 = 0;
  v15[0] = 0;
  if ( *(_BYTE *)this || !ClipPlaneIterator::HasMoreClipPlanes(this) )
  {
    Microsoft::WRL::ComPtr<CPolygon>::operator=(*((_QWORD *)this + 15) + 256LL, 0LL);
  }
  else
  {
    if ( *((_DWORD *)this + 1) )
      ClipPlaneIterator::GetMorePlaceholderClipPlanes(this, v16, v15);
    else
      ClipPlaneIterator::GetMoreStandardClipPlanes(this, v16, v15);
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
      v5 = v15[0];
      v6 = 0;
      if ( !v15[0] )
        goto LABEL_19;
      do
      {
        v7 = v6;
        x = v16[v6].x;
        *(D2D_VECTOR_4F *)&v4[4 * v6 + 4] = v16[v6];
        if ( x == 0.0 )
          v9 = v16[v6].y <= 0.0;
        else
          v9 = x <= 0.0;
        if ( v9 )
          v10 = 0.0;
        else
          v10 = FLOAT_0_5;
        ++v6;
        *(float *)&v4[v7 + 20] = v10;
      }
      while ( v6 < v5 );
      if ( v6 < 4 )
      {
LABEL_19:
        v11 = &v4[4 * v6 + 4];
        v12 = &v4[v6 + 20];
        v13 = 4 - v6;
        do
        {
          *v11 = 0LL;
          *v12++ = 0;
          ++v11;
          --v13;
        }
        while ( v13 );
      }
      Microsoft::WRL::ComPtr<CPolygon>::operator=(*((_QWORD *)this + 15) + 256LL, v4);
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v4 + 8LL))(v4);
    }
    else
    {
      v1 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x2A8u);
    }
  }
  return v1;
}
