/*
 * XREFs of ?bCompute@DC@@QEAAHXZ @ 0x1C0053630
 * Callers:
 *     ?bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C0047070 (-bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C003AC98 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C0045000 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C0045114 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C00457B0 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C0046620 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?vCopy@RGNOBJ@@QEAAXAEAV1@@Z @ 0x1C0046700 (-vCopy@RGNOBJ@@QEAAXAEAV1@@Z.c)
 *     ?vSwap@RGNOBJ@@QEAAXPEAV1@@Z @ 0x1C0046760 (-vSwap@RGNOBJ@@QEAAXPEAV1@@Z.c)
 *     ?vGetSubRect@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C0046950 (-vGetSubRect@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     ?bOffset@RGNOBJ@@QEAAHPEAU_POINTL@@@Z @ 0x1C0046980 (-bOffset@RGNOBJ@@QEAAHPEAU_POINTL@@@Z.c)
 *     AllocateObject @ 0x1C0047B40 (AllocateObject.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C004E690 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?bDpiScaledSurface@DC@@QEAAHXZ @ 0x1C0051F20 (-bDpiScaledSurface@DC@@QEAAHXZ.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0054DEC (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     memmove @ 0x1C00AB840 (memmove.c)
 *     ?GreValidateRgnInDCSurfBounds@@YAXPEAVDC@@PEAVSURFACE@@PEAVREGION@@W4_VALIDATE_REGION_CALLER@@@Z @ 0x1C00F0520 (-GreValidateRgnInDCSurfBounds@@YAXPEAVDC@@PEAVSURFACE@@PEAVREGION@@W4_VALIDATE_REGION_CALLER@@@Z.c)
 *     ?vDuplicateAndScaleRegion@@YAXPEAVREGION@@PEAPEAV1@VPOINTFL@@@Z @ 0x1C00F09F0 (-vDuplicateAndScaleRegion@@YAXPEAVREGION@@PEAPEAV1@VPOINTFL@@@Z.c)
 */

