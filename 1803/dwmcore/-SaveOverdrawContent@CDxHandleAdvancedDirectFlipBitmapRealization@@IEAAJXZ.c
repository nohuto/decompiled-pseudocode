/*
 * XREFs of ?SaveOverdrawContent@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x1802145AC
 * Callers:
 *     ?SetAdvancedDirectFlipState@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJPEAVIRenderTargetBitmap@@PEAVIRenderTargetDisplay@@PEAVCRegionWrapper@@@Z @ 0x180214910 (-SetAdvancedDirectFlipState@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJPEAVIRenderTarget.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z @ 0x18007FD70 (-GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z.c)
 *     ?GetRectangleCount@CRegion@FastRegion@@QEBAIXZ @ 0x18007FE88 (-GetRectangleCount@CRegion@FastRegion@@QEBAIXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0xddddd @ 0x180167B84 (McTemplateU0xddddd.c)
 *     ?EnsureRestoreBufferState@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJ_N@Z @ 0x180213CE4 (-EnsureRestoreBufferState@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJ_N@Z.c)
 *     ?ReleaseWriteAccessToRestoreBuffer@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x1802143DC (-ReleaseWriteAccessToRestoreBuffer@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ.c)
 *     ?SaveRestoreWorker@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJAEBVCRegion@@_N@Z @ 0x1802146D8 (-SaveRestoreWorker@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJAEBVCRegion@@_N@Z.c)
 */

__int64 __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::SaveOverdrawContent(
        CDxHandleAdvancedDirectFlipBitmapRealization *this,
        __int64 a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // eax
  int v6; // eax
  __int64 v7; // r10
  __int64 v8; // r10
  int RectangleCount; // eax
  int v10; // r11^4
  unsigned int v11; // r11d
  __int64 v12; // rcx
  struct tagRECT v14; // [rsp+40h] [rbp-18h] BYREF

  LOBYTE(a2) = 1;
  v3 = CDxHandleAdvancedDirectFlipBitmapRealization::EnsureRestoreBufferState(this, a2);
  v4 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x10Du);
  }
  else
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 52) + 96LL))(*((_QWORD *)this + 52));
    v5 = CDxHandleAdvancedDirectFlipBitmapRealization::SaveRestoreWorker(
           this,
           (const struct CRegion *)((*((_QWORD *)this + 54) + 16LL) & ((unsigned __int128)-(__int128)*((unsigned __int64 *)this + 54) >> 64)),
           0);
    v4 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x112u);
    }
    else
    {
      v6 = CDxHandleAdvancedDirectFlipBitmapRealization::ReleaseWriteAccessToRestoreBuffer(this);
      v4 = v6;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x114u);
      }
      else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      {
        v7 = *((_QWORD *)this + 54);
        *(_QWORD *)&v14.left = 0LL;
        *(_QWORD *)&v14.right = 0LL;
        FastRegion::CRegion::GetBoundingRect((FastRegion::CRegion *)(v7 + 16), &v14);
        RectangleCount = FastRegion::CRegion::GetRectangleCount((int **)(v8 + 16));
        McTemplateU0xddddd(
          v12,
          &EVTDESC_ADVANCED_DIRECTFLIP_SAVECONTENT,
          v11 | (unsigned __int64)((__int64)v10 << 32),
          RectangleCount,
          v14.left,
          v14.top,
          v14.right,
          v14.bottom);
      }
    }
  }
  return v4;
}
