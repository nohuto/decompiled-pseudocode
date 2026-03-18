/*
 * XREFs of ?SaveOverdrawContent@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x1801B58EC
 * Callers:
 *     ?SetAdvancedDirectFlipState@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJPEAVIRenderTargetBitmap@@PEAVIRenderTargetDisplay@@PEAVCRegionWrapper@@@Z @ 0x1801B5C50 (-SetAdvancedDirectFlipState@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJPEAVIRenderTarget.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z @ 0x180075BB8 (-GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z.c)
 *     ?GetRectangleCount@CRegion@FastRegion@@QEBAIXZ @ 0x180075BF0 (-GetRectangleCount@CRegion@FastRegion@@QEBAIXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     Template_xddddd @ 0x1801523D4 (Template_xddddd.c)
 *     ?EnsureRestoreBufferState@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJ_N@Z @ 0x1801B50A0 (-EnsureRestoreBufferState@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJ_N@Z.c)
 *     ?ReleaseWriteAccessToRestoreBuffer@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x1801B571C (-ReleaseWriteAccessToRestoreBuffer@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ.c)
 *     ?SaveRestoreWorker@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJAEBVCRegion@@_N@Z @ 0x1801B5A18 (-SaveRestoreWorker@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJAEBVCRegion@@_N@Z.c)
 */

__int64 __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::SaveOverdrawContent(
        CDxHandleAdvancedDirectFlipBitmapRealization *this,
        __int64 a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // eax
  int v6; // eax
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
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x103u);
  }
  else
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 54) + 136LL))(*((_QWORD *)this + 54));
    v5 = CDxHandleAdvancedDirectFlipBitmapRealization::SaveRestoreWorker(
           this,
           (const struct CRegion *)((*((_QWORD *)this + 56) + 16LL) & ((unsigned __int128)-(__int128)*((unsigned __int64 *)this + 56) >> 64)),
           0);
    v4 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x108u);
    }
    else
    {
      v6 = CDxHandleAdvancedDirectFlipBitmapRealization::ReleaseWriteAccessToRestoreBuffer(this);
      v4 = v6;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x10Au);
      }
      else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      {
        v7 = *((_QWORD *)this + 56);
        *(_QWORD *)&v13.left = 0LL;
        *(_QWORD *)&v13.right = 0LL;
        FastRegion::CRegion::GetBoundingRect((FastRegion::CRegion *)(v7 + 16), &v13);
        v14 = *(_QWORD *)((char *)this + 460);
        RectangleCount = FastRegion::CRegion::GetRectangleCount((FastRegion::CRegion *)(v8 + 16));
        Template_xddddd(
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
