/*
 * XREFs of ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1C00C1A54
 * Callers:
 *     ?DrvUpdateDisplayModeInPdev@@YAHPEAUHDEV__@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00D0E90 (-DrvUpdateDisplayModeInPdev@@YAHPEAUHDEV__@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 * Callees:
 *     UserIsWindowGdiScaled @ 0x1C0022280 (UserIsWindowGdiScaled.c)
 *     ?bDpiScaledSurface@DC@@QEBAHXZ @ 0x1C0026A30 (-bDpiScaledSurface@DC@@QEBAHXZ.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C002AC00 (HmgDecrementShareReferenceCountEx.c)
 *     ?vDisableSurface@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@E@Z @ 0x1C0032090 (-vDisableSurface@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@E@Z.c)
 *     ?bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z @ 0x1C0032E80 (-bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z.c)
 *     ?sizl@PDEVOBJ@@QEAA?AUtagSIZE@@XZ @ 0x1C0032FFC (-sizl@PDEVOBJ@@QEAA-AUtagSIZE@@XZ.c)
 *     HmgSafeNextObjt @ 0x1C0049980 (HmgSafeNextObjt.c)
 *     bDeleteSurface @ 0x1C0063570 (bDeleteSurface.c)
 *     ?vResetSurfacePalette@@YAXPEAUHDEV__@@@Z @ 0x1C006E4C4 (-vResetSurfacePalette@@YAXPEAUHDEV__@@@Z.c)
 *     GreGetScaledLogPixels @ 0x1C0072EA0 (GreGetScaledLogPixels.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0079B80 (memmove.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     ?vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z @ 0x1C00C05C0 (-vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z.c)
 *     ?vUpdateCachedDPIScaleValue@DC@@QEAAXXZ @ 0x1C00C0610 (-vUpdateCachedDPIScaleValue@DC@@QEAAXXZ.c)
 */

