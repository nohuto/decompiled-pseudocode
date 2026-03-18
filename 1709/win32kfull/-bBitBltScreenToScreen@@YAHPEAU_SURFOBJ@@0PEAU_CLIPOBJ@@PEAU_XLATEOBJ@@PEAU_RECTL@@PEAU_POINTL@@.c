/*
 * XREFs of ?bBitBltScreenToScreen@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C0281440
 * Callers:
 *     ?MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C027D130 (-MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSH.c)
 * Callees:
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C0022CA0 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0022CE0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     OffCopyBits @ 0x1C00EC748 (OffCopyBits.c)
 *     OffBitBlt @ 0x1C011A5C8 (OffBitBlt.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ?DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z @ 0x1C024C078 (-DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z.c)
 *     ??0MULTIBRUSH@@QEAA@PEAU_BRUSHOBJ@@JPEAU_VDEV@@PEAU_SURFOBJ@@H@Z @ 0x1C027C4B0 (--0MULTIBRUSH@@QEAA@PEAU_BRUSHOBJ@@JPEAU_VDEV@@PEAU_SURFOBJ@@H@Z.c)
 *     ??0MULTISORTBLTORDER@@QEAA@PEAU_VDEV@@JJ@Z @ 0x1C027C610 (--0MULTISORTBLTORDER@@QEAA@PEAU_VDEV@@JJ@Z.c)
 *     ?LoadElement@MULTIBRUSH@@QEAAXPEAU_DISPSURF@@PEAVSURFACE@@@Z @ 0x1C027C8FC (-LoadElement@MULTIBRUSH@@QEAAXPEAU_DISPSURF@@PEAVSURFACE@@@Z.c)
 *     ?StoreElement@MULTIBRUSH@@QEAAXJ@Z @ 0x1C0280ED0 (-StoreElement@MULTIBRUSH@@QEAAXJ@Z.c)
 */

