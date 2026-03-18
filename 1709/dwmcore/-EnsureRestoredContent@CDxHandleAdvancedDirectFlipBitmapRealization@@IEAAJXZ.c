/*
 * XREFs of ?EnsureRestoredContent@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x1801D1F3C
 * Callers:
 *     ?GetD2DBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_NPEAPEAUID2D1Bitmap1@@@Z @ 0x1801D2100 (-GetD2DBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEBV-$TMi.c)
 *     ?GetDeviceTexture@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1801D2250 (-GetDeviceTexture@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEAPE.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??0CRegion@@QEAA@AEBUMilRectU@@@Z @ 0x18008901C (--0CRegion@@QEAA@AEBUMilRectU@@@Z.c)
 *     ?GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z @ 0x180089360 (-GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z.c)
 *     ?GetRectangleCount@CRegion@FastRegion@@QEBAIXZ @ 0x180089398 (-GetRectangleCount@CRegion@FastRegion@@QEBAIXZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180089680 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180089710 (-Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0xddddd @ 0x180144DCC (McTemplateU0xddddd.c)
 *     ?EnsureRestoreBufferState@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJ_N@Z @ 0x1801D1E30 (-EnsureRestoreBufferState@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJ_N@Z.c)
 *     ?ReleaseWriteAccessToRestoreBuffer@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x1801D252C (-ReleaseWriteAccessToRestoreBuffer@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ.c)
 *     ?SaveRestoreWorker@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJAEBVCRegion@@_N@Z @ 0x1801D2828 (-SaveRestoreWorker@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJAEBVCRegion@@_N@Z.c)
 */

__int64 __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::EnsureRestoredContent(
        CDxHandleAdvancedDirectFlipBitmapRealization *this,
        __int64 a2)
{
  signed int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rax
  signed int v6; // eax
  signed int v7; // eax
  int RectangleCount; // eax
  unsigned int v9; // r10d
  __int64 v10; // rcx
  signed int v11; // eax
  struct tagRECT v13; // [rsp+40h] [rbp-39h] BYREF
  __int64 v14; // [rsp+50h] [rbp-29h]
  struct tagRECT v15; // [rsp+58h] [rbp-21h] BYREF
  void *v16[10]; // [rsp+70h] [rbp-9h] BYREF

  if ( !*((_BYTE *)this + 441) )
  {
    LOBYTE(a2) = 1;
    v3 = CDxHandleAdvancedDirectFlipBitmapRealization::EnsureRestoreBufferState(this, a2);
    v4 = v3;
    if ( v3 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v3, 0x12Eu);
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
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v6, 0x13Du);
    }
    else
    {
      v7 = CDxHandleAdvancedDirectFlipBitmapRealization::ReleaseWriteAccessToRestoreBuffer(this);
      v4 = v7;
      if ( v7 >= 0 )
      {
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        {
          *(_QWORD *)&v13.left = 0LL;
          *(_QWORD *)&v13.right = 0LL;
          FastRegion::CRegion::GetBoundingRect((FastRegion::CRegion *)v16, &v13);
          v14 = *(_QWORD *)((char *)this + 444);
          RectangleCount = FastRegion::CRegion::GetRectangleCount((FastRegion::CRegion *)v16);
          McTemplateU0xddddd(
            v10,
            &EVTDESC_ADVANCED_DIRECTFLIP_RESTORECONTENT,
            v9 | (unsigned __int64)((__int64)SHIDWORD(v14) << 32),
            RectangleCount,
            v13.left,
            v13.top,
            v13.right,
            v13.bottom);
        }
        *((_BYTE *)this + 441) = 1;
        FastRegion::CRegion::FreeMemory(v16);
        goto LABEL_8;
      }
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v7, 0x13Fu);
    }
    FastRegion::CRegion::FreeMemory(v16);
    return v4;
  }
LABEL_8:
  v11 = CDxHandleAdvancedDirectFlipBitmapRealization::EnsureRestoreBufferState(this, 0LL);
  v4 = v11;
  if ( v11 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v11, 0x151u);
  return v4;
}