__int64 __fastcall PDEVOBJ::UpdateDisplayMode(PDEVOBJ *this, struct _devicemodeW *Src, __int64 a3)
{
  unsigned int v4; // edi
  __int64 v5; // rcx
  struct _devicemodeW *v6; // r14
  unsigned int (__fastcall *v7)(_QWORD, _QWORD, struct _devicemodeW *, __int64, _DWORD *, HSURF *); // rbx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // r15
  WORD dmSize; // cx
  __int64 Objt; // rax
  __int64 v16; // rbx
  int v17; // edx
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rdx
  void *v21; // rcx
  __m128 v22; // xmm0
  int v23; // eax
  __int64 *v24; // rax
  __int64 v25; // rcx
  unsigned int v26; // edx
  unsigned __int16 v28; // [rsp+40h] [rbp-C0h] BYREF
  HSURF v29; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v30; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD v31[80]; // [rsp+60h] [rbp-A0h] BYREF

  v4 = 0;
  v5 = *(_QWORD *)this;
  v6 = Src;
  v7 = *(unsigned int (__fastcall **)(_QWORD, _QWORD, struct _devicemodeW *, __int64, _DWORD *, HSURF *))(v5 + 2672);
  if ( v7 )
  {
    GreHideSprites(v5, 1LL);
    memset(v31, 0, sizeof(v31));
    if ( !v7(
            *(_QWORD *)(*(_QWORD *)this + 1792LL),
            *(_QWORD *)(*(_QWORD *)this + 2584LL),
            v6,
            *(_QWORD *)this + 2128LL,
            v31,
            &v29) )
    {
      v10 = WdLogNewEntry5_WdWarning(v9);
      *(_QWORD *)(v10 + 24) = 0LL;
      WdLogEvent5_WdWarning(v10);
      v12 = WdLogNewEntry5_WdWarning(v11);
      WdLogEvent5_WdWarning(v12);
      return v4;
    }
    *(_DWORD *)(*(_QWORD *)this + 2144LL) = v31[4];
    *(_DWORD *)(*(_QWORD *)this + 2148LL) = v31[5];
    *(_DWORD *)(*(_QWORD *)this + 2136LL) = v31[2];
    *(_DWORD *)(*(_QWORD *)this + 2140LL) = v31[3];
    *(_DWORD *)(*(_QWORD *)this + 2168LL) = v31[10];
    *(_DWORD *)(*(_QWORD *)this + 2172LL) = v31[11];
    *(_DWORD *)(*(_QWORD *)this + 2384LL) = v31[64];
    *(_DWORD *)(*(_QWORD *)this + 2388LL) = v31[65];
    *(_DWORD *)(*(_QWORD *)this + 2192LL) = v31[16];
    *(_DWORD *)(*(_QWORD *)this + 2196LL) = v31[17];
    *(_DWORD *)(*(_QWORD *)this + 2540LL) = (((v6->dmDisplayOrientation - 1) & 0xFFFFFFFD) == 0 ? 0x80 : 0) | *(_DWORD *)(*(_QWORD *)this + 2540LL) & 0xFFFFFF7F;
    v13 = *(_QWORD *)(*(_QWORD *)this + 2544LL);
    PDEVOBJ::vDisableSurface((__int64 *)this, 0, 0);
    HmgDecrementShareReferenceCountEx((struct OBJECT *)v13, 0LL);
    bDeleteSurface(*(_QWORD *)(v13 + 32));
    PDEVOBJ::bMakeSurface(this, v29);
    dmSize = *(_WORD *)(*(_QWORD *)(*(_QWORD *)this + 2584LL) + 68LL);
    if ( dmSize >= v6->dmSize )
      dmSize = v6->dmSize;
    memmove(*(void **)(*(_QWORD *)this + 2584LL), v6, dmSize);
    LODWORD(v6) = 0;
    while ( 1 )
    {
      do
      {
        Objt = HmgSafeNextObjt((unsigned int)v6, 1);
        v16 = Objt;
        if ( !Objt )
        {
          vResetSurfacePalette(*(_QWORD **)this);
          ++gcModeChanges;
          return 1;
        }
        v17 = *(_DWORD *)(Objt + 36);
        v6 = *(struct _devicemodeW **)Objt;
      }
      while ( (v17 & 0x2000) != 0 );
      if ( *(_QWORD *)(Objt + 504) == v13 )
        break;
LABEL_22:
      if ( (v17 & 0x200) != 0 && (*(_DWORD *)(*(_QWORD *)(v16 + 504) + 112LL) & 0x200) != 0 )
        v26 = v17 | 0x8000;
      else
        v26 = v17 & 0xFFFF7FFF;
      *(_DWORD *)(v16 + 36) = v26;
    }
    v18 = *(_QWORD *)(*(_QWORD *)this + 2544LL);
    *(_QWORD *)(Objt + 504) = v18;
    if ( v18 && (unsigned int)DC::bDpiScaledSurface((DC *)Objt) )
    {
      v20 = *(_QWORD *)(v19 + 660);
    }
    else
    {
      v21 = *(void **)(v16 + 472);
      if ( !v21 || !(unsigned int)UserIsWindowGdiScaled(v21, &v28) || v28 == 96 )
      {
        v23 = *(_DWORD *)(v16 + 528);
        if ( (v23 & 1) != 0 )
        {
          *(_DWORD *)(v16 + 36) |= 0x10u;
          *(_QWORD *)(v16 + 532) = 0LL;
          *(_DWORD *)(v16 + 528) = v23 & 0xFFFFFFF8 | 4;
          *(_QWORD *)(v16 + 540) = 0LL;
          DC::vUpdateCachedDPIScaleValue((DC *)v16);
        }
        goto LABEL_21;
      }
      v22 = (__m128)COERCE_UNSIGNED_INT((float)GreGetScaledLogPixels(v28));
      v22.m128_f32[0] = v22.m128_f32[0] / 96.0;
      v20 = _mm_unpacklo_ps(v22, v22).m128_u64[0];
    }
    DC::vSetDpiScaling(v16, v20);
LABEL_21:
    v24 = (__int64 *)PDEVOBJ::sizl(this, &v30);
    v17 = *(_DWORD *)(v16 + 36);
    v25 = *v24;
    *(_DWORD *)(v16 + 324) |= 0xFu;
    *(_QWORD *)(v16 + 520) = v25;
    goto LABEL_22;
  }
  v8 = WdLogNewEntry5_WdEvent(v5, Src, a3);
  *(_QWORD *)(v8 + 24) = 0LL;
  WdLogEvent5_WdEvent(v8);
  return v4;
}
