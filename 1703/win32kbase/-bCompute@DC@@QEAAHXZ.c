/*
 * XREFs of ?bCompute@DC@@QEAAHXZ @ 0x1C003AA20
 * Callers:
 *     ?bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C0038070 (-bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0012D78 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0033500 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0037C7C (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?bDpiScaledSurface@DC@@QEAAHXZ @ 0x1C0039248 (-bDpiScaledSurface@DC@@QEAAHXZ.c)
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C003BFE0 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C003C0A4 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     AllocateObject @ 0x1C003C340 (AllocateObject.c)
 *     ?bContain@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C003C498 (-bContain@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C003C850 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C003D670 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?vCopy@RGNOBJ@@QEAAXAEAV1@@Z @ 0x1C003D750 (-vCopy@RGNOBJ@@QEAAXAEAV1@@Z.c)
 *     ?vSwap@RGNOBJ@@QEAAXPEAV1@@Z @ 0x1C003D7B0 (-vSwap@RGNOBJ@@QEAAXPEAV1@@Z.c)
 *     ?vGetSubRect@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C003D910 (-vGetSubRect@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     ?bOffset@RGNOBJ@@QEAAHPEAU_POINTL@@@Z @ 0x1C003D940 (-bOffset@RGNOBJ@@QEAAHPEAU_POINTL@@@Z.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     memmove @ 0x1C00A21C0 (memmove.c)
 *     ?GreValidateRgnInDCSurfBounds@@YAXPEAVDC@@PEAVSURFACE@@PEAVREGION@@W4_VALIDATE_REGION_CALLER@@@Z @ 0x1C00EC5C0 (-GreValidateRgnInDCSurfBounds@@YAXPEAVDC@@PEAVSURFACE@@PEAVREGION@@W4_VALIDATE_REGION_CALLER@@@Z.c)
 *     ?vDuplicateAndScaleRegion@@YAXPEAVREGION@@PEAPEAV1@VPOINTFL@@@Z @ 0x1C00ECA9C (-vDuplicateAndScaleRegion@@YAXPEAVREGION@@PEAPEAV1@VPOINTFL@@@Z.c)
 */

