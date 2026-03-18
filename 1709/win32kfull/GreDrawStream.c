/*
 * XREFs of GreDrawStream @ 0x1C000E420
 * Callers:
 *     NtGdiDrawStream @ 0x1C000E340 (NtGdiDrawStream.c)
 * Callees:
 *     ?NtGdiDrawStreamInternal@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_RECTL@@4JPEADPEAU_DRAWSTREAMINFO@@@Z @ 0x1C000EEB0 (-NtGdiDrawStreamInternal@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_RECTL@@.c)
 *     bCvtPts1 @ 0x1C000F444 (bCvtPts1.c)
 *     ??YERECTL@@QEAAXAEAU_RECTL@@@Z @ 0x1C00183D8 (--YERECTL@@QEAAXAEAU_RECTL@@@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C0022CA0 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0022CE0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z @ 0x1C0022FE4 (-vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z.c)
 *     ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0026340 (-CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002B1A0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C002C0E0 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?bSaveAttributes@XDCOBJ@@AEAAHXZ @ 0x1C002C270 (-bSaveAttributes@XDCOBJ@@AEAAHXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002C344 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C002C390 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?ulTime@XEPALOBJ@@QEAAKXZ @ 0x1C009BD3C (-ulTime@XEPALOBJ@@QEAAKXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00F7C04 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ?vDec_cRef@SURFACE@@QEAAXXZ @ 0x1C01A0A78 (-vDec_cRef@SURFACE@@QEAAXXZ.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C024BFCC (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     ?vDestructorNULL@DEVLOCKOBJ@@QEAAXXZ @ 0x1C02572E4 (-vDestructorNULL@DEVLOCKOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall GreDrawStream(__int64 a1, unsigned int a2, _DWORD *a3)
{
  unsigned int v3; // esi
  struct SURFACE *v4; // rbx
  SURFACE *v5; // r10
  char *v6; // r11
  int v7; // r9d
  SURFACE *v8; // r15
  __int64 v9; // r13
  __int64 v10; // r12
  __int64 v11; // r14
  struct PALETTE *v12; // rcx
  bool v13; // zf
  unsigned int *v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rdx
  int v17; // ecx
  __int64 v18; // rax
  int v19; // r8d
  __int64 v20; // rax
  int v21; // edx
  __int64 v22; // rax
  int v23; // ecx
  unsigned int v24; // esi
  __int64 v25; // rax
  unsigned int v26; // r10d
  int v27; // eax
  __int64 XlateObject; // rax
  unsigned int v29; // ebx
  int v30; // r9d
  int v31; // eax
  signed int v32; // r8d
  signed int v33; // edx
  int v34; // r8d
  int v35; // edx
  int v36; // r11d
  int v37; // eax
  int v38; // r10d
  int v39; // r9d
  int v40; // eax
  __int64 v41; // rcx
  DC *v42; // rax
  int v43; // ebx
  char *v44; // rcx
  int v45; // edx
  int left; // ecx
  int right; // eax
  LONG top; // ecx
  __int64 v49; // rbx
  __int64 v50; // rsi
  __int64 v51; // rdi
  __int64 v52; // rbx
  __int64 cEntries; // rcx
  __int16 v54; // cx
  int v56; // edx
  struct PALETTE *v57; // rbx
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  unsigned int NearestIndexFromColorref; // eax
  __int64 v62; // rax
  unsigned int v63; // eax
  __int64 v64; // r8
  __int64 v65; // r9
  unsigned int v66; // eax
  __int64 v67; // r8
  __int64 v68; // r9
  XLATEOBJ *v69; // rdx
  FLONG flXlate; // r11d
  unsigned int v71; // eax
  int v72; // ebx
  unsigned int v73; // [rsp+64h] [rbp-9Ch]
  DC *v74; // [rsp+68h] [rbp-98h] BYREF
  __int64 v75; // [rsp+70h] [rbp-90h]
  SURFACE *v76; // [rsp+78h] [rbp-88h]
  int v77; // [rsp+80h] [rbp-80h]
  unsigned int *v78; // [rsp+88h] [rbp-78h]
  __int64 v79; // [rsp+90h] [rbp-70h] BYREF
  XLATEOBJ *v80; // [rsp+98h] [rbp-68h] BYREF
  __int64 v81; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int v82; // [rsp+A8h] [rbp-58h]
  int v83; // [rsp+ACh] [rbp-54h]
  char *v84; // [rsp+B0h] [rbp-50h]
  __int64 v85; // [rsp+B8h] [rbp-48h] BYREF
  struct SURFACE *v86; // [rsp+C0h] [rbp-40h]
  struct PALETTE *v87; // [rsp+C8h] [rbp-38h]
  int v88; // [rsp+D0h] [rbp-30h]
  int v89; // [rsp+D4h] [rbp-2Ch]
  int v90; // [rsp+D8h] [rbp-28h] BYREF
  struct PALETTE *v91; // [rsp+E0h] [rbp-20h]
  struct _XLATEOBJ *v92; // [rsp+E8h] [rbp-18h]
  char *v93; // [rsp+F0h] [rbp-10h] BYREF
  int v94; // [rsp+F8h] [rbp-8h]
  int v95; // [rsp+FCh] [rbp-4h]
  struct _RECTL v96; // [rsp+100h] [rbp+0h]
  struct _RECTL v97; // [rsp+110h] [rbp+10h]
  __int64 v98; // [rsp+120h] [rbp+20h] BYREF
  __int64 v99; // [rsp+128h] [rbp+28h] BYREF
  struct PALETTE *v100; // [rsp+130h] [rbp+30h] BYREF
  __int64 i; // [rsp+138h] [rbp+38h]
  __int64 v102; // [rsp+140h] [rbp+40h] BYREF
  __int64 v103; // [rsp+148h] [rbp+48h]
  __int128 v104; // [rsp+150h] [rbp+50h] BYREF
  __int64 v105; // [rsp+160h] [rbp+60h]
  int v106; // [rsp+168h] [rbp+68h]
  __int64 v107; // [rsp+170h] [rbp+70h]
  __int64 v108; // [rsp+178h] [rbp+78h]
  __int64 v109; // [rsp+180h] [rbp+80h]
  __int64 v110; // [rsp+188h] [rbp+88h]
  __int64 v111; // [rsp+190h] [rbp+90h]
  struct _RECTL v112; // [rsp+1A0h] [rbp+A0h] BYREF
  _QWORD v113[4]; // [rsp+1B0h] [rbp+B0h] BYREF
  __int64 v114; // [rsp+1D0h] [rbp+D0h]
  __int64 v115; // [rsp+1D8h] [rbp+D8h]
  __int64 v116; // [rsp+1E0h] [rbp+E0h]
  struct _RECTL v117; // [rsp+200h] [rbp+100h] BYREF

  v3 = 0;
  v103 = a1;
  v4 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0;
  v8 = 0LL;
  v9 = 0LL;
  v74 = 0LL;
  v10 = 0LL;
  v75 = 0LL;
  v11 = 0LL;
  v93 = 0LL;
  v95 = 0;
  v108 = 0LL;
  v12 = gppalRGB;
  v87 = gppalRGB;
  v76 = 0LL;
  v86 = 0LL;
  v91 = 0LL;
  v92 = 0LL;
  v80 = 0LL;
  v77 = 0;
  v84 = 0LL;
  v83 = 0;
  v104 = 0LL;
  v105 = 0LL;
  v106 = 0;
  v107 = 0LL;
  v111 = 0LL;
  v110 = 0LL;
  v109 = 0LL;
  if ( a2 < 4 )
    goto LABEL_118;
  v13 = *a3 == 1148352339;
  v14 = a3 + 1;
  v78 = a3 + 1;
  if ( !v13 )
  {
    v3 = 0;
    goto LABEL_118;
  }
  v73 = a2 - 4;
  if ( a2 - 4 < 4 )
  {
LABEL_114:
    v3 = 1;
    goto LABEL_115;
  }
  while ( 1 )
  {
    v15 = *v14;
    if ( !(_DWORD)v15 )
    {
      if ( v6 )
        goto LABEL_105;
      if ( v7 == 1 )
        DEVLOCKOBJ::vDestructorNULL((DEVLOCKOBJ *)&v104);
      if ( v74 )
        XDCOBJ::vUnlockFast((XDCOBJ *)&v74);
      v74 = 0LL;
      if ( v8 )
      {
        if ( v8 == SURFACE::pdibDefault )
        {
          DEC_SHARE_REF_CNT(v8);
        }
        else
        {
          GreAcquireHmgrSemaphore();
          SURFACE::vDec_cRef(v8);
          GreReleaseHmgrSemaphore();
        }
        v8 = 0LL;
      }
      v82 = 24;
      if ( v73 < 0x18 )
        goto LABEL_148;
      v41 = (int)v14[1];
      if ( v41 != v103 )
        goto LABEL_148;
      LOBYTE(v15) = 1;
      v42 = (DC *)HmgLockEx(v41, v15, HIDWORD(v75));
      v74 = v42;
      if ( v42 )
      {
        if ( HIDWORD(v75) )
        {
          if ( (*(_DWORD *)(*((_QWORD *)v42 + 6) + 32LL) & 0x8000) == 0 )
            goto LABEL_183;
          v72 = *((_DWORD *)v42 + 636);
          if ( v72 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
          {
LABEL_182:
            v42 = v74;
LABEL_183:
            _InterlockedDecrement((volatile signed __int32 *)v42 + 3);
            v74 = 0LL;
LABEL_148:
            v3 = 0;
            goto LABEL_115;
          }
        }
        if ( !(unsigned int)XDCOBJ::bSaveAttributes((XDCOBJ *)&v74) )
          goto LABEL_182;
        if ( (*((_DWORD *)v74 + 134) & 4) != 0 )
          DC::vMarkTransformDirty(v74);
      }
      else if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
      {
        PsGetWin32KFilterSet();
      }
      if ( !v74
        || (*((_DWORD *)v74 + 9) & 0x10000) != 0
        || !DEVLOCKOBJ::bLock((DEVLOCKOBJ *)&v104, (struct XDCOBJ *)&v74, 0) )
      {
        goto LABEL_148;
      }
      v94 = *(_DWORD *)(*((_QWORD *)v74 + 10) + 68LL);
      v43 = *(_DWORD *)(*((_QWORD *)v74 + 10) + 312LL) & 1;
      v95 = v43;
      if ( (*(_DWORD *)(*((_QWORD *)v74 + 10) + 352LL) & 0x1E000) != 0 )
      {
        EXFORMOBJ::vInit((EXFORMOBJ *)&v93, (struct XDCOBJ *)&v74, 0x204u, 0);
        v44 = v93;
        v43 = v95;
      }
      else
      {
        v44 = (char *)v74 + 336;
        v93 = (char *)v74 + 336;
      }
      v45 = *((_DWORD *)v44 + 8);
      if ( (v45 & 1) == 0 )
        goto LABEL_148;
      v97 = *(struct _RECTL *)(v14 + 2);
      v117 = v97;
      if ( (v45 & 0x43) != 0x43 )
        bCvtPts1(v44, &v117, 2LL);
      left = v117.left;
      right = v117.right;
      if ( v43 )
      {
        left = v117.left + 1;
        right = v117.right + 1;
        ++v117.left;
        ++v117.right;
      }
      if ( left > right )
      {
        v117.left = right;
        v117.right = left;
      }
      top = v117.top;
      if ( v117.top > v117.bottom )
      {
        v117.top = v117.bottom;
        v117.bottom = top;
      }
      if ( (*((_DWORD *)v74 + 9) & 0xE0) != 0 )
        XDCOBJ::vAccumulate((XDCOBJ *)&v74, (struct ERECTL *)&v117);
      v5 = (SURFACE *)*((_QWORD *)v74 + 64);
      v76 = v5;
      if ( !v5 )
        goto LABEL_148;
      v9 = *((_QWORD *)v5 + 16);
      v10 = *((_QWORD *)v74 + 12);
      if ( v11 )
      {
        if ( (*(_DWORD *)(v11 + 24) & 0x2000) != 0 )
          goto LABEL_148;
      }
      v83 = 1;
      goto LABEL_38;
    }
    v16 = (unsigned int)(v15 - 1);
    if ( !(_DWORD)v16 )
    {
      if ( v6 )
        goto LABEL_105;
      if ( v8 )
      {
        if ( v8 == SURFACE::pdibDefault )
        {
          DEC_SHARE_REF_CNT(v8);
        }
        else
        {
          GreAcquireHmgrSemaphore();
          SURFACE::vDec_cRef(v8);
          GreReleaseHmgrSemaphore();
        }
        v7 = v83;
        v8 = 0LL;
      }
      v82 = 8;
      if ( v73 < 8 )
        goto LABEL_148;
      if ( !v7 )
        goto LABEL_148;
      LOBYTE(v16) = 5;
      v8 = (SURFACE *)HmgShareLockCheck((int)v14[1], v16);
      if ( !v8 )
        goto LABEL_148;
      if ( v8 != SURFACE::pdibDefault )
      {
        GreAcquireHmgrSemaphore();
        INC_SHARE_REF_CNT(v8);
        ++*((_DWORD *)v8 + 42);
        DEC_SHARE_REF_CNT(v8);
        GreReleaseHmgrSemaphore();
      }
      v11 = *((_QWORD *)v8 + 16);
      v86 = v8;
      v91 = ppalDefault;
      if ( !v11 )
        goto LABEL_148;
      v17 = *(_DWORD *)(v11 + 24);
      if ( (v17 & 0x2000) != 0 )
        goto LABEL_148;
      v5 = v76;
      if ( v8 == v76 || *((_DWORD *)v8 + 24) != 6 )
        goto LABEL_148;
      v18 = *((_QWORD *)v74 + 10);
      v19 = *(_DWORD *)(v18 + 32);
      v89 = *(_DWORD *)(v18 + 40);
      LODWORD(v92) = *((_DWORD *)v74 + 28);
      v88 = v19;
      if ( v9 )
      {
        v20 = *(_QWORD *)(v11 + 128);
        if ( v20 == v11 )
          v21 = *(_DWORD *)(v11 + 32);
        else
          v21 = *(_DWORD *)(v20 + 32);
        v22 = *(_QWORD *)(v9 + 128);
        if ( v22 == v9 )
          v23 = *(_DWORD *)(v9 + 32);
        else
          v23 = *(_DWORD *)(v22 + 32);
        if ( v21 != v23 )
        {
          v24 = *(_DWORD *)(v11 + 56);
          v99 = v10;
          v100 = ppalDefault;
          v98 = v9;
          v102 = ghsemPalette;
          GreAcquireSemaphore(ghsemPalette);
          v25 = *(_QWORD *)(v11 + 128);
          v26 = 0;
          for ( i = v25; ; v25 = i )
          {
            if ( v25 == v11 )
              v27 = *(_DWORD *)(v11 + 32);
            else
              v27 = *(_DWORD *)(v25 + 32);
            if ( *((_DWORD *)&xlateTable + 8 * v24 + 4) == v27 )
            {
              v63 = XEPALOBJ::ulTime((XEPALOBJ *)&v98);
              if ( *(_DWORD *)(v64 + v65 + 20) == v63 )
              {
                v66 = XEPALOBJ::ulTime((XEPALOBJ *)&v99);
                if ( *(_DWORD *)(v67 + v68 + 28) == v66 )
                {
                  v69 = *(XLATEOBJ **)(v67 + v68 + 8);
                  v80 = v69;
                  flXlate = v69[3].flXlate;
                  if ( (flXlate & 0x6000) == 0 )
                  {
                    if ( (v69->flXlate & 4) == 0 && (flXlate & 0x100) == 0
                      || (v69->flXlate & 4) != 0
                      && !v69[1].iUniq
                      && (v71 = XEPALOBJ::ulTime((XEPALOBJ *)&v100), *(_DWORD *)(v67 + v68 + 24) == v71)
                      || (flXlate & 0x100) != 0 && v89 == v69[1].flXlate && v88 == *(_DWORD *)&v69[1].iSrcType )
                    {
                      _InterlockedIncrement((volatile signed __int32 *)(v67 + v68));
                      *(_DWORD *)(v11 + 56) = v24;
                      SEMOBJ::vUnlock((SEMOBJ *)&v102);
                      v14 = v78;
                      goto LABEL_36;
                    }
                  }
                }
              }
            }
            ++v26;
            v24 = ((_BYTE)v24 + 1) & 7;
            if ( v26 >= 8 )
              break;
          }
          if ( ghsemPalette )
          {
            EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemPalette);
            GreReleaseSemaphoreInternal(ghsemPalette);
          }
          v14 = v78;
          goto LABEL_32;
        }
        v80 = xloIdent;
      }
      else
      {
        if ( (v17 & 0x800) == 0 || (v62 = *(_QWORD *)(v10 + 80)) != 0 && v62 != *(_QWORD *)(v10 + 72) )
        {
LABEL_32:
          XlateObject = CreateXlateObject(0LL, (unsigned int)v92, v11, v9, ppalDefault, v10, v89, v88, 0, 0);
          v80 = (XLATEOBJ *)XlateObject;
          if ( !XlateObject )
            goto LABEL_148;
          if ( v9 && (*(_DWORD *)(XlateObject + 76) & 0x200) == 0 )
            EXLATEOBJ::vAddToCache(&v80, v11, v9, ppalDefault, v10);
LABEL_36:
          v5 = v76;
          goto LABEL_37;
        }
        v80 = xloIdent;
      }
LABEL_37:
      v92 = v80;
      goto LABEL_38;
    }
    if ( (_DWORD)v16 != 8 )
      goto LABEL_148;
    v82 = 60;
    if ( v73 < 0x3C )
      goto LABEL_148;
    v29 = v14[9];
    if ( (v29 & 0xFFFFFF80) != 0 )
      goto LABEL_148;
    if ( !v86 )
      goto LABEL_148;
    v30 = v14[5];
    if ( v30 < 0 )
      goto LABEL_148;
    v31 = v14[6];
    if ( v31 < 0 )
      goto LABEL_148;
    v32 = v14[7];
    if ( v32 > *((_DWORD *)v86 + 14) )
      goto LABEL_148;
    v33 = v14[8];
    if ( v33 > *((_DWORD *)v86 + 15) )
      goto LABEL_148;
    v34 = v32 - v30;
    v35 = v33 - v31;
    if ( v34 <= 0 || v35 <= 0 )
      goto LABEL_148;
    if ( (v29 & 0x20) == 0 )
    {
      v36 = v14[10];
      if ( v36 < 0 )
        goto LABEL_148;
      v37 = v14[11];
      if ( v37 < 0 )
        goto LABEL_148;
      v38 = v14[12];
      if ( v38 < 0 )
        goto LABEL_148;
      v39 = v14[13];
      if ( v39 < 0 || v36 > v34 || v37 > v34 || v38 > v35 || v39 > v35 || v36 + v37 > v34 || v39 + v38 > v35 )
        goto LABEL_148;
      v5 = v76;
      v6 = v84;
    }
    if ( (v29 & 0xC) == 0xC )
      goto LABEL_148;
    if ( (v29 & 8) != 0 )
    {
      NearestIndexFromColorref = ulGetNearestIndexFromColorref(v11, v91, v14[14], 1LL);
      v12 = v87;
      v5 = v76;
      v6 = v84;
      v14[14] = NearestIndexFromColorref;
    }
    else
    {
      v40 = v77;
      if ( (v29 & 4) != 0 )
        v40 = 1;
      v77 = v40;
    }
    if ( !v6 )
    {
      v96 = *(struct _RECTL *)(v14 + 1);
      v112 = v96;
      v84 = (char *)v14;
      goto LABEL_39;
    }
    ERECTL::operator+=(&v112, v14 + 1);
    v5 = v76;
LABEL_38:
    v12 = v87;
LABEL_39:
    v73 -= v82;
    v14 += (unsigned __int64)v82 >> 2;
    v78 = v14;
    if ( v73 )
      goto LABEL_40;
    v6 = v84;
    if ( !v84 )
      goto LABEL_114;
    v4 = v86;
LABEL_105:
    if ( !v74 || !v4 )
      goto LABEL_40;
    v113[0] = 72LL;
    v49 = 0LL;
    v50 = 0LL;
    v51 = 0LL;
    v85 = 0LL;
    v79 = 0LL;
    v81 = 0LL;
    v113[1] = 33488896LL;
    v113[2] = 0LL;
    if ( v77 )
      break;
    v116 = 0LL;
    v115 = 0LL;
    v114 = 0LL;
LABEL_109:
    if ( !(unsigned int)NtGdiDrawStreamInternal(
                          (struct XDCOBJ *)&v74,
                          (struct EXFORMOBJ *)&v93,
                          v86,
                          v92,
                          &v117,
                          &v112,
                          (int)v78 - (int)v6,
                          v6,
                          (struct _DRAWSTREAMINFO *)v113) )
      goto LABEL_147;
    v84 = 0LL;
    v77 = 0;
    if ( v49 )
    {
      v58 = *(int *)(v49 + 36);
      if ( (int)v58 >= 0 )
      {
        _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8 * v58);
        v50 = v79;
        v51 = v81;
      }
      else if ( (_DWORD)v58 == -1 )
      {
        FreeThreadBufferWithTag(v49);
      }
    }
    if ( v51 )
    {
      v59 = *(int *)(v51 + 36);
      if ( (int)v59 >= 0 )
      {
        _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8 * v59);
        v50 = v79;
      }
      else if ( (_DWORD)v59 == -1 )
      {
        FreeThreadBufferWithTag(v51);
      }
    }
    if ( v50 )
    {
      v60 = *(int *)(v50 + 36);
      if ( (int)v60 >= 0 )
      {
        _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8 * v60);
      }
      else if ( (_DWORD)v60 == -1 )
      {
        FreeThreadBufferWithTag(v50);
      }
    }
    v14 = v78;
LABEL_40:
    if ( v73 < 4 )
      goto LABEL_114;
    v12 = v87;
    v5 = v76;
    v7 = v83;
    v6 = v84;
    v4 = v86;
  }
  v56 = *((_DWORD *)v5 + 24);
  if ( (unsigned int)(v56 - 1) > 1 && v56 != 3 )
  {
    if ( (unsigned int)EXLATEOBJ::bInitXlateObj(&v79, 0LL, 0LL, v11, v12, v91, v91, 0, 0, 0, 0) )
    {
      v50 = v79;
      v57 = v87;
      v114 = v79;
      if ( (unsigned int)EXLATEOBJ::bInitXlateObj(&v81, 0LL, 0LL, v9, v87, v10, v10, 0, 0, 0, 0) )
      {
        v51 = v81;
        v115 = v81;
        if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(&v85, 0LL, 0LL, v57, v9, v10, v10, 0, 0, 0, 0) )
        {
LABEL_147:
          EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v85);
          EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v81);
          EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v79);
          goto LABEL_148;
        }
        v49 = v85;
        v6 = v84;
        v116 = v85;
        goto LABEL_109;
      }
    }
  }
  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v85);
  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v81);
  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v79);
  v3 = 0;
LABEL_115:
  if ( v74 )
  {
    XDCOBJ::RestoreAttributes((XDCOBJ *)&v74);
    v90 = 0;
    v52 = *(_QWORD *)v74;
    HmgDecrementExclusiveReferenceCountEx(v74, HIDWORD(v75), &v90);
    if ( v90 )
      bDeleteDCInternalEx(v52, 0LL);
  }
LABEL_118:
  v74 = 0LL;
  if ( v80 )
  {
    cEntries = (int)v80[1].cEntries;
    if ( (int)cEntries >= 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8 * cEntries);
    }
    else if ( (_DWORD)cEntries == -1 )
    {
      FreeThreadBufferWithTag(v80);
    }
  }
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v104);
  if ( v8 )
  {
    if ( v8 == SURFACE::pdibDefault )
    {
      DEC_SHARE_REF_CNT(v8);
    }
    else
    {
      GreAcquireHmgrSemaphore();
      DEC_SHARE_REF_CNT(v8);
      v13 = (*((_DWORD *)v8 + 42))-- == 1;
      if ( v13 )
      {
        if ( (*(_DWORD *)v8 & 0x800000) != 0 )
        {
          v54 = *((_WORD *)v8 + 51);
          if ( (v54 & 0x400) != 0 )
          {
            *((_WORD *)v8 + 51) = v54 & 0xFBFF;
            GreMakeBitmapNonStock(*(_QWORD *)v8);
          }
        }
        *((_QWORD *)v8 + 20) = 0LL;
      }
      GreReleaseHmgrSemaphore();
    }
  }
  return v3;
}
