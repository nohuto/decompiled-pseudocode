/*
 * XREFs of ?vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z @ 0x1C006E8C0
 * Callers:
 *     GreTransferSpriteStateToDwmState @ 0x1C001665C (GreTransferSpriteStateToDwmState.c)
 *     ?GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HH@Z @ 0x1C006DDF0 (-GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@3.c)
 *     ?bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEAU_RECTL@@PEAVPALETTE@@PEAK4PEAPEAV3@@Z @ 0x1C009FD58 (-bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEA.c)
 *     ?SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z @ 0x1C024CD98 (-SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z.c)
 *     ?bSpDwmUpdateDragRectShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagPOINT@@PEAUtagSIZE@@PEAKPEAPEAV3@@Z @ 0x1C024D064 (-bSpDwmUpdateDragRectShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagPOINT@@P.c)
 *     GreAddBitmapD3DDirtyRgn @ 0x1C024DA04 (GreAddBitmapD3DDirtyRgn.c)
 * Callees:
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0026EC0 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?vClearMoveData@METAREGION@@QEAAXH@Z @ 0x1C0026EE4 (-vClearMoveData@METAREGION@@QEAAXH@Z.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0075330 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?bDpiScaledSurface@DC@@QEAAHXZ @ 0x1C007B510 (-bDpiScaledSurface@DC@@QEAAHXZ.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C0081778 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C009C064 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?vCalculateNoMoveDirty@METAREGION@@AEAAXXZ @ 0x1C0195938 (-vCalculateNoMoveDirty@METAREGION@@AEAAXXZ.c)
 *     ?bTrimMoveWithRegion@METAREGION@@AEAAHPEAVREGION@@H@Z @ 0x1C029DA40 (-bTrimMoveWithRegion@METAREGION@@AEAAHPEAVREGION@@H@Z.c)
 *     ?vApplyMoveData@METAREGION@@AEAAHPEAU_RECTL@@PEAU_POINTL@@PEAVREGION@@@Z @ 0x1C029DD14 (-vApplyMoveData@METAREGION@@AEAAHPEAU_RECTL@@PEAU_POINTL@@PEAVREGION@@@Z.c)
 */

