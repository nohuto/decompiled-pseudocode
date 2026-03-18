/*
 * XREFs of ?Update@CDrawListCache@@QEAAJ_KPEAPEAVCDrawListEntry@@IW4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x180023AB0
 * Callers:
 *     ?GenerateDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180022A30 (-GenerateDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListC.c)
 *     ?Update@CDrawListCache@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x180023768 (-Update@CDrawListCache@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ?GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180028FA0 (-GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDraw.c)
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2_F@@PEAVCDrawListCache@@@Z @ 0x180046EB0 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2.c)
 * Callees:
 *     ?GetBounds@CHWDrawListEntry@@UEBA?AUD2D_RECT_F@@XZ @ 0x180023E00 (-GetBounds@CHWDrawListEntry@@UEBA-AUD2D_RECT_F@@XZ.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180036790 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1800C5D86 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawListCache::Update(
        CDrawListCache *this,
        __int64 a2,
        struct CDrawListEntry **a3,
        unsigned int a4,
        enum D2D1_ANTIALIAS_MODE a5,
        bool a6)
{
  unsigned int v10; // edi
  __int64 v11; // r15
  SIZE_T v12; // rax
  void *v13; // rax
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // r14
  CHWDrawListEntry *v17; // rsi
  int v18; // eax
  struct D2D_RECT_F *(__fastcall *v19)(CHWDrawListEntry *__hidden, struct D2D_RECT_F *__return_ptr __struct_ptr); // rax
  struct D2D_RECT_F *Bounds; // rax
  struct D2D_RECT_F v21; // xmm0
  int v22; // ecx
  int v23; // ecx
  struct D2D_RECT_F v25; // [rsp+38h] [rbp-69h] BYREF
  struct D2D_RECT_F v26; // [rsp+48h] [rbp-59h] BYREF
  D2D_RECT_F v27; // [rsp+58h] [rbp-49h] BYREF

  v10 = 0;
  v11 = a4;
  v12 = 8LL * a4;
  if ( !is_mul_ok(a4, 8uLL) )
    v12 = -1LL;
  if ( !v12 )
    v12 = 1LL;
  v13 = HeapAlloc(WPF::g_processHeap, 0, v12);
  *((_QWORD *)this + 4) = v13;
  if ( v13 )
  {
    memcpy_0(v13, a3, 8LL * a4);
    *((_DWORD *)this + 24) = a5;
    *((_BYTE *)this + 100) = a6;
    *((_DWORD *)this + 10) = a4;
    *((_QWORD *)this + 3) = a2;
    if ( a4 )
    {
      v14 = **((_QWORD **)this + 4);
      v26 = (struct D2D_RECT_F)0LL;
      v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 24LL))(v14);
      *((_DWORD *)this + 23) = -1;
      *((_DWORD *)this + 4) = v15;
      *((_DWORD *)this + 22) = 0;
      v16 = 0LL;
      do
      {
        v17 = *(CHWDrawListEntry **)(v16 + *((_QWORD *)this + 4));
        (**(void (__fastcall ***)(CHWDrawListEntry *))v17)(v17);
        v18 = *((_DWORD *)v17 + 11);
        *((_DWORD *)this + 22) |= v18;
        *((_DWORD *)this + 23) &= v18;
        v19 = *(struct D2D_RECT_F *(__fastcall **)(CHWDrawListEntry *__hidden, struct D2D_RECT_F *__return_ptr __struct_ptr))(*(_QWORD *)v17 + 32LL);
        if ( v19 == CHWDrawListEntry::GetBounds )
          Bounds = CHWDrawListEntry::GetBounds(v17, &v27);
        else
          Bounds = v19(v17, &v27);
        v25 = *Bounds;
        TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(&v26, &v25);
        v16 += 8LL;
        --v11;
      }
      while ( v11 );
      v25 = v26;
      v21 = v26;
    }
    else
    {
      v21 = 0LL;
      *((_DWORD *)this + 22) = 32;
      *((_DWORD *)this + 23) = 32;
    }
    v22 = *((_DWORD *)this + 4);
    *(struct D2D_RECT_F *)((char *)this + 44) = v21;
    v23 = v22 - 1;
    if ( v23 )
    {
      if ( v23 == 1 )
        ++dword_18026EE10;
    }
    else
    {
      ++dword_18026EE04;
    }
  }
  else
  {
    v10 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x73u);
  }
  return v10;
}
