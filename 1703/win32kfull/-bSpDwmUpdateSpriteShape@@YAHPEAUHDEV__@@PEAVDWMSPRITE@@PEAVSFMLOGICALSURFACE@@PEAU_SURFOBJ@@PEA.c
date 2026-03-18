/*
 * XREFs of ?bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEAU_RECTL@@PEAVPALETTE@@PEAK4PEAPEAV3@@Z @ 0x1C009FD58
 * Callers:
 *     ?GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HH@Z @ 0x1C006DDF0 (-GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@3.c)
 *     ?bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCTION@@@Z @ 0x1C009EE10 (-bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCT.c)
 *     ?bSpDwmUpdateMaskCursor@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@3PEAU_RECTL@@PEAKPEAPEAV3@@Z @ 0x1C024D1F0 (-bSpDwmUpdateMaskCursor@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@3PEA.c)
 * Callees:
 *     ?bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z @ 0x1C002869C (-bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z.c)
 *     ?vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z @ 0x1C006E8C0 (-vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z.c)
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C0081670 (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C0081778 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C0086D44 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0086EE0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@PEAPEAV3@@Z @ 0x1C00A0010 (-bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@P.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 *     ?vScale@ERECTL@@QEAAXVPOINTFL@@@Z @ 0x1C024D658 (-vScale@ERECTL@@QEAAXVPOINTFL@@@Z.c)
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
  __int64 v20; // rdx
  __int64 v21; // r8
  struct PALETTE *v22; // r9
  XLATEOBJ *v23; // r13
  unsigned int inited; // eax
  unsigned int v25; // eax
  int v27; // r9d
  int v28; // r8d
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  BOOL (__stdcall *v34)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG); // rax
  struct tagSIZE v35; // [rsp+60h] [rbp-69h] BYREF
  LONG v36; // [rsp+68h] [rbp-61h] BYREF
  LONG v37; // [rsp+6Ch] [rbp-5Dh]
  HDEV v38; // [rsp+70h] [rbp-59h] BYREF
  _QWORD v39[2]; // [rsp+78h] [rbp-51h] BYREF
  _QWORD v40[3]; // [rsp+88h] [rbp-41h] BYREF
  struct tagRECT v41; // [rsp+A0h] [rbp-29h] BYREF
  struct tagRECT v42; // [rsp+B0h] [rbp-19h] BYREF

  v38 = a1;
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
            v40[0] = 0LL;
            v41.left = left;
            v35.cx = right - left;
            v41.top = top;
            v41.right = right;
            v35.cy = bottom - top;
            v41.bottom = bottom;
            SURFREFVIEW::bMap((SURFREFVIEW *)v40, a4);
            if ( !v40[0] )
              goto LABEL_27;
            v13 = bSpDwmCreateLogicalSurface(a1, a2, a3, &v35, a9);
            if ( !v13 )
              goto LABEL_27;
            v18 = *a9;
            v19 = (struct _SURFOBJ *)*((_QWORD *)*a9 + 24);
            v39[0] = 0LL;
            SURFREFVIEW::bMap((SURFREFVIEW *)v39, v19);
            if ( !v39[0] )
              goto LABEL_26;
            v41.right -= v41.left;
            v41.bottom -= v41.top;
            v36 = v41.left;
            v37 = v41.top;
            *(_QWORD *)&v41.left = 0LL;
            if ( a8 )
            {
              ERECTL::operator*=(&v41, a8);
              v37 = v41.top + v27;
              v36 = v41.left + v28;
            }
            if ( ERECTL::bEmpty((ERECTL *)&v41) )
            {
LABEL_26:
              SURFREFVIEW::bUnMap((SURFREFVIEW *)v39);
LABEL_27:
              SURFREFVIEW::bUnMap((SURFREFVIEW *)v40);
              return v13;
            }
            v22 = a6;
            v23 = xloIdent;
            v35 = 0LL;
            if ( a6 )
            {
              inited = EXLATEOBJ::bInitXlateObj(
                         (__int64 *)&v35,
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
              v23 = (XLATEOBJ *)v35;
              v13 = inited;
            }
            if ( v13 )
            {
              if ( (*((_DWORD *)a2 + 50) & 0x20) != 0 )
              {
                v29 = *((_QWORD *)a2 + 23);
                v42 = v41;
                ERECTL::vScale(&v41, v29);
                v30 = SURFOBJ_TO_SURFACE_NOT_NULL(a4);
                if ( (*(_DWORD *)(v30 + 116) & 0x800) != 0 )
                  ERECTL::vScale(&v42, *(_QWORD *)(v30 + 596));
                if ( (unsigned int)bNeedRenderHint((struct PDEVOBJ *)&v38, v31, v32, v33) )
                {
                  v34 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG))RedirStretchBlt;
                }
                else if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)v18 + 24)) + 112) & 2) != 0 )
                {
                  v34 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG))*((_QWORD *)a1 + 358);
                }
                else
                {
                  v34 = EngStretchBlt;
                }
                v13 = ((__int64 (__fastcall *)(_QWORD, struct _SURFOBJ *, _QWORD, _QWORD, XLATEOBJ *, _QWORD, _QWORD, struct tagRECT *, struct tagRECT *, _QWORD, int))v34)(
                        *((_QWORD *)v18 + 24),
                        a4,
                        0LL,
                        0LL,
                        v23,
                        0LL,
                        0LL,
                        &v41,
                        &v42,
                        0LL,
                        3);
              }
              else
              {
                if ( (unsigned int)bNeedRenderHint((struct PDEVOBJ *)&v38, v20, v21, (__int64)v22) )
                {
                  v25 = ((__int64 (__fastcall *)(_QWORD, struct _SURFOBJ *, _QWORD, XLATEOBJ *, struct tagRECT *, LONG *))RedirCopyBits)(
                          *((_QWORD *)v18 + 24),
                          a4,
                          0LL,
                          v23,
                          &v41,
                          &v36);
                }
                else if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)v18 + 24)) + 112) & 0x400) != 0 )
                {
                  v25 = (*((__int64 (__fastcall **)(_QWORD, struct _SURFOBJ *, _QWORD, XLATEOBJ *, struct tagRECT *, LONG *))a1
                         + 357))(
                          *((_QWORD *)v18 + 24),
                          a4,
                          0LL,
                          v23,
                          &v41,
                          &v36);
                }
                else
                {
                  v25 = ((__int64 (__fastcall *)(_QWORD, struct _SURFOBJ *, _QWORD, XLATEOBJ *, struct tagRECT *, LONG *))EngCopyBits)(
                          *((_QWORD *)v18 + 24),
                          a4,
                          0LL,
                          v23,
                          &v41,
                          &v36);
                }
                v13 = v25;
                if ( !v25 )
                  goto LABEL_25;
                vSpUpdateDirtyRgn(a2, v18, 0LL, (struct _RECTL *)&v41, a7, 0);
              }
              if ( v13 )
                vSpUpdateDirtyRgn(a2, v18, 0LL, (struct _RECTL *)&v41, a7, 0);
            }
LABEL_25:
            EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v35);
            goto LABEL_26;
          }
        }
      }
    }
  }
  return v13;
}
