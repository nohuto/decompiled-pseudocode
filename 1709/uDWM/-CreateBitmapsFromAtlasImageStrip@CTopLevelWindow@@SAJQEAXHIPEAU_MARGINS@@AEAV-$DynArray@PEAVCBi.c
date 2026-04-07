/*
 * XREFs of ?CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV?$DynArray@PEAVCBitmapSource@@$0A@@@@Z @ 0x18003B0C4
 * Callers:
 *     ?CreateNCButtons@CTopLevelWindow@@CAJQEAXPEAUWindowFrame@1@1@Z @ 0x18003ADC0 (-CreateNCButtons@CTopLevelWindow@@CAJQEAXPEAUWindowFrame@1@1@Z.c)
 *     ?CreateGlyphsFromAtlas@CTopLevelWindow@@CAJQEAX@Z @ 0x18003AFDC (-CreateGlyphsFromAtlas@CTopLevelWindow@@CAJQEAX@Z.c)
 *     ?LoadTheme@CDesktopManager@@AEAAJXZ @ 0x18003BE00 (-LoadTheme@CDesktopManager@@AEAAJXZ.c)
 *     ?Start@CContactStationaryVisual@@QEAAJW4STATIONARY_ANIMATION_TYPE@1@PEBUtagPOINT@@PEBUtagRECT@@_N@Z @ 0x1800848C8 (-Start@CContactStationaryVisual@@QEAAJW4STATIONARY_ANIMATION_TYPE@1@PEBUtagPOINT@@PEBUtagRECT@@_.c)
 *     ?Start@CPenPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x180089470 (-Start@CPenPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?Initialize@CIndirectTouchVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x180091A50 (-Initialize@CIndirectTouchVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 * Callees:
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x180020A50 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z @ 0x1800389A0 (-CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@PEAPEAVCBitmapSource@@.c)
 *     _Init_thread_footer @ 0x180045628 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180045688 (_Init_thread_header.c)
 */

__int64 __fastcall CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(
        void *a1,
        int iPartId,
        unsigned int a3,
        struct _MARGINS *a4,
        __int64 a5)
{
  int v9; // eax
  int v10; // ebx
  int BitmapsFromAtlasImageStrip; // eax

  if ( dword_1800C1A74 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_1800C1A74);
    if ( dword_1800C1A74 == -1 )
    {
      dword_1800C19D8 = -2147023728;
      Init_thread_footer(&dword_1800C1A74);
    }
  }
  v9 = DynArrayImpl<0>::Grow(a5, 8u, a3, 0, 0LL);
  v10 = v9;
  if ( v9 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x1A7u);
  else
    *(_DWORD *)(a5 + 24) += a3;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800C19D8, 1u, v10, 0x34Au);
  }
  else
  {
    BitmapsFromAtlasImageStrip = CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(
                                   a1,
                                   iPartId,
                                   a3,
                                   a4,
                                   *(struct tagRECT ***)a5);
    v10 = BitmapsFromAtlasImageStrip;
    if ( BitmapsFromAtlasImageStrip < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800C19D8, 1u, BitmapsFromAtlasImageStrip, 0x352u);
  }
  return (unsigned int)v10;
}
