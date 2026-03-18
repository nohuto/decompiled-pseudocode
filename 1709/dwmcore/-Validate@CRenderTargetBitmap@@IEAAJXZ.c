/*
 * XREFs of ?Validate@CRenderTargetBitmap@@IEAAJXZ @ 0x18008B010
 * Callers:
 *     ?GetDeviceTexture@CRenderTargetBitmap@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x18008B210 (-GetDeviceTexture@CRenderTargetBitmap@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 *     ?GetBitmap@CRenderTargetBitmap@@UEAAJU_LUID@@VDisplayId@@_NPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@2PEAPEAUID2D1Bitmap1@@@Z @ 0x18008B370 (-GetBitmap@CRenderTargetBitmap@@UEAAJU_LUID@@VDisplayId@@_NPEBV-$TMilRect@IUMilRectU@@UNotNeeded.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderTargetBitmap::Validate(CRenderTargetBitmap *this)
{
  __int64 v1; // rcx
  DWORD v2; // ebx
  DWORD v4; // r9d
  unsigned int v5; // [rsp+20h] [rbp-18h]

  v1 = *((_QWORD *)this + 19);
  v2 = 0;
  if ( !v1 )
  {
    v4 = -2003292404;
    v5 = 479;
LABEL_6:
    v2 = v4;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v4, v5);
    return v2;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v1 + 32LL))(v1) )
  {
    v4 = -2003304307;
    v5 = 483;
    goto LABEL_6;
  }
  return v2;
}
