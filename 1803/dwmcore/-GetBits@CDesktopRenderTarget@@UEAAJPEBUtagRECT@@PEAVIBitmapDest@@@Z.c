/*
 * XREFs of ?GetBits@CDesktopRenderTarget@@UEAAJPEBUtagRECT@@PEAVIBitmapDest@@@Z @ 0x180043F60
 * Callers:
 *     ?GetBits@CDesktopRenderTarget@@WGI@EAAJPEBUtagRECT@@PEAVIBitmapDest@@@Z @ 0x1800DD4D0 (-GetBits@CDesktopRenderTarget@@WGI@EAAJPEBUtagRECT@@PEAVIBitmapDest@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetBits@CHwndRenderTarget@@UEAAJPEBUtagRECT@@PEAVIBitmapDest@@@Z @ 0x1800629E0 (-GetBits@CHwndRenderTarget@@UEAAJPEBUtagRECT@@PEAVIBitmapDest@@@Z.c)
 *     ?IsEquivalentTo@?$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800BDD8C (-IsEquivalentTo@-$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 */

__int64 __fastcall CDesktopRenderTarget::GetBits(
        CDesktopRenderTarget *this,
        const struct tagRECT *a2,
        struct IBitmapDest *a3)
{
  unsigned int v3; // ebx
  __int64 v4; // r10
  char v8; // r11
  __int64 v9; // rcx
  char IsEquivalentTo; // al
  char v11; // r11
  __int64 v12; // rdi
  __int64 v13; // rcx
  int Bits; // eax

  v3 = 0;
  v4 = 0LL;
  v8 = 1;
  if ( *((_DWORD *)this + 34) )
  {
    while ( v8 )
    {
      v9 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 14) + 8 * v4) + 168LL);
      if ( *(_QWORD *)(v9 + 152) == v9 )
      {
        IsEquivalentTo = TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::IsEquivalentTo(v9 + 104, v9 + 88);
        v8 = IsEquivalentTo != 0 ? v11 : 0;
      }
      v4 = (unsigned int)(v4 + 1);
      if ( (unsigned int)v4 >= *((_DWORD *)this + 34) )
      {
        if ( v8 )
          goto LABEL_7;
        return (unsigned int)-2147024809;
      }
    }
    return (unsigned int)-2147024809;
  }
  else
  {
LABEL_7:
    v12 = 0LL;
    if ( *((_DWORD *)this + 34) )
    {
      while ( 1 )
      {
        v13 = *(_QWORD *)(*((_QWORD *)this + 14) + 8 * v12);
        if ( *(_QWORD *)(*(_QWORD *)(v13 + 168) + 152LL) == *(_QWORD *)(v13 + 168) )
        {
          Bits = CHwndRenderTarget::GetBits((CHwndRenderTarget *)(v13 + 64), a2, a3);
          v3 = Bits;
          if ( Bits < 0 )
            break;
        }
        v12 = (unsigned int)(v12 + 1);
        if ( (unsigned int)v12 >= *((_DWORD *)this + 34) )
          return v3;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Bits, 0x7CEu);
    }
  }
  return v3;
}