__int64 __fastcall DC::bCompute(DC *this)
{
  _DWORD *v1; // rdi
  struct _RECTL *v2; // r14
  unsigned int v4; // r13d
  _WORD *v5; // rbx
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // eax
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdx
  REGION *v13; // rcx
  struct _RECTL v14; // xmm0
  __int64 v15; // rcx
  REGION *v16; // rcx
  REGION *v17; // rcx
  int v18; // eax
  unsigned int v19; // edi
  __int64 v20; // r12
  unsigned int v21; // edi
  __int64 v22; // r14
  unsigned int v23; // edx
  unsigned int v24; // ecx
  __int64 v25; // r8
  unsigned int v26; // eax
  __int64 v27; // r15
  unsigned int v28; // edx
  unsigned int v29; // ecx
  __int64 v30; // r8
  DC *v31; // rdx
  int v32; // ecx
  __m128i v33; // xmm1
  int v34; // ecx
  int v35; // eax
  __m128i v36; // xmm0
  int v37; // eax
  unsigned int v38; // edi
  __int64 v39; // r14
  unsigned int v40; // edx
  unsigned int v41; // ecx
  __int64 v42; // r9
  unsigned int v43; // eax
  __int64 v44; // r15
  unsigned int v45; // edx
  unsigned int v46; // ecx
  __int64 v47; // rax
  DC *v48; // rdx
  BOOL v50; // eax
  _BOOL8 v51; // rcx
  __int64 v52; // rax
  int v53; // edi
  REGION *v54; // rbx
  int v55; // eax
  struct _RECTL v56; // xmm0
  _WORD *Object; // rax
  _QWORD *v58; // rax
  _WORD *v59; // rax
  REGION *v60; // r8
  _QWORD *v61; // rax
  __int64 v62; // rdx
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // rdx
  __int64 v66; // r8
  unsigned int v67; // edx
  __int64 v68; // rdx
  __int64 v69; // r8
  __int64 v70; // r9
  __int64 v71; // rdx
  __int64 v72; // r8
  __int64 v73; // rdx
  __int64 v74; // r8
  __int64 v75; // rdx
  __int64 v76; // r8
  __int64 v77; // r9
  __int64 v78; // rdx
  __int64 v79; // r8
  int v80; // eax
  __int64 v81; // r8
  __int64 v82; // r8
  unsigned int v83; // ebx
  REGION *v84; // [rsp+20h] [rbp-69h] BYREF
  _DWORD *v85; // [rsp+28h] [rbp-61h] BYREF
  __m128i v86; // [rsp+30h] [rbp-59h] BYREF
  __int16 *v87; // [rsp+40h] [rbp-49h] BYREF
  int v88; // [rsp+48h] [rbp-41h]
  __int16 *v89; // [rsp+50h] [rbp-39h] BYREF
  int v90; // [rsp+58h] [rbp-31h]
  __int16 *v91; // [rsp+60h] [rbp-29h] BYREF
  int v92; // [rsp+68h] [rbp-21h]
  _DWORD *v93; // [rsp+70h] [rbp-19h] BYREF
  __int64 v94; // [rsp+78h] [rbp-11h] BYREF
  __int64 v95; // [rsp+80h] [rbp-9h] BYREF
  __int64 v96; // [rsp+88h] [rbp-1h] BYREF
  __int64 v97; // [rsp+90h] [rbp+7h] BYREF
  __int64 v98; // [rsp+98h] [rbp+Fh] BYREF
  __int64 v99; // [rsp+A0h] [rbp+17h]
  __int64 v100; // [rsp+A8h] [rbp+1Fh]
  __int64 v101; // [rsp+B0h] [rbp+27h]

  v1 = (_DWORD *)*((_QWORD *)this + 192);
  v2 = (struct _RECTL *)((char *)this + 1416);
  v4 = 0;
  *(_OWORD *)((char *)this + 1416) = rclEmpty;
  if ( !v1 )
    return v4;
  v5 = (_WORD *)*((_QWORD *)this + 193);
  v93 = v1;
  v4 = 1;
  v85 = v5;
  v6 = 0;
  if ( !v5 )
  {
    Object = AllocateObject(0xD8uLL, 4u, 0);
    v5 = Object;
    if ( !Object )
      return 0LL;
    *((_DWORD *)Object + 20) = 120;
    *(_QWORD *)(Object + 42) = 1LL;
    *(_QWORD *)(Object + 46) = 0LL;
    *((_DWORD *)Object + 25) = 0;
    *((_DWORD *)Object + 26) = 0;
    *((_DWORD *)Object + 27) = 0x80000000;
    *((_QWORD *)Object + 14) = 0x7FFFFFFFLL;
    *((_QWORD *)Object + 5) = Object + 60;
    *((_QWORD *)Object + 3) = 216LL;
    *((_QWORD *)Object + 4) = 0LL;
    v58 = Object + 24;
    v85 = v5;
    v58[1] = v58;
    *v58 = v58;
    v6 = 1;
  }
  if ( !v6 && (*((_DWORD *)this + 9) & 0x10) == 0 )
  {
    if ( (unsigned int)DC::bDpiScaledSurface(this) && !*((_QWORD *)this + 195) )
      *((_DWORD *)this + 134) |= 0x10u;
LABEL_12:
    v10 = *((_QWORD *)this + 28);
    v11 = *((_QWORD *)this + 29);
    v12 = *((_QWORD *)this + 191);
    if ( !(v12 | v11 | v10) )
    {
      v13 = (REGION *)*((_QWORD *)this + 194);
      if ( v13 )
      {
        REGION::vDeleteREGION(v13);
        *((_QWORD *)this + 194) = 0LL;
      }
      if ( *((_DWORD *)v5 + 20) > 0xA0u )
        v14 = (struct _RECTL)rclEmpty;
      else
        v14 = *(struct _RECTL *)(v5 + 44);
      *v2 = v14;
      *((_DWORD *)this + 9) &= ~0x10u;
      goto LABEL_18;
    }
    v99 = *((_QWORD *)this + 28);
    v50 = v10 != 0;
    v51 = v10 != 0;
    v52 = (unsigned int)(v50 + 1);
    *(&v99 + v51) = v11;
    if ( !v11 )
      v52 = v51;
    v53 = v52;
    *(&v99 + v52) = v12;
    if ( v12 )
      v53 = v52 + 1;
    v54 = (REGION *)*((_QWORD *)this + 194);
    v84 = v54;
    if ( !v54 )
    {
      v59 = AllocateObject(0xD8uLL, 4u, 0);
      v60 = (REGION *)v59;
      if ( !v59 )
        goto LABEL_133;
      *((_DWORD *)v59 + 20) = 120;
      *(_QWORD *)(v59 + 42) = 1LL;
      *(_QWORD *)(v59 + 46) = 0LL;
      *((_DWORD *)v59 + 25) = 0;
      v54 = (REGION *)v59;
      *((_DWORD *)v59 + 26) = 0;
      *((_DWORD *)v59 + 27) = 0x80000000;
      *((_QWORD *)v59 + 14) = 0x7FFFFFFFLL;
      *((_QWORD *)v59 + 5) = v59 + 60;
      *((_QWORD *)v59 + 3) = 216LL;
      *((_QWORD *)v59 + 4) = 0LL;
      v61 = v59 + 24;
      v84 = v60;
      v61[1] = v61;
      *v61 = v61;
    }
    if ( v53 == 1 )
    {
      v94 = v99;
      v55 = RGNOBJ::bCopy((RGNOBJ *)&v84, (struct RGNOBJ *)&v94);
    }
    else
    {
      if ( v53 != 2 )
      {
        v90 = 0;
        RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v89, 0xD8u);
        RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v89, v75, v76, v77);
        v98 = v99;
        v97 = v100;
        v86.m128i_i64[0] = v101;
        if ( !v89
          || !(unsigned int)RGNOBJ::iCombine((RGNOBJ *)&v89, (struct RGNOBJ *)&v98, (struct RGNOBJ *)&v97, 1)
          || (v80 = RGNOBJ::iCombine((RGNOBJ *)&v84, (struct RGNOBJ *)&v89, (struct RGNOBJ *)&v86, 1), v54 = v84, !v80) )
        {
          v4 = 0;
        }
        RGNMEMOBJTMP::~RGNMEMOBJTMP(&v89, v78, v79);
        if ( !v4 )
          goto LABEL_134;
LABEL_86:
        v54 = v84;
        *((_DWORD *)v84 + 7) = _InterlockedIncrement((volatile signed __int32 *)&REGION::ulUniqueREGION);
        if ( (unsigned int)RGNOBJ::bOffset((int **)&v84, (struct _POINTL *)this + 181) )
        {
          if ( v85[20] == 160
            && v85[22] <= *((_DWORD *)v54 + 22)
            && v85[24] >= *((_DWORD *)v54 + 24)
            && v85[23] <= *((_DWORD *)v54 + 23)
            && v85[25] >= *((_DWORD *)v54 + 25) )
          {
            *((_QWORD *)this + 194) = v54;
            if ( *((_DWORD *)v54 + 20) > 0xA0u )
              v56 = (struct _RECTL)rclEmpty;
            else
              v56 = *(struct _RECTL *)((char *)v54 + 88);
            *v2 = v56;
            *((_DWORD *)this + 9) &= ~0x10u;
LABEL_95:
            if ( v4 )
            {
LABEL_18:
              v15 = *((_QWORD *)this + 64);
              if ( v15 && (*(_DWORD *)(v15 + 116) & 0x800) != 0 )
                *((_DWORD *)this + 134) |= 8u;
              if ( v15 && (*(_DWORD *)(v15 + 116) & 0x800) != 0 )
              {
                if ( (*((_DWORD *)this + 134) & 0x10) != 0 )
                {
                  vDuplicateAndScaleRegion(
                    *((_QWORD *)this + 193),
                    (char *)this + 1560,
                    _mm_unpacklo_ps((__m128)*((unsigned int *)this + 135), (__m128)*((unsigned int *)this + 136)).m128_u64[0]);
                  v81 = *((_QWORD *)this + 195);
                  if ( v81 )
                    GreValidateRgnInDCSurfBounds(this, *((_QWORD *)this + 64), v81, 2LL);
                }
                if ( (*((_DWORD *)this + 134) & 8) != 0 )
                {
                  vDuplicateAndScaleRegion(
                    *((_QWORD *)this + 194),
                    (char *)this + 1568,
                    _mm_unpacklo_ps((__m128)*((unsigned int *)this + 135), (__m128)*((unsigned int *)this + 136)).m128_u64[0]);
                  v82 = *((_QWORD *)this + 196);
                  if ( v82 )
                    GreValidateRgnInDCSurfBounds(this, *((_QWORD *)this + 64), v82, 2LL);
                }
              }
              else
              {
                v16 = (REGION *)*((_QWORD *)this + 195);
                if ( v16 )
                {
                  REGION::vDeleteREGION(v16);
                  *((_QWORD *)this + 195) = 0LL;
                }
                v17 = (REGION *)*((_QWORD *)this + 196);
                if ( v17 )
                {
                  REGION::vDeleteREGION(v17);
                  *((_QWORD *)this + 196) = 0LL;
                }
              }
              v18 = *(_DWORD *)this;
              v19 = *(_DWORD *)this;
              *((_DWORD *)this + 134) &= 0xFFFFFFE7;
              v20 = *((_QWORD *)this + 193);
              v21 = (unsigned __int16)v18 | (v19 >> 8) & 0xFF0000;
              if ( v21 >= 0x10000 )
              {
                if ( *(_DWORD *)gpHandleManager > 0x10000u )
                {
                  if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                              *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                              (unsigned __int16)v21,
                                              1)
                       + 13) == HIWORD(v21) )
                    v21 = (unsigned __int16)v21;
                }
                else
                {
                  v21 = (unsigned __int16)v21;
                }
              }
              v22 = *((_QWORD *)gpHandleManager + 2);
              v23 = *(_DWORD *)(v22 + 2056);
              if ( v21 >= v23 + ((*(unsigned __int16 *)(v22 + 2) + 0xFFFF) << 16) )
              {
                v27 = 0LL;
              }
              else
              {
                if ( v21 >= v23 )
                  v24 = ((v21 - v23) >> 16) + 1;
                else
                  v24 = 0;
                v25 = *(_QWORD *)(v22 + 8LL * v24 + 8);
                if ( v24 )
                  v26 = v21 + ((1 - v24) << 16) - v23;
                else
                  v26 = v21;
                v27 = 0LL;
                if ( v26 < *(_DWORD *)(v25 + 20)
                  && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v25 + 24) + 8 * ((unsigned __int64)v26 >> 8))
                               + 16LL * (unsigned __int8)v26
                               + 8) )
                {
                  v27 = *(_QWORD *)v25 + 24LL * v26;
                }
              }
              if ( v21 >= 0x10000 )
              {
                if ( *(_DWORD *)gpHandleManager > 0x10000u )
                {
                  if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                              *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                              (unsigned __int16)v21,
                                              1)
                       + 13) == HIWORD(v21) )
                    v21 = (unsigned __int16)v21;
                }
                else
                {
                  v21 = (unsigned __int16)v21;
                }
              }
              v28 = *(_DWORD *)(v22 + 2056);
              if ( v21 >= v28 + ((*(unsigned __int16 *)(v22 + 2) + 0xFFFF) << 16) )
                goto LABEL_154;
              if ( v21 >= v28 )
                v29 = ((v21 - v28) >> 16) + 1;
              else
                v29 = 0;
              v30 = *(_QWORD *)(v22 + 8LL * v29 + 8);
              if ( v29 )
                v21 += ((1 - v29) << 16) - v28;
              if ( v21 >= *(_DWORD *)(v30 + 20) )
