/*
 * XREFs of ?GetDisplaySize@CTreeEffectLayer@@SAJVDisplayId@@U_LUID@@PEAI2@Z @ 0x18001B1F4
 * Callers:
 *     ?Create@CTreeEffectLayer@@SAJPEAVIRenderTarget@@AEBU_GUID@@AEBUMilPointAndSizeL@@PEAVCEffectBrush@@PEBVCVisual@@AEBUMilPointAndSizeF@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAV1@@Z @ 0x18001AA50 (-Create@CTreeEffectLayer@@SAJPEAVIRenderTarget@@AEBU_GUID@@AEBUMilPointAndSizeL@@PEAVCEffectBrus.c)
 * Callees:
 *     ?GetDisplay@CDisplaySet@@QEBAJU_LUID@@VDisplayId@@PEAPEBVCDisplay@@@Z @ 0x18001B29C (-GetDisplay@CDisplaySet@@QEBAJU_LUID@@VDisplayId@@PEAPEBVCDisplay@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x18007F234 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ??$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z @ 0x1800B7154 (--$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z.c)
 *     ?GetPrimaryDisplay@CDisplaySet@@QEBAJPEAPEBVCDisplay@@@Z @ 0x1800B76D8 (-GetPrimaryDisplay@CDisplaySet@@QEBAJPEAPEBVCDisplay@@@Z.c)
 *     ??$ReleaseInterface@$$CBVCDisplay@@@@YAXAEAPEBVCDisplay@@@Z @ 0x1800C588C (--$ReleaseInterface@$$CBVCDisplay@@@@YAXAEAPEBVCDisplay@@@Z.c)
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
    MilInstrumentationCheckHR(0x14u, 0LL, 0, CurrentDisplaySet, 0xBDu);
  }
  else if ( (int)CDisplaySet::GetDisplay(v14, a2, v7, v15) >= 0
         || (PrimaryDisplay = CDisplaySet::GetPrimaryDisplay(v14, v15), v9 = PrimaryDisplay, PrimaryDisplay >= 0) )
  {
    v10 = *((_QWORD *)v15[0] + 12);
    v11 = _mm_srli_si128(*((__m128i *)v15[0] + 6), 8).m128i_u64[0];
    *a3 = v11 - v10;
    *a4 = HIDWORD(v11) - HIDWORD(v10);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, PrimaryDisplay, 0xC0u);
  }
  ReleaseInterface<CDisplaySet const>(&v14);
  ReleaseInterface<CDisplay const>(v15);
  return v9;
}