__int64 __fastcall DC::bCompute(DC *this)
{
  _DWORD *v1; // rdi
  struct _RECTL *v2; // r14
  __int64 v4; // rbx
  int v5; // r12d
  int v6; // r15d
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // eax
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdx
  REGION *v14; // rcx
  struct _RECTL v15; // xmm0
  __int64 v16; // rcx
  REGION *v17; // rcx
  REGION *v18; // rcx
  int v19; // eax
  unsigned int v20; // edi
  __int64 v21; // r8
  GdiHandleManager *v22; // r13
  unsigned int v23; // edi
  __int64 v24; // r14
  unsigned int v25; // edx
  signed int v26; // ecx
  __int64 v27; // r8
  unsigned int v28; // eax
  __int64 v29; // r15
  unsigned int v30; // edx
  signed int v31; // ecx
  __int64 v32; // rax
  DC *v33; // rdx
  __m128i v34; // xmm1
  int v35; // ecx
  int v36; // eax
  __m128i v37; // xmm0
  GdiHandleManager *v38; // r13
  int v39; // eax
  unsigned int v40; // edi
  __int64 v41; // r14
  unsigned int v42; // edx
  signed int v43; // ecx
  __int64 v44; // r9
  unsigned int v45; // eax
  __int64 v46; // r15
  unsigned int v47; // edx
  signed int v48; // ecx
  __int64 v49; // rax
  DC *v50; // rdx
  BOOL v52; // eax
  _BOOL8 v53; // rcx
  __int64 v54; // rax
  int v55; // edi
  REGION *v56; // rbx
  int v57; // eax
  struct _RECTL v58; // xmm0
  __int64 Object; // rax
  _QWORD *v60; // rax
  unsigned int v61; // edx
  int v62; // eax
  __int64 v63; // r8
  __int64 v64; // r8
  struct _ENTRY *Entry; // rax
  struct _ENTRY *v66; // rax
  unsigned int v67; // ebx
  unsigned int v68; // [rsp+20h] [rbp-89h]
  REGION *v69; // [rsp+28h] [rbp-81h] BYREF
  __int64 v70; // [rsp+30h] [rbp-79h] BYREF
  __m128i v71; // [rsp+38h] [rbp-71h] BYREF
  __int16 *v72; // [rsp+48h] [rbp-61h] BYREF
  int v73; // [rsp+50h] [rbp-59h]
  __int16 *v74; // [rsp+58h] [rbp-51h] BYREF
  int v75; // [rsp+60h] [rbp-49h]
  __int16 *v76; // [rsp+68h] [rbp-41h] BYREF
  int v77; // [rsp+70h] [rbp-39h]
  _DWORD *v78; // [rsp+78h] [rbp-31h] BYREF
  __int64 v79; // [rsp+80h] [rbp-29h] BYREF
  __int64 v80; // [rsp+88h] [rbp-21h] BYREF
  __int64 v81; // [rsp+90h] [rbp-19h] BYREF
  __int64 v82; // [rsp+98h] [rbp-11h] BYREF
  __int64 v83; // [rsp+A0h] [rbp-9h] BYREF
  REGION *v84; // [rsp+A8h] [rbp-1h] BYREF
  int v85; // [rsp+B0h] [rbp+7h]
  __int64 v86; // [rsp+B8h] [rbp+Fh]
  __int64 v87; // [rsp+C0h] [rbp+17h]
  __int64 v88; // [rsp+C8h] [rbp+1Fh]

  v1 = (_DWORD *)*((_QWORD *)this + 192);
  v2 = (struct _RECTL *)((char *)this + 1416);
  v68 = 0;
  *(_OWORD *)((char *)this + 1416) = rclEmpty;
  if ( !v1 )
    return v68;
  v4 = *((_QWORD *)this + 193);
  v5 = 1;
  v68 = 1;
  v6 = 1;
  v78 = v1;
  v7 = 0;
  v70 = v4;
  if ( !v4 )
  {
    Object = AllocateObject(0xD8uLL);
    v4 = Object;
    if ( !Object )
      return 0LL;
    *(_DWORD *)(Object + 80) = 120;
    *(_QWORD *)(Object + 84) = 1LL;
    *(_QWORD *)(Object + 92) = 0LL;
    *(_DWORD *)(Object + 100) = 0;
    *(_DWORD *)(Object + 104) = 0;
    *(_DWORD *)(Object + 108) = 0x80000000;
    *(_QWORD *)(Object + 112) = 0x7FFFFFFFLL;
    *(_QWORD *)(Object + 40) = Object + 120;
    *(_QWORD *)(Object + 24) = 216LL;
    *(_QWORD *)(Object + 32) = 0LL;
    v60 = (_QWORD *)(Object + 48);
    v70 = v4;
    v60[1] = v60;
    *v60 = v60;
    v7 = 1;
  }
  if ( !v7 && (*((_DWORD *)this + 9) & 0x10) == 0 )
  {
    if ( (unsigned int)DC::bDpiScaledSurface(this) && !*((_QWORD *)this + 195) )
      *((_DWORD *)this + 134) |= 0x10u;
LABEL_12:
    v11 = *((_QWORD *)this + 28);
    v12 = *((_QWORD *)this + 29);
    v13 = *((_QWORD *)this + 191);
    if ( !(v13 | v12 | v11) )
    {
      v14 = (REGION *)*((_QWORD *)this + 194);
      if ( v14 )
      {
        REGION::vDeleteREGION(v14);
        *((_QWORD *)this + 194) = 0LL;
      }
      if ( *(_DWORD *)(v4 + 80) > 0xA0u )
        v15 = (struct _RECTL)rclEmpty;
      else
        v15 = *(struct _RECTL *)(v4 + 88);
      *v2 = v15;
      *((_DWORD *)this + 9) &= ~0x10u;
      goto LABEL_18;
    }
    v86 = *((_QWORD *)this + 28);
    v52 = v11 != 0;
    v53 = v11 != 0;
    v54 = (unsigned int)(v52 + 1);
    *(&v86 + v53) = v12;
    if ( !v12 )
      v54 = v53;
    v55 = v54;
    *(&v86 + v54) = v13;
    if ( v13 )
      v55 = v54 + 1;
    v56 = (REGION *)*((_QWORD *)this + 194);
    v69 = v56;
    if ( !v56 )
    {
      v85 = 0;
      RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v84, 0xD8u);
      if ( v84 )
      {
        v56 = v84;
        v69 = v84;
      }
      if ( v85 == 1 )
        REGION::vDeleteREGION(v84);
      if ( !v56 )
        goto LABEL_134;
    }
    if ( v55 == 1 )
    {
      v79 = v86;
      v57 = RGNOBJ::bCopy((RGNOBJ *)&v69, (struct RGNOBJ *)&v79);
    }
    else
    {
      if ( v55 != 2 )
      {
        v75 = 0;
        RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v74, 0xD8u);
        RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v74);
        v83 = v86;
        v82 = v87;
        v71.m128i_i64[0] = v88;
        if ( !v74
          || !(unsigned int)RGNOBJ::iCombine((RGNOBJ *)&v74, (struct RGNOBJ *)&v83, (struct RGNOBJ *)&v82, 1)
          || (v62 = RGNOBJ::iCombine((RGNOBJ *)&v69, (struct RGNOBJ *)&v74, (struct RGNOBJ *)&v71, 1), v56 = v69, !v62) )
        {
          v6 = 0;
          v68 = 0;
        }
        RGNMEMOBJTMP::~RGNMEMOBJTMP(&v74);
        if ( !v6 )
          goto LABEL_135;
        goto LABEL_87;
      }
      v81 = v86;
      v80 = v87;
      v57 = RGNOBJ::iCombine((RGNOBJ *)&v69, (struct RGNOBJ *)&v81, (struct RGNOBJ *)&v80, 1);
    }
    if ( !v57 )
    {
      v56 = v69;
      goto LABEL_134;
    }
