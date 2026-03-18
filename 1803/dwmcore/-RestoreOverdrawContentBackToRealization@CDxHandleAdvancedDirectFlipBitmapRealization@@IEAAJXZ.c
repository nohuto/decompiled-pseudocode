/*
 * XREFs of ?RestoreOverdrawContentBackToRealization@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x1802144B0
 * Callers:
 *     ?ProcessRestoreContent@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJPEAVIRenderTargetDisplay@@@Z @ 0x180214350 (-ProcessRestoreContent@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJPEAVIRenderTargetDispl.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z @ 0x18007FD70 (-GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z.c)
 *     ?GetRectangleCount@CRegion@FastRegion@@QEBAIXZ @ 0x18007FE88 (-GetRectangleCount@CRegion@FastRegion@@QEBAIXZ.c)
 *     McTemplateU0xddddd @ 0x180167B84 (McTemplateU0xddddd.c)
 *     ?EnsureRestoreBufferState@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJ_N@Z @ 0x180213CE4 (-EnsureRestoreBufferState@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJ_N@Z.c)
 *     ?SaveRestoreWorker@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJAEBVCRegion@@_N@Z @ 0x1802146D8 (-SaveRestoreWorker@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJAEBVCRegion@@_N@Z.c)
 */

__int64 __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::RestoreOverdrawContentBackToRealization(
        CDxHandleAdvancedDirectFlipBitmapRealization *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v4; // eax
  __int64 v5; // r10
  __int64 v6; // r10
  int RectangleCount; // eax
  int v8; // r11^4
  unsigned int v9; // r11d
  __int64 v10; // rcx
  struct tagRECT v12; // [rsp+40h] [rbp-18h] BYREF

  v2 = CDxHandleAdvancedDirectFlipBitmapRealization::EnsureRestoreBufferState(this, 0LL);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x15Cu);
  }
  else
  {
    v4 = CDxHandleAdvancedDirectFlipBitmapRealization::SaveRestoreWorker(
           this,
           (const struct CRegion *)((*((_QWORD *)this + 54) + 16LL) & ((unsigned __int128)-(__int128)*((unsigned __int64 *)this + 54) >> 64)),
           1);
    v3 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x15Fu);
    }
    else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    {
      v5 = *((_QWORD *)this + 54);
      *(_QWORD *)&v12.left = 0LL;
      *(_QWORD *)&v12.right = 0LL;
      FastRegion::CRegion::GetBoundingRect((FastRegion::CRegion *)(v5 + 16), &v12);
      RectangleCount = FastRegion::CRegion::GetRectangleCount((int **)(v6 + 16));
      McTemplateU0xddddd(
        v10,
        &EVTDESC_ADVANCED_DIRECTFLIP_RESTORECONTENTBACKTOREALIZATION,
        v9 | (unsigned __int64)((__int64)v8 << 32),
        RectangleCount,
        v12.left,
        v12.top,
        v12.right,
        v12.bottom);
    }
  }
  return v3;
}
