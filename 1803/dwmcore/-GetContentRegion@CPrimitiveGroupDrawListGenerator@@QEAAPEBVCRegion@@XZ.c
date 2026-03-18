/*
 * XREFs of ?GetContentRegion@CPrimitiveGroupDrawListGenerator@@QEAAPEBVCRegion@@XZ @ 0x18017B704
 * Callers:
 *     ?GetTextureMemoryLayoutData@CPrimitiveGroup@@UEBAJAEBUD2D_SIZE_F@@AEAV?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@@Z @ 0x18019F100 (-GetTextureMemoryLayoutData@CPrimitiveGroup@@UEBAJAEBUD2D_SIZE_F@@AEAV-$vector@ULayoutData@CCont.c)
 *     ?Initialize@CEmptyRegionDrawListBrush@@AEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@@Z @ 0x18021815C (-Initialize@CEmptyRegionDrawListBrush@@AEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@@Z.c)
 * Callees:
 *     ?Step@Iterator@CPrimitiveBuffer@@QEAA_NXZ @ 0x180005F10 (-Step@Iterator@CPrimitiveBuffer@@QEAA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetIteratorForState@CPrimitiveGroupDrawListGenerator@@QEBA?AVIterator@CPrimitiveBuffer@@I@Z @ 0x180073054 (-GetIteratorForState@CPrimitiveGroupDrawListGenerator@@QEBA-AVIterator@CPrimitiveBuffer@@I@Z.c)
 *     ??$AppendRects@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@CRegion@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x18007E1B4 (--$AppendRects@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@CRegion.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180080200 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800DB3E0 (--3@YAXPEAX_K@Z.c)
 */

const struct CRegion *__fastcall CPrimitiveGroupDrawListGenerator::GetContentRegion(
        CPrimitiveGroupDrawListGenerator *this)
{
  _DWORD *v2; // rax
  void **v3; // rdi
  void **v4; // rdi
  unsigned int i; // edi
  __int64 v6; // r11
  const struct FastRegion::Internal::CRgnData **v7; // rcx
  _BYTE v9[8]; // [rsp+30h] [rbp-48h] BYREF
  __int128 *v10; // [rsp+38h] [rbp-40h]
  __int128 v11; // [rsp+50h] [rbp-28h] BYREF

  if ( !*((_QWORD *)this + 17) )
  {
    v2 = HeapAlloc(WPF::g_processHeap, 0, 0x48uLL);
    if ( v2 )
    {
      *(_QWORD *)v2 = v2 + 2;
      v2[2] = 0;
    }
    v3 = (void **)*((_QWORD *)this + 17);
    *((_QWORD *)this + 17) = v2;
    if ( v3 )
    {
      FastRegion::CRegion::FreeMemory(v3);
      operator delete(v3);
      v2 = (_DWORD *)*((_QWORD *)this + 17);
    }
    if ( v2 )
    {
      for ( i = 0; i < *(_DWORD *)(*((_QWORD *)this + 3) + 8LL); ++i )
      {
        CPrimitiveGroupDrawListGenerator::GetIteratorForState((__int64)this, (__int64)v9, i);
        if ( (*(_BYTE *)(v6 + 4) & 2) == 0 && *(_DWORD *)v6 && *(_DWORD *)(v6 + 40) < *((_DWORD *)this + 16) )
        {
          do
          {
            v7 = (const struct FastRegion::Internal::CRgnData **)*((_QWORD *)this + 17);
            v11 = *v10;
            CRegion::AppendRects<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>>(
              v7,
              (__int64)&v11);
          }
          while ( CPrimitiveBuffer::Iterator::Step((CPrimitiveBuffer::Iterator *)v9) );
        }
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x2A9u);
      v4 = (void **)*((_QWORD *)this + 17);
      *((_QWORD *)this + 17) = 0LL;
      if ( v4 )
      {
        FastRegion::CRegion::FreeMemory(v4);
        operator delete(v4);
      }
    }
  }
  return (const struct CRegion *)*((_QWORD *)this + 17);
}
