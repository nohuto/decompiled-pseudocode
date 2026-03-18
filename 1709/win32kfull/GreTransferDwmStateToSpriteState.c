/*
 * XREFs of GreTransferDwmStateToSpriteState @ 0x1C0045C40
 * Callers:
 *     zzzDecomposeDesktop @ 0x1C0044214 (zzzDecomposeDesktop.c)
 *     zzzComposeDesktop @ 0x1C0044710 (zzzComposeDesktop.c)
 * Callees:
 *     ?GdiCreateSprite@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@@Z @ 0x1C0009EC8 (-GdiCreateSprite@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@@Z.c)
 *     ?GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z @ 0x1C000A308 (-GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z.c)
 *     ?GdiUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@@Z @ 0x1C000A5F0 (-GdiUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_B.c)
 *     UserIsWindowOnDesktopAndComposed @ 0x1C0045BE0 (UserIsWindowOnDesktopAndComposed.c)
 *     ?LEAVE_GRE_DWM_CRIT@@YAXVPDEVOBJ@@H@Z @ 0x1C008AD88 (-LEAVE_GRE_DWM_CRIT@@YAXVPDEVOBJ@@H@Z.c)
 *     ?ENTER_GRE_DWM_CRIT@@YAXVPDEVOBJ@@PEAH@Z @ 0x1C008B124 (-ENTER_GRE_DWM_CRIT@@YAXVPDEVOBJ@@PEAH@Z.c)
 *     GreDeleteSprite @ 0x1C008BA1C (GreDeleteSprite.c)
 *     DwmAsyncDestroySprite @ 0x1C008BA8C (DwmAsyncDestroySprite.c)
 *     ?vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z @ 0x1C008E7F0 (-vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z.c)
 *     ?CleanupShape@SFMLOGICALSURFACE@@QEAAXPEAVSURFACE@@@Z @ 0x1C008EB10 (-CleanupShape@SFMLOGICALSURFACE@@QEAAXPEAVSURFACE@@@Z.c)
 *     ?OwnsSurfaceCleanup@SFMLOGICALSURFACE@@QEAAPEAVSURFACE@@PEAUHLSURF__@@H@Z @ 0x1C008EB4C (-OwnsSurfaceCleanup@SFMLOGICALSURFACE@@QEAAPEAVSURFACE@@PEAUHLSURF__@@H@Z.c)
 *     ?SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z @ 0x1C008EBA0 (-SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z.c)
 *     UserIsWindowWithNoRedirectionBitmap @ 0x1C00E7950 (UserIsWindowWithNoRedirectionBitmap.c)
 *     ?vFixupMetaSpriteList@@YAXAEAVPDEVOBJ@@@Z @ 0x1C025E690 (-vFixupMetaSpriteList@@YAXAEAVPDEVOBJ@@@Z.c)
 */

