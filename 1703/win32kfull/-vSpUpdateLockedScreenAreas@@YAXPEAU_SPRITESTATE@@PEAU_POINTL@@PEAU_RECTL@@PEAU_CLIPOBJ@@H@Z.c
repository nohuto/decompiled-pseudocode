/*
 * XREFs of ?vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z @ 0x1C02647DC
 * Callers:
 *     ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x1C006CF98 (-vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z.c)
 *     ?bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C00A55D0 (-bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEA.c)
 *     ?vSpRemoveAllSpriteOverlapPresents@@YAXPEAUHDEV__@@@Z @ 0x1C00A7D70 (-vSpRemoveAllSpriteOverlapPresents@@YAXPEAUHDEV__@@@Z.c)
 *     ?bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C025A680 (-bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@.c)
 *     ?vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C0263810 (-vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0024928 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0024960 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C0081778 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C009C064 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C00A5CDC (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     OffCopyBits @ 0x1C00A5D08 (OffCopyBits.c)
 *     ??1ENUMAREAS@@QEAA@XZ @ 0x1C00A7510 (--1ENUMAREAS@@QEAA@XZ.c)
 *     ?bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C00A758C (-bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ??0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z @ 0x1C00A76E0 (--0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z @ 0x1C025A168 (-bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z.c)
 */

