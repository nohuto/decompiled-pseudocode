/*
 * XREFs of ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x1C0261DCC
 * Callers:
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C000A1C8 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPEAU_RECTL@@@Z @ 0x1C000A7F0 (-bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPE.c)
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C002A1E0 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ?vSpRedrawSpriteOverlapPresent@@YAXPEAUHDEV__@@@Z @ 0x1C0065E58 (-vSpRedrawSpriteOverlapPresent@@YAXPEAUHDEV__@@@Z.c)
 *     ?bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C025B780 (-bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@.c)
 *     ?vSpDeviceControlSprites@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@K@Z @ 0x1C0260A28 (-vSpDeviceControlSprites@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@K@Z.c)
 *     vSpUnTearDownSprites @ 0x1C0265E40 (vSpUnTearDownSprites.c)
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0006F2C (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0006F60 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C00EC71C (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     OffCopyBits @ 0x1C00EC748 (OffCopyBits.c)
 *     ??1ENUMAREAS@@QEAA@XZ @ 0x1C00EC9E8 (--1ENUMAREAS@@QEAA@XZ.c)
 *     ?bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C00ECA28 (-bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ??0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z @ 0x1C00ECAB4 (--0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z.c)
 *     ?vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z @ 0x1C0114930 (-vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ?bAdvanceToTopMostOpaqueLayer@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z @ 0x1C025B190 (-bAdvanceToTopMostOpaqueLayer@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z.c)
 *     ?bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z @ 0x1C025B2A8 (-bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z.c)
 *     ?psoSpGetComposite@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@PEAU_RECTL@@PEAK@Z @ 0x1C025E544 (-psoSpGetComposite@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@PEAU_RECTL@@PEAK@Z.c)
 *     ?vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C025F3C8 (-vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vSpWriteToScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0264E88 (-vSpWriteToScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 */

void __fastcall vSpRedrawArea(struct _SPRITESTATE *a1, struct _RECTL *a2, int a3)
{
  int v5; // r12d
  struct _SURFOBJ *Composite; // rsi
  __int64 v7; // rdi
  struct SPRITE *v8; // r14
  __int64 v9; // rbx
  __int64 v10; // rbx
  struct _SURFOBJ *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  struct _SURFOBJ *v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  BOOL (__stdcall *v40)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rcx
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rdx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rdx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rdx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rdx
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // rdx
  __int64 v63; // r8
  __int64 v64; // r9
  struct SPRITE *v65; // [rsp+50h] [rbp-79h] BYREF
  ULONG StartingIndex; // [rsp+58h] [rbp-71h] BYREF
  struct _POINTL v67; // [rsp+60h] [rbp-69h] BYREF
  _BYTE v68[8]; // [rsp+68h] [rbp-61h] BYREF
  _BYTE v69[96]; // [rsp+70h] [rbp-59h] BYREF
  struct _RECTL v70; // [rsp+D0h] [rbp+7h] BYREF

  if ( (*(_DWORD *)(*(_QWORD *)a1 + 32LL) & 0x400) == 0 )
  {
    ENUMAREAS::ENUMAREAS((ENUMAREAS *)v69, a1, a2, 0, 0LL);
    while ( 1 )
    {
      v5 = ENUMAREAS::bEnum((ENUMAREAS *)v69, &v65, &v70);
      if ( v65 )
      {
        if ( !(unsigned int)ENUMAREAS::bAdvanceToTopMostOpaqueLayer((ENUMAREAS *)v69, &v65) || a3 )
          break;
      }
LABEL_58:
      if ( !v5 )
      {
LABEL_59:
        ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v69);
        return;
      }
    }
    Composite = psoSpGetComposite(a1, &v70, &StartingIndex);
    if ( !Composite )
      goto LABEL_59;
    v7 = 0LL;
    v8 = v65;
    v67.x = -v70.left;
    v9 = *((_QWORD *)v65 + 20);
    v67.y = -v70.top;
    if ( v9
      && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v9) + 112) & 0x4000) != 0
       || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v9) + 112) < 0)
      && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v9) + 112) & 0x200) == 0 )
    {
      v7 = SURFOBJ_TO_SURFACE_NOT_NULL(v9);
      GreLockDisplayDevice(*(_QWORD *)(v7 + 48));
    }
    v10 = 0LL;
    if ( ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(Composite) + 112) & 0x4000) != 0
       || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(Composite) + 112) < 0)
      && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(Composite) + 112) & 0x200) == 0 )
    {
      v10 = SURFOBJ_TO_SURFACE_NOT_NULL(Composite);
      GreLockDisplayDevice(*(_QWORD *)(v10 + 48));
    }
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(Composite) + 112) & 0x400) == 0 )
    {
      v11 = (struct _SURFOBJ *)*((_QWORD *)v8 + 20);
      if ( v11->hdev )
      {
        if ( v11->iType != 1
          || !bAllowShareAccess(v11)
          || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v12, v13, v14)
          || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v15, v16, v17) + 280)
          || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v18, v19, v20) + 104)
          && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v21, v22, v23) + 108)
          || (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v21, v22, v23) + 280) + 20LL) & 0x400) == 0 )
        {
          v27 = (struct _SURFOBJ *)*((_QWORD *)v8 + 20);
          if ( (v27->iType != 1
             || !bAllowShareAccess(v27)
             || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v28, v29, v30)
             || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v31, v32, v33) + 280)
             || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v34, v35, v36) + 104)
             && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v37, v38, v39) + 108))
            && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)v8 + 20)) + 112) & 0x400) != 0 )
          {
            v40 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)(*((_QWORD *)v8 + 20) + 24LL) + 1328LL);