__int64 __fastcall GreTransferDwmStateToSpriteState(HDEV a1, __int64 a2)
{
  unsigned int v3; // r13d
  HDC v4; // r12
  HDC DisplayDC; // r15
  HDC v6; // rbx
  HDC v7; // r10
  struct DwmState *v8; // r14
  __int64 v10; // rdi
  __int64 v11; // r14
  HLSURF v12; // rdx
  unsigned __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rbx
  int IsWindowWithNoRedirectionBitmap; // eax
  LONG v18; // eax
  __int64 v19; // r13
  LONG v20; // eax
  HWND v21; // rdx
  unsigned int v22; // ecx
  void *v23; // rax
  unsigned int v24; // [rsp+58h] [rbp-39h]
  unsigned int v25; // [rsp+6Ch] [rbp-25h] BYREF
  struct SURFACE *v26; // [rsp+70h] [rbp-21h]
  struct tagPOINT v27; // [rsp+78h] [rbp-19h] BYREF
  struct tagSIZE v28; // [rsp+80h] [rbp-11h] BYREF
  struct tagPOINT v29; // [rsp+88h] [rbp-9h] BYREF
  struct tagSIZE v30; // [rsp+90h] [rbp-1h] BYREF
  struct tagPOINT v31; // [rsp+98h] [rbp+7h] BYREF
  HDC v32; // [rsp+A0h] [rbp+Fh]
  HDC v33; // [rsp+A8h] [rbp+17h]
  __int64 v34; // [rsp+B0h] [rbp+1Fh]
  __int64 v35; // [rsp+B8h] [rbp+27h]
  HDEV v36; // [rsp+C0h] [rbp+2Fh] BYREF

  v34 = a2;
  v35 = 0LL;
  v36 = a1;
  v3 = 1;
  ENTER_GRE_DWM_CRIT(a1, &v25);
  if ( !g_pDwmState )
    goto LABEL_7;
  v4 = 0LL;
  v26 = 0LL;
  DisplayDC = 0LL;
  v6 = *(HDC *)(gpDispInfo + 48LL);
  v7 = (HDC)ghdcMem;
  v8 = (struct DwmState *)*((_QWORD *)g_pDwmState + 10);
  v33 = v6;
  v32 = (HDC)ghdcMem;
  if ( v8 == (struct DwmState *)((char *)g_pDwmState + 80) )
    goto LABEL_3;
  do
  {
    v10 = ((unsigned __int64)v8 - 24) & -(__int64)(v8 != 0LL);
    v11 = *(_QWORD *)(v10 + 0xC0);
    if ( (*(_DWORD *)(v10 + 0x48) & 0x400000) != 0 )
    {
      v8 = *(struct DwmState **)(v10 + 24);
      GreDeleteSprite(a1, 0LL, *(void **)v10, 1);
      continue;
    }
    if ( !(unsigned int)UserIsWindowOnDesktopAndComposed(*(_QWORD *)(v10 + 40), v34) )
    {
      v8 = *(struct DwmState **)(v10 + 24);
      continue;
    }
    if ( GdiCreateSprite(a1, *(HWND *)(v10 + 40), (struct _RECTL *)(v10 + 56)) )
    {
      v16 = *(_QWORD *)(v11 + 192);
      v3 = 1;
      if ( v16 )
      {
        v26 = SFMLOGICALSURFACE::OwnsSurfaceCleanup((SFMLOGICALSURFACE *)v11, v12, v14);
        SFMLOGICALSURFACE::SetShape((SFMLOGICALSURFACE *)v11, a1, 0LL);
LABEL_19:
        v13 = *(_QWORD *)(v10 + 72) - v35;
        if ( !v13 )
          v13 = *(unsigned int *)(v10 + 80) - (unsigned __int64)(unsigned int)v35;
        if ( !v13 )
        {
          *(_DWORD *)(v10 + 72) = 4;
          *(_DWORD *)(v10 + 76) = 16711680;
        }
        if ( v16 )
        {
          v15 = *(unsigned int *)(v11 + 256);
          if ( (v15 & 1) != 0 )
          {
            GdiHintSpriteShape(a1, *(HWND *)(v10 + 40), *(HBITMAP *)(v16 + 8), ((unsigned int)v15 >> 6) & 1, 1);
            GdiUpdateSprite(
              a1,
              *(HWND *)(v10 + 40),
              0LL,
              0LL,
              0LL,
              0LL,
              0LL,
              0LL,
              *(_DWORD *)(v10 + 80),
              (struct _BLENDFUNCTION *)(v10 + 76),
              *(_DWORD *)(v10 + 72) | 0x20000000,
              0LL);
          }
          else
          {
            if ( !DisplayDC )
            {
              DisplayDC = (HDC)GreCreateDisplayDC(a1, 0LL, 0LL);
              if ( !DisplayDC )
                DisplayDC = v33;
            }
            if ( v4 || (v4 = (HDC)GreCreateDisplayDC(a1, 1LL, 0LL)) != 0LL || (v4 = v32) != 0LL )
            {
              if ( DisplayDC )
              {
                *((_DWORD *)v26 + 28) |= 0x4000000u;
                v19 = GreSelectBitmap(v4, *(_QWORD *)(v16 + 8));
                if ( v19 )
                {
                  v20 = *(_DWORD *)(v10 + 56);
                  v21 = *(HWND *)(v10 + 40);
                  v22 = *(_DWORD *)(v10 + 72) | 0x20000000;
                  v27.y = 0;
                  v27.x = 0;
                  v29.x = v20;
                  v29.y = *(_DWORD *)(v10 + 60);
                  v28 = *(struct tagSIZE *)(v16 + 32);
                  GdiUpdateSprite(
                    a1,
                    v21,
                    0LL,
                    DisplayDC,
                    (struct _POINTL *)&v29,
                    &v28,
                    v4,
                    (struct _POINTL *)&v27,
                    *(_DWORD *)(v10 + 80),
                    (struct _BLENDFUNCTION *)(v10 + 76),
                    v22,
                    0LL);
                  GreSelectBitmap(v4, v19);
                }
                v3 = 1;
              }
            }
          }
        }
        else
        {
          v18 = *(_DWORD *)(v10 + 56);
          v30 = 0LL;
          v24 = *(_DWORD *)(v10 + 72) | 0x20000000;
          v31.x = v18;
          v31.y = *(_DWORD *)(v10 + 60);
          GdiUpdateSprite(
            a1,
            *(HWND *)(v10 + 40),
            0LL,
            0LL,
            (struct _POINTL *)&v31,
            &v30,
            0LL,
            0LL,
            *(_DWORD *)(v10 + 80),
            (struct _BLENDFUNCTION *)(v10 + 76),
            v24,
            0LL);
        }
        if ( v16 )
          SFMLOGICALSURFACE::CleanupShape((SFMLOGICALSURFACE *)v11, v26);
        goto LABEL_40;
      }
      IsWindowWithNoRedirectionBitmap = UserIsWindowWithNoRedirectionBitmap(*(_QWORD *)(v10 + 40));
      v15 = 0LL;
      if ( IsWindowWithNoRedirectionBitmap )
        goto LABEL_19;
    }
    else
    {
      v3 = 0;
    }
LABEL_40:
    v8 = *(struct DwmState **)(v10 + 24);
    v23 = (void *)UserReferenceDwmApiPort(v13, v12, v14, v15);
    DwmAsyncDestroySprite(v23);
    vspDestroyDwmSpriteObjInternal(a1, 0, (struct DWMSPRITE *)v10);
  }
  while ( v8 != (struct DwmState *)((char *)g_pDwmState + 80) );
  v7 = v32;
  v6 = v33;
LABEL_3:
  if ( ((_DWORD)a1[8] & 0x20000) != 0 )
    vFixupMetaSpriteList((struct PDEVOBJ *)&v36);
  if ( v4 && v4 != v7 )
    GreDeleteDC(v4);
  if ( DisplayDC && DisplayDC != v6 )
    GreDeleteDC(DisplayDC);
LABEL_7:
  LEAVE_GRE_DWM_CRIT(a1, v25);
  return v3;
}
