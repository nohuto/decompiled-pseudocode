/*
 * XREFs of ?EnsureRestoredContent@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x1801B51BC
 * Callers:
 *     ?GetBitmapShaderResourceViewNoRef@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x1801B5380 (-GetBitmapShaderResourceViewNoRef@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJAEBURenderT.c)
 *     ?GetD2DBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_NPEAPEAUID2D1Bitmap1@@@Z @ 0x1801B54B0 (-GetD2DBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEBV-$TMi.c)
 * Callees:
 *     ??0CRegion@@QEAA@AEBUMilRectU@@@Z @ 0x180025488 (--0CRegion@@QEAA@AEBUMilRectU@@@Z.c)
 *     ?Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180025700 (-Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180075968 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z @ 0x180075BB8 (-GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z.c)
 *     ?GetRectangleCount@CRegion@FastRegion@@QEBAIXZ @ 0x180075BF0 (-GetRectangleCount@CRegion@FastRegion@@QEBAIXZ.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     Template_xddddd @ 0x1801523D4 (Template_xddddd.c)
 *     ?EnsureRestoreBufferState@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJ_N@Z @ 0x1801B50A0 (-EnsureRestoreBufferState@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJ_N@Z.c)
 *     ?ReleaseWriteAccessToRestoreBuffer@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x1801B571C (-ReleaseWriteAccessToRestoreBuffer@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ.c)
 *     ?SaveRestoreWorker@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJAEBVCRegion@@_N@Z @ 0x1801B5A18 (-SaveRestoreWorker@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJAEBVCRegion@@_N@Z.c)
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
  unsigned int v9; // r10d
  __int64 v10; // rcx
  int v11; // eax
  struct tagRECT v13; // [rsp+40h] [rbp-39h] BYREF
  __int64 v14; // [rsp+50h] [rbp-29h]
  struct tagRECT v15; // [rsp+58h] [rbp-21h] BYREF
  void *v16[10]; // [rsp+70h] [rbp-9h] BYREF

  if ( !*((_BYTE *)this + 457) )
  {
    LOBYTE(a2) = 1;
    v3 = CDxHandleAdvancedDirectFlipBitmapRealization::EnsureRestoreBufferState(this, a2);
    v4 = v3;
    if ( v3 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x124u);
      return v4;
    }
    v15.left = 0;
    v5 = *((_QWORD *)this + 13);
    v15.top = 0;
    (*(void (__fastcall **)(char *, LONG *, LONG *))(v5 + 24))((char *)this + 104, &v15.right, &v15.bottom);
    CRegion::CRegion((CRegion *)v16, &v15);
    FastRegion::CRegion::Subtract(
      (const struct FastRegion::Internal::CRgnData **)v16,
      (const struct FastRegion::Internal::CRgnData **)((*((_QWORD *)this + 56) + 16LL) & ((unsigned __int128)-(__int128)*((unsigned __int64 *)this + 56) >> 64)));
    v6 = CDxHandleAdvancedDirectFlipBitmapRealization::SaveRestoreWorker(this, (const struct CRegion *)v16, 0);
    v4 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x133u);
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
          v14 = *(_QWORD *)((char *)this + 460);
          RectangleCount = FastRegion::CRegion::GetRectangleCount((FastRegion::CRegion *)v16);
          Template_xddddd(
            v10,
            &EVTDESC_ADVANCED_DIRECTFLIP_RESTORECONTENT,
            v9 | (unsigned __int64)((__int64)SHIDWORD(v14) << 32),
            RectangleCount,
            v13.left,
            v13.top,
            v13.right,
            v13.bottom);
        }
        *((_BYTE *)this + 457) = 1;
        FastRegion::CRegion::FreeMemory(v16);
        goto LABEL_8;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x135u);
    }
    FastRegion::CRegion::FreeMemory(v16);
    return v4;
  }
LABEL_8:
  v11 = CDxHandleAdvancedDirectFlipBitmapRealization::EnsureRestoreBufferState(this, 0LL);
  v4 = v11;
  if ( v11 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x147u);
  return v4;
}
