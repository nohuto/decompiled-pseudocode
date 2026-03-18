/*
 * XREFs of GreTransferDwmStateToSpriteState @ 0x1C00A1A50
 * Callers:
 *     zzzComposeDesktop @ 0x1C0016E24 (zzzComposeDesktop.c)
 *     zzzDecomposeDesktop @ 0x1C00A18B4 (zzzDecomposeDesktop.c)
 * Callees:
 *     GreDeleteSprite @ 0x1C001DBF8 (GreDeleteSprite.c)
 *     DwmAsyncDestroySprite @ 0x1C001DC68 (DwmAsyncDestroySprite.c)
 *     ?vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z @ 0x1C00264A0 (-vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z.c)
 *     ?CleanupShape@SFMLOGICALSURFACE@@QEAAXPEAVSURFACE@@@Z @ 0x1C0026800 (-CleanupShape@SFMLOGICALSURFACE@@QEAAXPEAVSURFACE@@@Z.c)
 *     ?OwnsSurfaceCleanup@SFMLOGICALSURFACE@@QEAAPEAVSURFACE@@PEAUHLSURF__@@H@Z @ 0x1C002683C (-OwnsSurfaceCleanup@SFMLOGICALSURFACE@@QEAAPEAVSURFACE@@PEAUHLSURF__@@H@Z.c)
 *     ?SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z @ 0x1C0026890 (-SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z.c)
 *     UserIsWindowWithNoRedirectionBitmap @ 0x1C009CF8C (UserIsWindowWithNoRedirectionBitmap.c)
 *     UserIsWindowOnDesktopAndComposed @ 0x1C00A23F4 (UserIsWindowOnDesktopAndComposed.c)
 *     ?LEAVE_GRE_DWM_CRIT@@YAXVPDEVOBJ@@H@Z @ 0x1C00BC760 (-LEAVE_GRE_DWM_CRIT@@YAXVPDEVOBJ@@H@Z.c)
 *     ?ENTER_GRE_DWM_CRIT@@YAXVPDEVOBJ@@PEAH@Z @ 0x1C00BC880 (-ENTER_GRE_DWM_CRIT@@YAXVPDEVOBJ@@PEAH@Z.c)
 *     ?GdiCreateSprite@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@@Z @ 0x1C02572D8 (-GdiCreateSprite@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@@Z.c)
 *     ?GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z @ 0x1C0257980 (-GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z.c)
 *     ?GdiUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@@Z @ 0x1C0258500 (-GdiUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_B.c)
 *     ?vFixupMetaSpriteList@@YAXAEAVPDEVOBJ@@@Z @ 0x1C025E90C (-vFixupMetaSpriteList@@YAXAEAVPDEVOBJ@@@Z.c)
 */