void __fastcall vSpUpdateDirtyRgn(
        struct DWMSPRITE *a1,
        struct SFMLOGICALSURFACE *a2,
        HDC a3,
        struct _RECTL *a4,
        unsigned int *a5,
        int a6)
{
  char *v7; // rsi
  bool v8; // zf
  __int64 v12; // rcx
  int v13; // r14d
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // r8
  LONG v20; // ecx
  __int64 v21; // rcx
  __int64 v22; // rbx
  int v23; // eax
  REGION *v24; // rcx
  int v25; // eax
  __int64 v26; // rcx
  struct REGION *v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // [rsp+38h] [rbp-89h] BYREF
  __int64 v30; // [rsp+40h] [rbp-81h]
  struct REGION *v31[2]; // [rsp+48h] [rbp-79h] BYREF
  __int64 v32; // [rsp+58h] [rbp-69h] BYREF
  __int64 v33; // [rsp+60h] [rbp-61h] BYREF
  int v34; // [rsp+68h] [rbp-59h]
  __int64 v35; // [rsp+70h] [rbp-51h] BYREF
  int v36; // [rsp+78h] [rbp-49h]
  int v37; // [rsp+80h] [rbp-41h]
  __int64 v38; // [rsp+88h] [rbp-39h] BYREF
  __int64 v39; // [rsp+90h] [rbp-31h] BYREF
  int v40; // [rsp+98h] [rbp-29h]
  struct _RECTL v41; // [rsp+A0h] [rbp-21h] BYREF
  struct _RECTL v42; // [rsp+B0h] [rbp-11h] BYREF

  v7 = (char *)a2 + 136;
  v8 = *((_QWORD *)a2 + 17) == 0LL;
  v37 = 0;
  if ( v8 )
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v42);
    v8 = v42.right == 1;
    *(_QWORD *)v7 = *(_QWORD *)&v42.left;
    if ( v8 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v42);
  }
  if ( !*((_QWORD *)a2 + 11) )
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v42);
    v12 = *(_QWORD *)a2;
    *((_QWORD *)a2 + 11) = *(_QWORD *)&v42.left;
    EtwTraceLifetimeAccum(v12, 1LL);
    v37 = 1;
    if ( v42.right == 1 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v42);
  }
  if ( !*((_QWORD *)a2 + 24) )
  {
    v31[0] = *(struct REGION **)v7;
    RGNOBJ::vSet((RGNOBJ *)v31);
    if ( *((_QWORD *)a2 + 11) )
    {
      v32 = *((_QWORD *)a2 + 11);
      RGNOBJ::vSet((RGNOBJ *)&v32);
      EtwTraceLifetimeAccum(*(_QWORD *)a2, 1LL);
    }
  }
  v38 = *(_QWORD *)v7;
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v33);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v33);
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v35);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v35);
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v39);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v39);
  if ( v38 && v33 && v35 && v39 )
  {
    v13 = 0;
    RGNOBJ::vSet((RGNOBJ *)&v33, a4);
    if ( (*((_DWORD *)a2 + 64) & 1) == 0 )
      goto LABEL_109;
    if ( !a3 )
      goto LABEL_109;
    LOBYTE(v14) = 1;
    v30 = 0LL;
    v15 = HmgShareLock(a3, v14);
    v29 = v15;
    v16 = v15;
    if ( !v15 )
      goto LABEL_109;
    if ( (*(_DWORD *)(v15 + 36) & 1) != 0 )
    {
      v17 = *(_QWORD *)(v15 + 1568);
      if ( !v17
        || (*(_DWORD *)(v15 + 40) & 1) == 0
        || (v8 = (unsigned int)DC::bDpiScaledSurface((DC *)v15) == 0, v18 = v17, v8) )
      {
        v18 = *(_QWORD *)(v16 + 1552);
      }
      if ( v18 )
      {
        if ( !v17 || (*(_DWORD *)(v16 + 40) & 1) == 0 || !(unsigned int)DC::bDpiScaledSurface((DC *)v16) )
          v19 = *(_QWORD *)(v16 + 1552);
      }
      else if ( !*(_QWORD *)(v16 + 1560)
             || (*(_DWORD *)(v16 + 40) & 1) == 0
             || !(unsigned int)DC::bDpiScaledSurface((DC *)v16) )
      {
        v19 = *(_QWORD *)(v16 + 1544);
      }
      v32 = v19;
      if ( v19 )
      {
        if ( RGNOBJ::bMerge((RGNOBJ *)&v35, (struct RGNOBJ *)&v32, (struct RGNOBJ *)&v33, BYTE1(gafjRgnOp)) )
        {
          RGNOBJ::vSwap((RGNOBJ *)&v35, (struct RGNOBJ *)&v33);
          v13 = 1;
        }
        else
        {
          RGNOBJ::vSet((RGNOBJ *)&v35);
        }
      }
    }
    XDCOBJ::RestoreAttributes((XDCOBJ *)&v29);
    DEC_SHARE_REF_CNT(v29);
    if ( !v13 )
    {
LABEL_109:
      if ( !a1 )
        goto LABEL_41;
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v29);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v29);
      v41.right = *((_DWORD *)a1 + 16) - *((_DWORD *)a1 + 14);
      v20 = *((_DWORD *)a1 + 17) - *((_DWORD *)a1 + 15);
      *(_QWORD *)&v41.left = 0LL;
      v41.bottom = v20;
      if ( v29 )
      {
        RGNOBJ::vSet((RGNOBJ *)&v29, &v41);
        if ( RGNOBJ::bMerge((RGNOBJ *)&v35, (struct RGNOBJ *)&v33, (struct RGNOBJ *)&v29, BYTE1(gafjRgnOp)) )
        {
          RGNOBJ::vSwap((RGNOBJ *)&v35, (struct RGNOBJ *)&v33);
          v13 = 1;
        }
      }
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v29);
      if ( !v13 )
