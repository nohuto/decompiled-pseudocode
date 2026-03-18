/*
 * XREFs of ?vSpDeviceControlSprites@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@K@Z @ 0x1C0260F10
 * Callers:
 *     EngControlSprites @ 0x1C0266210 (EngControlSprites.c)
 * Callees:
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0024928 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0024960 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C00A5CDC (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     OffCopyBits @ 0x1C00A5D08 (OffCopyBits.c)
 *     ??1ENUMAREAS@@QEAA@XZ @ 0x1C00A7510 (--1ENUMAREAS@@QEAA@XZ.c)
 *     ?bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C00A758C (-bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ??0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z @ 0x1C00A76E0 (--0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z.c)
 *     ?vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C00A80C4 (-vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ??0UNDODESKTOPCOORD@@QEAA@PEAVEWNDOBJ@@PEAU_SPRITESTATE@@@Z @ 0x1C0256D9C (--0UNDODESKTOPCOORD@@QEAA@PEAVEWNDOBJ@@PEAU_SPRITESTATE@@@Z.c)
 *     ??1UNDODESKTOPCOORD@@QEAA@XZ @ 0x1C0256F00 (--1UNDODESKTOPCOORD@@QEAA@XZ.c)
 *     ?bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z @ 0x1C025A168 (-bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z.c)
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x1C02623A0 (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 */

void __fastcall vSpDeviceControlSprites(HDEV a1, struct EWNDOBJ *a2, int a3)
{
  HDEV v5; // rdi
  int v6; // eax
  struct SPRITE *v7; // rsi
  int v8; // r12d
  struct _SURFOBJ *v9; // rcx
  struct _SURFOBJ *v10; // rcx
  __int64 v11; // rax
  struct _SURFOBJ *v12; // rcx
  BOOL (__stdcall *v13)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rcx
  struct _SURFOBJ *v14; // rcx
  int v15; // r12d
  struct SPRITE *v16; // rsi
  struct _SURFOBJ *v17; // rcx
  struct _SURFOBJ *v18; // rcx
  __int64 v19; // rax
  struct _SURFOBJ *v20; // rcx
  BOOL (__stdcall *v21)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rcx
  struct _SURFOBJ *v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  struct SPRITE *v26; // [rsp+58h] [rbp-B0h] BYREF
  HDEV v27; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v28[16]; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v29[96]; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v30[96]; // [rsp+D8h] [rbp-30h] BYREF
  struct _SPRITESTATE *v31[24]; // [rsp+138h] [rbp+30h] BYREF
  struct _RECTL v32; // [rsp+1F8h] [rbp+F0h] BYREF
  struct _RECTL v33; // [rsp+208h] [rbp+100h] BYREF

  v27 = a1;
  SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v31, (struct PDEVOBJ *)&v27);
  v5 = v27 + 18;
  UNDODESKTOPCOORD::UNDODESKTOPCOORD((UNDODESKTOPCOORD *)v28, a2, (struct _SPRITESTATE *)(v27 + 18));
  if ( a3 != 1 )
  {
    *((_DWORD *)a2 + 46) &= ~0x1000000u;
    vSpComputeUnlockedRegion((struct _SPRITESTATE *)v5);
    if ( (*((_DWORD *)a2 + 46) & 0x2000000) == 0
      || !bIntersect((const struct _RECTL *)((char *)a2 + 4), (const struct _RECTL *)v5 + 3, &v33) )
    {
      goto LABEL_87;
    }
    ENUMAREAS::ENUMAREAS((ENUMAREAS *)v29, (struct _SPRITESTATE *)v5, &v33, 0, 0LL);
    while ( 1 )
    {
      v15 = ENUMAREAS::bEnum((ENUMAREAS *)v29, &v26, &v32);
      if ( v26 )
        break;
LABEL_85:
      if ( !v15 )
      {
        vSpRedrawArea((struct _SPRITESTATE *)v5, &v33, 1);
        ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v29);
        goto LABEL_87;
      }
    }
    while ( 1 )
    {
      v16 = v26;
      if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)v26 + 20)) + 112) & 0x400) != 0
        || (v17 = (struct _SURFOBJ *)*((_QWORD *)v5 + 5), !v17->hdev) )
      {
        v20 = (struct _SURFOBJ *)*((_QWORD *)v16 + 20);
        if ( v20->iType != 1
          || !bAllowShareAccess(v20)
          || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
          || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
          || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
          && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)
          || (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 0x400) == 0 )
        {
          v22 = (struct _SURFOBJ *)*((_QWORD *)v16 + 20);
          if ( v22->iType == 1
            && bAllowShareAccess(v22)
            && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
            && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
            && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
             || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
            || (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)v16 + 20)) + 112) & 0x400) == 0 )
          {
LABEL_83:
            v21 = EngCopyBits;
            goto LABEL_84;
          }
          v19 = *((_QWORD *)v16 + 20);
          goto LABEL_82;
        }
      }
      else if ( v17->iType != 1
             || !bAllowShareAccess(v17)
             || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
             || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
             || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
             && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)
             || (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 0x400) == 0 )
      {
        v18 = (struct _SURFOBJ *)*((_QWORD *)v5 + 5);
        if ( v18->iType == 1
          && bAllowShareAccess(v18)
          && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
          || (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)v5 + 5)) + 112) & 0x400) == 0 )
        {
          goto LABEL_83;
        }
        v19 = *((_QWORD *)v5 + 5);