LABEL_87:
    v56 = v69;
    *((_DWORD *)v69 + 7) = _InterlockedIncrement((volatile signed __int32 *)&REGION::ulUniqueREGION);
    if ( (unsigned int)RGNOBJ::bOffset((RGNOBJ *)&v69, (struct _POINTL *)this + 181) )
    {
      if ( *(_DWORD *)(v70 + 80) == 160 && (unsigned int)RGNOBJ::bContain((RGNOBJ *)&v70, (struct RGNOBJ *)&v69) )
      {
        *((_QWORD *)this + 194) = v56;
        if ( *((_DWORD *)v56 + 20) > 0xA0u )
          v58 = (struct _RECTL)rclEmpty;
        else
          v58 = *(struct _RECTL *)((char *)v56 + 88);
        *v2 = v58;
        *((_DWORD *)this + 9) &= ~0x10u;
LABEL_93:
        if ( v6 )
          goto LABEL_18;
        goto LABEL_135;
      }
      v77 = 0;
      RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v76, 0xD8u);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v76);
      if ( v76 )
      {
        if ( (unsigned int)RGNOBJ::iCombine((RGNOBJ *)&v76, (struct RGNOBJ *)&v70, (struct RGNOBJ *)&v69, 1)
          && (unsigned int)RGNOBJ::bCopy((RGNOBJ *)&v69, (struct RGNOBJ *)&v76) )
        {
          v56 = v69;
          *((_QWORD *)this + 194) = v69;
          RGNOBJ::vGetSubRect((RGNOBJ *)&v69, v2);
          *((_DWORD *)this + 9) &= ~0x10u;
LABEL_108:
          RGNMEMOBJTMP::~RGNMEMOBJTMP(&v76);
          goto LABEL_93;
        }
        v56 = v69;
      }
      v6 = 0;
      v68 = 0;
      goto LABEL_108;
    }