__int64 __fastcall bBitBltScreenToScreen(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct _POINTL *a6,
        struct _POINTL *a7,
        struct _BRUSHOBJ *a8,
        struct _POINTL *a9,
        unsigned int a10)
{
  DHPDEV dhpdev; // rbx
  unsigned int v14; // r15d
  _QWORD *v15; // rsi
  ULONG *pulXlate; // rdx
  __int64 v17; // r14
  int v18; // ebx
  __int64 v19; // rdi
  int v20; // esi
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rbx
  int v24; // esi
  int v25; // r14d
  ULONG v26; // r8d
  SURFOBJ *v27; // rax
  SURFOBJ *v28; // r8
  __int64 v29; // rcx
  BOOL (__stdcall *v30)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rcx
  int v31; // eax
  __int64 v32; // rbx
  struct _XLATEOBJ *v33; // rsi
  int v34; // ecx
  __int64 v35; // r9
  __int64 v36; // rax
  struct PALETTE *v37; // rsi
  struct PALETTE *v38; // rax
  int v39; // r10d
  ULONG iUniq; // edi
  int v41; // r11d
  FLONG flXlate; // ecx
  ULONG v43; // r8d
  __int64 v44; // rdx
  __int16 v45; // di
  BOOL (__stdcall *v46)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rcx
  __int64 v47; // rdi
  struct SURFACE *v48; // rax
  BOOL (__stdcall *v49)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // rcx
  HSURF v50; // rbx
  _QWORD *v51; // rax
  __int16 v53; // [rsp+70h] [rbp-90h]
  int v54; // [rsp+74h] [rbp-8Ch]
  int v55; // [rsp+78h] [rbp-88h]
  __int64 v56; // [rsp+80h] [rbp-80h] BYREF
  int v57[2]; // [rsp+88h] [rbp-78h]
  __int64 v58; // [rsp+90h] [rbp-70h]
  int v59[2]; // [rsp+98h] [rbp-68h]
  struct _XLATEOBJ *v60; // [rsp+A0h] [rbp-60h] BYREF
  SURFOBJ *pso; // [rsp+A8h] [rbp-58h]
  SIZEL sizl; // [rsp+B0h] [rbp-50h]
  HSURF hsurf; // [rsp+B8h] [rbp-48h]
  _QWORD *v64; // [rsp+C0h] [rbp-40h]
  _QWORD *v65; // [rsp+C8h] [rbp-38h]
  __int64 v66; // [rsp+D0h] [rbp-30h]
  const struct _RECTL *v67; // [rsp+D8h] [rbp-28h]
  __int64 v68; // [rsp+E0h] [rbp-20h]
  __int64 v69; // [rsp+E8h] [rbp-18h]
  struct PALETTE *v70; // [rsp+F0h] [rbp-10h]
  __int64 v71; // [rsp+F8h] [rbp-8h]
  __int64 v72; // [rsp+100h] [rbp+0h]
  __int64 v73; // [rsp+108h] [rbp+8h]
  __int64 v74; // [rsp+110h] [rbp+10h]
  __int64 v75; // [rsp+118h] [rbp+18h] BYREF
  _QWORD *v76; // [rsp+128h] [rbp+28h]
  _DWORD v77[14]; // [rsp+130h] [rbp+30h] BYREF
  struct _RECTL v78; // [rsp+168h] [rbp+68h] BYREF
  __int64 v79; // [rsp+178h] [rbp+78h] BYREF
  int v80; // [rsp+180h] [rbp+80h]
  int v81; // [rsp+184h] [rbp+84h]
  RECTL rclBounds; // [rsp+188h] [rbp+88h] BYREF

  dhpdev = a1->dhpdev;
  v74 = (__int64)a2;
  v67 = a5;
  v14 = 1;
  v73 = (__int64)a7;
  v55 = a5->top - a6->y;
  v54 = a5->left - a6->x;
  v72 = (__int64)a8;
  v71 = (__int64)a9;
  pso = 0LL;
  MULTISORTBLTORDER::MULTISORTBLTORDER((MULTISORTBLTORDER *)&v75, (struct _VDEV *)dhpdev, v54, v55);
  v15 = v76;
  pulXlate = 0LL;
  v65 = v76;
  if ( !v76
    || (MULTIBRUSH::MULTIBRUSH(
          (MULTIBRUSH *)v77,
          a8,
          *((_DWORD *)dhpdev + 4),
          (struct _VDEV *)dhpdev,
          *((struct _SURFOBJ **)dhpdev + 6),
          ((unsigned __int16)a10 ^ (unsigned __int16)(a10 >> 4)) & 0xF0F),
        pulXlate = 0LL,
        !v77[0]) )
  {
    v14 = 0;
    goto LABEL_65;
  }
  if ( a3 )
    rclBounds = a3->rclBounds;
  v53 = a1->fjBitmap & 0x40;
  do
  {
    v17 = v15[1];
    v18 = v54;
    v19 = v17;
    v64 = v15;
    v20 = v55;
    v66 = v17;
    while ( 1 )
    {
      v78.left = v18 + *(_DWORD *)(v19 + 28);
      v78.right = v18 + *(_DWORD *)(v19 + 36);
      v78.top = v20 + *(_DWORD *)(v19 + 32);
      v78.bottom = v20 + *(_DWORD *)(v19 + 40);
      if ( !bIntersect(v67, &v78, &v78) || !bIntersect(&v78, (const struct _RECTL *)(v17 + 28), &v78) )
        goto LABEL_60;
      *(_QWORD *)v59 = v19 + 72;
      LODWORD(v56) = v78.left - v18;
      pulXlate = 0LL;
      hsurf = 0LL;
      HIDWORD(v56) = v78.top - v20;
      v21 = *(_QWORD *)(v19 + 64);
      v22 = *(_QWORD *)(v17 + 64);
      v58 = v21;
      *(_QWORD *)v57 = v22;
      if ( v21 != v22 )
      {
        if ( !*(_DWORD *)(v19 + 20) )
          goto LABEL_60;
        v23 = *(_QWORD *)(v19 + 48);
        v24 = v78.right - v78.left;
        v25 = v78.bottom - v78.top;
        sizl.cx = v78.right - v78.left;
        v26 = *(_DWORD *)(v23 + 2124);
        sizl.cy = v78.bottom - v78.top;
        hsurf = (HSURF)EngCreateBitmap(sizl, 0, v26, 0, 0LL);
        v27 = EngLockSurface(hsurf);
        pulXlate = 0LL;
        pso = v27;
        v28 = v27;
        if ( v27 )
        {
          v29 = *(_QWORD *)(v23 + 2568);
          v79 = 0LL;
          v80 = v24;
          v81 = v25;
          if ( (*(_DWORD *)(v29 + 112) & 0x400) != 0 )
            v30 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v23 + 2856);
          else
            v30 = EngCopyBits;
          v31 = OffCopyBits(
                  (__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *))v30,
                  (LONG *)&gptlZero,
                  (__int64)v27,
                  *(int **)v59,
                  v58,
                  0LL,
                  0LL,
                  &v79,
                  &v56);
          v28 = pso;
          v14 &= v31;
          pulXlate = 0LL;
        }
        v56 = 0LL;
        v17 = v66;
        v21 = (__int64)v28;
        *(_QWORD *)v59 = &gptlZero;
        v22 = *(_QWORD *)v57;
        v58 = (__int64)v28;
      }
      if ( v21 )
      {
        v32 = *(_QWORD *)(v17 + 48);
        v33 = a4;
        v60 = 0LL;
        if ( v22 == v21 )
          goto LABEL_41;
        v34 = *(_DWORD *)(v17 + 24);
        if ( !v34 && !*(_DWORD *)(v19 + 24) )
          goto LABEL_41;
        v35 = *(_QWORD *)(*(_QWORD *)(v19 + 56) + 2568LL);
        v36 = *(_QWORD *)(v17 + 56);
        v68 = v35;
        v69 = *(_QWORD *)(v36 + 2568);
        v70 = ppalDefault;
        v37 = ppalDefault;
        if ( v34 && (*(_DWORD *)(v32 + 2188) & 0x100) != 0 )
        {
          v38 = DrvRealizeHalftonePalette((_QWORD *)v32, 0);
          v35 = v68;
          v37 = v38;
          pulXlate = 0LL;
        }
        v39 = 32 * (*(_DWORD *)(*(_QWORD *)(v19 + 56) + 2188LL) & 0x100);
        if ( a4 )
          iUniq = a4[1].iUniq;
        else
          iUniq = 0;
        if ( a4 )
          v41 = *(_DWORD *)&a4[1].iSrcType;
        else
          v41 = 0;
        if ( a4 )
          flXlate = a4[1].flXlate;
        else
          flXlate = 0;
        if ( a4 )
          v43 = a4[3].iUniq;
        else
          v43 = 0;
        if ( a4 )
          pulXlate = a4[2].pulXlate;
        if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                             (__int64 *)&v60,
                             (__int64)pulXlate,
                             v43,
                             *(_QWORD *)(v35 + 128),
                             *(_QWORD *)(v69 + 128),
                             (__int64)v70,
                             (__int64)v37,
                             flXlate,
                             v41,
                             iUniq,
                             v39) )
        {
          v33 = v60;
LABEL_41:
          if ( !a3 || bIntersect(&rclBounds, &v78, &a3->rclBounds) )
          {
            if ( a10 == 52428 )
            {
              v44 = *(_QWORD *)v57;
              v45 = *(_WORD *)(*(_QWORD *)v57 + 78LL);
              if ( v53 )
                *(_WORD *)(*(_QWORD *)v57 + 78LL) = v45 | 0x40;
              if ( (*(_DWORD *)(*(_QWORD *)(v32 + 2568) + 112LL) & 0x400) != 0 )
                v46 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v32 + 2856);
              else
                v46 = EngCopyBits;
              v14 &= OffCopyBits(
                       (__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *))v46,
                       (LONG *)(v17 + 72),
                       v44,
                       *(int **)v59,
                       v58,
                       a3,
                       (__int64)v33,
                       &v78,
                       &v56);
              *(_WORD *)(*(_QWORD *)v57 + 78LL) = v45;
            }
            else
            {
              v47 = *(_QWORD *)v57;
              v48 = (struct SURFACE *)SURFOBJ_TO_SURFACE_NOT_NULL(*(_QWORD *)v57);
              MULTIBRUSH::LoadElement((MULTIBRUSH *)v77, (struct _DISPSURF *)v17, v48);
              if ( (*(_DWORD *)(*(_QWORD *)(v32 + 2568) + 112LL) & 1) != 0 )
                v49 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(v32 + 2848);
              else
                v49 = EngBitBlt;
              v14 &= OffBitBlt(
                       (__int64 (__fastcall *)(__int64, __int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *, __int64, __int64, _DWORD *, int))v49,
                       (LONG *)(v17 + 72),
                       v47,
                       *(_DWORD **)v59,
                       v58,
                       v74,
                       a3,
                       (__int64)v33,
                       &v78,
                       &v56,
                       v73,
                       v72,
                       (_DWORD *)v71,
                       a10);
              MULTIBRUSH::StoreElement((MULTIBRUSH *)v77, *(_DWORD *)(v17 + 16));
            }
          }
          else
          {
            a3->rclBounds = rclBounds;
          }
        }
        else
        {
          v14 = 0;
        }
        EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v60);
      }
      v50 = hsurf;
      if ( hsurf )
      {
        EngUnlockSurface(pso);
        EngDeleteSurface(v50);
      }
      v20 = v55;
      v18 = v54;
LABEL_60:
      v51 = (_QWORD *)*v64;
      v64 = v51;
      if ( !v51 )
        break;
      v19 = v51[1];
    }
    v15 = (_QWORD *)*v65;
    v65 = v15;
  }
  while ( v15 );
  if ( a3 )
    a3->rclBounds = rclBounds;
LABEL_65:
  if ( v75 )
    Win32FreePool(v75, pulXlate);
  return v14;
}
