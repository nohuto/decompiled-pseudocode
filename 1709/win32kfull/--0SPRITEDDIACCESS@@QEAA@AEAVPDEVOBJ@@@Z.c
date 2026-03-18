/*
 * XREFs of ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0066260
 * Callers:
 *     ?vSpDeleteSprite@@YAXPEAVSPRITE@@@Z @ 0x1C000A004 (-vSpDeleteSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z @ 0x1C000A3E8 (-pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z.c)
 *     ?pSpCreateSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAU_RECTL@@PEAUHWND__@@PEAU_POINTL@@@Z @ 0x1C000A464 (-pSpCreateSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAU_RECTL@@PEAUHWND__@@PEAU_POINTL@@@Z.c)
 *     ?bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPEAU_RECTL@@@Z @ 0x1C000A7F0 (-bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPE.c)
 *     ?vSpZorderSprite@@YAXPEAUHDEV__@@PEAVSPRITE@@1@Z @ 0x1C000AA44 (-vSpZorderSprite@@YAXPEAUHDEV__@@PEAVSPRITE@@1@Z.c)
 *     ?vSpRedrawSpriteOverlapPresent@@YAXPEAUHDEV__@@@Z @ 0x1C0065E58 (-vSpRedrawSpriteOverlapPresent@@YAXPEAUHDEV__@@@Z.c)
 *     ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x1C0072798 (-vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z.c)
 *     ?bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C00EC010 (-bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEA.c)
 *     ?vSpHideSprites@@YAXPEAUHDEV__@@H@Z @ 0x1C011AAA4 (-vSpHideSprites@@YAXPEAUHDEV__@@H@Z.c)
 *     ?GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z @ 0x1C025921C (-GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z.c)
 *     ?GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C0259810 (-GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C025B780 (-bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@.c)
 *     ?bSpPtInSprite@@YAHPEAVSPRITE@@HH@Z @ 0x1C025C9A8 (-bSpPtInSprite@@YAHPEAVSPRITE@@HH@Z.c)
 *     ?bSpTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z @ 0x1C025CB40 (-bSpTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z.c)
 *     ?pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z @ 0x1C025DB34 (-pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z.c)
 *     ?pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z @ 0x1C025E000 (-pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z.c)
 *     ?vSpDeviceControlSprites@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@K@Z @ 0x1C0260A28 (-vSpDeviceControlSprites@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@K@Z.c)
 *     ?vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z @ 0x1C0263B84 (-vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z.c)
 *     vSpUnTearDownSprites @ 0x1C0265E40 (vSpUnTearDownSprites.c)
 * Callees:
 *     ?bCurrentTlDriverCall@@YAHAEAVPDEVOBJ@@@Z @ 0x1C0065558 (-bCurrentTlDriverCall@@YAHAEAVPDEVOBJ@@@Z.c)
 *     ?vSpTlSpriteStateDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C0065628 (-vSpTlSpriteStateDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     IsThreadCrossSessionAttached @ 0x1C0143CAC (IsThreadCrossSessionAttached.c)
 */

