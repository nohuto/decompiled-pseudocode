/*
 * XREFs of ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1C00EA884
 * Callers:
 *     ?DrvUpdateDisplayModeInPdev@@YAHPEAUHDEV__@@PEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00F7A20 (-DrvUpdateDisplayModeInPdev@@YAHPEAUHDEV__@@PEAU_D3DKMT_GETPATHSMODALITY@@@Z.c)
 * Callees:
 *     HmgDecrementShareReferenceCount @ 0x1C002F950 (HmgDecrementShareReferenceCount.c)
 *     HmgSafeNextObjt @ 0x1C0032440 (HmgSafeNextObjt.c)
 *     ?vDisableSurface@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@E@Z @ 0x1C0038A90 (-vDisableSurface@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@E@Z.c)
 *     ?bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z @ 0x1C0038D30 (-bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z.c)
 *     ?sizl@PDEVOBJ@@QEAA?AUtagSIZE@@XZ @ 0x1C0038EA8 (-sizl@PDEVOBJ@@QEAA-AUtagSIZE@@XZ.c)
 *     ?bDpiScaledSurface@DC@@QEAAHXZ @ 0x1C0039248 (-bDpiScaledSurface@DC@@QEAAHXZ.c)
 *     bDeleteSurface @ 0x1C003F890 (bDeleteSurface.c)
 *     UserIsGDIScalingApplicable @ 0x1C0071560 (UserIsGDIScalingApplicable.c)
 *     ?vResetSurfacePalette@@YAXPEAUHDEV__@@@Z @ 0x1C0090D70 (-vResetSurfacePalette@@YAXPEAUHDEV__@@@Z.c)
 *     UserGetHwndDpi @ 0x1C0097D60 (UserGetHwndDpi.c)
 *     GreGetScaledLogPixels @ 0x1C0098070 (GreGetScaledLogPixels.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00A21C0 (memmove.c)
 *     memset @ 0x1C00A2500 (memset.c)
 *     ?vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z @ 0x1C00E8B34 (-vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z.c)
 */

