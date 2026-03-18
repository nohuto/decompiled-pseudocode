/*
 * XREFs of ?vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z @ 0x1C00272A0
 * Callers:
 *     ?GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HH@Z @ 0x1C0026830 (-GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@3.c)
 *     GreTransferSpriteStateToDwmState @ 0x1C0044FBC (GreTransferSpriteStateToDwmState.c)
 *     ?bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEAU_RECTL@@PEAVPALETTE@@PEAK4PEAPEAV3@@Z @ 0x1C008CCDC (-bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEA.c)
 *     ?SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z @ 0x1C024E824 (-SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z.c)
 *     ?bSpDwmUpdateDragRectShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagPOINT@@PEAUtagSIZE@@PEAKPEAPEAV3@@Z @ 0x1C024EAE0 (-bSpDwmUpdateDragRectShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagPOINT@@P.c)
 *     GreAddBitmapD3DDirtyRgn @ 0x1C024F474 (GreAddBitmapD3DDirtyRgn.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C00183B8 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?bDpiScaledSurface@DC@@QEAAHXZ @ 0x1C0027FD0 (-bDpiScaledSurface@DC@@QEAAHXZ.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C002C390 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C008F1D0 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?vClearMoveData@METAREGION@@QEAAXH@Z @ 0x1C008F200 (-vClearMoveData@METAREGION@@QEAAXH@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00EB328 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ?vAltLock@XDCOBJ@@QEAAXPEAUHDC__@@H@Z @ 0x1C0144678 (-vAltLock@XDCOBJ@@QEAAXPEAUHDC__@@H@Z.c)
 *     ?vCalculateNoMoveDirty@METAREGION@@AEAAXXZ @ 0x1C01A0B44 (-vCalculateNoMoveDirty@METAREGION@@AEAAXXZ.c)
 *     ?bTrimMoveWithRegion@METAREGION@@AEAAHPEAVREGION@@H@Z @ 0x1C029A12C (-bTrimMoveWithRegion@METAREGION@@AEAAHPEAVREGION@@H@Z.c)
 *     ?vApplyMoveData@METAREGION@@AEAAHPEAU_RECTL@@PEAU_POINTL@@PEAVREGION@@@Z @ 0x1C029A400 (-vApplyMoveData@METAREGION@@AEAAHPEAU_RECTL@@PEAU_POINTL@@PEAVREGION@@@Z.c)
 */

