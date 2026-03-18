/*
 * XREFs of ?GetD2DBitmap@CRenderTargetBitmap@@UEAAJAEBURenderTargetInfo@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_NPEAPEAUID2D1Bitmap1@@@Z @ 0x180046F60
 * Callers:
 *     ?GetD2DBitmap@CCachedVisualImage@@UEAAJAEBURenderTargetInfo@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_NPEAPEAUID2D1Bitmap1@@@Z @ 0x180048820 (-GetD2DBitmap@CCachedVisualImage@@UEAAJAEBURenderTargetInfo@@PEBV-$TMilRect@IUMilRectU@@UNotNeed.c)
 * Callees:
 *     ?GetBitmap@CRenderTargetBitmap@@UEAAJU_LUID@@VDisplayId@@_NPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@2PEAPEAUID2D1Bitmap1@@@Z @ 0x180046E80 (-GetBitmap@CRenderTargetBitmap@@UEAAJU_LUID@@VDisplayId@@_NPEBV-$TMilRect@IUMilRectU@@UNotNeeded.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderTargetBitmap::GetD2DBitmap(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        struct ID2D1Bitmap1 **a5)
{
  __int64 v5; // r10
  __int64 v7; // r8
  __int64 (__fastcall *v8)(__int64, __int64, int, char, __int64, bool, struct ID2D1Bitmap1 **); // rax
  bool v10; // [rsp+28h] [rbp-20h]

  v5 = a1 - 88;
  v7 = *((unsigned int *)a2 + 2);
  v8 = *(__int64 (__fastcall **)(__int64, __int64, int, char, __int64, bool, struct ID2D1Bitmap1 **))(*(_QWORD *)(a1 - 88) + 56LL);
  if ( v8 == CRenderTargetBitmap::GetBitmap )
    return CRenderTargetBitmap::GetBitmap(v5, *a2, v7, *((_BYTE *)a2 + 16), a3, a4, a5);
  v10 = a4;
  LOBYTE(a4) = *((_BYTE *)a2 + 16);
  return v8(v5, *a2, v7, a4, a3, v10, a5);
}