__int64 __fastcall GreTransferDwmStateToSpriteState(HDEV a1, __int64 a2)
{
  unsigned int v3; // r13d
  HDC v4; // r12
  HDC DisplayDC; // r15
  HDC v6; // rbx
  HDC v7; // r10
  struct DwmState *v8; // r14
  __int64 v9; // rdi
  __int64 v10; // r14
  HLSURF v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rbx
  int IsWindowWithNoRedirectionBitmap; // eax
  __int64 v17; // r13
  LONG v18; // eax
  HWND v19; // rdx
  unsigned int v20; // ecx
  LONG v21; // eax
  void *v22; // rbx
  void *v23; // rax
  unsigned int v25; // [rsp+58h] [rbp-39h]
  unsigned int v26; // [rsp+6Ch] [rbp-25h] BYREF
  struct SURFACE *v27; // [rsp+70h] [rbp-21h]
  struct tagPOINT v28; // [rsp+78h] [rbp-19h] BYREF
  struct tagSIZE v29; // [rsp+80h] [rbp-11h] BYREF
  struct tagPOINT v30; // [rsp+88h] [rbp-9h] BYREF
  struct tagSIZE v31; // [rsp+90h] [rbp-1h] BYREF
  struct tagPOINT v32; // [rsp+98h] [rbp+7h] BYREF
  HDC v33; // [rsp+A0h] [rbp+Fh]
  HDC v34; // [rsp+A8h] [rbp+17h]
  __int64 v35; // [rsp+B0h] [rbp+1Fh]
  __int64 v36; // [rsp+B8h] [rbp+27h]
  HDEV v37; // [rsp+C0h] [rbp+2Fh] BYREF

  v35 = a2;
  v36 = 0LL;
  v37 = a1;
  v3 = 1;
  ENTER_GRE_DWM_CRIT(a1, &v26);
  if ( !g_pDwmState )
    goto LABEL_44;
  v4 = 0LL;
  v27 = 0LL;
  DisplayDC = 0LL;
  v6 = *(HDC *)(gpDispInfo + 48LL);
  v7 = *(HDC *)ghdcMem;
  v8 = (struct DwmState *)*((_QWORD *)g_pDwmState + 10);
  v34 = v6;
  v33 = *(HDC *)ghdcMem;
  if ( v8 == (struct DwmState *)((char *)g_pDwmState + 80) )
    goto LABEL_36;
  do
  {
    v9 = ((unsigned __int64)v8 - 24) & -(__int64)(v8 != 0LL);
    v10 = *(_QWORD *)(v9 + 0xC0);
    if ( (*(_DWORD *)(v9 + 0x48) & 0x400000) != 0 )
    {
      v8 = *(struct DwmState **)(v9 + 24);
      GreDeleteSprite(a1, 0LL, *(void **)v9, 1);
      continue;
    }
    if ( !(unsigned int)UserIsWindowOnDesktopAndComposed(*(_QWORD *)(v9 + 40), v35) )
    {
      v8 = *(struct DwmState **)(v9 + 24);
      continue;
    }
    if ( GdiCreateSprite(a1, *(HWND *)(v9 + 40), (struct tagRECT *)(v9 + 56)) )
    {
      v15 = *(_QWORD *)(v10 + 192);
      v3 = 1;
      if ( v15 )
      {
        v27 = SFMLOGICALSURFACE::OwnsSurfaceCleanup((SFMLOGICALSURFACE *)v10, v11);
        SFMLOGICALSURFACE::SetShape((SFMLOGICALSURFACE *)v10, a1, 0LL);
LABEL_12:
        v12 = v36;
        if ( *(_QWORD *)(v9 + 72) == v36 && *(_DWORD *)(v9 + 80) == (_DWORD)v36 )
        {
          *(_DWORD *)(v9 + 72) = 4;
          *(_DWORD *)(v9 + 76) = 16711680;
        }
        if ( v15 )
        {
          v14 = *(unsigned int *)(v10 + 256);
          if ( (v14 & 1) != 0 )
          {
            GdiHintSpriteShape(a1, *(HWND *)(v9 + 40), *(HBITMAP *)(v15 + 8), ((unsigned int)v14 >> 6) & 1, 1);
            GdiUpdateSprite(
              a1,
              *(HWND *)(v9 + 40),
              0LL,
              0LL,
              0LL,
              0LL,
              0LL,
              0LL,
              *(_DWORD *)(v9 + 80),
              (struct _BLENDFUNCTION *)(v9 + 76),
              *(_DWORD *)(v9 + 72) | 0x20000000,
              0LL);
          }
          else
          {
            if ( !DisplayDC )
            {
              DisplayDC = (HDC)GreCreateDisplayDC(a1, 0LL, 0LL);
              if ( !DisplayDC )
                DisplayDC = v34;
            }
            if ( v4 || (v4 = (HDC)GreCreateDisplayDC(a1, 1LL, 0LL)) != 0LL || (v4 = v33) != 0LL )
            {
              if ( DisplayDC )
              {
                *((_DWORD *)v27 + 28) |= 0x4000000u;
                v17 = GreSelectBitmap(v4, *(_QWORD *)(v15 + 8));
                if ( v17 )
                {
                  v18 = *(_DWORD *)(v9 + 56);
                  v19 = *(HWND *)(v9 + 40);
                  v20 = *(_DWORD *)(v9 + 72) | 0x20000000;
                  v28.y = 0;
                  v28.x = 0;
                  v30.x = v18;
                  v30.y = *(_DWORD *)(v9 + 60);
                  v29 = *(struct tagSIZE *)(v15 + 32);
                  GdiUpdateSprite(
                    a1,
                    v19,
                    0LL,
                    DisplayDC,
                    &v30,
                    &v29,
                    v4,
                    &v28,
                    *(_DWORD *)(v9 + 80),
                    (struct _BLENDFUNCTION *)(v9 + 76),
                    v20,
                    0LL);
                  GreSelectBitmap(v4, v17);
                }
                v3 = 1;
              }
            }
          }
        }
        else
        {
          v21 = *(_DWORD *)(v9 + 56);
          v31 = 0LL;
          v25 = *(_DWORD *)(v9 + 72) | 0x20000000;
          v32.x = v21;
          v32.y = *(_DWORD *)(v9 + 60);
          GdiUpdateSprite(
            a1,
            *(HWND *)(v9 + 40),
            0LL,
            0LL,
            &v32,
            &v31,
            0LL,
            0LL,
            *(_DWORD *)(v9 + 80),
            (struct _BLENDFUNCTION *)(v9 + 76),
            v25,
            0LL);
        }
        if ( v15 )
          SFMLOGICALSURFACE::CleanupShape((SFMLOGICALSURFACE *)v10, (HSURF *)v27);
        goto LABEL_33;
      }
      IsWindowWithNoRedirectionBitmap = UserIsWindowWithNoRedirectionBitmap(*(_QWORD *)(v9 + 40));
      v14 = 0LL;
      if ( IsWindowWithNoRedirectionBitmap )
        goto LABEL_12;
    }
    else
    {
      v3 = 0;
    }
LABEL_33:
    v8 = *(struct DwmState **)(v9 + 24);
    v22 = *(void **)v9;
    v23 = (void *)UserReferenceDwmApiPort(v12, v11, v13, v14);
    DwmAsyncDestroySprite(v23, (__int64)v22);
    vspDestroyDwmSpriteObjInternal(a1, 0, (struct DWMSPRITE *)v9);
  }
  while ( v8 != (struct DwmState *)((char *)g_pDwmState + 80) );
  v7 = v33;
  v6 = v34;
LABEL_36:
  if ( ((_DWORD)a1[8] & 0x20000) != 0 )
    vFixupMetaSpriteList((struct PDEVOBJ *)&v37);
  if ( v4 && v4 != v7 )
    GreDeleteDC(v4);
  if ( DisplayDC && DisplayDC != v6 )
    GreDeleteDC(DisplayDC);
LABEL_44:
  LEAVE_GRE_DWM_CRIT(a1, v26);
  return v3;
}