void __fastcall vSpUpdateDirtyRgn(
        struct DWMSPRITE *a1,
        struct SFMLOGICALSURFACE *a2,
        HDC a3,
        struct _RECTL *a4,
        unsigned int *a5,
        int a6)
{
  unsigned int *v6; // r15
  char *v7; // rsi
  int v8; // r12d
  int v13; // r15d
  int v14; // r8d
  DC *v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // rdi
  __int64 v20; // rcx
  bool v21; // zf
  int v22; // eax
  __int64 v23; // rcx
  struct REGION *v24; // rcx
  __int64 v25; // rcx
  LONG v26; // ecx
  __int64 v27; // rcx
  __int64 v28; // rdi
  int v29; // eax
  REGION *v30; // rcx
  DC *v31; // [rsp+30h] [rbp-89h] BYREF
  __int64 v32; // [rsp+38h] [rbp-81h]
  struct REGION *v33[2]; // [rsp+40h] [rbp-79h] BYREF
  __int64 v34; // [rsp+50h] [rbp-69h] BYREF
  __int64 v35; // [rsp+58h] [rbp-61h] BYREF
  int v36; // [rsp+60h] [rbp-59h]
  unsigned int *v37; // [rsp+68h] [rbp-51h]
  __int64 v38; // [rsp+70h] [rbp-49h] BYREF
  int v39; // [rsp+78h] [rbp-41h]
  __int64 v40; // [rsp+80h] [rbp-39h] BYREF
  __int64 v41; // [rsp+88h] [rbp-31h] BYREF
  int v42; // [rsp+90h] [rbp-29h]
  struct _RECTL v43; // [rsp+98h] [rbp-21h] BYREF
  struct _RECTL v44; // [rsp+A8h] [rbp-11h] BYREF

  v6 = a5;
  v7 = (char *)a2 + 136;
  v8 = 0;
  v37 = a5;
  if ( !*((_QWORD *)a2 + 17) )
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v44);
    v21 = v44.right == 1;
    *(_QWORD *)v7 = *(_QWORD *)&v44.left;
    if ( v21 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v44);
  }
  if ( !*((_QWORD *)a2 + 11) )
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v44);
    v27 = *(_QWORD *)a2;
    *((_QWORD *)a2 + 11) = *(_QWORD *)&v44.left;
    EtwTraceLifetimeAccum(v27, 1LL);
    v8 = 1;
    if ( v44.right == 1 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v44);
  }
  if ( !*((_QWORD *)a2 + 24) )
  {
    v33[0] = *(struct REGION **)v7;
    RGNOBJ::vSet((RGNOBJ *)v33);
    if ( *((_QWORD *)a2 + 11) )
    {
      v34 = *((_QWORD *)a2 + 11);
      RGNOBJ::vSet((RGNOBJ *)&v34);
      EtwTraceLifetimeAccum(*(_QWORD *)a2, 1LL);
    }
  }
  v40 = *(_QWORD *)v7;
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v35);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v35);
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v38);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v38);
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v41);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v41);
  if ( v40 && v35 && v38 && v41 )
  {
    v13 = 0;
    RGNOBJ::vSet((RGNOBJ *)&v35, a4);
    if ( (*((_DWORD *)a2 + 64) & 1) == 0 )
      goto LABEL_118;
    if ( !a3 )
      goto LABEL_118;
    v31 = 0LL;
    v32 = 0LL;
    XDCOBJ::vAltLock((XDCOBJ *)&v31, a3, v14);
    v15 = v31;
    if ( !v31 )
      goto LABEL_118;
    if ( (*((_DWORD *)v31 + 9) & 1) != 0 )
    {
      v16 = *((_QWORD *)v31 + 196);
      if ( !v16
        || (*((_DWORD *)v31 + 10) & 2) == 0
        || (v21 = (unsigned int)DC::bDpiScaledSurface(v31) == 0, v17 = v16, v21) )
      {
        v17 = *((_QWORD *)v15 + 194);
      }
      if ( v17 )
      {
        if ( !v16 || (*((_DWORD *)v15 + 10) & 2) == 0 || !(unsigned int)DC::bDpiScaledSurface(v15) )
          v18 = *((_QWORD *)v15 + 194);
      }
      else if ( !*((_QWORD *)v15 + 195) || (*((_DWORD *)v15 + 10) & 2) == 0 || !(unsigned int)DC::bDpiScaledSurface(v15) )
      {
        v18 = *((_QWORD *)v15 + 193);
      }
      v34 = v18;
      if ( v18 )
      {
        if ( RGNOBJ::bMerge((RGNOBJ *)&v38, (struct RGNOBJ *)&v34, (struct RGNOBJ *)&v35, BYTE1(gafjRgnOp)) )
        {
          RGNOBJ::vSwap((RGNOBJ *)&v38, (struct RGNOBJ *)&v35);
          v13 = 1;
        }
        else
        {
          RGNOBJ::vSet((RGNOBJ *)&v38);
        }
      }
    }
    XDCOBJ::RestoreAttributes((XDCOBJ *)&v31);
    LODWORD(v33[0]) = 0;
    v19 = *(_QWORD *)v31;
    HmgDecrementShareReferenceCountEx(v31, v33);
    if ( LODWORD(v33[0]) )
      bDeleteDCInternalEx(v19, 0LL);
    if ( !v13 )
    {
LABEL_118:
      if ( !a1 )
        goto LABEL_77;
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v31);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v31);
      v43.right = *((_DWORD *)a1 + 16) - *((_DWORD *)a1 + 14);
      v26 = *((_DWORD *)a1 + 17) - *((_DWORD *)a1 + 15);
      *(_QWORD *)&v43.left = 0LL;
      v43.bottom = v26;
      if ( v31 )
      {
        RGNOBJ::vSet((RGNOBJ *)&v31, &v43);
        if ( RGNOBJ::bMerge((RGNOBJ *)&v38, (struct RGNOBJ *)&v35, (struct RGNOBJ *)&v31, BYTE1(gafjRgnOp)) )
        {
          RGNOBJ::vSwap((RGNOBJ *)&v38, (struct RGNOBJ *)&v35);
          v13 = 1;
        }
      }
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v31);
      if ( !v13 )