LABEL_154:
                v31 = 0LL;
              else
                v31 = *(DC **)(*(_QWORD *)(**(_QWORD **)(v30 + 24) + 8 * ((unsigned __int64)v21 >> 8))
                             + 16LL * (unsigned __int8)v21
                             + 8);
              if ( v31 != this )
                v27 = 0LL;
              if ( (*(_BYTE *)(v27 + 15) & 4) != 0 )
              {
                if ( !v20 )
                  goto LABEL_100;
                if ( *(_DWORD *)(v20 + 84) == 1 )
                {
                  v32 = 1;
                }
                else
                {
                  v32 = 3;
                  if ( *(_DWORD *)(v20 + 80) <= 0xA0u )
                    v32 = 2;
                }
                *(_DWORD *)(*((_QWORD *)this + 10) + 392LL) = v32;
                if ( *(_DWORD *)(v20 + 84) == 1 )
                {
LABEL_100:
                  v36 = (__m128i)rclEmpty;
                }
                else
                {
                  v34 = *((_DWORD *)this + 362);
                  v86 = *(__m128i *)(v20 + 88);
                  v33 = v86;
                  v86.m128i_i32[2] -= v34;
                  v86.m128i_i32[0] = _mm_cvtsi128_si32(v33) - v34;
                  v35 = *((_DWORD *)this + 363);
                  v86.m128i_i32[1] -= v35;
                  v86.m128i_i32[3] -= v35;
                  v36 = v86;
                }
                *(__m128i *)(*((_QWORD *)this + 10) + 396LL) = v36;
                v37 = (unsigned __int16)*(_DWORD *)this;
                v38 = v37 | (*(_DWORD *)this >> 8) & 0xFF0000;
                if ( v38 >= 0x10000 )
                {
                  if ( *(_DWORD *)gpHandleManager > 0x10000u )
                  {
                    v83 = (unsigned __int16)v37;
                    if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                                *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                                (unsigned __int16)v37,
                                                1)
                         + 13) == HIWORD(v38) )
                      v38 = v83;
                  }
                  else
                  {
                    v38 = (unsigned __int16)v37;
                  }
                }
                v39 = *((_QWORD *)gpHandleManager + 2);
                v40 = *(_DWORD *)(v39 + 2056);
                if ( v38 >= v40 + ((*(unsigned __int16 *)(v39 + 2) + 0xFFFF) << 16) )
                {
                  v44 = 0LL;
                }
                else
                {
                  if ( v38 >= v40 )
                    v41 = ((v38 - v40) >> 16) + 1;
                  else
                    v41 = 0;
                  v42 = *(_QWORD *)(v39 + 8LL * v41 + 8);
                  if ( v41 )
                    v43 = v38 + ((1 - v41) << 16) - v40;
                  else
                    v43 = v38;
                  v44 = 0LL;
                  if ( v43 < *(_DWORD *)(v42 + 20)
                    && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v42 + 24) + 8 * ((unsigned __int64)v43 >> 8))
                                 + 16LL * (unsigned __int8)v43
                                 + 8) )
                  {
                    v44 = *(_QWORD *)v42 + 24LL * v43;
                  }
                }
                if ( v38 >= 0x10000 )
                {
                  if ( *(_DWORD *)gpHandleManager > 0x10000u )
                  {
                    if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                                *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                                (unsigned __int16)v38,
                                                1)
                         + 13) == HIWORD(v38) )
                      v38 = (unsigned __int16)v38;
                  }
                  else
                  {
                    v38 = (unsigned __int16)v38;
                  }
                }
                v45 = *(_DWORD *)(v39 + 2056);
                if ( v38 >= v45 + ((*(unsigned __int16 *)(v39 + 2) + 0xFFFF) << 16) )
                  goto LABEL_167;
                if ( v38 >= v45 )
                  v46 = ((v38 - v45) >> 16) + 1;
                else
                  v46 = 0;
                v47 = *(_QWORD *)(v39 + 8LL * v46 + 8);
                if ( v46 )
                  v38 += ((1 - v46) << 16) - v45;
                if ( v38 >= *(_DWORD *)(v47 + 20) )