LABEL_134:
    v68 = 0;
LABEL_135:
    *((_QWORD *)this + 194) = 0LL;
    if ( v56 )
      REGION::vDeleteREGION(v56);
LABEL_18:
    v16 = *((_QWORD *)this + 64);
    if ( v16 && (*(_DWORD *)(v16 + 116) & 0x800) != 0 )
      *((_DWORD *)this + 134) |= 8u;
    if ( v16 && (*(_DWORD *)(v16 + 116) & 0x800) != 0 )
    {
      if ( (*((_DWORD *)this + 134) & 0x10) != 0 )
      {
        vDuplicateAndScaleRegion(*((_QWORD *)this + 193), (char *)this + 1560, *(_QWORD *)((char *)this + 540));
        v63 = *((_QWORD *)this + 195);
        if ( v63 )
          GreValidateRgnInDCSurfBounds(this, *((_QWORD *)this + 64), v63, 2LL);
      }
      if ( (*((_DWORD *)this + 134) & 8) != 0 )
      {
        vDuplicateAndScaleRegion(*((_QWORD *)this + 194), (char *)this + 1568, *(_QWORD *)((char *)this + 540));
        v64 = *((_QWORD *)this + 196);
        if ( v64 )
          GreValidateRgnInDCSurfBounds(this, *((_QWORD *)this + 64), v64, 2LL);
      }
    }
    else
    {
      v17 = (REGION *)*((_QWORD *)this + 195);
      if ( v17 )
      {
        REGION::vDeleteREGION(v17);
        *((_QWORD *)this + 195) = 0LL;
      }
      v18 = (REGION *)*((_QWORD *)this + 196);
      if ( v18 )
      {
        REGION::vDeleteREGION(v18);
        *((_QWORD *)this + 196) = 0LL;
      }
    }
    v19 = *(_DWORD *)this;
    v20 = *(_DWORD *)this;
    *((_DWORD *)this + 134) &= 0xFFFFFFE7;
    v21 = *((_QWORD *)this + 193);
    v22 = gpHandleManager;
    v23 = (unsigned __int16)v19 | (v20 >> 8) & 0xFF0000;
    v70 = v21;
    if ( v23 >= 0x10000 )
    {
      if ( *(_DWORD *)gpHandleManager > 0x10000u )
      {
        Entry = GdiHandleEntryDirectory::GetEntry(
                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                  (unsigned __int16)v23,
                  1);
        v21 = v70;
        if ( *((unsigned __int8 *)Entry + 13) == HIWORD(v23) )
          v23 = (unsigned __int16)v23;
      }
      else
      {
        v23 = (unsigned __int16)v23;
      }
    }
    v24 = *((_QWORD *)v22 + 2);
    v25 = *(_DWORD *)(v24 + 2056);
    if ( v23 < v25 + ((*(unsigned __int16 *)(v24 + 2) + 0xFFFF) << 16) )
    {
      if ( v23 < v25 )
      {
        v26 = 0;
LABEL_33:
        v27 = *(_QWORD *)(v24 + 8LL * v26 + 8);
        v28 = v23;
        if ( v26 )
          v28 = v23 - (v26 << 16) - v25 + 0x10000;
        v29 = 0LL;
        if ( v28 < *(_DWORD *)(v27 + 20)
          && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v27 + 24) + 8 * ((unsigned __int64)v28 >> 8))
                       + 16LL * (unsigned __int8)v28
                       + 8) )
        {
          v29 = *(_QWORD *)v27 + 24LL * v28;
        }
        v21 = v70;