void __fastcall vSpUpdateLockedScreenAreas(
        struct _SPRITESTATE *a1,
        struct _POINTL *a2,
        struct _RECTL *a3,
        struct _CLIPOBJ *a4,
        int a5)
{
  struct _CLIPOBJ *v6; // r13
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  struct REGION *v11; // r12
  struct _RECTL *v12; // rdi
  int v13; // ebx
  struct RGNOBJ *v14; // r10
  __int64 v15; // rdi
  __int64 v16; // rbx
  struct SPRITE *v17; // r14
  __int64 v18; // rdi
  __int64 v19; // rsi
  struct _SURFOBJ *v20; // rcx
  struct _SURFOBJ *v21; // rcx
  __int64 v22; // rax
  struct _SURFOBJ *v23; // rcx
  BOOL (__stdcall *v24)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rcx
  struct _SURFOBJ *v25; // rcx
  __int64 v26; // rcx
  struct SPRITE *v27; // r14
  __int64 v28; // rdi
  __int64 v29; // rbx
  __int64 v30; // rsi
  __int64 v31; // rbx
  struct _SURFOBJ *v32; // rcx
  struct _SURFOBJ *v33; // rcx
  __int64 v34; // rax
  struct _SURFOBJ *v35; // rcx
  BOOL (__stdcall *v36)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rcx
  struct _SURFOBJ *v37; // rcx
  struct SPRITE *v38; // [rsp+50h] [rbp-B0h] BYREF
  int v39; // [rsp+58h] [rbp-A8h]
  _QWORD v40[2]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v41[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v42; // [rsp+80h] [rbp-80h] BYREF
  __int64 v43; // [rsp+88h] [rbp-78h] BYREF
  struct _CLIPOBJ *v44; // [rsp+90h] [rbp-70h]
  _BYTE v45[96]; // [rsp+A0h] [rbp-60h] BYREF
  struct _SPRITESTATE *v46[24]; // [rsp+100h] [rbp+0h] BYREF
  struct _RECTL v47; // [rsp+1C0h] [rbp+C0h] BYREF
  struct _RECTL v48; // [rsp+1D0h] [rbp+D0h] BYREF
  struct _CLIPOBJ v49; // [rsp+1E0h] [rbp+E0h] BYREF
  __int64 v50; // [rsp+218h] [rbp+118h]
  __int64 v51; // [rsp+230h] [rbp+130h]
  int v52; // [rsp+238h] [rbp+138h]
  int v53; // [rsp+260h] [rbp+160h]
  __int64 v54; // [rsp+270h] [rbp+170h]

  v44 = a4;
  v51 = 0LL;
  v52 = 0;
  v6 = a4;
  v54 = 0LL;
  v50 = 0LL;
  v53 = 1;
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v40);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v40);
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v41);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v41);
  v42 = *(_QWORD *)a1;
  SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v46, (struct PDEVOBJ *)&v42);
  v11 = 0LL;
  if ( v40[0] )
  {
    if ( v41[0] )
    {
      v12 = (struct _RECTL *)((char *)a1 + 48);
      if ( bIntersect(a3, (const struct _RECTL *)a1 + 3, &v48) )
      {
        ENUMAREAS::ENUMAREAS((ENUMAREAS *)v45, a1, &v48, 0, 0LL);
        do
        {
          v13 = ENUMAREAS::bEnum((ENUMAREAS *)v45, &v38, &v47);
          v39 = v13;
          if ( v38 )
          {
            if ( !v11 )
            {
              if ( !v6
                || (v14 = (struct RGNOBJ *)((unsigned __int64)&v6[2].rclBounds.top & -(__int64)(v6 != 0LL)),
                    !v6->iDComplexity) )
              {
                RGNOBJ::vSet((RGNOBJ *)v41, v12);
                v14 = (struct RGNOBJ *)v41;
              }
              v43 = *((_QWORD *)a1 + 130);
              if ( !RGNOBJ::bMerge((RGNOBJ *)v40, v14, (struct RGNOBJ *)&v43, BYTE4(gafjRgnOp)) )
                RGNOBJ::vSet((RGNOBJ *)v40);
              v11 = (struct REGION *)v40[0];
            }
            XCLIPOBJ::vSetup((XCLIPOBJ *)&v49, v11, (struct ERECTL *)&v47, 0);
            if ( !ERECTL::bEmpty((ERECTL *)&v49.rclBounds) )
            {
              while ( 1 )
              {
                if ( !a5 )
                {
                  v27 = v38;
                  v28 = 0LL;
                  v29 = *((_QWORD *)v38 + 20);
                  if ( v29
                    && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)v38 + 20)) + 112) & 0x4000) != 0
                     || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v29) + 112) < 0)
                    && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v29) + 112) & 0x200) == 0 )
                  {
                    v28 = SURFOBJ_TO_SURFACE_NOT_NULL(v29);
                    GreLockDisplayDevice(*(_QWORD *)(v28 + 48));
                  }
                  v30 = *((_QWORD *)a1 + 5);
                  v31 = 0LL;
                  if ( v30
                    && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)a1 + 5)) + 112) & 0x4000) != 0
                     || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v30) + 112) < 0)
                    && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v30) + 112) & 0x200) == 0 )
                  {
                    v31 = SURFOBJ_TO_SURFACE_NOT_NULL(v30);
                    GreLockDisplayDevice(*(_QWORD *)(v31 + 48));
                  }
                  if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)a1 + 5)) + 112) & 0x400) != 0
                    || (v32 = (struct _SURFOBJ *)*((_QWORD *)v27 + 20), !v32->hdev) )
                  {
                    v35 = (struct _SURFOBJ *)*((_QWORD *)a1 + 5);
                    if ( v35->iType != 1
                      || !bAllowShareAccess(v35)
                      || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                      || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
                      || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
                      && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)
                      || (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 0x400) == 0 )
                    {
                      v37 = (struct _SURFOBJ *)*((_QWORD *)a1 + 5);
                      if ( v37->iType == 1
                        && bAllowShareAccess(v37)
                        && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
                        && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
                         || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
                        || (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)a1 + 5)) + 112) & 0x400) == 0 )
                      {
                        goto LABEL_108;
                      }
                      v34 = *((_QWORD *)a1 + 5);
LABEL_107:
                      v36 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)(v34 + 24) + 1328LL);
LABEL_109:
                      OffCopyBits(
                        (__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *))v36,
                        (int *)&gptlZero,
                        *((_QWORD *)a1 + 5),
                        (int *)v38 + 42,
                        *((_QWORD *)v27 + 20),
                        &v49,
                        0LL,
                        &v47,
                        &v47);
                      if ( v31 )
                        GreUnlockDisplayDevice(*(_QWORD *)(v31 + 48));
                      if ( !v28 )
                      {
LABEL_116:
                        v6 = v44;
                        v12 = (struct _RECTL *)((char *)a1 + 48);
                        v13 = v39;
                        break;
                      }
                      v26 = *(_QWORD *)(v28 + 48);
                      goto LABEL_113;
                    }
                  }
                  else if ( v32->iType != 1
                         || !bAllowShareAccess(v32)
                         || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                         || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
                         || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
                         && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)
                         || (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 0x400) == 0 )
                  {
                    v33 = (struct _SURFOBJ *)*((_QWORD *)v27 + 20);
                    if ( (v33->iType != 1
                       || !bAllowShareAccess(v33)
                       || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                       || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
                       || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
                       && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
                      && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)v27 + 20)) + 112) & 0x400) != 0 )
                    {
                      v34 = *((_QWORD *)v27 + 20);
                      goto LABEL_107;
                    }
