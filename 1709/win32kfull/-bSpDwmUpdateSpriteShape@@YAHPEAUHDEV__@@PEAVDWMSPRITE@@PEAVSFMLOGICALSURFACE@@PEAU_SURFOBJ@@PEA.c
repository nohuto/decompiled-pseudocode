/*
 * XREFs of ?bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEAU_RECTL@@PEAVPALETTE@@PEAK4PEAPEAV3@@Z @ 0x1C008CCDC
 * Callers:
 *     ?GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HH@Z @ 0x1C0026830 (-GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@3.c)
 *     ?bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCTION@@@Z @ 0x1C00E46A4 (-bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCT.c)
 *     ?bSpDwmUpdateMaskCursor@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@3PEAU_RECTL@@PEAKPEAPEAV3@@Z @ 0x1C024EC6C (-bSpDwmUpdateMaskCursor@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@3PEA.c)
 * Callees:
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C00182EC (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C00183B8 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C0022CA0 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0022CE0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z @ 0x1C00272A0 (-vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z.c)
 *     ?bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z @ 0x1C008D104 (-bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z.c)
 *     ?bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@PEAPEAV3@@Z @ 0x1C008DAAC (-bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@P.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 *     ?vScale@ERECTL@@QEAAXVPOINTFL@@@Z @ 0x1C024F0D0 (-vScale@ERECTL@@QEAAXVPOINTFL@@@Z.c)
 */