LABEL_39:
        if ( v23 >= 0x10000 )
        {
          if ( *(_DWORD *)v22 > 0x10000u )
          {
            v66 = GdiHandleEntryDirectory::GetEntry(*((GdiHandleEntryDirectory **)v22 + 2), (unsigned __int16)v23, 1);
            v21 = v70;
            if ( *((unsigned __int8 *)v66 + 13) == HIWORD(v23) )
              v23 = (unsigned __int16)v23;
          }
          else
          {
            v23 = (unsigned __int16)v23;
          }
        }
        v30 = *(_DWORD *)(v24 + 2056);
        if ( v23 >= v30 + ((*(unsigned __int16 *)(v24 + 2) + 0xFFFF) << 16) )
          goto LABEL_154;
        if ( v23 >= v30 )
        {
          v31 = ((v23 - v30) >> 16) + 1;
          if ( (v23 - v30) >> 16 == -2 )
            goto LABEL_154;
        }
        else
        {
          v31 = 0;
        }
        v32 = *(_QWORD *)(v24 + 8LL * v31 + 8);
        if ( v31 )
          v23 = v23 - (v31 << 16) - v30 + 0x10000;
        if ( v23 < *(_DWORD *)(v32 + 20) )
        {
          v33 = *(DC **)(*(_QWORD *)(**(_QWORD **)(v32 + 24) + 8 * ((unsigned __int64)v23 >> 8))
                       + 16LL * (unsigned __int8)v23
                       + 8);
          goto LABEL_47;
        }
LABEL_154:
        v33 = 0LL;
LABEL_47:
        if ( v33 != this )
          v29 = 0LL;
        if ( (*(_BYTE *)(v29 + 15) & 4) == 0 )
          return v68;
        if ( !v21 )
          goto LABEL_97;
        if ( *(_DWORD *)(v21 + 84) != 1 )
        {
          v5 = 3;
          if ( *(_DWORD *)(v21 + 80) <= 0xA0u )
            v5 = 2;
        }
        *(_DWORD *)(*((_QWORD *)this + 10) + 392LL) = v5;
        if ( *(_DWORD *)(v21 + 84) == 1 )
        {
LABEL_97:
          v37 = (__m128i)rclEmpty;
        }
        else
        {
          v35 = *((_DWORD *)this + 362);
          v71 = *(__m128i *)(v21 + 88);
          v34 = v71;
          v71.m128i_i32[2] -= v35;
          v71.m128i_i32[0] = _mm_cvtsi128_si32(v34) - v35;
          v36 = *((_DWORD *)this + 363);
          v71.m128i_i32[1] -= v36;
          v71.m128i_i32[3] -= v36;
          v37 = v71;
        }
        *(__m128i *)(*((_QWORD *)this + 10) + 396LL) = v37;
        v38 = gpHandleManager;
        v39 = (unsigned __int16)*(_DWORD *)this;
        v40 = v39 | (*(_DWORD *)this >> 8) & 0xFF0000;
        if ( v40 >= 0x10000 )
        {
          if ( *(_DWORD *)gpHandleManager > 0x10000u )
          {
            v67 = (unsigned __int16)v39;
            if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                        *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                        (unsigned __int16)v39,
                                        1)
                 + 13) == HIWORD(v40) )
              v40 = v67;
          }
          else
          {
            v40 = (unsigned __int16)v39;
          }
        }
        v41 = *((_QWORD *)v38 + 2);
        v42 = *(_DWORD *)(v41 + 2056);
        if ( v40 < v42 + ((*(unsigned __int16 *)(v41 + 2) + 0xFFFF) << 16) )
        {
          if ( v40 < v42 )
          {
            v43 = 0;
LABEL_62:
            v44 = *(_QWORD *)(v41 + 8LL * v43 + 8);
            v45 = v40;
            if ( v43 )
              v45 = v40 - (v43 << 16) - v42 + 0x10000;
            v46 = 0LL;
            if ( v45 < *(_DWORD *)(v44 + 20)
              && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v44 + 24) + 8 * ((unsigned __int64)v45 >> 8))
                           + 16LL * (unsigned __int8)v45
                           + 8) )
            {
              v46 = *(_QWORD *)v44 + 24LL * v45;
            }
