/*
 * XREFs of ?bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@PEAPEAV3@@Z @ 0x1C00A0010
 * Callers:
 *     ?GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HH@Z @ 0x1C006DDF0 (-GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@3.c)
 *     ?bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEAU_RECTL@@PEAVPALETTE@@PEAK4PEAPEAV3@@Z @ 0x1C009FD58 (-bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEA.c)
 *     ?SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z @ 0x1C024C6A8 (-SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z.c)
 *     ?bSpDwmUpdateDragRectShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagPOINT@@PEAUtagSIZE@@PEAKPEAPEAV3@@Z @ 0x1C024D064 (-bSpDwmUpdateDragRectShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagPOINT@@P.c)
 * Callees:
 *     SFMLOGICALSURFACEREF_vDestructorWrap @ 0x1C0023CF0 (SFMLOGICALSURFACEREF_vDestructorWrap.c)
 *     ?LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z @ 0x1C0023D38 (-LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z.c)
 *     ?SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z @ 0x1C00265B8 (-SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z.c)
 *     ?vUpdateDpiScaling@DWMSPRITE@@QEAAXPEAG@Z @ 0x1C0026680 (-vUpdateDpiScaling@DWMSPRITE@@QEAAXPEAG@Z.c)
 *     ?SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z @ 0x1C0026890 (-SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z.c)
 *     ?vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C00842FC (-vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     UserGetHwndProcess @ 0x1C00A02B4 (UserGetHwndProcess.c)
 *     ?hsurfSpCreateSurface@@YAPEAUHSURF__@@PEAUHDEV__@@PEAUtagSIZE@@@Z @ 0x1C00A02E8 (-hsurfSpCreateSurface@@YAPEAUHSURF__@@PEAUHDEV__@@PEAUtagSIZE@@@Z.c)
 *     ?CreateHLSURFClone@SFMLOGICALSURFACE@@SAPEAUHLSURF__@@PEAUHDEV__@@PEAV1@HHH@Z @ 0x1C00A046C (-CreateHLSURFClone@SFMLOGICALSURFACE@@SAPEAUHLSURF__@@PEAUHDEV__@@PEAV1@HHH@Z.c)
 *     bFToL @ 0x1C00DF104 (bFToL.c)
 */

__int64 __fastcall bSpDwmCreateLogicalSurface(
        HDEV a1,
        struct DWMSPRITE *this,
        struct SFMLOGICALSURFACE *a3,
        struct tagSIZE *a4,
        struct SFMLOGICALSURFACE **a5)
{
  unsigned int v5; // ebp
  struct SFMLOGICALSURFACE *v7; // rsi
  int v10; // r12d
  HLSURF v11; // rax
  HDEV v12; // rdx
  struct SFMLOGICALSURFACE *v13; // rbx
  HDEV v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r14
  __int64 v18; // rcx
  int v19; // eax
  int v20; // edx
  HLSURF HLSURFClone; // rax
  HDEV v22; // rdx
  HDEV v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // r8
  HSURF Surface; // rax
  __int64 v28; // rdx
  __int64 v29; // rbx
  unsigned __int64 HwndProcess; // rax
  struct SFMLOGICALSURFACE *v32; // [rsp+30h] [rbp-38h] BYREF
  int v33; // [rsp+38h] [rbp-30h]

  v5 = 0;
  v32 = 0LL;
  v7 = a3;
  v33 = 0;
  v10 = 1;
  if ( a4 )
  {
    v18 = *((_QWORD *)a3 + 24);
    if ( v18 || (*((_DWORD *)a3 + 62) & 1) != 0 )
    {
      if ( v18 )
      {
        v19 = *(_DWORD *)(v18 + 32);
        v20 = *(_DWORD *)(v18 + 36);
      }
      else
      {
        v20 = 0;
        v19 = 0;
      }
      if ( a4->cx == v19 && a4->cy == v20 )
        goto LABEL_25;
      *((_DWORD *)this + 16) = *((_DWORD *)this + 14);
      *((_DWORD *)this + 17) = *((_DWORD *)this + 15);
      if ( *a5 == a3 )
      {
        HLSURFClone = SFMLOGICALSURFACE::CreateHLSURFClone(a1, a3, 0, 1, 1);
        SFMLOGICALSURFACEREF::LockLogicalSurfaceObj((SFMLOGICALSURFACEREF *)&v32, HLSURFClone);
        v7 = v32;
        if ( !v32 )
          goto LABEL_26;
        DWMSPRITE::SetLogicalSurface(this, v22, 0LL);
        DWMSPRITE::SetLogicalSurface(this, v23, v7);
        *a5 = v7;
      }
      else
      {
        v7 = *a5;
      }
    }
    else if ( *a5 != a3 )
    {
      v7 = *a5;
    }
    DWMSPRITE::vUpdateDpiScaling(this, 0LL);
    if ( (*((_DWORD *)this + 50) & 0x20) != 0 )
    {
      bFToL(v24, a4, 6LL);
      bFToL(v25, &a4->cy, v26);
    }
    Surface = hsurfSpCreateSurface(a1, a4);
    if ( Surface )
    {
      LOBYTE(v28) = 5;
      v29 = HmgReferenceCheckLock(Surface, v28, 0LL);
      SFMLOGICALSURFACE::SetShape(v7, a1, (struct _SURFOBJ *)(v29 + 24));
      *((_DWORD *)v7 + 64) |= 8u;
      *((_DWORD *)this + 16) = a4->cx + *((_DWORD *)this + 14);
      *((_DWORD *)this + 17) = a4->cy + *((_DWORD *)this + 15);
      HwndProcess = UserGetHwndProcess(*((_QWORD *)this + 5));
      SURFACE::vAppContainerOwner((SURFACE *)v29, HwndProcess);
    }
    else
    {
      v10 = 0;
    }
    goto LABEL_25;
  }
  if ( *a5 != a3 )
  {
LABEL_25:
    v5 = v10;
    goto LABEL_26;
  }
  v11 = SFMLOGICALSURFACE::CreateHLSURFClone(a1, a3, 0, 1, 1);
  SFMLOGICALSURFACEREF::LockLogicalSurfaceObj((SFMLOGICALSURFACEREF *)&v32, v11);
  v13 = v32;
  if ( v32 )
  {
    DWMSPRITE::SetLogicalSurface(this, v12, 0LL);
    DWMSPRITE::SetLogicalSurface(this, v14, v13);
    v15 = SURFOBJ_TO_SURFACE(*((_QWORD *)v7 + 24));
    v17 = v15;
    if ( v15 )
    {
      INC_SHARE_REF_CNT(v15, v16);
      SFMLOGICALSURFACE::SetShape(v7, a1, 0LL);
      SFMLOGICALSURFACE::SetShape(v13, a1, (struct _SURFOBJ *)(v17 + 24));
      *((_DWORD *)v13 + 64) |= 8u;
      DEC_SHARE_REF_CNT(v17);
    }
    *a5 = v13;
    goto LABEL_25;
  }
LABEL_26:
  SFMLOGICALSURFACEREF_vDestructorWrap(&v32);
  return v5;
}