LABEL_50:
            OffCopyBits(
              (__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *))v40,
              (LONG *)&v67,
              (__int64)Composite,
              (int *)v65 + 42,
              *((_QWORD *)v8 + 20),
              0LL,
              0LL,
              &v70,
              &v70);
            if ( v10 )
              GreUnlockDisplayDevice(*(_QWORD *)(v10 + 48));
            if ( v7 )
              GreUnlockDisplayDevice(*(_QWORD *)(v7 + 48));
            do
              vSpComposite(v65, &v67, Composite, &v70);
            while ( (unsigned int)ENUMAREAS::bEnumLayers((ENUMAREAS *)v69, &v65) );
            vSpWriteToScreen(a1, &v67, Composite, &v70);
            if ( StartingIndex == -1 )
            {
              vSpDeleteSurface(Composite);
            }
            else
            {
              CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)v68, (struct _SPRITESTATE *)((char *)a1 + 696));
              RtlClearBits((PRTL_BITMAP)a1 + 42, StartingIndex, 1u);
              PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v68);
            }
            goto LABEL_58;
          }
LABEL_49:
          v40 = EngCopyBits;
          goto LABEL_50;
        }
LABEL_40:
        v40 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v24, v25, v26) + 280) + 80LL);
        goto LABEL_50;
      }
    }
    if ( Composite->iType == 1 )
    {
      if ( bAllowShareAccess(Composite)
        && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v41, v42, v43)
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v44, v45, v46) + 280)
        && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v47, v48, v49) + 104)
         || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v50, v51, v52) + 108))
        && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v50, v51, v52) + 280) + 20LL) & 0x400) != 0 )
      {
        goto LABEL_40;
      }
      if ( Composite->iType == 1
        && bAllowShareAccess(Composite)
        && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v53, v54, v55)
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v56, v57, v58) + 280)
        && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v59, v60, v61) + 104)
         || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v62, v63, v64) + 108)) )
      {
        goto LABEL_49;
      }
    }
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(Composite) + 112) & 0x400) != 0 )
    {
      v40 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))*((_QWORD *)Composite->hdev
                                                                                                + 166);
      goto LABEL_50;
    }
    goto LABEL_49;
  }
}