LABEL_167:
                  v48 = 0LL;
                else
                  v48 = *(DC **)(*(_QWORD *)(**(_QWORD **)(v47 + 24) + 8 * ((unsigned __int64)v38 >> 8))
                               + 16LL * (unsigned __int8)v38
                               + 8);
                if ( v48 != this )
                  v44 = 0LL;
                *(_BYTE *)(v44 + 15) &= ~4u;
              }
              return v4;
            }
LABEL_134:
            *((_QWORD *)this + 194) = 0LL;
            if ( v54 )
              REGION::vDeleteREGION(v54);
            goto LABEL_18;
          }
          v92 = 0;
          RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v91, 0xD8u);
          RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v91, v62, v63, v64);
          if ( v91 )
          {
            if ( (unsigned int)RGNOBJ::iCombine((RGNOBJ *)&v91, (struct RGNOBJ *)&v85, (struct RGNOBJ *)&v84, 1)
              && (unsigned int)RGNOBJ::bCopy((RGNOBJ *)&v84, (struct RGNOBJ *)&v91) )
            {
              v54 = v84;
              *((_QWORD *)this + 194) = v84;
              RGNOBJ::vGetSubRect((RGNOBJ *)&v84, v2);
              *((_DWORD *)this + 9) &= ~0x10u;
LABEL_107:
              RGNMEMOBJTMP::~RGNMEMOBJTMP(&v91, v65, v66);
              goto LABEL_95;
            }
            v54 = v84;
          }
          v4 = 0;
          goto LABEL_107;
        }
