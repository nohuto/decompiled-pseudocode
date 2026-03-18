/*
 * XREFs of ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0065F44
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
 *     ?vSpTlSpriteStateDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C0065628 (-vSpTlSpriteStateDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     IsThreadCrossSessionAttached @ 0x1C0143CAC (IsThreadCrossSessionAttached.c)
 */

void __fastcall SPRITEDDIACCESS::~SPRITEDDIACCESS(__int64 **this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v5; // rdi
  struct _KTHREAD *CurrentThread; // rbx
  __int64 *v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  struct _KTHREAD *v13; // rbp
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 *ThreadWin32Thread; // rax
  __int64 v19; // rcx
  __int64 v20; // rbx
  struct _KTHREAD *v21; // rbp
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rbp
  struct _KTHREAD *v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 *v33; // rax
  struct _KTHREAD *v34; // r14
  __int64 v35; // rbx
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 *v39; // rax
  __int64 v40; // rax
  __int64 v41; // rbp
  __int64 v42; // rcx
  struct _KTHREAD *v43; // rbx
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 *v48; // rax
  struct _KTHREAD *v49; // r14
  __int64 v50; // rbx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 *v53; // rax
  struct _KTHREAD *v54; // rdi
  __int64 v55; // rbx
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 *v60; // rax
  int v61; // ebx
  int v62; // ebx
  _OWORD *v63; // rcx
  __int128 v64; // [rsp+20h] [rbp-C8h]
  __int128 v65; // [rsp+30h] [rbp-B8h]
  __int128 v66; // [rsp+40h] [rbp-A8h]
  __int128 v67; // [rsp+50h] [rbp-98h]
  __int128 v68; // [rsp+60h] [rbp-88h]
  __int128 v69; // [rsp+70h] [rbp-78h]
  __int128 v70; // [rsp+80h] [rbp-68h]
  __int128 v71; // [rsp+90h] [rbp-58h]
  __int128 v72; // [rsp+A0h] [rbp-48h]
  __int128 v73; // [rsp+B0h] [rbp-38h]
  __int64 *v74; // [rsp+C0h] [rbp-28h]
  __int64 v75; // [rsp+F0h] [rbp+8h] BYREF

  if ( !*((_DWORD *)this + 2) )
  {
    v5 = *this;
    v75 = **this;
    CurrentThread = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(this, a2, a3, a4)
      && (v7 = (__int64 *)PsGetThreadWin32Thread(CurrentThread)) != 0LL
      && (v8 = *v7) != 0
      && PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v75)
      && (*(_DWORD *)(v8 + 104) || *(_DWORD *)(v8 + 108)) )
    {
      v13 = KeGetCurrentThread();
      v14 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached(v10, v9, v11, v12) )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(v13);
        if ( ThreadWin32Thread )
          v14 = *ThreadWin32Thread;
      }
      v19 = *(_QWORD *)(v14 + 280);
      v20 = 0LL;
      *(_DWORD *)(v19 + 12) = *((_DWORD *)v5 + 27);
      v21 = KeGetCurrentThread();
      if ( !(unsigned int)IsThreadCrossSessionAttached(v19, v15, v16, v17) )
      {
        v25 = (__int64 *)PsGetThreadWin32Thread(v21);
        if ( v25 )
          v20 = *v25;
      }
      v26 = *(_QWORD *)(v20 + 280);
      v27 = 0LL;
      *(_DWORD *)(v26 + 16) = *((_DWORD *)v5 + 28);
      v28 = KeGetCurrentThread();
      if ( !(unsigned int)IsThreadCrossSessionAttached(v26, v22, v23, v24) )
      {
        v33 = (__int64 *)PsGetThreadWin32Thread(v28);
        if ( v33 )
          v27 = *v33;
      }
      v34 = KeGetCurrentThread();
      v35 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached(v30, v29, v31, v32) )
      {
        v39 = (__int64 *)PsGetThreadWin32Thread(v34);
        if ( v39 )
          v35 = *v39;
      }
      v40 = *(_QWORD *)(v27 + 280);
      v41 = 0LL;
      v42 = *(_QWORD *)(v35 + 280);
      *(_DWORD *)(v42 + 20) = *(_DWORD *)(v40 + 12);
      v43 = KeGetCurrentThread();
      if ( !(unsigned int)IsThreadCrossSessionAttached(v42, v36, v37, v38) )
      {
        v48 = (__int64 *)PsGetThreadWin32Thread(v43);
        if ( v48 )
          v41 = *v48;
      }
      v49 = KeGetCurrentThread();
      v50 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached(v45, v44, v46, v47) )
      {
        v53 = (__int64 *)PsGetThreadWin32Thread(v49);
        if ( v53 )
          v50 = *v53;
      }
      *(_DWORD *)(*(_QWORD *)(v50 + 280) + 24LL) = *(_DWORD *)(*(_QWORD *)(v41 + 280) + 16LL);
      vSpTlSpriteStateDirectDriverAccess((struct _SPRITESTATE *)v5, 0LL, v51, v52);
      v54 = KeGetCurrentThread();
      v55 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached(v57, v56, v58, v59) )
      {
        v60 = (__int64 *)PsGetThreadWin32Thread(v54);
        if ( v60 )
          v55 = *v60;
      }
      **(_DWORD **)(v55 + 280) = 0;
    }
    else
    {
      PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v75);
      v61 = *((_DWORD *)v5 + 27);
      *(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v5[5]) + 112) = v61;
      v62 = *((_DWORD *)v5 + 28);
      *(_WORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v5[5]) + 100) = v62;
      *((_DWORD *)v5 + 24) = 0;
    }
  }
  if ( *((_DWORD *)this + 3) == 1 )
  {
    v64 = *((_OWORD *)this + 1);
    v65 = *((_OWORD *)this + 2);
    v66 = *((_OWORD *)this + 3);
    v67 = *((_OWORD *)this + 4);
    v68 = *((_OWORD *)this + 5);
    v69 = *((_OWORD *)this + 6);
    v70 = *((_OWORD *)this + 7);
    v71 = *((_OWORD *)this + 8);
    v72 = *((_OWORD *)this + 9);
    v73 = *((_OWORD *)this + 10);
    v74 = this[22];
    v63 = *(_OWORD **)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280);
    *v63 = v64;
    v63[1] = v65;
    v63[2] = v66;
    v63[3] = v67;
    v63[4] = v68;
    v63[5] = v69;
    v63[6] = v70;
    v63 += 8;
    *(v63 - 1) = v71;
    *v63 = v72;
    v63[1] = v73;
    *((_QWORD *)v63 + 4) = v74;
  }
}
