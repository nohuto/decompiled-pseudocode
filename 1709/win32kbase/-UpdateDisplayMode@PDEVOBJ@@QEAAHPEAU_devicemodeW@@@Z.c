/*
 * XREFs of ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1C00EEF64
 * Callers:
 *     ?DrvUpdateDisplayModeInPdev@@YAHPEAUHDEV__@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00F8848 (-DrvUpdateDisplayModeInPdev@@YAHPEAUHDEV__@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 * Callees:
 *     bDeleteSurface @ 0x1C001F690 (bDeleteSurface.c)
 *     ?vDisableSurface@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@E@Z @ 0x1C003D120 (-vDisableSurface@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@E@Z.c)
 *     ?bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z @ 0x1C003DE40 (-bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z.c)
 *     ?sizl@PDEVOBJ@@QEAA?AUtagSIZE@@XZ @ 0x1C003DFBC (-sizl@PDEVOBJ@@QEAA-AUtagSIZE@@XZ.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C003FE40 (HmgDecrementShareReferenceCountEx.c)
 *     HmgSafeNextObjt @ 0x1C006CDD0 (HmgSafeNextObjt.c)
 *     ?vResetSurfacePalette@@YAXPEAUHDEV__@@@Z @ 0x1C006DD08 (-vResetSurfacePalette@@YAXPEAUHDEV__@@@Z.c)
 *     UserIsGDIScalingApplicable @ 0x1C00735D0 (UserIsGDIScalingApplicable.c)
 *     UserGetHwndDpi @ 0x1C00A0480 (UserGetHwndDpi.c)
 *     GreGetScaledLogPixels @ 0x1C00A2100 (GreGetScaledLogPixels.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00AB840 (memmove.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 *     ?vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z @ 0x1C00EDCC8 (-vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z.c)
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
  WORD dmSize; // ax
  __int64 Objt; // rax
  __int64 v15; // r8
  __int64 v16; // rbx
  _DWORD *v17; // rdx
  __int64 v18; // rdx
  void *v19; // rcx
  __m128 v20; // xmm0
  int v21; // eax
  __int64 v22; // rcx
  int v23; // edx
  unsigned int v24; // edx
  unsigned __int16 v26; // [rsp+40h] [rbp-C0h] BYREF
  HSURF v27; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v28; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD v29[80]; // [rsp+60h] [rbp-A0h] BYREF

  v3 = 0;
  v4 = *(_QWORD *)this;
  v5 = Src;
  v6 = *(unsigned int (__fastcall **)(_QWORD, _QWORD, struct _devicemodeW *, __int64, _DWORD *, HSURF *))(v4 + 2696);
  if ( v6 )
  {
    GreHideSprites(v4, 1LL);
    memset(v29, 0, sizeof(v29));
    if ( !v6(
            *(_QWORD *)(*(_QWORD *)this + 1816LL),
            *(_QWORD *)(*(_QWORD *)this + 2608LL),
            v5,
            *(_QWORD *)this + 2152LL,
            v29,
            &v27) )
    {
      v9 = WdLogNewEntry5_WdWarning(v8);
      *(_QWORD *)(v9 + 24) = 0LL;
      WdLogEvent5_WdWarning(v9);
      v11 = WdLogNewEntry5_WdWarning(v10);
      WdLogEvent5_WdWarning(v11);
      return v3;
    }
    *(_DWORD *)(*(_QWORD *)this + 2168LL) = v29[4];
    *(_DWORD *)(*(_QWORD *)this + 2172LL) = v29[5];
    *(_DWORD *)(*(_QWORD *)this + 2160LL) = v29[2];
    *(_DWORD *)(*(_QWORD *)this + 2164LL) = v29[3];
    *(_DWORD *)(*(_QWORD *)this + 2192LL) = v29[10];
    *(_DWORD *)(*(_QWORD *)this + 2196LL) = v29[11];
    *(_DWORD *)(*(_QWORD *)this + 2408LL) = v29[64];
    *(_DWORD *)(*(_QWORD *)this + 2412LL) = v29[65];
    *(_DWORD *)(*(_QWORD *)this + 2216LL) = v29[16];
    *(_DWORD *)(*(_QWORD *)this + 2220LL) = v29[17];
    *(_DWORD *)(*(_QWORD *)this + 2564LL) = (((v5->dmDisplayOrientation - 1) & 0xFFFFFFFD) == 0 ? 0x80 : 0) | *(_DWORD *)(*(_QWORD *)this + 2564LL) & 0xFFFFFF7F;
    v12 = *(_QWORD *)(*(_QWORD *)this + 2568LL);
    PDEVOBJ::vDisableSurface((__int64 *)this, 0, 0);
    HmgDecrementShareReferenceCountEx((struct OBJECT *)v12, 0LL);
    bDeleteSurface(*(struct HOBJ__ **)(v12 + 32));
    PDEVOBJ::bMakeSurface(this, (struct HOBJ__ *)v27);
    dmSize = v5->dmSize;
    if ( *(_WORD *)(*(_QWORD *)(*(_QWORD *)this + 2608LL) + 68LL) < dmSize )
      dmSize = *(_WORD *)(*(_QWORD *)(*(_QWORD *)this + 2608LL) + 68LL);
    memmove(*(void **)(*(_QWORD *)this + 2608LL), v5, dmSize);
    LODWORD(v5) = 0;
    while ( 1 )
    {
      do
      {
        Objt = HmgSafeNextObjt((unsigned int)v5, 1);
        v16 = Objt;
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
      v23 = *(_DWORD *)(v16 + 36);
      if ( (v23 & 0x200) != 0 && (*(_DWORD *)(*(_QWORD *)(v16 + 512) + 112LL) & 0x200) != 0 )
        v24 = v23 | 0x8000;
      else
        v24 = v23 & 0xFFFF7FFF;
      *(_DWORD *)(v16 + 36) = v24;
    }
    v17 = *(_DWORD **)(*(_QWORD *)this + 2568LL);
    *(_QWORD *)(Objt + 512) = v17;
    if ( v17 && (v17[29] & 0x800) != 0 )
    {
      v18 = _mm_unpacklo_ps((__m128)(unsigned int)v17[149], (__m128)(unsigned int)v17[150]).m128_u64[0];
    }
    else
    {
      v19 = *(void **)(Objt + 480);
      if ( !v19
        || !(unsigned int)UserIsGDIScalingApplicable(v19, (__int64)v17, v15)
        || !(unsigned int)UserGetHwndDpi(*(void **)(v16 + 480), &v26)
        || v26 == 96 )
      {
        v21 = *(_DWORD *)(v16 + 536);
        if ( (v21 & 1) != 0 )
        {
          *(_QWORD *)(v16 + 540) = 0LL;
          *(_QWORD *)(v16 + 548) = 0LL;
          *(_DWORD *)(v16 + 36) |= 0x10u;
          *(_DWORD *)(v16 + 536) = v21 & 0xFFFFFFF8 | 4;
        }
        goto LABEL_22;
      }
      v20 = (__m128)COERCE_UNSIGNED_INT((float)GreGetScaledLogPixels(v26));
      v20.m128_f32[0] = v20.m128_f32[0] / 96.0;
      v18 = _mm_unpacklo_ps(v20, v20).m128_u64[0];
    }
    DC::vSetDpiScaling(v16, v18);
LABEL_22:
    v22 = **(_QWORD **)&PDEVOBJ::sizl(this, &v28);
    *(_DWORD *)(v16 + 332) |= 0xFu;
    *(_QWORD *)(v16 + 528) = v22;
    goto LABEL_23;
  }
  v7 = WdLogNewEntry5_WdEvent(v4, Src);
  *(_QWORD *)(v7 + 24) = 0LL;
  WdLogEvent5_WdEvent(v7);
  return v3;
}