LABEL_133:
        v4 = 0;
        goto LABEL_134;
      }
      v96 = v99;
      v95 = v100;
      v55 = RGNOBJ::iCombine((RGNOBJ *)&v84, (struct RGNOBJ *)&v96, (struct RGNOBJ *)&v95, 1);
    }
    if ( !v55 )
    {
      v54 = v84;
      goto LABEL_133;
    }
    goto LABEL_86;
  }
  v7 = (unsigned int)v1[20];
  v8 = *((_DWORD *)v5 + 6);
  if ( (v8 >= (unsigned int)v7 || v1[6] <= 0xD8u) && (v8 <= 0xD8 || v1[6] > 0xD8u) )
  {
    memmove(v5 + 40, v1 + 20, v7 - 80);
    *((_QWORD *)v5 + 5) = (char *)v5 + v1[10] - (int)v1;
    goto LABEL_8;
  }
  v67 = 216;
  v88 = 0;
  if ( (unsigned int)v7 > 0xD8 )
    v67 = v7;
  RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v87, v67);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v87, v68, v69, v70);
  if ( v87 )
  {
    RGNOBJ::vCopy((RGNOBJ *)&v87, (struct RGNOBJ *)&v93);
    RGNOBJ::vSwap((RGNOBJ *)&v85, (struct RGNOBJ *)&v87);
    RGNMEMOBJTMP::~RGNMEMOBJTMP(&v87, v73, v74);
    v5 = v85;
LABEL_8:
    v9 = *((_QWORD *)this + 64);
    if ( v9 && (*(_DWORD *)(v9 + 116) & 0x800) != 0 )
      *((_DWORD *)this + 134) |= 0x10u;
    *((_QWORD *)this + 193) = v5;
    goto LABEL_12;
  }
  RGNMEMOBJTMP::~RGNMEMOBJTMP(&v87, v71, v72);
  return 0LL;
}
