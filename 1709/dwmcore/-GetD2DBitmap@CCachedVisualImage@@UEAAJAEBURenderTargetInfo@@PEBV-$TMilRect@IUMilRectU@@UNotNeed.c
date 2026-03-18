/*
 * XREFs of ?GetD2DBitmap@CCachedVisualImage@@UEAAJAEBURenderTargetInfo@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_NPEAPEAUID2D1Bitmap1@@@Z @ 0x18008DF00
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?EnsureRenderTargetBitmapInfo@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@PEAPEAURenderTargetBitmapInfo@1@@Z @ 0x18008D904 (-EnsureRenderTargetBitmapInfo@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@PEAPEAURenderTargetBi.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCachedVisualImage::GetD2DBitmap(__int64 a1, __int64 a2, __int64 a3, char a4, _QWORD *a5)
{
  _QWORD *v5; // rsi
  signed int v9; // eax
  __int64 v10; // r9
  unsigned int v11; // ebx
  signed int v12; // eax
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF

  v5 = a5;
  v14 = 0LL;
  *a5 = 0LL;
  v9 = CCachedVisualImage::EnsureRenderTargetBitmapInfo(a1 - 136, *(_QWORD *)a2, *(_DWORD *)(a2 + 8), &v14);
  v11 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_1802024DC, 1u, v9, 0x79Cu);
  }
  else if ( v14 )
  {
    LOBYTE(v10) = a4;
    v12 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD *))(*(_QWORD *)(*(_QWORD *)(v14 + 8)
                                                                                              + 144LL)
                                                                                  + 136LL))(
            *(_QWORD *)(v14 + 8) + 144LL,
            a2,
            a3,
            v10,
            v5);
    v11 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_1802024DC, 1u, v12, 0x7A5u);
  }
  return v11;
}
