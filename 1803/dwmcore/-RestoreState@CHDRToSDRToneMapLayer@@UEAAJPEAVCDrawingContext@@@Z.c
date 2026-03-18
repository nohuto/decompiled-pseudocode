/*
 * XREFs of ?RestoreState@CHDRToSDRToneMapLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180174690
 * Callers:
 *     <none>
 * Callees:
 *     ?RestoreState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180024A00 (-RestoreState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?RenderLayer@CHDRToSDRToneMapLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x18017445C (-RenderLayer@CHDRToSDRToneMapLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 */

__int64 __fastcall CHDRToSDRToneMapLayer::RestoreState(
        CHDRToSDRToneMapLayer *this,
        struct CDrawingContext *a2,
        __int64 a3,
        double a4)
{
  int v6; // eax
  __int64 v7; // r8
  unsigned int v8; // ebx
  int v9; // eax

  v6 = CExternalLayer::RestoreState(this, a2);
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x3Du);
  }
  else
  {
    v9 = CHDRToSDRToneMapLayer::RenderLayer(this, a2, v7, a4);
    v8 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x3Fu);
  }
  return v8;
}