LABEL_67:
            if ( v40 >= 0x10000 )
            {
              if ( *(_DWORD *)v38 > 0x10000u )
              {
                if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                            *((GdiHandleEntryDirectory **)v38 + 2),
                                            (unsigned __int16)v40,
                                            1)
                     + 13) == HIWORD(v40) )
                  v40 = (unsigned __int16)v40;
              }
              else
              {
                v40 = (unsigned __int16)v40;
              }
            }
            v47 = *(_DWORD *)(v41 + 2056);
            if ( v40 >= v47 + ((*(unsigned __int16 *)(v41 + 2) + 0xFFFF) << 16) )
              goto LABEL_166;
            if ( v40 >= v47 )
            {
              v48 = ((v40 - v47) >> 16) + 1;
              if ( (v40 - v47) >> 16 == -2 )
                goto LABEL_166;
            }
            else
            {
              v48 = 0;
            }
            v49 = *(_QWORD *)(v41 + 8LL * v48 + 8);
            if ( v48 )
              v40 = v40 - (v48 << 16) - v47 + 0x10000;
            if ( v40 < *(_DWORD *)(v49 + 20) )
            {
              v50 = *(DC **)(*(_QWORD *)(**(_QWORD **)(v49 + 24) + 8 * ((unsigned __int64)v40 >> 8))
                           + 16LL * (unsigned __int8)v40
                           + 8);
LABEL_75:
              if ( v50 != this )
                v46 = 0LL;
              *(_BYTE *)(v46 + 15) &= ~4u;
              return v68;
            }
LABEL_166:
            v50 = 0LL;
            goto LABEL_75;
          }
          v43 = ((v40 - v42) >> 16) + 1;
          if ( (v40 - v42) >> 16 != -2 )
            goto LABEL_62;
        }
        v46 = 0LL;
        goto LABEL_67;
      }
      v26 = ((v23 - v25) >> 16) + 1;
      if ( (v23 - v25) >> 16 != -2 )
        goto LABEL_33;
    }
    v29 = 0LL;
    goto LABEL_39;
  }
  v8 = (unsigned int)v1[20];
  v9 = *(_DWORD *)(v4 + 24);
  if ( (v9 >= (unsigned int)v8 || v1[6] <= 0xD8u) && (v9 <= 0xD8 || v1[6] > 0xD8u) )
  {
    memmove((void *)(v4 + 80), v1 + 20, v8 - 80);
    *(_QWORD *)(v4 + 40) = v4 + v1[10] - (int)v1 - 104 + 104LL;
    goto LABEL_8;
  }
  v61 = 216;
  v73 = 0;
  if ( (unsigned int)v8 > 0xD8 )
    v61 = v8;
  RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v72, v61);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v72);
  if ( v72 )
  {
    RGNOBJ::vCopy((RGNOBJ *)&v72, (struct RGNOBJ *)&v78);
    RGNOBJ::vSwap((RGNOBJ *)&v70, (struct RGNOBJ *)&v72);
    RGNMEMOBJTMP::~RGNMEMOBJTMP(&v72);
    v4 = v70;
LABEL_8:
    v10 = *((_QWORD *)this + 64);
    if ( v10 && (*(_DWORD *)(v10 + 116) & 0x800) != 0 )
      *((_DWORD *)this + 134) |= 0x10u;
    *((_QWORD *)this + 193) = v4;
    goto LABEL_12;
  }
  RGNMEMOBJTMP::~RGNMEMOBJTMP(&v72);
  return 0LL;
}
