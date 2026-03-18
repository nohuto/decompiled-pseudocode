/*
 * XREFs of ?RestoreOverdrawContentBackToRealization@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x1801B57F0
 * Callers:
 *     ?ProcessRestoreContent@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJPEAVIRenderTargetDisplay@@@Z @ 0x1801B5650 (-ProcessRestoreContent@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJPEAVIRenderTargetDispl.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z @ 0x180075BB8 (-GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z.c)
 *     ?GetRectangleCount@CRegion@FastRegion@@QEBAIXZ @ 0x180075BF0 (-GetRectangleCount@CRegion@FastRegion@@QEBAIXZ.c)
 *     Template_xddddd @ 0x1801523D4 (Template_xddddd.c)
 *     ?EnsureRestoreBufferState@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJ_N@Z @ 0x1801B50A0 (-EnsureRestoreBufferState@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJ_N@Z.c)
 *     ?SaveRestoreWorker@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJAEBVCRegion@@_N@Z @ 0x1801B5A18 (-SaveRestoreWorker@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJAEBVCRegion@@_N@Z.c)
 */

__int64 __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::RestoreOverdrawContentBackToRealization(
        CDxHandleAdvancedDirectFlipBitmapRealization *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v4; // eax
  __int64 v5; // r11
  __int64 v6; // r11
  int RectangleCount; // eax
  unsigned int v8; // r10d
  __int64 v9; // rcx
  struct tagRECT v11; // [rsp+40h] [rbp-18h] BYREF
  __int64 v12; // [rsp+68h] [rbp+10h]

  v2 = CDxHandleAdvancedDirectFlipBitmapRealization::EnsureRestoreBufferState(this, 0LL);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x152u);
  }
  else
  {
    v4 = CDxHandleAdvancedDirectFlipBitmapRealization::SaveRestoreWorker(
           this,
           (const struct CRegion *)((*((_QWORD *)this + 56) + 16LL) & ((unsigned __int128)-(__int128)*((unsigned __int64 *)this + 56) >> 64)),
           1);
    v3 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x155u);
    }
    else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    {
      v5 = *((_QWORD *)this + 56);
      *(_QWORD *)&v11.left = 0LL;
      *(_QWORD *)&v11.right = 0LL;
      FastRegion::CRegion::GetBoundingRect((FastRegion::CRegion *)(v5 + 16), &v11);
      v12 = *(_QWORD *)((char *)this + 460);
      RectangleCount = FastRegion::CRegion::GetRectangleCount((FastRegion::CRegion *)(v6 + 16));
      Template_xddddd(
        v9,
        &EVTDESC_ADVANCED_DIRECTFLIP_RESTORECONTENTBACKTOREALIZATION,
        v8 | (unsigned __int64)((__int64)SHIDWORD(v12) << 32),
        RectangleCount,
        v11.left,
        v11.top,
        v11.right,
        v11.bottom);
    }
  }
  return v3;
}
