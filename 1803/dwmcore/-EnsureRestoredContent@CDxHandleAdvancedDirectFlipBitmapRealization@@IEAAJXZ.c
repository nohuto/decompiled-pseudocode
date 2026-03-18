/*
 * XREFs of ?EnsureRestoredContent@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x180213DF0
 * Callers:
 *     ?GetD2DBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_NPEAPEAUID2D1Bitmap1@@@Z @ 0x180213FB0 (-GetD2DBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEBV-$TMi.c)
 *     ?GetDeviceTexture@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x180214100 (-GetDeviceTexture@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEAPE.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??0CRegion@@QEAA@AEBUMilRectU@@@Z @ 0x18007E178 (--0CRegion@@QEAA@AEBUMilRectU@@@Z.c)
 *     ?GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z @ 0x18007FD70 (-GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z.c)
 *     ?GetRectangleCount@CRegion@FastRegion@@QEBAIXZ @ 0x18007FE88 (-GetRectangleCount@CRegion@FastRegion@@QEBAIXZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180080200 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18008028C (-Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0xddddd @ 0x180167B84 (McTemplateU0xddddd.c)
 *     ?EnsureRestoreBufferState@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJ_N@Z @ 0x180213CE4 (-EnsureRestoreBufferState@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJ_N@Z.c)
 *     ?ReleaseWriteAccessToRestoreBuffer@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x1802143DC (-ReleaseWriteAccessToRestoreBuffer@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ.c)
 *     ?SaveRestoreWorker@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJAEBVCRegion@@_N@Z @ 0x1802146D8 (-SaveRestoreWorker@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJAEBVCRegion@@_N@Z.c)
 */

__int64 __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::EnsureRestoredContent(
        CDxHandleAdvancedDirectFlipBitmapRealization *this,
        __int64 a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rax
  int v6; // eax
  int v7; // eax
  int RectangleCount; // eax
  int v9; // r10^4
  unsigned int v10; // r10d
  __int64 v11; // rcx
  int v12; // eax
  struct tagRECT v14; // [rsp+40h] [rbp-29h] BYREF
  struct tagRECT v15; // [rsp+50h] [rbp-19h] BYREF
  void *v16[10]; // [rsp+60h] [rbp-9h] BYREF

  if ( !*((_BYTE *)this + 441) )
  {
    LOBYTE(a2) = 1;
    v3 = CDxHandleAdvancedDirectFlipBitmapRealization::EnsureRestoreBufferState(this, a2);
    v4 = v3;
    if ( v3 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x12Eu);
      return v4;
    }
    v15.left = 0;
    v5 = *((_QWORD *)this + 18);
    v15.top = 0;
    (*(void (__fastcall **)(char *, LONG *, LONG *))(v5 + 32))((char *)this + 144, &v15.right, &v15.bottom);
    CRegion::CRegion((CRegion *)v16, &v15);
    FastRegion::CRegion::Subtract(
      (const struct FastRegion::Internal::CRgnData **)v16,
      (const struct FastRegion::Internal::CRgnData **)((*((_QWORD *)this + 54) + 16LL) & -(__int64)(*((_QWORD *)this + 54) != 0LL)));
    v6 = CDxHandleAdvancedDirectFlipBitmapRealization::SaveRestoreWorker(this, (const struct CRegion *)v16, 0);
    v4 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x13Du);
    }
    else
    {
      v7 = CDxHandleAdvancedDirectFlipBitmapRealization::ReleaseWriteAccessToRestoreBuffer(this);
      v4 = v7;
      if ( v7 >= 0 )
      {
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        {
          *(_QWORD *)&v14.left = 0LL;
          *(_QWORD *)&v14.right = 0LL;
          FastRegion::CRegion::GetBoundingRect((FastRegion::CRegion *)v16, &v14);
          RectangleCount = FastRegion::CRegion::GetRectangleCount((int **)v16);
          McTemplateU0xddddd(
            v11,
            &EVTDESC_ADVANCED_DIRECTFLIP_RESTORECONTENT,
            v10 | (unsigned __int64)((__int64)v9 << 32),
            RectangleCount,
            v14.left,
            v14.top,
            v14.right,
            v14.bottom);
        }
        *((_BYTE *)this + 441) = 1;
        FastRegion::CRegion::FreeMemory(v16);
        goto LABEL_8;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x13Fu);
    }
    FastRegion::CRegion::FreeMemory(v16);
    return v4;
  }
LABEL_8:
  v12 = CDxHandleAdvancedDirectFlipBitmapRealization::EnsureRestoreBufferState(this, 0LL);
  v4 = v12;
  if ( v12 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x151u);
  return v4;
}
