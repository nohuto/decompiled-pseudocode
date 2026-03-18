/*
 * XREFs of ?GetDisplaySize@CTreeEffectLayer@@SAJVDisplayId@@U_LUID@@PEAI2@Z @ 0x18000A740
 * Callers:
 *     ?Create@CTreeEffectLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@PEAVCEffectBrush@@PEBVCVisual@@AEBUMilPointAndSizeF@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAV1@@Z @ 0x180008F98 (-Create@CTreeEffectLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@PEAVCEffectBrush@@PEBVCVis.c)
 * Callees:
 *     ?GetDisplay@CDisplaySet@@QEBAJU_LUID@@VDisplayId@@PEAPEBVCDisplay@@@Z @ 0x18000A818 (-GetDisplay@CDisplaySet@@QEBAJU_LUID@@VDisplayId@@PEAPEBVCDisplay@@@Z.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x18001F1FC (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z @ 0x1800B69A4 (--$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z.c)
 *     ?GetPrimaryDisplay@CDisplaySet@@QEBAJPEAPEBVCDisplay@@@Z @ 0x1800B6AB0 (-GetPrimaryDisplay@CDisplaySet@@QEBAJPEAPEBVCDisplay@@@Z.c)
 *     ??$ReleaseInterface@$$CBVCDisplay@@@@YAXAEAPEBVCDisplay@@@Z @ 0x1800C2FFC (--$ReleaseInterface@$$CBVCDisplay@@@@YAXAEAPEBVCDisplay@@@Z.c)
 */

__int64 __fastcall CTreeEffectLayer::GetDisplaySize(CDisplayManager *a1, __int64 a2, _DWORD *a3, _DWORD *a4)
{
  unsigned int v7; // ebx
  int CurrentDisplaySet; // eax
  unsigned int v9; // esi
  __int64 v10; // rcx
  unsigned __int64 v11; // xmm0_8
  int PrimaryDisplay; // eax
  CDisplaySet *v14; // [rsp+30h] [rbp-38h] BYREF
  struct CDisplay *v15[6]; // [rsp+38h] [rbp-30h] BYREF

  v14 = 0LL;
  v15[0] = 0LL;
  v7 = (unsigned int)a1;
  CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet(a1, &v14);
  v9 = CurrentDisplaySet;
  if ( CurrentDisplaySet < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, CurrentDisplaySet, 0xB9u);
  }
  else if ( (int)CDisplaySet::GetDisplay(v14, a2, v7, v15) >= 0
         || (PrimaryDisplay = CDisplaySet::GetPrimaryDisplay(v14, v15), v9 = PrimaryDisplay, PrimaryDisplay >= 0) )
  {
    v10 = *((_QWORD *)v15[0] + 15);
    v11 = _mm_srli_si128(*(__m128i *)((char *)v15[0] + 120), 8).m128i_u64[0];
    *a3 = v11 - v10;
    *a4 = HIDWORD(v11) - HIDWORD(v10);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, PrimaryDisplay, 0xBCu);
  }
  ReleaseInterface<CDisplaySet const>(&v14);
  ReleaseInterface<CDisplay const>(v15);
  return v9;
}