__int64 __fastcall bSpDwmUpdateSpriteShape(
        HDEV a1,
        struct DWMSPRITE *a2,
        struct SFMLOGICALSURFACE *a3,
        struct _SURFOBJ *a4,
        struct _RECTL *a5,
        struct PALETTE *a6,
        unsigned int *a7,
        struct _RECTL *a8,
        struct SFMLOGICALSURFACE **a9)
{
  unsigned int v13; // ebx
  LONG left; // ecx
  int top; // edx
  LONG right; // r9d
  LONG bottom; // r10d
  struct SFMLOGICALSURFACE *v18; // rdi
  struct _SURFOBJ *v19; // rdx
  int v20; // r9d
  int v21; // r8d
  XLATEOBJ *v22; // r13
  unsigned int inited; // eax
  unsigned int v24; // eax
  __m128 v26; // xmm2
  _DWORD *v27; // rax
  BOOL (__stdcall *v28)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG); // rax
  struct tagSIZE v29; // [rsp+60h] [rbp-69h] BYREF
  LONG v30; // [rsp+68h] [rbp-61h] BYREF
  LONG v31; // [rsp+6Ch] [rbp-5Dh]
  HDEV v32; // [rsp+70h] [rbp-59h] BYREF
  _QWORD v33[2]; // [rsp+78h] [rbp-51h] BYREF
  _QWORD v34[3]; // [rsp+88h] [rbp-41h] BYREF
  struct tagRECT v35; // [rsp+A0h] [rbp-29h] BYREF
  struct tagRECT v36; // [rsp+B0h] [rbp-19h] BYREF

  v32 = a1;
  v13 = 1;
  if ( a4 )
  {
    left = a5->left;
    if ( a5->left >= 0 )
    {
      top = a5->top;
      if ( top >= 0 )
      {
        right = a5->right;
        if ( right <= a4->sizlBitmap.cx )
        {
          bottom = a5->bottom;
          if ( bottom <= a4->sizlBitmap.cy && top <= bottom && left <= right )
          {
            v34[0] = 0LL;
            v35.left = left;
            v29.cx = right - left;
            v35.top = top;
            v35.right = right;
            v29.cy = bottom - top;
            v35.bottom = bottom;
            SURFREFVIEW::bMap((SURFREFVIEW *)v34, a4);
            if ( !v34[0] )
              goto LABEL_27;
            v13 = bSpDwmCreateLogicalSurface(a1, a2, a3, &v29, a9);
            if ( !v13 )
              goto LABEL_27;
            v18 = *a9;
            v19 = (struct _SURFOBJ *)*((_QWORD *)*a9 + 24);
            v33[0] = 0LL;
            SURFREFVIEW::bMap((SURFREFVIEW *)v33, v19);
            if ( !v33[0] )
              goto LABEL_26;
            v35.right -= v35.left;
            v35.bottom -= v35.top;
            v30 = v35.left;
            v31 = v35.top;
            *(_QWORD *)&v35.left = 0LL;
            if ( a8 )
            {
              ERECTL::operator*=(&v35, a8);
              v31 = v35.top + v20;
              v30 = v35.left + v21;
            }
            if ( ERECTL::bEmpty((ERECTL *)&v35) )
            {
LABEL_26:
              SURFREFVIEW::bUnMap((SURFREFVIEW *)v33);
LABEL_27:
              SURFREFVIEW::bUnMap((SURFREFVIEW *)v34);
              return v13;
            }
            v22 = xloIdent;
            v29 = 0LL;
            if ( a6 )
            {
              inited = EXLATEOBJ::bInitXlateObj(
                         (__int64 *)&v29,
                         0LL,
                         0,
                         (__int64)a6,
                         (__int64)gppalRGB,
                         (__int64)ppalDefault,
                         (__int64)ppalDefault,
                         0,
                         0,
                         0,
                         0);
              v22 = (XLATEOBJ *)v29;
              v13 = inited;
            }
            if ( v13 )
            {
              if ( (*((_DWORD *)a2 + 50) & 0x20) != 0 )
              {
                v26 = (__m128)*((unsigned int *)a2 + 46);
                v36 = v35;
                ERECTL::vScale(&v35, _mm_unpacklo_ps(v26, (__m128)*((unsigned int *)a2 + 47)).m128_u64[0]);
                v27 = (_DWORD *)SURFOBJ_TO_SURFACE_NOT_NULL(a4);
                if ( (v27[29] & 0x800) != 0 )
                  ERECTL::vScale(
                    &v36,
                    _mm_unpacklo_ps((__m128)(unsigned int)v27[149], (__m128)(unsigned int)v27[150]).m128_u64[0]);
                if ( (unsigned int)bNeedRenderHint((struct PDEVOBJ *)&v32) )
                {
                  v28 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG))RedirStretchBlt;
                }
                else if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)v18 + 24)) + 112) & 2) != 0 )
                {
                  v28 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG))*((_QWORD *)a1 + 358);
                }
                else
                {
                  v28 = EngStretchBlt;
                }
                v13 = ((__int64 (__fastcall *)(_QWORD, struct _SURFOBJ *, _QWORD, _QWORD, XLATEOBJ *, _QWORD, _QWORD, struct tagRECT *, struct tagRECT *, _QWORD, int))v28)(
                        *((_QWORD *)v18 + 24),
                        a4,
                        0LL,
                        0LL,
                        v22,
                        0LL,
                        0LL,
                        &v35,
                        &v36,
                        0LL,
                        3);
              }
              else
              {
                if ( (unsigned int)bNeedRenderHint((struct PDEVOBJ *)&v32) )
                {
                  v24 = ((__int64 (__fastcall *)(_QWORD, struct _SURFOBJ *, _QWORD, XLATEOBJ *, struct tagRECT *, LONG *))RedirCopyBits)(
                          *((_QWORD *)v18 + 24),
                          a4,
                          0LL,
                          v22,
                          &v35,
                          &v30);
                }
                else if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)v18 + 24)) + 112) & 0x400) != 0 )
                {
                  v24 = (*((__int64 (__fastcall **)(_QWORD, struct _SURFOBJ *, _QWORD, XLATEOBJ *, struct tagRECT *, LONG *))a1
                         + 357))(
                          *((_QWORD *)v18 + 24),
                          a4,
                          0LL,
                          v22,
                          &v35,
                          &v30);
                }
                else
                {
                  v24 = ((__int64 (__fastcall *)(_QWORD, struct _SURFOBJ *, _QWORD, XLATEOBJ *, struct tagRECT *, LONG *))EngCopyBits)(
                          *((_QWORD *)v18 + 24),
                          a4,
                          0LL,
                          v22,
                          &v35,
                          &v30);
                }
                v13 = v24;
                if ( !v24 )
                  goto LABEL_25;
                vSpUpdateDirtyRgn(a2, v18, 0LL, (struct _RECTL *)&v35, a7, 0);
              }
              if ( v13 )
                vSpUpdateDirtyRgn(a2, v18, 0LL, (struct _RECTL *)&v35, a7, 0);
            }
LABEL_25:
            EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v29);
            goto LABEL_26;
          }
        }
      }
    }
  }
  return v13;
}
