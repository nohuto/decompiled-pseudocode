/*
 * XREFs of ?bSpCreateShape@@YAHPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAVPALETTE@@KK4@Z @ 0x1C025C318
 * Callers:
 *     ?bSpTransferShape@@YAHPEAVSPRITE@@0@Z @ 0x1C025CC74 (-bSpTransferShape@@YAHPEAVSPRITE@@0@Z.c)
 *     ?bSpUpdateCursor@@YAHPEAVSPRITE@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@@Z @ 0x1C025CEA8 (-bSpUpdateCursor@@YAHPEAVSPRITE@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU_RECTL@@@Z @ 0x1C025D114 (-bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU.c)
 * Callees:
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C00182EC (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C00183B8 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C00898E4 (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     OffCopyBits @ 0x1C00EC748 (OffCopyBits.c)
 *     ?vLockExclusive@SPRITERANGELOCK@@QEAAXXZ @ 0x1C00ECBB4 (-vLockExclusive@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vLockShared@SPRITERANGELOCK@@QEAAXXZ @ 0x1C00ECBE8 (-vLockShared@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?psoSpCreateSurface@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@KJJH@Z @ 0x1C00ED740 (-psoSpCreateSurface@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@KJJH@Z.c)
 *     ?vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z @ 0x1C0114930 (-vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ??1MULTISURF@@QEAA@XZ @ 0x1C02589C0 (--1MULTISURF@@QEAA@XZ.c)
 *     ?bLoadSource@MULTISURF@@QEAAHPEAUHDEV__@@@Z @ 0x1C0281E20 (-bLoadSource@MULTISURF@@QEAAHPEAUHDEV__@@@Z.c)
 *     ?vInit@MULTISURF@@AEAAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C02824E4 (-vInit@MULTISURF@@AEAAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 */

__int64 __fastcall bSpCreateShape(
        struct SPRITE *a1,
        struct _POINTL *a2,
        struct _SURFOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct PALETTE *a6,
        ULONG a7,
        unsigned int a8,
        struct _RECTL *a9)
{
  SPRITERANGELOCK *v10; // r12
  ULONG v11; // ebx
  signed int v12; // r14d
  signed int v13; // r13d
  SURFOBJ *Surface; // rcx
  _DWORD *v15; // rax
  struct _SURFOBJ *v16; // r14
  _DWORD *v17; // r13
  int v18; // eax
  int v19; // edx
  LONG left; // ebx
  int v21; // r8d
  int v22; // r9d
  LONG v23; // edx
  int v24; // eax
  __int64 v25; // rax
  struct _SURFOBJ *v26; // rdi
  int v27; // ecx
  int v28; // eax
  HDEV hdev; // rbx
  BOOL (__stdcall *v31)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r12
  __int64 v32; // rdi
  __int64 v33; // r15
  __int64 v34; // rbx
  __int64 v35; // rax
  unsigned int v36; // [rsp+50h] [rbp-B0h]
  struct _RECTL v37; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v38; // [rsp+70h] [rbp-90h]
  struct _SURFOBJ *v39; // [rsp+78h] [rbp-88h]
  _QWORD v40[2]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v41; // [rsp+90h] [rbp-70h] BYREF
  __int64 v42; // [rsp+98h] [rbp-68h]
  SPRITERANGELOCK *v43; // [rsp+A0h] [rbp-60h]
  _QWORD v44[3]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v45[56]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v46; // [rsp+F8h] [rbp-8h]
  char v47; // [rsp+100h] [rbp+0h]
  int v48; // [rsp+104h] [rbp+4h]
  __int64 v49; // [rsp+120h] [rbp+20h]
  __int64 v50; // [rsp+128h] [rbp+28h]
  __int64 v51[2]; // [rsp+130h] [rbp+30h] BYREF

