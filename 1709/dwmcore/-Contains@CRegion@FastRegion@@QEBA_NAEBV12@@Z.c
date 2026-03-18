/*
 * XREFs of ?Contains@CRegion@FastRegion@@QEBA_NAEBV12@@Z @ 0x1800895A0
 * Callers:
 *     ?AddDirtyRegion@CGdiSpriteBitmap@@IEAAJAEAVCRegion@@@Z @ 0x18009D64C (-AddDirtyRegion@CGdiSpriteBitmap@@IEAAJAEAVCRegion@@@Z.c)
 * Callees:
 *     ?Contains@CRgnData@Internal@FastRegion@@QEBA_NAEBUtagRECT@@@Z @ 0x180030140 (-Contains@CRgnData@Internal@FastRegion@@QEBA_NAEBUtagRECT@@@Z.c)
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800308F0 (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x180030950 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z @ 0x180089360 (-GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z.c)
 */

char __fastcall FastRegion::CRegion::Contains(FastRegion::CRegion *this, const struct CRegion *a2)
{
  FastRegion::CRegion *v3; // r10
  FastRegion::Internal::CRgnData *v4; // r11
  FastRegion::Internal::CRgnData *v5; // rcx
  FastRegion::Internal::CRgnData *v6; // rcx
  struct tagRECT v8; // [rsp+20h] [rbp-50h] BYREF
  struct tagRECT v9; // [rsp+30h] [rbp-40h] BYREF
  _BYTE v10[8]; // [rsp+40h] [rbp-30h] BYREF
  unsigned __int64 v11; // [rsp+48h] [rbp-28h]
  LONG *v12; // [rsp+50h] [rbp-20h]
  __int64 v13; // [rsp+58h] [rbp-18h]
  int v14; // [rsp+60h] [rbp-10h]

  if ( **(_DWORD **)this )
  {
    if ( !**(_DWORD **)a2 )
      return 1;
    FastRegion::CRegion::GetBoundingRect(this, &v9);
    FastRegion::CRegion::GetBoundingRect(v3, &v8);
    if ( v9.left <= v8.left && v9.top <= v8.top && v9.right >= v8.right && v9.bottom >= v8.bottom )
    {
      FastRegion::Internal::CRgnData::BeginIterator(v4, (struct FastRegion::CRegion::Iterator *)v10);
      while ( (unsigned __int64)v12 < v11 )
      {
        v9.top = *v12;
        v9.bottom = v12[2];
        v9.left = *(_DWORD *)(v13 + 8LL * v14);
        v5 = *(FastRegion::Internal::CRgnData **)this;
        v9.right = *(_DWORD *)(v13 + 4LL * (2 * v14 + 1));
        if ( !*(_DWORD *)v5 || !FastRegion::Internal::CRgnData::Contains(v5, &v9) )
          return 0;
        FastRegion::Internal::CRgnData::StepIterator(v6, (struct FastRegion::CRegion::Iterator *)v10);
      }
      return 1;
    }
  }
  return 0;
}