__int64 __fastcall PDEVOBJ::UpdateDisplayMode(PDEVOBJ *this, struct _devicemodeW *Src)
{
  unsigned int v3; // edi
  __int64 v4; // rcx
  struct _devicemodeW *v5; // r14
  unsigned int (__fastcall *v6)(_QWORD, _QWORD, struct _devicemodeW *, __int64, _DWORD *, HSURF *); // rbx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r15
  _WORD *v13; // r9
  WORD dmSize; // ax
  __int64 Objt; // rax
  __int64 v16; // r8
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rdx
  void *v20; // rcx
  __m128 v21; // xmm0
  int v22; // eax
  __int64 v23; // rcx
  int v24; // edx
  unsigned int v25; // edx
  __int64 v27; // [rsp+48h] [rbp-C0h] BYREF
  HSURF v28; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v29; // [rsp+58h] [rbp-B0h] BYREF
  _DWORD v30[80]; // [rsp+68h] [rbp-A0h] BYREF

  v3 = 0;
  v4 = *(_QWORD *)this;
  v5 = Src;
  v6 = *(unsigned int (__fastcall **)(_QWORD, _QWORD, struct _devicemodeW *, __int64, _DWORD *, HSURF *))(v4 + 2696);
  if ( v6 )
  {
    GreHideSprites(v4, 1LL);
    memset(v30, 0, sizeof(v30));
    if ( !v6(
            *(_QWORD *)(*(_QWORD *)this + 1816LL),
            *(_QWORD *)(*(_QWORD *)this + 2608LL),
            v5,
            *(_QWORD *)this + 2152LL,
            v30,
            &v28) )
    {
      v9 = WdLogNewEntry5_WdWarning(v8);
      *(_QWORD *)(v9 + 24) = 0LL;
      WdLogEvent5_WdWarning(v9);
      v11 = WdLogNewEntry5_WdWarning(v10);
      WdLogEvent5_WdWarning(v11);
      return v3;
    }
    *(_DWORD *)(*(_QWORD *)this + 2168LL) = v30[4];
    *(_DWORD *)(*(_QWORD *)this + 2172LL) = v30[5];
    *(_DWORD *)(*(_QWORD *)this + 2160LL) = v30[2];
    *(_DWORD *)(*(_QWORD *)this + 2164LL) = v30[3];
    *(_DWORD *)(*(_QWORD *)this + 2192LL) = v30[10];
    *(_DWORD *)(*(_QWORD *)this + 2196LL) = v30[11];
    *(_DWORD *)(*(_QWORD *)this + 2408LL) = v30[64];
    *(_DWORD *)(*(_QWORD *)this + 2412LL) = v30[65];
    *(_DWORD *)(*(_QWORD *)this + 2216LL) = v30[16];
    *(_DWORD *)(*(_QWORD *)this + 2220LL) = v30[17];
    *(_DWORD *)(*(_QWORD *)this + 2564LL) = (((v5->dmDisplayOrientation - 1) & 0xFFFFFFFD) == 0 ? 0x80 : 0) | *(_DWORD *)(*(_QWORD *)this + 2564LL) & 0xFFFFFF7F;
    v12 = *(_QWORD *)(*(_QWORD *)this + 2568LL);
    PDEVOBJ::vDisableSurface((__int64 *)this, 0, 0);
    HmgDecrementShareReferenceCount(v12);
    bDeleteSurface(*(_QWORD *)(v12 + 32));
    PDEVOBJ::bMakeSurface(this, v28);
    v13 = *(_WORD **)(*(_QWORD *)this + 2608LL);
    dmSize = v5->dmSize;
    if ( v13[34] < dmSize )
      dmSize = v13[34];
    memmove(v13, v5, dmSize);
    LODWORD(v5) = 0;
    while ( 1 )
    {
      do
      {
        Objt = HmgSafeNextObjt((unsigned int)v5, 1);
        v17 = Objt;
        if ( !Objt )
        {
          vResetSurfacePalette(*(_QWORD **)this);
          ++gcModeChanges;
          return 1;
        }
        v5 = *(struct _devicemodeW **)Objt;
      }
      while ( (*(_DWORD *)(Objt + 36) & 0x2000) != 0 );
      if ( *(_QWORD *)(Objt + 512) == v12 )
        break;
LABEL_23:
      v24 = *(_DWORD *)(v17 + 36);
      if ( (v24 & 0x200) != 0 && (*(_DWORD *)(*(_QWORD *)(v17 + 512) + 112LL) & 0x200) != 0 )
        v25 = v24 | 0x8000;
      else
        v25 = v24 & 0xFFFF7FFF;
      *(_DWORD *)(v17 + 36) = v25;
    }
    v18 = *(_QWORD *)(*(_QWORD *)this + 2568LL);
    *(_QWORD *)(Objt + 512) = v18;
    if ( v18 && (unsigned int)DC::bDpiScaledSurface((DC *)Objt) )
    {
      v19 = *(_QWORD *)(v18 + 596);
    }
    else
    {
      v20 = *(void **)(v17 + 480);
      if ( !v20
        || !(unsigned int)UserIsGDIScalingApplicable(v20, v18, v16)
        || !(unsigned int)UserGetHwndDpi(*(void **)(v17 + 480), &v27)
        || (_WORD)v27 == 96 )
      {
        v22 = *(_DWORD *)(v17 + 536);
        if ( (v22 & 1) != 0 )
        {
          *(_QWORD *)(v17 + 548) = 0LL;
          *(_DWORD *)(v17 + 36) |= 0x10u;
          *(_QWORD *)(v17 + 540) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
          *(_DWORD *)(v17 + 536) = v22 & 0xFFFFFFF8 | 4;
        }
        goto LABEL_22;
      }
      v21 = (__m128)COERCE_UNSIGNED_INT((float)(unsigned __int16)GreGetScaledLogPixels(v27));
      v21.m128_f32[0] = v21.m128_f32[0] / 96.0;
      v19 = _mm_unpacklo_ps(v21, v21).m128_u64[0];
    }
    DC::vSetDpiScaling(v17, v19);
LABEL_22:
    v23 = **(_QWORD **)&PDEVOBJ::sizl(this, &v29);
    *(_DWORD *)(v17 + 332) |= 0xFu;
    *(_QWORD *)(v17 + 528) = v23;
    goto LABEL_23;
  }
  v7 = WdLogNewEntry5_WdEvent(v4, Src);
  *(_QWORD *)(v7 + 24) = 0LL;
  WdLogEvent5_WdEvent(v7);
  return v3;
}
