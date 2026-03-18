/*
 * XREFs of ?SaveOverdrawContent@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x1801D26FC
 * Callers:
 *     ?SetAdvancedDirectFlipState@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJPEAVIRenderTargetBitmap@@PEAVIRenderTargetDisplay@@PEAVCRegionWrapper@@@Z @ 0x1801D2A60 (-SetAdvancedDirectFlipState@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJPEAVIRenderTarget.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z @ 0x180089360 (-GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z.c)
 *     ?GetRectangleCount@CRegion@FastRegion@@QEBAIXZ @ 0x180089398 (-GetRectangleCount@CRegion@FastRegion@@QEBAIXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0xddddd @ 0x180144DCC (McTemplateU0xddddd.c)
 *     ?EnsureRestoreBufferState@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJ_N@Z @ 0x1801D1E30 (-EnsureRestoreBufferState@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJ_N@Z.c)
 *     ?ReleaseWriteAccessToRestoreBuffer@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x1801D252C (-ReleaseWriteAccessToRestoreBuffer@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ.c)
 *     ?SaveRestoreWorker@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJAEBVCRegion@@_N@Z @ 0x1801D2828 (-SaveRestoreWorker@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJAEBVCRegion@@_N@Z.c)
 */

__int64 __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::SaveOverdrawContent(
        CDxHandleAdvancedDirectFlipBitmapRealization *this,
        __int64 a2)
{
  signed int v3; // eax
  unsigned int v4; // ebx
  signed int v5; // eax
  signed int v6; // eax
  __int64 v7; // r11
  __int64 v8; // r11
  int RectangleCount; // eax
  unsigned int v10; // r10d
  __int64 v11; // rcx
  struct tagRECT v13; // [rsp+40h] [rbp-18h] BYREF
  __int64 v14; // [rsp+68h] [rbp+10h]

  LOBYTE(a2) = 1;
  v3 = CDxHandleAdvancedDirectFlipBitmapRealization::EnsureRestoreBufferState(this, a2);
  v4 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v3, 0x10Du);
  }
  else
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 52) + 120LL))(*((_QWORD *)this + 52));
    v5 = CDxHandleAdvancedDirectFlipBitmapRealization::SaveRestoreWorker(
           this,
           (const struct CRegion *)((*((_QWORD *)this + 54) + 16LL) & ((unsigned __int128)-(__int128)*((unsigned __int64 *)this + 54) >> 64)),
           0);
    v4 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v5, 0x112u);
    }
    else
    {
      v6 = CDxHandleAdvancedDirectFlipBitmapRealization::ReleaseWriteAccessToRestoreBuffer(this);
      v4 = v6;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v6, 0x114u);
      }
      else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      {
        v7 = *((_QWORD *)this + 54);
        *(_QWORD *)&v13.left = 0LL;
        *(_QWORD *)&v13.right = 0LL;
        FastRegion::CRegion::GetBoundingRect((FastRegion::CRegion *)(v7 + 16), &v13);
        v14 = *(_QWORD *)((char *)this + 444);
        RectangleCount = FastRegion::CRegion::GetRectangleCount((FastRegion::CRegion *)(v8 + 16));
        McTemplateU0xddddd(
          v11,
          &EVTDESC_ADVANCED_DIRECTFLIP_SAVECONTENT,
          v10 | (unsigned __int64)((__int64)SHIDWORD(v14) << 32),
          RectangleCount,
          v13.left,
          v13.top,
          v13.right,
          v13.bottom);
      }
    }
  }
  return v4;
}
