/*
 * XREFs of ?Update@CDrawListCache@@QEAAJ_KPEAPEAVCDrawListEntry@@IW4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x1800AB4C8
 * Callers:
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2_F@@PEAVCDrawListCache@@@Z @ 0x180008CB0 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2.c)
 *     ?Update@CDrawListCache@@QEAAJPEAVCDrawingContext@@PEAVCDrawListPrimitiveBuilder@@@Z @ 0x18000994C (-Update@CDrawListCache@@QEAAJPEAVCDrawingContext@@PEAVCDrawListPrimitiveBuilder@@@Z.c)
 *     ?GenerateDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18008CAF0 (-GenerateDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListC.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x18006FD70 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?GetBounds@CHWDrawListEntry@@UEBA?AUD2D_RECT_F@@XZ @ 0x1800AB7D0 (-GetBounds@CHWDrawListEntry@@UEBA-AUD2D_RECT_F@@XZ.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1800D5396 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawListCache::Update(
        CDrawListCache *this,
        __int64 a2,
        struct CDrawListEntry **a3,
        unsigned int a4,
        enum D2D1_ANTIALIAS_MODE a5,
        bool a6)
{
  unsigned int v10; // esi
  __int64 v11; // r12
  SIZE_T v12; // rax
  void *v13; // rax
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // r15
  CHWDrawListEntry *v17; // r14
  int v18; // eax
  struct D2D_RECT_F *(__fastcall *v19)(CHWDrawListEntry *__hidden, struct D2D_RECT_F *__return_ptr __struct_ptr); // rax
  struct D2D_RECT_F *Bounds; // rax
  __int128 v21; // xmm0
  int v22; // ecx
  int v23; // ecx
  __int128 v25; // [rsp+68h] [rbp-69h] BYREF
  struct D2D_RECT_F v26; // [rsp+78h] [rbp-59h] BYREF
  struct D2D_RECT_F v27; // [rsp+88h] [rbp-49h] BYREF

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
      v25 = 0uLL;
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
        v26 = *Bounds;
        TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe((float *)&v25, &v26.left);
        v16 += 8LL;
        --v11;
      }
      while ( v11 );
      v21 = v25;
    }
    else
    {
      v21 = 0LL;
      *((_DWORD *)this + 22) = 32;
      *((_DWORD *)this + 23) = 32;
    }
    v22 = *((_DWORD *)this + 4);
    *(_OWORD *)((char *)this + 44) = v21;
    v23 = v22 - 1;
    if ( v23 )
    {
      if ( v23 == 1 )
        _InterlockedExchangeAdd((volatile signed __int32 *)CCounterManager::s_pGlobalPerFrameCounterManager + 18, 1u);
    }
    else
    {
      _InterlockedExchangeAdd((volatile signed __int32 *)CCounterManager::s_pGlobalPerFrameCounterManager + 16, 1u);
    }
  }
  else
  {
    v10 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x6Du);
  }
  return v10;
}