  v10 = (SPRITERANGELOCK *)(*((_QWORD *)a1 + 2) + 128LL);
  v11 = a7;
  v38 = a8;
  v42 = (__int64)a4;
  v39 = a3;
  v40[0] = a2;
  *(_QWORD *)&v37.left = a9;
  v36 = 0;
  v43 = v10;
  SPRITERANGELOCK::vLockExclusive(v10);
  v41 = *((_QWORD *)a1 + 18);
  if ( a6 )
    INC_SHARE_REF_CNT(a6);
  XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v41);
  *((_QWORD *)a1 + 18) = a6;
  v12 = a5->right - a5->left;
  v13 = a5->bottom - a5->top;
  if ( !a7 )
    v11 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL) + 72LL);
  Surface = (SURFOBJ *)*((_QWORD *)a1 + 16);
  if ( !Surface
    || (Surface->iType || (Surface->fjBitmap & 0x20) != 0) && v38
    || Surface->iBitmapFormat != v11
    || Surface->sizlBitmap.cx < v12
    || Surface->sizlBitmap.cy < v13 )
  {
    if ( (*(_DWORD *)a1 & 0x40) != 0 )
    {
      if ( Surface->iBitmapFormat != v11 )
      {
        EngUnlockSurface(Surface);
        v15 = (_DWORD *)*((_QWORD *)a1 + 1);
        *((_QWORD *)a1 + 16) = 0LL;
        *(_DWORD *)a1 &= ~0x40u;
        Surface = 0LL;
        *((_QWORD *)a1 + 30) = 0LL;
        if ( v15 )
          *v15 &= ~0x40u;
      }
    }
    else
    {
      vSpDeleteSurface(Surface);
      Surface = 0LL;
    }
    if ( (*(_DWORD *)a1 & 0x40) == 0 && *((_QWORD *)a1 + 30) && v38 )
    {
      Surface = EngLockSurface(*((HSURF *)a1 + 30));
      if ( !Surface )
        goto LABEL_23;
      *(_DWORD *)a1 |= 0x40u;
    }
    if ( Surface )
    {
LABEL_24:
      *((_QWORD *)a1 + 16) = Surface;
      goto LABEL_25;
    }
LABEL_23:
    Surface = psoSpCreateSurface(*((struct _SPRITESTATE **)a1 + 2), v11, v12, v13);
    goto LABEL_24;
  }