SPRITEDDIACCESS *__fastcall SPRITEDDIACCESS::SPRITEDDIACCESS(
        SPRITEDDIACCESS *this,
        struct PDEVOBJ *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rbx
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 *ThreadWin32Thread; // rax
  __int64 v13; // rcx
  struct _KTHREAD *v14; // rbp
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 *v19; // rax
  int v20; // eax
  char *v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rsi
  struct _KTHREAD *v25; // rbp
  __int64 *v26; // rax
  __int64 v27; // rbp
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  struct _KTHREAD *v32; // r14
  __int64 v33; // rbp
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 *v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rbp
  struct _KTHREAD *v40; // r14
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 *v44; // rax
  __int64 v45; // rcx
  __int64 v46; // r14
  struct _KTHREAD *v47; // rbp
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 *v52; // rax
  struct _KTHREAD *v53; // r15
  __int64 v54; // rbp
  __int64 v55; // rdx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 *v58; // rax
  __int64 v59; // rax
  __int64 v60; // r14
  __int64 v61; // rcx
  struct _KTHREAD *v62; // rbp
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 *v67; // rax
  struct _KTHREAD *v68; // r15
  __int64 v69; // rbp
  __int64 v70; // r8
  __int64 v71; // r9
  __int64 *v72; // rax
  struct _KTHREAD *v73; // rsi
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // r9
  __int64 *v78; // rax
  int v79; // ebx
  int v80; // ebx
  __int64 v82; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0LL;
  *(_QWORD *)this = *(_QWORD *)a2 + 72LL;
  CurrentThread = KeGetCurrentThread();
  v8 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(this, a2, a3, a4) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v8 = *ThreadWin32Thread;
  }
  *((_DWORD *)this + 3) = 0;
  if ( v8 && PDEVOBJ::bAllowShareAccess(a2) && (*(_DWORD *)(v8 + 104) || *(_DWORD *)(v8 + 108)) )
  {
    v14 = KeGetCurrentThread();
    v15 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached(v13, v9, v10, v11) )
    {
      v19 = (__int64 *)PsGetThreadWin32Thread(v14);
      if ( v19 )
        v15 = *v19;
    }
    if ( *(_QWORD *)(*(_QWORD *)(v15 + 280) + 32LL) == *(_QWORD *)this )
      v20 = **(_DWORD **)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280);
    else
      v20 = 0;
    *((_DWORD *)this + 2) = v20;
    *((_DWORD *)this + 3) = bCurrentTlDriverCall(a2, v16, v17, v18);
  }
  else
  {
    v21 = (char *)*(unsigned int *)(*(_QWORD *)this + 96LL);
    *((_DWORD *)this + 2) = (_DWORD)v21;
  }
  if ( *((_DWORD *)this + 3) == 1 )
  {
    v22 = W32GetThreadWin32Thread(KeGetCurrentThread());
    v9 = 128LL;
    v23 = *(_QWORD *)(v22 + 280);
    *((_OWORD *)this + 1) = *(_OWORD *)v23;
    *((_OWORD *)this + 2) = *(_OWORD *)(v23 + 16);
    *((_OWORD *)this + 3) = *(_OWORD *)(v23 + 32);
    *((_OWORD *)this + 4) = *(_OWORD *)(v23 + 48);
    *((_OWORD *)this + 5) = *(_OWORD *)(v23 + 64);
    *((_OWORD *)this + 6) = *(_OWORD *)(v23 + 80);
    *((_OWORD *)this + 7) = *(_OWORD *)(v23 + 96);
    v21 = (char *)this + 144;
    *((_OWORD *)this + 8) = *(_OWORD *)(v23 + 112);
    *((_OWORD *)this + 9) = *(_OWORD *)(v23 + 128);
    *((_OWORD *)this + 10) = *(_OWORD *)(v23 + 144);
    *((_QWORD *)this + 22) = *(_QWORD *)(v23 + 160);
  }
  if ( !*((_DWORD *)this + 2) )
  {
    v24 = *(_QWORD *)this;
    v82 = **(_QWORD **)this;
    v25 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(v21, v9, v10, v11)
      && (v26 = (__int64 *)PsGetThreadWin32Thread(v25)) != 0LL
      && (v27 = *v26) != 0
      && PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v82)
      && (*(_DWORD *)(v27 + 104) || *(_DWORD *)(v27 + 108)) )
    {
      v32 = KeGetCurrentThread();
      v33 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached(v29, v28, v30, v31) )
      {
        v37 = (__int64 *)PsGetThreadWin32Thread(v32);
        if ( v37 )
          v33 = *v37;
      }
      v38 = *(_QWORD *)(v33 + 280);
      v39 = 0LL;
      *(_DWORD *)(v38 + 4) = *(_DWORD *)(v24 + 100);
      v40 = KeGetCurrentThread();
      if ( !(unsigned int)IsThreadCrossSessionAttached(v38, v34, v35, v36) )
      {
        v44 = (__int64 *)PsGetThreadWin32Thread(v40);
        if ( v44 )
          v39 = *v44;
      }
      v45 = *(_QWORD *)(v39 + 280);
      v46 = 0LL;
      *(_DWORD *)(v45 + 8) = *(_DWORD *)(v24 + 104);
      v47 = KeGetCurrentThread();
      if ( !(unsigned int)IsThreadCrossSessionAttached(v45, v41, v42, v43) )
      {
        v52 = (__int64 *)PsGetThreadWin32Thread(v47);
        if ( v52 )
          v46 = *v52;
      }
      v53 = KeGetCurrentThread();
      v54 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached(v49, v48, v50, v51) )
      {
        v58 = (__int64 *)PsGetThreadWin32Thread(v53);
        if ( v58 )
          v54 = *v58;
      }
      v59 = *(_QWORD *)(v46 + 280);
      v60 = 0LL;
      v61 = *(_QWORD *)(v54 + 280);
      *(_DWORD *)(v61 + 20) = *(_DWORD *)(v59 + 4);
      v62 = KeGetCurrentThread();
      if ( !(unsigned int)IsThreadCrossSessionAttached(v61, v55, v56, v57) )
      {
        v67 = (__int64 *)PsGetThreadWin32Thread(v62);
        if ( v67 )
          v60 = *v67;
      }
      v68 = KeGetCurrentThread();
      v69 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached(v64, v63, v65, v66) )
      {
        v72 = (__int64 *)PsGetThreadWin32Thread(v68);
        if ( v72 )
          v69 = *v72;
      }
      *(_DWORD *)(*(_QWORD *)(v69 + 280) + 24LL) = *(_DWORD *)(*(_QWORD *)(v60 + 280) + 8LL);
      vSpTlSpriteStateDirectDriverAccess((struct _SPRITESTATE *)v24, 1LL, v70, v71);
      v73 = KeGetCurrentThread();
      if ( !(unsigned int)IsThreadCrossSessionAttached(v75, v74, v76, v77) )
      {
        v78 = (__int64 *)PsGetThreadWin32Thread(v73);
        if ( v78 )
          v4 = *v78;
      }
      **(_DWORD **)(v4 + 280) = 1;
    }
    else
    {
      PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v82);
      v79 = *(_DWORD *)(v24 + 100);
      *(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*(_QWORD *)(v24 + 40)) + 112) = v79;
      v80 = *(_DWORD *)(v24 + 104);
      *(_WORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*(_QWORD *)(v24 + 40)) + 100) = v80;
      *(_DWORD *)(v24 + 96) = 1;
    }
  }
  return this;
}