LABEL_82:
        v21 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)(v19 + 24) + 1328LL);
        goto LABEL_84;
      }
      v21 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
                                                                                                 + 80LL);
LABEL_84:
      OffCopyBits(
        (__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *))v21,
        (int *)v26 + 42,
        *((_QWORD *)v16 + 20),
        (int *)&gptlZero,
        *((_QWORD *)v5 + 5),
        (struct _CLIPOBJ *)a2,
        0LL,
        &v32,
        &v32);
      if ( !(unsigned int)ENUMAREAS::bEnumLayers((ENUMAREAS *)v29, &v26) )
        goto LABEL_85;
    }
  }
  *((_DWORD *)a2 + 46) |= 0x1000000u;
  if ( (*((_DWORD *)a2 + 46) & 0x2000000) != 0
    && bIntersect((const struct _RECTL *)((char *)a2 + 4), (const struct _RECTL *)v5 + 3, &v33) )
  {
    ENUMAREAS::ENUMAREAS((ENUMAREAS *)v30, (struct _SPRITESTATE *)v5, &v33, 0, 0LL);
    while ( 1 )
    {
      v6 = ENUMAREAS::bEnum((ENUMAREAS *)v30, &v26, &v32);
      v7 = v26;
      v8 = v6;
      if ( v26 )
        break;
LABEL_42:
      if ( !v8 )
      {
        ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v30);
        goto LABEL_44;
      }
    }
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)v5 + 5)) + 112) & 0x400) != 0
      || (v9 = (struct _SURFOBJ *)*((_QWORD *)v7 + 20), !v9->hdev) )
    {
      v12 = (struct _SURFOBJ *)*((_QWORD *)v5 + 5);
      if ( v12->iType != 1
        || !bAllowShareAccess(v12)
        || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
        || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
        || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
        && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)
        || (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 0x400) == 0 )
      {
        v14 = (struct _SURFOBJ *)*((_QWORD *)v5 + 5);
        if ( (v14->iType != 1
           || !bAllowShareAccess(v14)
           || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
           || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
           || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
           && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
          && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)v5 + 5)) + 112) & 0x400) != 0 )
        {
          v11 = *((_QWORD *)v5 + 5);
          goto LABEL_39;
        }
LABEL_40:
        v13 = EngCopyBits;
        goto LABEL_41;
      }
    }
    else if ( v9->iType != 1
           || !bAllowShareAccess(v9)
           || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
           || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
           || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
           && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)
           || (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 0x400) == 0 )
    {
      v10 = (struct _SURFOBJ *)*((_QWORD *)v7 + 20);
      if ( (v10->iType != 1
         || !bAllowShareAccess(v10)
         || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
         || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
         || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
         && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
        && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)v7 + 20)) + 112) & 0x400) != 0 )
      {
        v11 = *((_QWORD *)v7 + 20);
LABEL_39:
        v13 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)(v11 + 24) + 1328LL);
        goto LABEL_41;
      }
      goto LABEL_40;
    }
    v13 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
                                                                                               + 80LL);
LABEL_41:
    OffCopyBits(
      (__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *))v13,
      (int *)&gptlZero,
      *((_QWORD *)v5 + 5),
      (int *)v26 + 42,
      *((_QWORD *)v26 + 20),
      (struct _CLIPOBJ *)a2,
      0LL,
      &v32,
      &v32);
    goto LABEL_42;
  }
LABEL_44:
  vSpComputeUnlockedRegion((struct _SPRITESTATE *)v5);
LABEL_87:
  UNDODESKTOPCOORD::~UNDODESKTOPCOORD((UNDODESKTOPCOORD *)v28);
  SPRITEDDIACCESS::~SPRITEDDIACCESS(v31, v23, v24, v25);
}