LABEL_108:
                    v36 = EngCopyBits;
                    goto LABEL_109;
                  }
                  v36 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 80LL);
                  goto LABEL_109;
                }
                v15 = *((_QWORD *)a1 + 5);
                v16 = 0LL;
                if ( v15
                  && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)a1 + 5)) + 112) & 0x4000) != 0
                   || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v15) + 112) < 0)
                  && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v15) + 112) & 0x200) == 0 )
                {
                  v16 = SURFOBJ_TO_SURFACE_NOT_NULL(v15);
                  GreLockDisplayDevice(*(_QWORD *)(v16 + 48));
                }
                v17 = v38;
                v18 = 0LL;
                v19 = *((_QWORD *)v38 + 20);
                if ( v19
                  && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)v38 + 20)) + 112) & 0x4000) != 0
                   || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v19) + 112) < 0)
                  && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v19) + 112) & 0x200) == 0 )
                {
                  v18 = SURFOBJ_TO_SURFACE_NOT_NULL(v19);
                  GreLockDisplayDevice(*(_QWORD *)(v18 + 48));
                }
                if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)v17 + 20)) + 112) & 0x400) != 0
                  || (v20 = (struct _SURFOBJ *)*((_QWORD *)a1 + 5), !v20->hdev) )
                {
                  v23 = (struct _SURFOBJ *)*((_QWORD *)v17 + 20);
                  if ( v23->iType != 1
                    || !bAllowShareAccess(v23)
                    || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                    || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
                    || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
                    && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)
                    || (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 0x400) == 0 )
                  {
                    v25 = (struct _SURFOBJ *)*((_QWORD *)v17 + 20);
                    if ( v25->iType == 1
                      && bAllowShareAccess(v25)
                      && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                      && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
                      && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
                       || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
                      || (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)v17 + 20)) + 112) & 0x400) == 0 )
                    {
LABEL_59:
                      v24 = EngCopyBits;
                      goto LABEL_60;
                    }
                    v22 = *((_QWORD *)v17 + 20);
                    goto LABEL_58;
                  }
                }
                else if ( v20->iType != 1
                       || !bAllowShareAccess(v20)
                       || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                       || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
                       || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
                       && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)
                       || (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 0x400) == 0 )
                {
                  v21 = (struct _SURFOBJ *)*((_QWORD *)a1 + 5);
                  if ( v21->iType == 1
                    && bAllowShareAccess(v21)
                    && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
                    && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
                     || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
                    || (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)a1 + 5)) + 112) & 0x400) == 0 )
                  {
                    goto LABEL_59;
                  }
                  v22 = *((_QWORD *)a1 + 5);
LABEL_58:
                  v24 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)(v22 + 24) + 1328LL);
                  goto LABEL_60;
                }
                v24 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 80LL);
LABEL_60:
                OffCopyBits(
                  (__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *))v24,
                  (int *)v38 + 42,
                  *((_QWORD *)v17 + 20),
                  (int *)&gptlZero,
                  *((_QWORD *)a1 + 5),
                  &v49,
                  0LL,
                  &v47,
                  &v47);
                if ( v18 )
                  GreUnlockDisplayDevice(*(_QWORD *)(v18 + 48));
                if ( !v16 )
                  goto LABEL_114;
                v26 = *(_QWORD *)(v16 + 48);
LABEL_113:
                GreUnlockDisplayDevice(v26);
LABEL_114:
                if ( !a5 || !(unsigned int)ENUMAREAS::bEnumLayers((ENUMAREAS *)v45, &v38) )
                  goto LABEL_116;
              }
            }
          }
        }
        while ( v13 );
        ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v45);
      }
    }
  }
  SPRITEDDIACCESS::~SPRITEDDIACCESS(v46, v8, v9, v10);
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v41);
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v40);
}
