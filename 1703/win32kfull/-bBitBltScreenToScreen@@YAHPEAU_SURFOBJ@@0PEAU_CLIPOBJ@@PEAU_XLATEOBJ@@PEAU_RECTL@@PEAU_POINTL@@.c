/*
 * XREFs of ?bBitBltScreenToScreen@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C02848C0
 * Callers:
 *     ?MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C0280600 (-MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSH.c)
 * Callees:
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C0086D44 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0086EE0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     OffBitBlt @ 0x1C00A5454 (OffBitBlt.c)
 *     OffCopyBits @ 0x1C00A5D08 (OffCopyBits.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z @ 0x1C024A738 (-DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z.c)
 *     ??0MULTIBRUSH@@QEAA@PEAU_BRUSHOBJ@@JPEAU_VDEV@@PEAU_SURFOBJ@@H@Z @ 0x1C027F980 (--0MULTIBRUSH@@QEAA@PEAU_BRUSHOBJ@@JPEAU_VDEV@@PEAU_SURFOBJ@@H@Z.c)
 *     ??0MULTISORTBLTORDER@@QEAA@PEAU_VDEV@@JJ@Z @ 0x1C027FAE0 (--0MULTISORTBLTORDER@@QEAA@PEAU_VDEV@@JJ@Z.c)
 *     ?LoadElement@MULTIBRUSH@@QEAAXPEAU_DISPSURF@@PEAVSURFACE@@@Z @ 0x1C027FDCC (-LoadElement@MULTIBRUSH@@QEAAXPEAU_DISPSURF@@PEAVSURFACE@@@Z.c)
 *     ?StoreElement@MULTIBRUSH@@QEAAXJ@Z @ 0x1C0284350 (-StoreElement@MULTIBRUSH@@QEAAXJ@Z.c)
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
  __int64 v16; // r14
  int v17; // ebx
  __int64 v18; // rdi
  int v19; // esi
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rbx
  int v23; // esi
  int v24; // r14d
  ULONG v25; // r8d
  SURFOBJ *v26; // r8
  __int64 v27; // rcx
  bool v28; // zf
  BOOL (__stdcall *v29)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rcx
  int v30; // eax
  struct _XLATEOBJ *v31; // rsi
  __int64 v32; // rbx
  int v33; // ecx
  __int64 v34; // r9
  __int64 v35; // rax
  struct PALETTE *v36; // rsi
  struct PALETTE *v37; // rax
  int v38; // r10d
  ULONG iUniq; // edi
  int v40; // r11d
  FLONG flXlate; // ecx
  ULONG v42; // r8d
  ULONG *pulXlate; // rdx
  __int64 v44; // rdx
  __int16 v45; // di
  BOOL (__stdcall *v46)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rcx
  __int64 v47; // rdi
  struct SURFACE *v48; // rax
  BOOL (__stdcall *v49)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // rcx
  HSURF v50; // rbx
  _QWORD *v51; // rax
  int v53; // [rsp+70h] [rbp-90h]
  int v54; // [rsp+74h] [rbp-8Ch]
  __int64 v55; // [rsp+78h] [rbp-88h] BYREF
  int v56[2]; // [rsp+80h] [rbp-80h]
  __int64 v57; // [rsp+88h] [rbp-78h]
  int v58[2]; // [rsp+90h] [rbp-70h]
  struct _XLATEOBJ *v59; // [rsp+98h] [rbp-68h] BYREF
  SURFOBJ *pso; // [rsp+A0h] [rbp-60h]
  SIZEL sizl; // [rsp+A8h] [rbp-58h]
  HSURF hsurf; // [rsp+B0h] [rbp-50h]
  _QWORD *v63; // [rsp+B8h] [rbp-48h]
  _QWORD *v64; // [rsp+C0h] [rbp-40h]
  __int64 v65; // [rsp+C8h] [rbp-38h]
  const struct _RECTL *v66; // [rsp+D0h] [rbp-30h]
  __int64 v67; // [rsp+D8h] [rbp-28h]
  __int64 v68; // [rsp+E0h] [rbp-20h]
  struct PALETTE *v69; // [rsp+E8h] [rbp-18h]
  unsigned __int64 v70; // [rsp+F0h] [rbp-10h]
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
  v14 = 1;
  pso = 0LL;
  v74 = (__int64)a2;
  v66 = a5;
  v73 = (__int64)a7;
  v54 = a5->top - a6->y;
  v53 = a5->left - a6->x;
  v72 = (__int64)a8;
  v71 = (__int64)a9;
  MULTISORTBLTORDER::MULTISORTBLTORDER((MULTISORTBLTORDER *)&v75, (struct _VDEV *)dhpdev, v53, v54);
  v15 = v76;
  v64 = v76;
  if ( !v76
    || (MULTIBRUSH::MULTIBRUSH(
          (MULTIBRUSH *)v77,
          a8,
          *((_DWORD *)dhpdev + 4),
          (struct _VDEV *)dhpdev,
          *((struct _SURFOBJ **)dhpdev + 6),
          ((unsigned __int16)a10 ^ (unsigned __int16)(a10 >> 4)) & 0xF0F),
        !v77[0]) )
  {
    v14 = 0;
    goto LABEL_66;
  }
  if ( a3 )
    rclBounds = a3->rclBounds;
  v70 = ((unsigned __int64)LOBYTE(a1->fjBitmap) >> 6) & 1;
  do
  {
    v16 = v15[1];
    v17 = v53;
    v18 = v16;
    v63 = v15;
    v19 = v54;
    v65 = v16;
    while ( 1 )
    {
      v78.left = v17 + *(_DWORD *)(v18 + 28);
      v78.right = v17 + *(_DWORD *)(v18 + 36);
      v78.top = v19 + *(_DWORD *)(v18 + 32);
      v78.bottom = v19 + *(_DWORD *)(v18 + 40);
      if ( !bIntersect(v66, &v78, &v78) || !bIntersect(&v78, (const struct _RECTL *)(v16 + 28), &v78) )
        goto LABEL_61;
      hsurf = 0LL;
      LODWORD(v55) = v78.left - v17;
      *(_QWORD *)v58 = v18 + 72;
      HIDWORD(v55) = v78.top - v19;
      v20 = *(_QWORD *)(v18 + 64);
      v21 = *(_QWORD *)(v16 + 64);
      v57 = v20;
      *(_QWORD *)v56 = v21;
      if ( v20 != v21 )
      {
        if ( !*(_DWORD *)(v18 + 20) )
          goto LABEL_61;
        v22 = *(_QWORD *)(v18 + 48);
        v23 = v78.right - v78.left;
        v24 = v78.bottom - v78.top;
        v25 = *(_DWORD *)(v22 + 2124);
        sizl.cx = v78.right - v78.left;
        sizl.cy = v78.bottom - v78.top;
        hsurf = (HSURF)EngCreateBitmap(sizl, 0, v25, 0, 0LL);
        pso = EngLockSurface(hsurf);
        v26 = pso;
        if ( pso )
        {
          v27 = *(_QWORD *)(v22 + 2568);
          v79 = 0LL;
          v80 = v23;
          v28 = (*(_DWORD *)(v27 + 112) & 0x400) == 0;
          v81 = v24;
          if ( v28 )
            v29 = EngCopyBits;
          else
            v29 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v22 + 2856);
          v30 = OffCopyBits(
                  (__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *))v29,
                  (int *)&gptlZero,
                  (__int64)pso,
                  *(int **)v58,
                  v57,
                  0LL,
                  0LL,
                  &v79,
                  &v55);
          v26 = pso;
          v14 &= v30;
        }
        v55 = 0LL;
        v20 = (__int64)v26;
        v16 = v65;
        *(_QWORD *)v58 = &gptlZero;
        v21 = *(_QWORD *)v56;
        v57 = (__int64)v26;
      }
      if ( v20 )
      {
        v59 = 0LL;
        v31 = a4;
        v32 = *(_QWORD *)(v16 + 48);
        if ( v21 == v20 )
          goto LABEL_42;
        v33 = *(_DWORD *)(v16 + 24);
        if ( !v33 && !*(_DWORD *)(v18 + 24) )
          goto LABEL_42;
        v34 = *(_QWORD *)(*(_QWORD *)(v18 + 56) + 2568LL);
        v35 = *(_QWORD *)(v16 + 56);
        v67 = v34;
        v68 = *(_QWORD *)(v35 + 2568);
        v69 = ppalDefault;
        v36 = ppalDefault;
        if ( v33 && (*(_DWORD *)(v32 + 2188) & 0x100) != 0 )
        {
          v37 = DrvRealizeHalftonePalette((_QWORD *)v32, 0);
          v34 = v67;
          v36 = v37;
        }
        v38 = 32 * (*(_DWORD *)(*(_QWORD *)(v18 + 56) + 2188LL) & 0x100);
        if ( a4 )
          iUniq = a4[1].iUniq;
        else
          iUniq = 0;
        if ( a4 )
          v40 = *(_DWORD *)&a4[1].iSrcType;
        else
          v40 = 0;
        if ( a4 )
          flXlate = a4[1].flXlate;
        else
          flXlate = 0;
        if ( a4 )
          v42 = a4[3].iUniq;
        else
          v42 = 0;
        if ( a4 )
          pulXlate = a4[2].pulXlate;
        else
          pulXlate = 0LL;
        if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                             (__int64 *)&v59,
                             (__int64)pulXlate,
                             v42,
                             *(_QWORD *)(v34 + 128),
                             *(_QWORD *)(v68 + 128),
                             (__int64)v69,
                             (__int64)v36,
                             flXlate,
                             v40,
                             iUniq,
                             v38) )
        {
          v31 = v59;
LABEL_42:
          if ( !a3 || bIntersect(&rclBounds, &v78, &a3->rclBounds) )
          {
            if ( a10 == 52428 )
            {
              v44 = *(_QWORD *)v56;
              v45 = *(_WORD *)(*(_QWORD *)v56 + 78LL);
              if ( v70 )
                *(_WORD *)(*(_QWORD *)v56 + 78LL) = v45 | 0x40;
              if ( (*(_DWORD *)(*(_QWORD *)(v32 + 2568) + 112LL) & 0x400) != 0 )
                v46 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v32 + 2856);
              else
                v46 = EngCopyBits;
              v14 &= OffCopyBits(
                       (__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *))v46,
                       (int *)(v16 + 72),
                       v44,
                       *(int **)v58,
                       v57,
                       a3,
                       (__int64)v31,
                       &v78,
                       &v55);
              *(_WORD *)(*(_QWORD *)v56 + 78LL) = v45;
            }
            else
            {
              v47 = *(_QWORD *)v56;
              v48 = (struct SURFACE *)SURFOBJ_TO_SURFACE_NOT_NULL(*(_QWORD *)v56);
              MULTIBRUSH::LoadElement((MULTIBRUSH *)v77, (struct _DISPSURF *)v16, v48);
              if ( (*(_DWORD *)(*(_QWORD *)(v32 + 2568) + 112LL) & 1) != 0 )
                v49 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(v32 + 2848);
              else
                v49 = EngBitBlt;
              v14 &= OffBitBlt(
                       (__int64 (__fastcall *)(__int64, __int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *, __int64, __int64, _DWORD *, int))v49,
                       (int *)(v16 + 72),
                       v47,
                       *(_DWORD **)v58,
                       v57,
                       v74,
                       a3,
                       (__int64)v31,
                       &v78,
                       &v55,
                       v73,
                       v72,
                       (_DWORD *)v71,
                       a10);
              MULTIBRUSH::StoreElement((MULTIBRUSH *)v77, *(_DWORD *)(v16 + 16));
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
        EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v59);
      }
      v50 = hsurf;
      if ( hsurf )
      {
        EngUnlockSurface(pso);
        EngDeleteSurface(v50);
      }
      v19 = v54;
      v17 = v53;
LABEL_61:
      v51 = (_QWORD *)*v63;
      v63 = v51;
      if ( !v51 )
        break;
      v18 = v51[1];
    }
    v15 = (_QWORD *)*v64;
    v64 = v15;
  }
  while ( v15 );
  if ( a3 )
    a3->rclBounds = rclBounds;
LABEL_66:
  if ( v75 )
    Win32FreePool(v75);
  return v14;
}
