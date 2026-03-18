/*
 * XREFs of ?bRectangleMesh@@YAHPEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAU_GRADIENT_RECT@@KKPEAU_RECTL@@PEAU_POINTL@@@Z @ 0x1C00ABBD4
 * Callers:
 *     EngGradientFill @ 0x1C00AB7F0 (EngGradientFill.c)
 * Callees:
 *     ?MDiv64@@YA_J_J00@Z @ 0x1C00ABFE0 (-MDiv64@@YA_J_J00@Z.c)
 *     ?bCalcGradientRectOffsets@@YAHPEAU_GRADIENTRECTDATA@@@Z @ 0x1C00AC028 (-bCalcGradientRectOffsets@@YAHPEAU_GRADIENTRECTDATA@@@Z.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C00AC408 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     ?bDetermineTriangleFillRoutine@@YAHPEAVSURFACE@@PEAVXEPALOBJ@@PEAP6AX0PEAU_TRIANGLEDATA@@@ZPEAP6AX0PEAU_GRADIENTRECTDATA@@@Z@Z @ 0x1C00AC438 (-bDetermineTriangleFillRoutine@@YAHPEAVSURFACE@@PEAVXEPALOBJ@@PEAP6AX0PEAU_TRIANGLEDATA@@@ZPEAP6.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall bRectangleMesh(
        struct SURFACE *a1,
        struct _XLATEOBJ *a2,
        struct _TRIVERTEX *a3,
        int a4,
        struct _GRADIENT_RECT *a5,
        unsigned int a6,
        unsigned int a7,
        struct _RECTL *a8,
        struct _POINTL *a9)
{
  int v9; // r15d
  struct _TRIVERTEX *v10; // rbx
  unsigned int v13; // r12d
  struct _GRADIENT_RECT *v14; // r11
  __int64 v15; // rdi
  void (__fastcall *v16)(struct SURFACE *, struct _GRADIENTRECTDATA *); // r13
  unsigned int UpperLeft; // edx
  unsigned int LowerRight; // ecx
  struct _TRIVERTEX *v19; // rdx
  struct _TRIVERTEX *v20; // r8
  LONG x; // ecx
  int v22; // r9d
  unsigned __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rbx
  __int64 v26; // r8
  __int64 v27; // r10
  __int64 v28; // r8
  __int64 v29; // r11
  __int64 v30; // r8
  LONG y; // eax
  LONG v33; // ecx
  __int64 v34; // rbx
  __int64 v35; // r8
  __int64 v36; // r10
  __int64 v37; // r8
  __int64 v38; // r11
  __int64 v39; // r8
  __int64 v40; // [rsp+30h] [rbp-168h] BYREF
  struct _GRADIENT_RECT *v41; // [rsp+38h] [rbp-160h]
  struct _TRIVERTEX *v42; // [rsp+40h] [rbp-158h]
  void (*v43[3])(struct SURFACE *, struct _GRADIENTRECTDATA *); // [rsp+48h] [rbp-150h] BYREF
  __int64 v44; // [rsp+60h] [rbp-138h]
  void (*v45)(struct SURFACE *, struct _TRIANGLEDATA *); // [rsp+68h] [rbp-130h] BYREF
  __int128 v46; // [rsp+70h] [rbp-128h] BYREF
  LONG v47; // [rsp+80h] [rbp-118h]
  LONG v48; // [rsp+84h] [rbp-114h]
  LONG v49; // [rsp+88h] [rbp-110h]
  LONG v50; // [rsp+8Ch] [rbp-10Ch]
  unsigned __int64 v51; // [rsp+A0h] [rbp-F8h]
  unsigned __int64 v52; // [rsp+A8h] [rbp-F0h]
  unsigned __int64 v53; // [rsp+B0h] [rbp-E8h]
  unsigned __int64 v54; // [rsp+B8h] [rbp-E0h]
  __int128 v55; // [rsp+C0h] [rbp-D8h]
  __int128 v56; // [rsp+D0h] [rbp-C8h]
  __int128 v57; // [rsp+E0h] [rbp-B8h]
  __int128 v58; // [rsp+F0h] [rbp-A8h]
  __int64 v59; // [rsp+100h] [rbp-98h]
  unsigned int v60; // [rsp+108h] [rbp-90h]
  struct _XLATEOBJ *v61; // [rsp+110h] [rbp-88h]
  __int64 *v62; // [rsp+118h] [rbp-80h]
  struct _TRIVERTEX v63; // [rsp+130h] [rbp-68h] BYREF
  struct _TRIVERTEX v64; // [rsp+140h] [rbp-58h] BYREF

  v9 = a4;
  v10 = a3;
  v42 = a3;
  v43[2] = (void (*)(struct SURFACE *, struct _GRADIENTRECTDATA *))a1;
  v43[1] = (void (*)(struct SURFACE *, struct _GRADIENTRECTDATA *))a3;
  v41 = a5;
  v13 = 1;
  v40 = *((_QWORD *)a1 + 16);
  if ( v40 || (v44 = *((_QWORD *)a1 + 6), (v40 = *(_QWORD *)(v44 + 1824)) != 0) )
  {
    bDetermineTriangleFillRoutine(a1, (struct XEPALOBJ *)&v40, &v45, v43);
    v61 = a2;
    v62 = &v40;
    v59 = (__int64)*a9;
    v46 = (__int128)*a8;
    v15 = 0LL;
    v16 = (void (__fastcall *)(struct SURFACE *, struct _GRADIENTRECTDATA *))v43[0];
    while ( (unsigned int)v15 < a6 )
    {
      UpperLeft = v14[v15].UpperLeft;
      LowerRight = v14[v15].LowerRight;
      if ( UpperLeft > v9 - 1 || LowerRight > v9 - 1 )
        return 0;
      v64 = v10[UpperLeft];
      v63 = v10[LowerRight];
      v19 = &v64;
      v20 = &v63;
      if ( a7 )
      {
        if ( v64.y > v63.y )
        {
          v19 = &v63;
          v20 = &v64;
        }
        x = v20->x;
        if ( v19->x > v20->x )
        {
          v20->x = v19->x;
          v19->x = x;
        }
      }
      else
      {
        if ( v64.x > v63.x )
        {
          v19 = &v63;
          v20 = &v64;
        }
        y = v19->y;
        v33 = v20->y;
        if ( y > v33 )
        {
          v20->y = y;
          v19->y = v33;
        }
      }
      v47 = v19->x;
      v48 = v19->y;
      v49 = v20->x;
      v50 = v20->y;
      v60 = a7;
      v22 = v50 - v48;
      if ( v49 - v47 > 0 && v22 > 0 )
      {
        v51 = (unsigned __int64)v19->Red << 40;
        v52 = (unsigned __int64)v19->Green << 40;
        v53 = (unsigned __int64)v19->Blue << 40;
        v23 = (unsigned __int64)v19->Alpha << 40;
        v54 = v23;
        v24 = ((unsigned __int64)v20->Red << 40) - v51;
        if ( a7 )
        {
          v57 = 0LL;
          v58 = 0LL;
          v25 = ((unsigned __int64)v20->Alpha << 40) - v23;
          *(_QWORD *)&v55 = MDiv64(v24, 1LL, v22);
          *((_QWORD *)&v55 + 1) = MDiv64(v27, 1LL, v26);
          *(_QWORD *)&v56 = MDiv64(v29, 1LL, v28);
          *((_QWORD *)&v56 + 1) = MDiv64(v25, 1LL, v30);
        }
        else
        {
          v55 = 0LL;
          v56 = 0LL;
          v34 = ((unsigned __int64)v20->Alpha << 40) - v23;
          *(_QWORD *)&v57 = MDiv64(v24, 1LL, v49 - v47);
          *((_QWORD *)&v57 + 1) = MDiv64(v36, 1LL, v35);
          *(_QWORD *)&v58 = MDiv64(v38, 1LL, v37);
          *((_QWORD *)&v58 + 1) = MDiv64(v34, 1LL, v39);
        }
        if ( (unsigned int)bCalcGradientRectOffsets((struct _GRADIENTRECTDATA *)&v46) )
        {
          if ( (unsigned int)bUMPDSecurityGateEx() && !v61 && (v16 == vFillGRectDIB4 || v16 == vFillGRectDIB8) )
          {
            if ( gfUMPDDebug )
              DbgPrint(
                "windows\\core\\ntgdi\\gre\\windows\\trimesh.cxx:%d:bRectangleMesh:pfnG references NULL grData.pxlo.\n",
                1958);
            return 1LL;
          }
          v16(a1, (struct _GRADIENTRECTDATA *)&v46);
          v14 = v41;
          v10 = v42;
        }
        else
        {
          v14 = v41;
          v10 = v42;
        }
      }
      v15 = (unsigned int)(v15 + 1);
      v9 = a4;
    }
  }
  return v13;
}
