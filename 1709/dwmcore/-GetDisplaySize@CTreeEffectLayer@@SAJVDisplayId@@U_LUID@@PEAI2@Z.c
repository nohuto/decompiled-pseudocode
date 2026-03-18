/*
 * XREFs of ?GetDisplaySize@CTreeEffectLayer@@SAJVDisplayId@@U_LUID@@PEAI2@Z @ 0x180083878
 * Callers:
 *     ?Create@CTreeEffectLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@PEAVCEffectBrush@@PEBVCVisual@@AEBUMilPointAndSizeF@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAV1@@Z @ 0x1800801EC (-Create@CTreeEffectLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@PEAVCEffectBrush@@PEBVCVis.c)
 * Callees:
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x180010F74 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$ReleaseInterface@$$CBVCDisplay@@@@YAXAEAPEBVCDisplay@@@Z @ 0x180083920 (--$ReleaseInterface@$$CBVCDisplay@@@@YAXAEAPEBVCDisplay@@@Z.c)
 *     ??$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z @ 0x18008395C (--$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z.c)
 *     ?GetDisplay@CDisplaySet@@QEBAJU_LUID@@VDisplayId@@PEAPEBVCDisplay@@@Z @ 0x18009843C (-GetDisplay@CDisplaySet@@QEBAJU_LUID@@VDisplayId@@PEAPEBVCDisplay@@@Z.c)
 *     ?GetPrimaryDisplay@CDisplaySet@@QEBAJPEAPEBVCDisplay@@@Z @ 0x180098A60 (-GetPrimaryDisplay@CDisplaySet@@QEBAJPEAPEBVCDisplay@@@Z.c)
 */

__int64 __fastcall CTreeEffectLayer::GetDisplaySize(CDisplayManager *a1, __int64 a2, _DWORD *a3, _DWORD *a4)
{
  unsigned int v7; // ebx
  signed int CurrentDisplaySet; // eax
  unsigned int v9; // esi
  __int64 v10; // rcx
  unsigned __int64 v11; // xmm0_8
  __int64 v12; // rdx
  signed int PrimaryDisplay; // eax
  CDisplaySet *v15; // [rsp+30h] [rbp-38h] BYREF
  struct CDisplay *v16[6]; // [rsp+38h] [rbp-30h] BYREF

  v15 = 0LL;
  v16[0] = 0LL;
  v7 = (unsigned int)a1;
  CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet(a1, &v15);
  v9 = CurrentDisplaySet;
  if ( CurrentDisplaySet < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, CurrentDisplaySet, 0xB9u);
  }
  else if ( (int)CDisplaySet::GetDisplay(v15, a2, v7, v16) >= 0
         || (PrimaryDisplay = CDisplaySet::GetPrimaryDisplay(v15, v16), v9 = PrimaryDisplay, PrimaryDisplay >= 0) )
  {
    v10 = *((_QWORD *)v16[0] + 12);
    v11 = _mm_srli_si128(*((__m128i *)v16[0] + 6), 8).m128i_u64[0];
    *a3 = v11 - v10;
    *a4 = HIDWORD(v11) - HIDWORD(v10);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, PrimaryDisplay, 0xBCu);
  }
  ReleaseInterface<CDisplaySet const>(&v15);
  ReleaseInterface<CDisplay const>(v16, v12);
  return v9;
}