LABEL_77:
        RGNOBJ::vSet((RGNOBJ *)&v35);
    }
    if ( a1 && v35 && *((_QWORD *)a1 + 11) )
    {
      v33[0] = *((struct REGION **)a1 + 11);
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v43);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v43);
      if ( v33[0] && *(_QWORD *)&v43.left )
      {
        if ( RGNOBJ::bMerge((RGNOBJ *)&v43, (struct RGNOBJ *)v33, (struct RGNOBJ *)&v35, BYTE4(gafjRgnOp))
          && !RGNOBJ::bEqual((RGNOBJ *)&v43, (struct RGNOBJ *)v33) )
        {
          RGNOBJ::vSwap((RGNOBJ *)&v43, (struct RGNOBJ *)v33);
          *((struct REGION **)a1 + 11) = v33[0];
          *((_DWORD *)a1 + 24) = -1;
        }
        if ( *((_QWORD *)a1 + 13) )
        {
          v34 = *((_QWORD *)a1 + 13);
          if ( RGNOBJ::bMerge((RGNOBJ *)&v43, (struct RGNOBJ *)v33, (struct RGNOBJ *)&v34, BYTE2(gafjRgnOp)) )
          {
            RGNOBJ::vSwap((RGNOBJ *)&v43, (struct RGNOBJ *)v33);
            *((struct REGION **)a1 + 11) = v33[0];
            *((_DWORD *)a1 + 24) = -1;
          }
          REGION::vDeleteREGION(*((REGION **)a1 + 13));
          *((_QWORD *)a1 + 13) = 0LL;
        }
      }
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v43);
    }
    if ( !RGNOBJ::bMerge((RGNOBJ *)&v38, (struct RGNOBJ *)&v40, (struct RGNOBJ *)&v35, BYTE2(gafjRgnOp)) )
      goto LABEL_31;
    RGNOBJ::vSwap((RGNOBJ *)&v38, (struct RGNOBJ *)&v40);
    v20 = *(_QWORD *)a2;
    if ( a6 )
    {
      EtwTranslationUpdateOffset(v20, *((unsigned int *)a2 + 40), HIDWORD(*((_QWORD *)a2 + 20)));
      EtwTranslationUpdate(
        *(_QWORD *)a2,
        (unsigned int)a4->left,
        (unsigned int)a4->top,
        (unsigned int)a4->right,
        a4->bottom);
      v28 = v40;
      v29 = METAREGION::vApplyMoveData(
              (METAREGION *)v7,
              (struct _RECTL *)((char *)a2 + 120),
              (struct _POINTL *)a2 + 14,
              *((struct REGION **)a2 + 13));
      *(_QWORD *)v7 = v28;
      if ( v29 )
        METAREGION::vCalculateNoMoveDirty((METAREGION *)v7);
      goto LABEL_29;
    }
    EtwDirtyRectUpdate(v20, (unsigned int)a4->left, (unsigned int)a4->top, (unsigned int)a4->right, a4->bottom);
    v21 = *((_DWORD *)v7 + 10) == 0;
    *(_QWORD *)v7 = v40;
    if ( v21 )
    {
LABEL_29:
      v22 = *((_DWORD *)a2 + 64);
      if ( (v22 & 2) == 0 )
      {
        *((_DWORD *)a2 + 64) = v22 | 2;
        *v37 |= 1u;
      }
LABEL_31:
      if ( *((_QWORD *)a2 + 11) )
      {
        v33[0] = *((struct REGION **)a2 + 11);
        if ( RGNOBJ::bMerge((RGNOBJ *)&v41, (struct RGNOBJ *)v33, (struct RGNOBJ *)&v35, BYTE2(gafjRgnOp)) )
        {
          RGNOBJ::vSwap((RGNOBJ *)&v41, (struct RGNOBJ *)v33);
          v23 = *(_QWORD *)a2;
          *((struct REGION **)a2 + 11) = v33[0];
          EtwTraceLifetimeAccum(v23, 1LL);
        }
        if ( !v8 && *((_DWORD *)v33[0] + 21) != 1 && *((_DWORD *)v33[0] + 20) <= 0xA0u )
        {
          RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v31);
          if ( v31 )
          {
            v24 = (struct REGION *)*((_QWORD *)a2 + 11);
            v44 = *(struct _RECTL *)((char *)v33[0] + 88);
            if ( v24 && v24 != prgnDefault )
              FreeObject(v24, 4LL);
            RGNOBJ::vSet((RGNOBJ *)&v31, &v44);
            v25 = *(_QWORD *)a2;
            *((_QWORD *)a2 + 11) = v31;
            EtwTraceLifetimeAccum(v25, 1LL);
          }
          if ( (_DWORD)v32 == 1 )
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v31);
        }
      }
      v6 = v37;
      goto LABEL_45;
    }
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v33);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v33);
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v43);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v43);
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v31);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v31);
    v34 = *((_QWORD *)v7 + 4);
    if ( RGNOBJ::bCopy((RGNOBJ *)&v43, (struct RGNOBJ *)&v34)
      && RGNOBJ::bOffset((RGNOBJ *)&v43, (struct _POINTL *)v7 + 3) )
    {
      RGNOBJ::vSet((RGNOBJ *)v33, a4);
      if ( !v33[0]
        || !*(_QWORD *)&v43.left
        || !v31
        || !RGNOBJ::iCombine((RGNOBJ *)&v31, (struct RGNOBJ *)v33, (struct RGNOBJ *)&v43, 1)
        || (v44 = *(struct _RECTL *)((char *)v31 + 88), ERECTL::bEmpty((ERECTL *)&v44))
        || (unsigned int)METAREGION::bTrimMoveWithRegion((METAREGION *)v7, v33[0], 1) )
      {
LABEL_100:
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v31);
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v43);
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v33);
        if ( !*((_DWORD *)v7 + 10) )
          goto LABEL_29;
        v33[0] = *(struct REGION **)v7;
        RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v43);
        RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v31);
        RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v31);
        v30 = (REGION *)*((_QWORD *)v7 + 1);
        v34 = *((_QWORD *)v7 + 4);
        if ( v30 )
        {
          REGION::vDeleteREGION(v30);
          *((_QWORD *)v7 + 1) = 0LL;
        }
        if ( RGNOBJ::bCopy((RGNOBJ *)&v31, (struct RGNOBJ *)&v34)
          && RGNOBJ::bOffset((RGNOBJ *)&v31, (struct _POINTL *)v7 + 3) )
        {
          RGNOBJ::vSet((RGNOBJ *)&v43);
          if ( v33[0]
            && v31
            && *(_QWORD *)&v43.left
            && RGNOBJ::iCombine((RGNOBJ *)&v43, (struct RGNOBJ *)v33, (struct RGNOBJ *)&v31, 4) )
          {
            *((_QWORD *)v7 + 1) = *(_QWORD *)&v43.left;
          }
          else
          {
            METAREGION::vClearMoveData((METAREGION *)v7, 1);
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v43);
          }
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v31);
          if ( v43.right != 1 )
            goto LABEL_29;
        }
        else
        {
          METAREGION::vClearMoveData((METAREGION *)v7, 1);
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v31);
          if ( v43.right != 1 )
            goto LABEL_29;
        }
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v43);
        goto LABEL_29;
      }
      EtwLogicalSurfRemovedTranslationFromDirtyEvent(
        *((_QWORD *)v7 + 6),
        (unsigned int)a4->left,
        (unsigned int)a4->top,
        (unsigned int)a4->right,
        a4->bottom);
      EtwTraceMoveRegion(*((_QWORD *)v7 + 4), 0LL, 0LL, *((_QWORD *)v7 + 4));
    }
    METAREGION::vClearMoveData((METAREGION *)v7, 1);
    goto LABEL_100;
  }
LABEL_45:
  if ( (*((_DWORD *)a2 + 64) & 0x20) != 0 )
  {
    *v6 |= 2u;
    *((_DWORD *)a2 + 64) &= ~0x20u;
  }
  RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v41);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v41);
  if ( v42 == 1 )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v41);
  RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v38);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v38);
  if ( v39 == 1 )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v38);
  RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v35);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v35);
  if ( v36 == 1 )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v35);
}
