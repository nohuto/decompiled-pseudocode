/*
 * XREFs of ?GetD2DBitmap@CDxHandleYUVBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_NPEAPEAUID2D1Bitmap1@@@Z @ 0x1802157E0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?VPBltToDecodeBitmap@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x180216084 (-VPBltToDecodeBitmap@CDxHandleYUVBitmapRealization@@IEAAJXZ.c)
 */

__int64 __fastcall CDxHandleYUVBitmapRealization::GetD2DBitmap(__int64 a1, __int64 a2, __int64 a3, char a4, _QWORD *a5)
{
  int v9; // eax
  __int64 v10; // r9
  unsigned int v11; // ebx
  int v12; // eax

  *a5 = 0LL;
  v9 = CDxHandleYUVBitmapRealization::VPBltToDecodeBitmap((CDxHandleYUVBitmapRealization *)(a1 - 144));
  v11 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0xFDu);
  }
  else
  {
    LOBYTE(v10) = a4;
    v12 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD *))(*(_QWORD *)(*(_QWORD *)(a1 + 240)
                                                                                              + 144LL)
                                                                                  + 136LL))(
            *(_QWORD *)(a1 + 240) + 144LL,
            a2,
            a3,
            v10,
            a5);
    v11 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x102u);
  }
  return v11;
}