LABEL_25:
  SPRITERANGELOCK::vUnlock(v10);
  SPRITERANGELOCK::vLockShared(v10);
  v16 = (struct _SURFOBJ *)*((_QWORD *)a1 + 16);
  if ( !v16 )
    goto LABEL_65;
  v17 = (_DWORD *)((char *)a1 + 136);
  v36 = 1;
  *((_DWORD *)a1 + 34) = -a5->left;
  v18 = -a5->top;
  *((_DWORD *)a1 + 38) = v11;
  *((_DWORD *)a1 + 35) = v18;
  if ( a6 )
    v19 = **((_DWORD **)a6 + 15) | *(_DWORD *)(*((_QWORD *)a6 + 15) + 8LL);
  else
    v19 = 0;
  *((_DWORD *)a1 + 39) = v19;
  left = a5->left;
  HIDWORD(v51[0]) = a5->top;
  v51[1] = *(_QWORD *)&a5->right;
  LODWORD(v51[0]) = left;
  if ( *(_QWORD *)&v37.left )
  {
    v21 = *(_DWORD *)(*(_QWORD *)&v37.left + 4LL);
    v22 = *(_DWORD *)(*(_QWORD *)&v37.left + 12LL);
    v23 = *(_DWORD *)(*(_QWORD *)&v37.left + 8LL) - *v17;
    v37.left = **(_DWORD **)&v37.left - *v17;
    v24 = *((_DWORD *)a1 + 35);
    v37.right = v23;
    v37.top = v21 - v24;
    v37.bottom = v22 - v24;
    ERECTL::operator*=(v51, &v37);
    left = v51[0];
  }
  if ( ERECTL::bEmpty((ERECTL *)v51) )
    goto LABEL_65;
  if ( (*(_DWORD *)a1 & 0x40) == 0 )
  {
    v26 = v39;
    goto LABEL_37;
  }
  if ( (*(_DWORD *)a1 & 0x200) != 0 )
  {
    v25 = SURFOBJ_TO_SURFACE_NOT_NULL(v16);
    v26 = v39;
    if ( *(HSURF *)(v25 + 352) == v39->hsurf )
    {
LABEL_37:
      v37 = *(struct _RECTL *)v51;
      v46 = 0LL;
      v27 = *(_DWORD *)v40[0];
      v37.right = *(_DWORD *)v40[0] + LODWORD(v51[1]);
      v47 = 0;
      v48 = 0;
      v37.left = v27 + left;
      v28 = *(_DWORD *)(v40[0] + 4LL);
      v37.top = v28 + HIDWORD(v51[0]);
      v37.bottom = v28 + HIDWORD(v51[1]);
      MULTISURF::vInit((MULTISURF *)v45, v26, &v37);
      v44[0] = 0LL;
      v40[0] = 0LL;
      if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v16) + 112) & 0x400) != 0 )
      {
        hdev = v16->hdev;
        if ( !(unsigned int)MULTISURF::bLoadSource((MULTISURF *)v45, hdev) )
        {
          SPRITERANGELOCK::vUnlock(v10);
          SPRITERANGELOCK::vLockExclusive(v10);
          vSpDeleteSurface(*((SURFOBJ **)a1 + 16));
          *((_QWORD *)a1 + 16) = 0LL;
          SPRITERANGELOCK::vUnlock(v10);
          SURFREFVIEW::bUnMap((SURFREFVIEW *)v40);
          SURFREFVIEW::bUnMap((SURFREFVIEW *)v44);
          MULTISURF::~MULTISURF((MULTISURF *)v45);
          return 0LL;
        }
      }
      else
      {
        hdev = v26->hdev;
        if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v26) + 112) & 0x400) == 0 )
        {
          v31 = EngCopyBits;
LABEL_43:
          if ( SURFREFVIEW::bMap((SURFREFVIEW *)v44, (struct _SURFOBJ *)v49)
            && SURFREFVIEW::bMap((SURFREFVIEW *)v40, v16) )
          {
            v32 = 0LL;
            if ( ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v16) + 112) & 0x4000) != 0
               || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v16) + 112) < 0)
              && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v16) + 112) & 0x200) == 0 )
            {
              v32 = SURFOBJ_TO_SURFACE_NOT_NULL(v16);
              GreLockDisplayDevice(*(_QWORD *)(v32 + 48));
            }
            v33 = v49;
            v34 = 0LL;
            if ( v49 )
            {
              if ( ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v49) + 112) & 0x4000) != 0
                 || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v33) + 112) < 0)
                && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v33) + 112) & 0x200) == 0 )
              {
                v34 = SURFOBJ_TO_SURFACE_NOT_NULL(v33);
                GreLockDisplayDevice(*(_QWORD *)(v34 + 48));
              }
              v33 = v49;
            }
            OffCopyBits(
              (__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *))v31,
              (LONG *)a1 + 34,
              (__int64)v16,
              (int *)&gptlZero,
              v33,
              0LL,
              v42,
              v51,
              (_DWORD *)v50);
            if ( (*(_DWORD *)a1 & 0x200) != 0 && *((struct _SURFOBJ **)a1 + 16) == v16 )
            {
              v35 = SURFOBJ_TO_SURFACE_NOT_NULL(v16);
              if ( *(HSURF *)(v35 + 352) == v39->hsurf )
                *(_DWORD *)a1 |= 0x80u;
            }
            if ( v34 )
              GreUnlockDisplayDevice(*(_QWORD *)(v34 + 48));
            if ( v32 )
              GreUnlockDisplayDevice(*(_QWORD *)(v32 + 48));
          }
          else
          {
            v36 = 0;
          }
          SURFREFVIEW::bUnMap((SURFREFVIEW *)v40);
          SURFREFVIEW::bUnMap((SURFREFVIEW *)v44);
          MULTISURF::~MULTISURF((MULTISURF *)v45);
          v10 = v43;
          goto LABEL_65;
        }
      }
      v31 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))*((_QWORD *)hdev + 357);
      goto LABEL_43;
    }
  }
  *(_DWORD *)a1 |= 0x80u;
LABEL_65:
  SPRITERANGELOCK::vUnlock(v10);
  return v36;
}
