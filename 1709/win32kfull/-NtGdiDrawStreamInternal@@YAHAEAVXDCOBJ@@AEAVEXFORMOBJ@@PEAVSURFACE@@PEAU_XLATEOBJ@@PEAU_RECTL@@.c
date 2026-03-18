/*
 * XREFs of ?NtGdiDrawStreamInternal@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_RECTL@@4JPEADPEAU_DRAWSTREAMINFO@@@Z @ 0x1C000EEB0
 * Callers:
 *     GreDrawStream @ 0x1C000E420 (GreDrawStream.c)
 * Callees:
 *     bCvtPts1 @ 0x1C000F444 (bCvtPts1.c)
 *     ?bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z @ 0x1C001B860 (-bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z.c)
 *     ?bDpiScaledSurface@DC@@QEAAHXZ @ 0x1C0027FD0 (-bDpiScaledSurface@DC@@QEAAHXZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C002BF34 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C002C160 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtGdiDrawStreamInternal(
        struct XDCOBJ *a1,
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
  int v10; // r10d
  LONG left; // r12d
  LONG right; // ebx
  LONG bottom; // ecx
  __int64 v15; // rax
  __int64 v16; // rcx
  char *v17; // r8
  LONG v18; // r13d
  LONG top; // r14d
  LONG v20; // esi
  LONG v21; // r15d
  int v22; // eax
  EXFORMOBJ *v23; // rcx
  int v24; // eax
  DC *v25; // rax
  char *v26; // rdx
  char *v27; // r10
  __int64 v28; // r11
  __int64 v29; // rdx
  __int32 v30; // r12d
  int v31; // ebx
  int v32; // r9d
  int v33; // r8d
  char *v34; // r11
  __int64 v35; // r10
  struct ECLIPOBJ *v36; // rdx
  __int32 v37; // r13d
  int v38; // esi
  int v39; // r14d
  int v40; // r15d
  BOOL v41; // r10d
  __int32 v42; // ecx
  XDCOBJ *v43; // r14
  char *v44; // r15
  __m128i v45; // xmm1
  unsigned __int64 v46; // rsi
  __int64 (__fastcall *v47)(int, int, int, int, int, __int64, int, __int64, __int64); // rbx
  __int64 v48; // rax
  BOOL v49; // eax
  struct SURFACE *v50; // r14
  struct _SURFOBJ *v51; // rdx
  char *v52; // rdx
  int v54; // eax
  struct REGION *v55; // rax
  int v56; // r10d
  char *v57; // rdx
  int v58; // eax
  char *v59; // rdx
  LONG v60; // eax
  LONG v61; // eax
  LONG v62; // [rsp+50h] [rbp-91h]
  __int64 v63; // [rsp+58h] [rbp-89h] BYREF
  __int32 v64; // [rsp+60h] [rbp-81h]
  int v65; // [rsp+64h] [rbp-7Dh]
  XDCOBJ *v66; // [rsp+68h] [rbp-79h]
  EXFORMOBJ *v67; // [rsp+70h] [rbp-71h]
  char *v68; // [rsp+78h] [rbp-69h]
  unsigned __int64 v69; // [rsp+80h] [rbp-61h]
  char *v70; // [rsp+88h] [rbp-59h]
  struct SURFACE *v71; // [rsp+90h] [rbp-51h]
  struct _DRAWSTREAMINFO *v72; // [rsp+98h] [rbp-49h]
  struct _XLATEOBJ *v73; // [rsp+A0h] [rbp-41h]
  __m128i v74; // [rsp+B0h] [rbp-31h] BYREF
  __m128i v75; // [rsp+C0h] [rbp-21h] BYREF

  v9 = 0;
  v10 = a7;
  v66 = a1;
  v67 = a2;
  left = a5->left;
  right = a5->right;
  v72 = a9;
  v74.m128i_i32[1] = a5->top;
  v64 = v74.m128i_i32[1];
  bottom = a5->bottom;
  v15 = *(_QWORD *)a1;
  v74.m128i_i32[0] = left;
  v74.m128i_i64[1] = __PAIR64__(bottom, right);
  v63 = 0LL;
  v62 = bottom;
  v16 = *(_QWORD *)(v15 + 512);
  v73 = a4;
  v71 = a3;
  LODWORD(v15) = *(_DWORD *)(v16 + 116);
  v17 = a8;
  v18 = a6->left;
  top = a6->top;
  v20 = a6->right;
  v21 = a6->bottom;
  v65 = a7;
  v70 = a8;
  v75.m128i_i64[0] = __PAIR64__(top, v18);
  v75.m128i_i64[1] = __PAIR64__(v21, v20);
  if ( ((v15 & 8) != 0 || *(_QWORD *)(v16 + 232)) && (*(_WORD *)(v16 + 102) & 0x200) != 0 )
    goto LABEL_79;
  v22 = *(_DWORD *)(v16 + 112);
  if ( (v22 & 0x800) != 0 )
  {
    v54 = UserSurfaceAccessCheck(*(_QWORD *)(v16 + 584), 512LL);
  }
  else
  {
    if ( (v22 & 0x10000000) == 0 )
      goto LABEL_5;
    v54 = UserScreenAccessCheck(v16, 512LL);
  }
  if ( !v54 )
  {
LABEL_79:
    EngSetLastError(5u);
    return v9;
  }
  right = v74.m128i_i32[2];
  left = v74.m128i_i32[0];
  v17 = v70;
  v10 = v65;
  v62 = v74.m128i_i32[3];
  v64 = v74.m128i_i32[1];
LABEL_5:
  v23 = v67;
  v24 = *(_DWORD *)(*(_QWORD *)v67 + 32LL);
  if ( (v24 & 1) == 0 )
    return v9;
  if ( (v24 & 2) != 0 )
  {
    if ( (v24 & 0x43) != 0x43 )
      bCvtPts1(*(_QWORD *)v67, &v63, 1LL);
  }
  else
  {
    v69 = (unsigned __int64)&v17[v10];
    if ( (unsigned __int64)v17 < v69 )
    {
      v57 = v17 + 36;
      v68 = v17 + 36;
      while ( *((_DWORD *)v57 - 9) == 9 )
      {
        EXFORMOBJ::bXform(v23, (struct ERECTL *)(v57 - 32));
        v58 = DC::bDpiScaledSurface(*(DC **)v66);
        v59 = v68;
        if ( v58 )
          *(_DWORD *)v68 &= ~0x20u;
        v23 = v67;
        v57 = v59 + 60;
        v68 = v57;
        if ( (unsigned __int64)(v57 - 36) >= v69 )
          goto LABEL_9;
      }
      return v9;
    }
  }
LABEL_9:
  if ( (*(_BYTE *)(*(_QWORD *)v67 + 32LL) & 0x43) != 0x43 )
  {
    bCvtPts1(*(_QWORD *)v67, &v75, 2LL);
    v21 = v75.m128i_i32[3];
    v20 = v75.m128i_i32[2];
    top = v75.m128i_i32[1];
    v18 = v75.m128i_i32[0];
  }
  if ( *((_DWORD *)v67 + 3) )
  {
    ++v18;
    ++v20;
  }
  if ( v18 > v20 )
  {
    v60 = v18;
    v18 = v20;
    v20 = v60;
  }
  if ( top > v21 )
  {
    v61 = top;
    top = v21;
    v21 = v61;
  }
  if ( left != right && v64 != v62 )
  {
    v25 = *(DC **)v66;
    v69 = *(_QWORD *)(*(_QWORD *)v66 + 512LL);
    v26 = (char *)v25 + 8 * (*((_DWORD *)v25 + 10) & 1);
    LODWORD(v63) = *((_DWORD *)v26 + 358) + v63;
    HIDWORD(v63) += *((_DWORD *)v26 + 359);
    v27 = (char *)v25 + 8 * (*((_DWORD *)v25 + 10) & 1);
    v28 = *((int *)v27 + 358);
    if ( (unsigned __int64)(v28 + left + 0x80000000LL) <= 0xFFFFFFFF
      && (unsigned __int64)(v28 + right + 0x80000000LL) <= 0xFFFFFFFF )
    {
      v29 = *((int *)v27 + 359);
      if ( (unsigned __int64)(v29 + v64 + 0x80000000LL) <= 0xFFFFFFFF
        && (unsigned __int64)(v29 + v62 + 0x80000000LL) <= 0xFFFFFFFF )
      {
        v30 = v28 + left;
        v74.m128i_i32[0] = v30;
        v31 = *((_DWORD *)v27 + 358) + right;
        v32 = *((_DWORD *)v27 + 359) + v64;
        *(__int64 *)((char *)v74.m128i_i64 + 4) = __PAIR64__(v31, v32);
        v33 = *((_DWORD *)v27 + 359) + v62;
        v74.m128i_i32[3] = v33;
        v34 = (char *)v25 + 8 * (*((_DWORD *)v25 + 10) & 1);
        v35 = *((int *)v34 + 358);
        if ( (unsigned __int64)(v35 + v18 + 0x80000000LL) <= 0xFFFFFFFF
          && (unsigned __int64)(v35 + v20 + 0x80000000LL) <= 0xFFFFFFFF )
        {
          v36 = (struct ECLIPOBJ *)*((int *)v34 + 359);
          if ( (unsigned __int64)v36 + top + 0x80000000LL <= 0xFFFFFFFF
            && (unsigned __int64)v36 + v21 + 0x80000000LL <= 0xFFFFFFFF )
          {
            v37 = v35 + v18;
            v38 = v35 + v20;
            v39 = (_DWORD)v36 + top;
            v40 = (_DWORD)v36 + v21;
            v41 = v30 > v37 || v31 < v38 || v32 > v39 || v33 < v40;
            if ( v41
              || (v42 = *((_DWORD *)v25 + 354), v42 > v37)
              || *((_DWORD *)v25 + 356) < v38
              || *((_DWORD *)v25 + 355) > v39
              || *((_DWORD *)v25 + 357) < v40 )
            {
              v43 = v66;
              v44 = (char *)v25 + 2200;
              v55 = XDCOBJ::prgnEffRao(v66);
              XCLIPOBJ::vSetup((XCLIPOBJ *)v44, v55, (struct ERECTL *)&v74, v56);
              v45 = *(__m128i *)(v44 + 4);
              v74 = v45;
              v31 = v45.m128i_i32[2];
              v30 = v45.m128i_i32[0];
            }
            else
            {
              if ( v42 > v30 )
              {
                v30 = *((_DWORD *)v25 + 354);
                v74.m128i_i32[0] = v30;
              }
              if ( *((_DWORD *)v25 + 355) > v32 )
              {
                v32 = *((_DWORD *)v25 + 355);
                v74.m128i_i32[1] = v32;
              }
              if ( *((_DWORD *)v25 + 356) < v31 )
              {
                v31 = *((_DWORD *)v25 + 356);
                v74.m128i_i32[2] = v31;
              }
              if ( *((_DWORD *)v25 + 357) < v33 )
              {
                v33 = *((_DWORD *)v25 + 357);
                v74.m128i_i32[3] = v33;
              }
              if ( v31 < v30 )
                return 1;
              v43 = v66;
              v44 = 0LL;
              if ( v33 < v32 )
                v74.m128i_i32[1] = v33;
              v45 = v74;
            }
            if ( v30 != v31 && v45.m128i_i32[1] != _mm_srli_si128(v45, 8).m128i_i32[1] )
            {
              if ( (*(_DWORD *)(*(_QWORD *)v43 + 36LL) & 0xE0) != 0 )
              {
                v75 = v45;
                XDCOBJ::vAccumulateTight(v43, v36, (struct ERECTL *)&v75);
              }
              v46 = v69;
              v47 = EngDrawStream;
              ++*(_DWORD *)(v69 + 92);
              v48 = *(_QWORD *)(v46 + 48);
              if ( *(_QWORD *)(v48 + 3424) )
                v47 = *(__int64 (__fastcall **)(int, int, int, int, int, __int64, int, __int64, __int64))(v48 + 3424);
              v49 = (*(_DWORD *)(*(_QWORD *)v43 + 36LL) & 0x200) != 0 && v48 && (*(_DWORD *)(v48 + 32) & 0x20000) != 0;
              if ( *(int *)(v46 + 112) >= 0 && (!v49 || *(_WORD *)(v46 + 100) != 3) )
                v47 = EngDrawStream;
              v50 = v71;
              if ( v71 )
                v51 = (struct _SURFOBJ *)((char *)v71 + 24);
              else
                v51 = 0LL;
              v75.m128i_i64[0] = 0LL;
              SURFREFVIEW::bMap((SURFREFVIEW *)&v75, v51);
              if ( v75.m128i_i64[0] )
              {
                if ( v50 )
                  v52 = (char *)v50 + 24;
                else
                  v52 = 0LL;
                if ( (unsigned int)v47(
                                     v46 + 24,
                                     (int)v52,
                                     (int)v44,
                                     (int)v73,
                                     (int)&v74,
                                     (__int64)&v63,
                                     v65,
                                     (__int64)v70,
                                     (__int64)v72) )
                  v9 = 1;
              }
              SURFREFVIEW::bUnMap((SURFREFVIEW *)&v75);
              return v9;
            }
            return 1;
          }
        }
      }
    }
  }
  return v9;
}