LABEL_41:
        RGNOBJ::vSet((RGNOBJ *)&v33);
    }
    if ( a1 && v33 && *((_QWORD *)a1 + 11) )
    {
      v31[0] = *((struct REGION **)a1 + 11);
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v41);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v41);
      if ( v31[0] && *(_QWORD *)&v41.left )
      {
        if ( RGNOBJ::bMerge((RGNOBJ *)&v41, (struct RGNOBJ *)v31, (struct RGNOBJ *)&v33, BYTE4(gafjRgnOp))
          && !RGNOBJ::bEqual((RGNOBJ *)&v41, (struct RGNOBJ *)v31) )
        {
          RGNOBJ::vSwap((RGNOBJ *)&v41, (struct RGNOBJ *)v31);
          *((struct REGION **)a1 + 11) = v31[0];
          *((_DWORD *)a1 + 24) = -1;
        }
        if ( *((_QWORD *)a1 + 13) )
        {
          v32 = *((_QWORD *)a1 + 13);
          if ( RGNOBJ::bMerge((RGNOBJ *)&v41, (struct RGNOBJ *)v31, (struct RGNOBJ *)&v32, BYTE2(gafjRgnOp)) )
          {
            RGNOBJ::vSwap((RGNOBJ *)&v41, (struct RGNOBJ *)v31);
            *((struct REGION **)a1 + 11) = v31[0];
            *((_DWORD *)a1 + 24) = -1;
          }
          REGION::vDeleteREGION(*((REGION **)a1 + 13));
          *((_QWORD *)a1 + 13) = 0LL;
        }
      }
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v41);
    }
    if ( !RGNOBJ::bMerge((RGNOBJ *)&v35, (struct RGNOBJ *)&v38, (struct RGNOBJ *)&v33, BYTE2(gafjRgnOp)) )
      goto LABEL_86;
    RGNOBJ::vSwap((RGNOBJ *)&v35, (struct RGNOBJ *)&v38);
    v21 = *(_QWORD *)a2;
    if ( a6 )
    {
      EtwTranslationUpdateOffset(v21, *((unsigned int *)a2 + 40), HIDWORD(*((_QWORD *)a2 + 20)));
      EtwTranslationUpdate(
        *(_QWORD *)a2,
        (unsigned int)a4->left,
        (unsigned int)a4->top,
        (unsigned int)a4->right,
        a4->bottom);
      v22 = v38;
      v23 = METAREGION::vApplyMoveData(
              (METAREGION *)v7,
              (struct _RECTL *)((char *)a2 + 120),
              (struct _POINTL *)a2 + 14,
              *((struct REGION **)a2 + 13));
      *(_QWORD *)v7 = v22;
      if ( v23 )
        METAREGION::vCalculateNoMoveDirty((METAREGION *)v7);
      goto LABEL_84;
    }
    EtwDirtyRectUpdate(v21, (unsigned int)a4->left, (unsigned int)a4->top, (unsigned int)a4->right, a4->bottom);
    v8 = *((_DWORD *)v7 + 10) == 0;
    *(_QWORD *)v7 = v38;
    if ( v8 )
    {
LABEL_84:
      v25 = *((_DWORD *)a2 + 64);
      if ( (v25 & 2) == 0 )
      {
        *((_DWORD *)a2 + 64) = v25 | 2;
        *a5 |= 1u;
      }
LABEL_86:
      if ( *((_QWORD *)a2 + 11) )
      {
        v31[0] = *((struct REGION **)a2 + 11);
        if ( RGNOBJ::bMerge((RGNOBJ *)&v39, (struct RGNOBJ *)v31, (struct RGNOBJ *)&v33, BYTE2(gafjRgnOp)) )
        {
          RGNOBJ::vSwap((RGNOBJ *)&v39, (struct RGNOBJ *)v31);
          v26 = *(_QWORD *)a2;
          *((struct REGION **)a2 + 11) = v31[0];
          EtwTraceLifetimeAccum(v26, 1LL);
        }
        if ( !v37 && *((_DWORD *)v31[0] + 21) != 1 && *((_DWORD *)v31[0] + 20) <= 0xA0u )
        {
          RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v29);
          if ( v29 )
          {
            v27 = (struct REGION *)*((_QWORD *)a2 + 11);
            v42 = *(struct _RECTL *)((char *)v31[0] + 88);
            if ( v27 && v27 != prgnDefault )
              FreeObject(v27, 4LL);
            RGNOBJ::vSet((RGNOBJ *)&v29, &v42);
            v28 = *(_QWORD *)a2;
            *((_QWORD *)a2 + 11) = v29;
            EtwTraceLifetimeAccum(v28, 1LL);
          }
          if ( (_DWORD)v30 == 1 )
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v29);
        }
      }
      goto LABEL_99;
    }
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v31);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v31);
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v41);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v41);
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v29);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v29);
    v32 = *((_QWORD *)v7 + 4);
    if ( RGNOBJ::bCopy((RGNOBJ *)&v41, (struct RGNOBJ *)&v32)
      && RGNOBJ::bOffset((RGNOBJ *)&v41, (struct _POINTL *)v7 + 3) )
    {
      RGNOBJ::vSet((RGNOBJ *)v31, a4);
      if ( !v31[0]
        || !*(_QWORD *)&v41.left
        || !v29
        || !RGNOBJ::iCombine((RGNOBJ *)&v29, (struct RGNOBJ *)v31, (struct RGNOBJ *)&v41, 1)
        || (v42 = *(struct _RECTL *)(v29 + 88), (unsigned int)ERECTL::bEmpty((ERECTL *)&v42))
        || (unsigned int)METAREGION::bTrimMoveWithRegion((METAREGION *)v7, v31[0], 1) )
      {
LABEL_70:
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v29);
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v41);
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v31);
        if ( *((_DWORD *)v7 + 10) )
        {
          v31[0] = *(struct REGION **)v7;
          RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v41);
          RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v29);
          RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v29);
          v24 = (REGION *)*((_QWORD *)v7 + 1);
          v32 = *((_QWORD *)v7 + 4);
          if ( v24 )
          {
            REGION::vDeleteREGION(v24);
            *((_QWORD *)v7 + 1) = 0LL;
          }
          if ( RGNOBJ::bCopy((RGNOBJ *)&v29, (struct RGNOBJ *)&v32)
            && RGNOBJ::bOffset((RGNOBJ *)&v29, (struct _POINTL *)v7 + 3) )
          {
            RGNOBJ::vSet((RGNOBJ *)&v41);
            if ( v31[0]
              && v29
              && *(_QWORD *)&v41.left
              && RGNOBJ::iCombine((RGNOBJ *)&v41, (struct RGNOBJ *)v31, (struct RGNOBJ *)&v29, 4) )
            {
              *((_QWORD *)v7 + 1) = *(_QWORD *)&v41.left;
            }
            else
            {
              METAREGION::vClearMoveData((METAREGION *)v7, 1);
              RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v41);
            }
          }
          else
          {
            METAREGION::vClearMoveData((METAREGION *)v7, 1);
          }
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v29);
          if ( v41.right == 1 )
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v41);
        }
        goto LABEL_84;
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
    goto LABEL_70;
  }
LABEL_99:
  if ( (*((_DWORD *)a2 + 64) & 0x20) != 0 )
  {
    *a5 |= 2u;
    *((_DWORD *)a2 + 64) &= ~0x20u;
  }
  RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v39);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v39);
  if ( v40 == 1 )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v39);
  RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v35);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v35);
  if ( v36 == 1 )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v35);
  RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v33);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v33);
  if ( v34 == 1 )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v33);
}
