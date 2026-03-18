/*
 * XREFs of ?bSpCreateShape@@YAHPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAVPALETTE@@KK4@Z @ 0x1C025B22C
 * Callers:
 *     ?bSpTransferShape@@YAHPEAVSPRITE@@0@Z @ 0x1C025BB9C (-bSpTransferShape@@YAHPEAVSPRITE@@0@Z.c)
 *     ?bSpUpdateCursor@@YAHPEAVSPRITE@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@@Z @ 0x1C025BDD0 (-bSpUpdateCursor@@YAHPEAVSPRITE@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU_RECTL@@@Z @ 0x1C025C9AC (-bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU.c)
 * Callees:
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0025370 (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C0081670 (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C0081778 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     OffCopyBits @ 0x1C00A5D08 (OffCopyBits.c)
 *     ?vLockShared@SPRITERANGELOCK@@QEAAXXZ @ 0x1C00A7830 (-vLockShared@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vLockExclusive@SPRITERANGELOCK@@QEAAXXZ @ 0x1C00A7860 (-vLockExclusive@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?psoSpCreateSurface@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@KJJH@Z @ 0x1C00A87C0 (-psoSpCreateSurface@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@KJJH@Z.c)
 *     ?vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z @ 0x1C010B384 (-vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ??1MULTISURF@@QEAA@XZ @ 0x1C0256EB0 (--1MULTISURF@@QEAA@XZ.c)
 *     ?bLoadSource@MULTISURF@@QEAAHPEAUHDEV__@@@Z @ 0x1C02852AC (-bLoadSource@MULTISURF@@QEAAHPEAUHDEV__@@@Z.c)
 *     ?vInit@MULTISURF@@AEAAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0285984 (-vInit@MULTISURF@@AEAAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
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
  SPRITERANGELOCK *v10; // r13
  ULONG v11; // edi
  __int64 v12; // rdx
  signed int v13; // r14d
  signed int v14; // r12d
  SURFOBJ *Surface; // rcx
  _DWORD *v16; // rax
  struct _SURFOBJ *v17; // r14
  _DWORD *v18; // r10
  int v19; // eax
  int v20; // edx
  struct _RECTL *v21; // rax
  LONG left; // edi
  LONG top; // r15d
  LONG right; // r12d
  LONG bottom; // ebx
  int v26; // edx
  int v27; // r8d
  int v28; // r9d
  __int64 v29; // rax
  __int64 v30; // rdx
  int v31; // ecx
  LONG v32; // eax
  struct _SURFOBJ *v33; // rdi
  LONG v34; // eax
  int v35; // ecx
  HDEV hdev; // rbx
  BOOL (__stdcall *v38)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r12
  __int64 v39; // rdi
  __int64 v40; // r15
  __int64 v41; // rbx
  __int64 v42; // rax
  unsigned int v43; // [rsp+50h] [rbp-B0h]
  struct _RECTL *v44; // [rsp+58h] [rbp-A8h] BYREF
  int v45; // [rsp+60h] [rbp-A0h]
  int v46; // [rsp+64h] [rbp-9Ch]
  struct _SURFOBJ *v47; // [rsp+68h] [rbp-98h]
  struct _RECTL v48; // [rsp+70h] [rbp-90h] BYREF
  __int64 v49; // [rsp+80h] [rbp-80h] BYREF
  __int64 v50; // [rsp+88h] [rbp-78h]
  _QWORD v51[2]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v52[56]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v53; // [rsp+D8h] [rbp-28h]
  char v54; // [rsp+E0h] [rbp-20h]
  int v55; // [rsp+E4h] [rbp-1Ch]
  __int64 v56; // [rsp+100h] [rbp+0h]
  __int64 v57; // [rsp+108h] [rbp+8h]
  LONG v58; // [rsp+110h] [rbp+10h] BYREF
  LONG v59; // [rsp+114h] [rbp+14h]
  LONG v60; // [rsp+118h] [rbp+18h]
  LONG v61; // [rsp+11Ch] [rbp+1Ch]

  v10 = (SPRITERANGELOCK *)(*((_QWORD *)a1 + 2) + 128LL);
  v11 = a7;
  v50 = (__int64)a4;
  v47 = a3;
  *(_QWORD *)&v48.left = a2;
  v44 = a9;
  v43 = 0;
  SPRITERANGELOCK::vLockExclusive(v10);
  v49 = *((_QWORD *)a1 + 18);
  if ( a6 )
    INC_SHARE_REF_CNT(a6, v12);
  XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v49);
  *((_QWORD *)a1 + 18) = a6;
  v13 = a5->right - a5->left;
  v14 = a5->bottom - a5->top;
  if ( !a7 )
    v11 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL) + 72LL);
  Surface = (SURFOBJ *)*((_QWORD *)a1 + 16);
  if ( !Surface
    || (Surface->iType || (Surface->fjBitmap & 0x20) != 0) && a8
    || Surface->iBitmapFormat != v11
    || Surface->sizlBitmap.cx < v13
    || Surface->sizlBitmap.cy < v14 )
  {
    if ( (*(_DWORD *)a1 & 0x40) != 0 )
    {
      if ( Surface->iBitmapFormat != v11 )
      {
        EngUnlockSurface(Surface);
        v16 = (_DWORD *)*((_QWORD *)a1 + 1);
        *((_QWORD *)a1 + 16) = 0LL;
        *(_DWORD *)a1 &= ~0x40u;
        Surface = 0LL;
        *((_QWORD *)a1 + 30) = 0LL;
        if ( v16 )
          *v16 &= ~0x40u;
      }
    }
    else
    {
      vSpDeleteSurface(Surface);
      Surface = 0LL;
    }
    if ( (*(_DWORD *)a1 & 0x40) == 0 && *((_QWORD *)a1 + 30) && a8 )
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
    Surface = psoSpCreateSurface(*((struct _SPRITESTATE **)a1 + 2), v11, v13, v14);
    goto LABEL_24;
  }
LABEL_25:
  SPRITERANGELOCK::vUnlock(v10);
  SPRITERANGELOCK::vLockShared(v10);
  v17 = (struct _SURFOBJ *)*((_QWORD *)a1 + 16);
  if ( !v17 )
    goto LABEL_64;
  v18 = (_DWORD *)((char *)a1 + 136);
  v43 = 1;
  *((_DWORD *)a1 + 34) = -a5->left;
  v19 = -a5->top;
  *((_DWORD *)a1 + 38) = v11;
  *((_DWORD *)a1 + 35) = v19;
  if ( a6 )
    v20 = **((_DWORD **)a6 + 15) | *(_DWORD *)(*((_QWORD *)a6 + 15) + 8LL);
  else
    v20 = 0;
  v21 = v44;
  *((_DWORD *)a1 + 39) = v20;
  left = a5->left;
  top = a5->top;
  right = a5->right;
  bottom = a5->bottom;
  v61 = bottom;
  v58 = left;
  v59 = top;
  v60 = right;
  if ( v21 )
  {
    v26 = v21->right - *v18;
    v27 = v21->top - *((_DWORD *)a1 + 35);
    v28 = v21->bottom - *((_DWORD *)a1 + 35);
    LODWORD(v44) = v21->left - *v18;
    v45 = v26;
    HIDWORD(v44) = v27;
    v46 = v28;
    ERECTL::operator*=(&v58, &v44);
    bottom = v61;
    right = v60;
    top = v59;
    left = v58;
  }
  if ( ERECTL::bEmpty((ERECTL *)&v58) )
    goto LABEL_64;
  if ( (*(_DWORD *)a1 & 0x40) == 0
    || (*(_DWORD *)a1 & 0x200) != 0 && (v29 = SURFOBJ_TO_SURFACE_NOT_NULL(v17), *(HSURF *)(v29 + 352) == v47->hsurf) )
  {
    v30 = *(_QWORD *)&v48.left;
    v31 = **(_DWORD **)&v48.left;
    v32 = **(_DWORD **)&v48.left + left;
    v33 = v47;
    v48.left = v32;
    v34 = v31 + right;
    v35 = *(_DWORD *)(v30 + 4);
    v48.right = v34;
    v48.top = v35 + top;
    v48.bottom = v35 + bottom;
    v53 = 0LL;
    v54 = 0;
    v55 = 0;
    MULTISURF::vInit((MULTISURF *)v52, v47, &v48);
    v51[0] = 0LL;
    v44 = 0LL;
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v17) + 112) & 0x400) != 0 )
    {
      hdev = v17->hdev;
      if ( !(unsigned int)MULTISURF::bLoadSource((MULTISURF *)v52, hdev) )
      {
        SPRITERANGELOCK::vUnlock(v10);
        SPRITERANGELOCK::vLockExclusive(v10);
        vSpDeleteSurface(*((SURFOBJ **)a1 + 16));
        *((_QWORD *)a1 + 16) = 0LL;
        SPRITERANGELOCK::vUnlock(v10);
        SURFREFVIEW::bUnMap((SURFREFVIEW *)&v44);
        SURFREFVIEW::bUnMap((SURFREFVIEW *)v51);
        MULTISURF::~MULTISURF((MULTISURF *)v52);
        return 0LL;
      }
    }
    else
    {
      hdev = v33->hdev;
      if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v33) + 112) & 0x400) == 0 )
      {
        v38 = EngCopyBits;
LABEL_42:
        if ( SURFREFVIEW::bMap((SURFREFVIEW *)v51, (struct _SURFOBJ *)v56)
          && SURFREFVIEW::bMap((SURFREFVIEW *)&v44, v17) )
        {
          v39 = 0LL;
          if ( ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v17) + 112) & 0x4000) != 0
             || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v17) + 112) < 0)
            && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v17) + 112) & 0x200) == 0 )
          {
            v39 = SURFOBJ_TO_SURFACE_NOT_NULL(v17);
            GreLockDisplayDevice(*(_QWORD *)(v39 + 48));
          }
          v40 = v56;
          v41 = 0LL;
          if ( v56 )
          {
            if ( ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v56) + 112) & 0x4000) != 0
               || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v40) + 112) < 0)
              && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v40) + 112) & 0x200) == 0 )
            {
              v41 = SURFOBJ_TO_SURFACE_NOT_NULL(v40);
              GreLockDisplayDevice(*(_QWORD *)(v41 + 48));
            }
            v40 = v56;
          }
          OffCopyBits(
            (__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *))v38,
            (int *)a1 + 34,
            (__int64)v17,
            (int *)&gptlZero,
            v40,
            0LL,
            v50,
            &v58,
            (_DWORD *)v57);
          if ( (*(_DWORD *)a1 & 0x200) != 0 && *((struct _SURFOBJ **)a1 + 16) == v17 )
          {
            v42 = SURFOBJ_TO_SURFACE_NOT_NULL(v17);
            if ( *(HSURF *)(v42 + 352) == v47->hsurf )
              *(_DWORD *)a1 |= 0x80u;
          }
          if ( v41 )
            GreUnlockDisplayDevice(*(_QWORD *)(v41 + 48));
          if ( v39 )
            GreUnlockDisplayDevice(*(_QWORD *)(v39 + 48));
        }
        else
        {
          v43 = 0;
        }
        SURFREFVIEW::bUnMap((SURFREFVIEW *)&v44);
        SURFREFVIEW::bUnMap((SURFREFVIEW *)v51);
        MULTISURF::~MULTISURF((MULTISURF *)v52);
        goto LABEL_64;
      }
    }
    v38 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))*((_QWORD *)hdev + 357);
    goto LABEL_42;
  }
  *(_DWORD *)a1 |= 0x80u;
LABEL_64:
  SPRITERANGELOCK::vUnlock(v10);
  return v43;
}
