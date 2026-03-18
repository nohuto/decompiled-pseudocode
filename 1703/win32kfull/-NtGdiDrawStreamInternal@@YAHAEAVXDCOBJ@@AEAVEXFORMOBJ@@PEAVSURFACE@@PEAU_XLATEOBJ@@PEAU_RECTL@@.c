/*
 * XREFs of ?NtGdiDrawStreamInternal@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_RECTL@@4JPEADPEAU_DRAWSTREAMINFO@@@Z @ 0x1C00848B0
 * Callers:
 *     GreDrawStream @ 0x1C0086090 (GreDrawStream.c)
 * Callees:
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C0074ECC (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0075128 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bDpiScaledSurface@DC@@QEAAHXZ @ 0x1C007B510 (-bDpiScaledSurface@DC@@QEAAHXZ.c)
 *     bCvtPts1 @ 0x1C0084E98 (bCvtPts1.c)
 *     ?bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z @ 0x1C00954C4 (-bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtGdiDrawStreamInternal(
        DC **a1,
        struct EXFORMOBJ *a2,
        struct SURFACE *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct _RECTL *a6,
        int a7,
        char *a8,
        struct _DRAWSTREAMINFO *a9)
{
  unsigned int v9; // edi
  char *v10; // r10
  int v11; // r11d
  LONG right; // r12d
  LONG bottom; // r13d
  struct EXFORMOBJ *v14; // r8
  LONG top; // ebx
  LONG v16; // r14d
  LONG left; // r15d
  LONG v18; // esi
  DC *v19; // rax
  __int64 v20; // rcx
  int v21; // eax
  int v22; // eax
  int v23; // edx
  unsigned __int64 v24; // r14
  _DWORD *v25; // rbx
  LONG v26; // eax
  LONG v27; // eax
  __int64 v28; // r9
  __int64 v29; // r10
  __int64 v30; // rcx
  DC *v31; // rdx
  int *v32; // r10
  __int64 v33; // rcx
  __int32 v34; // r8d
  __int64 v35; // rax
  int v36; // r12d
  int v37; // r9d
  int v38; // r13d
  __int64 v39; // r10
  __int64 v40; // rcx
  XDCOBJ *v41; // r11
  __int32 v42; // r15d
  int v43; // esi
  int v44; // ebx
  int v45; // r14d
  int v46; // r10d
  char *v47; // r14
  __m128i v48; // xmm1
  struct REGION *v49; // rax
  int v50; // r10d
  __int64 v51; // rsi
  __int64 (__fastcall *v52)(__int64, __int64, __int64, __int64, int, int *, unsigned int, char *, struct _DRAWSTREAMINFO *); // rbx
  __int64 v53; // rdx
  int v54; // eax
  struct SURFACE *v55; // r15
  struct _SURFOBJ *v56; // rdx
  __int64 v57; // rdx
  LONG v61; // [rsp+60h] [rbp-91h]
  int v62; // [rsp+60h] [rbp-91h]
  __int64 v63; // [rsp+68h] [rbp-89h] BYREF
  LONG v64; // [rsp+70h] [rbp-81h]
  __int32 v65; // [rsp+80h] [rbp-71h]
  int v66; // [rsp+90h] [rbp-61h]
  __int64 v67; // [rsp+98h] [rbp-59h]
  char *v68; // [rsp+A0h] [rbp-51h]
  struct SURFACE *v69; // [rsp+A8h] [rbp-49h]
  struct _DRAWSTREAMINFO *v70; // [rsp+B0h] [rbp-41h]
  struct _XLATEOBJ *v71; // [rsp+B8h] [rbp-39h]
  __m128i v72; // [rsp+C0h] [rbp-31h] BYREF
  __m128i v73; // [rsp+D0h] [rbp-21h] BYREF

  v9 = 0;
  v10 = a8;
  v11 = a7;
  right = a5->right;
  bottom = a5->bottom;
  v72.m128i_i64[1] = __PAIR64__(bottom, right);
  v63 = 0LL;
  v69 = a3;
  v14 = a2;
  v71 = a4;
  v70 = a9;
  top = a6->top;
  v16 = a6->bottom;
  left = a6->left;
  v18 = a6->right;
  v72.m128i_i32[0] = a5->left;
  v65 = v72.m128i_i32[0];
  v19 = *a1;
  v72.m128i_i32[1] = a5->top;
  LODWORD(v67) = v72.m128i_i32[1];
  v66 = a7;
  v20 = *((_QWORD *)v19 + 64);
  v68 = a8;
  v73.m128i_i64[0] = __PAIR64__(top, left);
  v61 = top;
  LODWORD(v19) = *(_DWORD *)(v20 + 116);
  v73.m128i_i64[1] = __PAIR64__(v16, v18);
  v64 = v16;
  if ( (((unsigned __int8)v19 & 8) != 0 || *(_QWORD *)(v20 + 232)) && (*(_WORD *)(v20 + 102) & 0x200) != 0 )
    goto LABEL_92;
  v21 = *(_DWORD *)(v20 + 112);
  if ( (v21 & 0x800) != 0 )
  {
    v22 = UserSurfaceAccessCheck(*(_QWORD *)(v20 + 584), 512LL, a2, a6);
  }
  else
  {
    if ( (v21 & 0x10000000) == 0 )
      goto LABEL_10;
    v22 = UserScreenAccessCheck(v20, 512LL, a2, a6);
  }
  if ( !v22 )
  {
LABEL_92:
    EngSetLastError(5u);
    return v9;
  }
  bottom = v72.m128i_i32[3];
  right = v72.m128i_i32[2];
  v14 = a2;
  v10 = v68;
  v11 = v66;
  LODWORD(v67) = v72.m128i_i32[1];
  v65 = v72.m128i_i32[0];
LABEL_10:
  v23 = *(_DWORD *)(*(_QWORD *)v14 + 32LL);
  if ( (*(_BYTE *)(*(_QWORD *)v14 + 32LL) & 1) == 0 )
    return v9;
  if ( (v23 & 2) != 0 )
  {
    if ( (v23 & 0x43) != 0x43 )
    {
      bCvtPts1(*(_QWORD *)v14, &v63, 1LL);
      v14 = a2;
    }
  }
  else
  {
    v24 = (unsigned __int64)&v10[v11];
    if ( (unsigned __int64)v10 < v24 )
    {
      v25 = v10 + 36;
      while ( *(v25 - 9) == 9 )
      {
        EXFORMOBJ::bXform(v14, (struct ERECTL *)(v25 - 8));
        if ( (unsigned int)DC::bDpiScaledSurface(*a1) )
          *v25 &= ~0x20u;
        v14 = a2;
        v25 += 15;
        if ( (unsigned __int64)(v25 - 9) >= v24 )
        {
          top = v61;
          goto LABEL_21;
        }
      }
      return v9;
    }
LABEL_21:
    v16 = v64;
  }
  if ( (*(_BYTE *)(*(_QWORD *)v14 + 32LL) & 0x43) != 0x43 )
  {
    bCvtPts1(*(_QWORD *)v14, &v73, 2LL);
    v14 = a2;
    v16 = v73.m128i_i32[3];
    v18 = v73.m128i_i32[2];
    top = v73.m128i_i32[1];
    left = v73.m128i_i32[0];
  }
  if ( *((_DWORD *)v14 + 3) )
  {
    ++left;
    ++v18;
  }
  if ( left > v18 )
  {
    v26 = left;
    left = v18;
    v18 = v26;
  }
  if ( top > v16 )
  {
    v27 = top;
    top = v16;
    v16 = v27;
  }
  if ( v65 != right )
  {
    v28 = (int)v67;
    if ( (_DWORD)v67 != bottom )
    {
      v29 = 1432LL;
      v30 = 1432LL;
      v31 = *a1;
      if ( (*((_BYTE *)*a1 + 40) & 1) != 0 )
        v30 = 1440LL;
      v67 = *((_QWORD *)*a1 + 64);
      LODWORD(v63) = *(_DWORD *)((char *)v31 + v30) + v63;
      HIDWORD(v63) += *(_DWORD *)((char *)v31 + v30 + 4);
      if ( (*((_BYTE *)v31 + 40) & 1) != 0 )
        v29 = 1440LL;
      v32 = (int *)((char *)v31 + v29);
      v62 = *v32;
      if ( (unsigned __int64)(v65 + (__int64)*v32 + 0x80000000LL) <= 0xFFFFFFFF
        && (unsigned __int64)(v62 + (__int64)right + 0x80000000LL) <= 0xFFFFFFFF )
      {
        v33 = v32[1];
        if ( (unsigned __int64)(v33 + v28 + 0x80000000LL) <= 0xFFFFFFFF
          && (unsigned __int64)(v33 + bottom + 0x80000000LL) <= 0xFFFFFFFF )
        {
          v34 = v62 + v65;
          v72.m128i_i32[0] = v62 + v65;
          v35 = 1432LL;
          v36 = *v32 + right;
          v37 = v32[1] + v28;
          *(__int64 *)((char *)v72.m128i_i64 + 4) = __PAIR64__(v36, v37);
          v38 = v32[1] + bottom;
          v72.m128i_i32[3] = v38;
          if ( (*((_BYTE *)v31 + 40) & 1) != 0 )
            v35 = 1440LL;
          v39 = *(int *)((char *)v31 + v35);
          if ( (unsigned __int64)(v39 + left + 0x80000000LL) <= 0xFFFFFFFF
            && (unsigned __int64)(v39 + v18 + 0x80000000LL) <= 0xFFFFFFFF )
          {
            v40 = *(int *)((char *)v31 + v35 + 4);
            if ( (unsigned __int64)(v40 + top + 0x80000000LL) <= 0xFFFFFFFF )
            {
              v41 = (XDCOBJ *)a1;
              if ( (unsigned __int64)(v40 + v16 + 0x80000000LL) <= 0xFFFFFFFF )
              {
                v42 = v39 + left;
                v43 = v39 + v18;
                v44 = v40 + top;
                v45 = v40 + v16;
                if ( v34 > v42 || v36 < v43 || v37 > v44 || (v46 = 1, v38 < v45) )
                  v46 = 0;
                if ( v46 != 1
                  || *((_DWORD *)v31 + 354) > v42
                  || *((_DWORD *)v31 + 356) < v43
                  || *((_DWORD *)v31 + 355) > v44
                  || *((_DWORD *)v31 + 357) < v45 )
                {
                  v47 = (char *)v31 + 2200;
                  v49 = XDCOBJ::prgnEffRao(a1);
                  XCLIPOBJ::vSetup((XCLIPOBJ *)v47, v49, (struct ERECTL *)&v72, v50);
                  v48 = *(__m128i *)(v47 + 4);
                  v41 = (XDCOBJ *)a1;
                  v72 = v48;
                  v36 = v48.m128i_i32[2];
                  v34 = v48.m128i_i32[0];
                }
                else
                {
                  if ( *((_DWORD *)v31 + 354) > v34 )
                    v34 = *((_DWORD *)v31 + 354);
                  v72.m128i_i32[0] = v34;
                  if ( *((_DWORD *)v31 + 355) > v37 )
                    v37 = *((_DWORD *)v31 + 355);
                  v72.m128i_i32[1] = v37;
                  if ( *((_DWORD *)v31 + 356) < v36 )
                    v36 = *((_DWORD *)v31 + 356);
                  v72.m128i_i32[2] = v36;
                  if ( *((_DWORD *)v31 + 357) < v38 )
                    v38 = *((_DWORD *)v31 + 357);
                  v72.m128i_i32[3] = v38;
                  if ( v36 < v34 )
                    return 1;
                  v47 = 0LL;
                  if ( v38 < v37 )
                    v72.m128i_i32[1] = v38;
                  v48 = v72;
                }
                if ( v34 != v36 && v48.m128i_i32[1] != _mm_srli_si128(v48, 8).m128i_i32[1] )
                {
                  if ( (*(_DWORD *)(*(_QWORD *)v41 + 36LL) & 0xE0) != 0 )
                  {
                    v73 = v48;
                    XDCOBJ::vAccumulateTight(v41, v31, &v73);
                    v41 = (XDCOBJ *)a1;
                  }
                  v51 = v67;
                  v52 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64, int, int *, unsigned int, char *, struct _DRAWSTREAMINFO *))EngDrawStream;
                  ++*(_DWORD *)(v67 + 92);
                  v53 = *(_QWORD *)(v51 + 48);
                  if ( *(_QWORD *)(v53 + 3424) )
                    v52 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, int, int *, unsigned int, char *, struct _DRAWSTREAMINFO *))(v53 + 3424);
                  if ( (*(_DWORD *)(*(_QWORD *)v41 + 36LL) & 0x200) == 0
                    || !v53
                    || (v54 = 1, (*(_DWORD *)(v53 + 32) & 0x20000) == 0) )
                  {
                    v54 = 0;
                  }
                  if ( *(int *)(v51 + 112) >= 0 && (!v54 || *(_WORD *)(v51 + 100) != 3) )
                    v52 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64, int, int *, unsigned int, char *, struct _DRAWSTREAMINFO *))EngDrawStream;
                  v55 = v69;
                  v73.m128i_i64[0] = 0LL;
                  v56 = 0LL;
                  if ( v69 )
                    v56 = (struct _SURFOBJ *)((char *)v69 + 24);
                  SURFREFVIEW::bMap((SURFREFVIEW *)&v73, v56);
                  if ( v73.m128i_i64[0] )
                  {
                    v57 = 0LL;
                    if ( v55 )
                      v57 = (__int64)v55 + 24;
                    if ( (unsigned int)v52(
                                         v51 + 24,
                                         v57,
                                         (__int64)v47,
                                         (__int64)v71,
                                         (int)&v72,
                                         (int *)&v63,
                                         v66,
                                         v68,
                                         v70) )
                      v9 = 1;
                  }
                  SURFREFVIEW::bUnMap((SURFREFVIEW *)&v73);
                  return v9;
                }
                return 1;
              }
            }
          }
        }
      }
    }
  }
  return v9;
}
