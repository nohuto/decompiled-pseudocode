/*
 * XREFs of GreDrawStream @ 0x1C0086090
 * Callers:
 *     NtGdiDrawStream @ 0x1C00847D0 (NtGdiDrawStream.c)
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0074430 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C0075090 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?bSaveAttributes@XDCOBJ@@AEAAHXZ @ 0x1C0075230 (-bSaveAttributes@XDCOBJ@@AEAAHXZ.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0075330 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ??YERECTL@@QEAAXAEAU_RECTL@@@Z @ 0x1C00816C4 (--YERECTL@@QEAAXAEAU_RECTL@@@Z.c)
 *     ?NtGdiDrawStreamInternal@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_RECTL@@4JPEADPEAU_DRAWSTREAMINFO@@@Z @ 0x1C00848B0 (-NtGdiDrawStreamInternal@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_RECTL@@.c)
 *     bCvtPts1 @ 0x1C0084E98 (bCvtPts1.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C0086D44 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z @ 0x1C0086D84 (-vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0086EE0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0089750 (-CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?ulTime@XEPALOBJ@@QEAAKXZ @ 0x1C0096770 (-ulTime@XEPALOBJ@@QEAAKXZ.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?vDec_cRef@SURFACE@@QEAAXXZ @ 0x1C019583C (-vDec_cRef@SURFACE@@QEAAXXZ.c)
 *     ??1SEMOBJ@@QEAA@XZ @ 0x1C0195894 (--1SEMOBJ@@QEAA@XZ.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C024A6C0 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     ?vDestructorNULL@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0255808 (-vDestructorNULL@DEVLOCKOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall GreDrawStream(__int64 a1, unsigned int a2, _DWORD *a3)
{
  SURFACE *v4; // r14
  __int64 v5; // rsi
  SURFACE *v6; // rdx
  struct SURFACE *v7; // rbx
  struct PALETTE *v8; // rdi
  __int64 v9; // r13
  __int64 v10; // r12
  __int64 v11; // r15
  char *v12; // r11
  int v13; // r9d
  bool v14; // zf
  unsigned int *v15; // rsi
  unsigned int v16; // r10d
  __int64 v17; // rcx
  __int64 v18; // rcx
  unsigned int v19; // r11d
  int v20; // r8d
  int v21; // eax
  signed int v22; // edx
  signed int v23; // ecx
  int v24; // edx
  int v25; // ecx
  int v26; // r10d
  int v27; // eax
  int v28; // r9d
  int v29; // r8d
  int v30; // eax
  char *v31; // r11
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdx
  int v35; // ecx
  __int64 v36; // rax
  int v37; // edx
  __int64 v38; // rax
  __int64 v39; // rax
  int v40; // edx
  __int64 v41; // rax
  int v42; // ecx
  unsigned int v43; // esi
  struct _XLATEOBJ *v44; // rdx
  unsigned int v45; // r10d
  __int64 v46; // r11
  int v47; // eax
  unsigned int v48; // eax
  __int64 v49; // r9
  unsigned int v50; // eax
  __int64 v51; // r9
  XLATEOBJ *v52; // rdx
  FLONG flXlate; // r8d
  unsigned int v54; // eax
  struct _XLATEOBJ *v55; // rcx
  __int64 XlateObject; // rax
  __int64 v57; // rcx
  __int64 v58; // rax
  int v59; // ebx
  int v60; // ebx
  char *v61; // rcx
  int v62; // edx
  int left; // ecx
  int right; // eax
  LONG top; // ecx
  __int64 v66; // rbx
  __int64 v67; // rdi
  int v68; // ecx
  struct PALETTE *v69; // rbx
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 cEntries; // rcx
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int16 v76; // cx
  unsigned int v78; // [rsp+64h] [rbp-9Ch]
  DC *v79; // [rsp+68h] [rbp-98h] BYREF
  __int64 v80; // [rsp+70h] [rbp-90h]
  struct _XLATEOBJ *v81; // [rsp+78h] [rbp-88h]
  int v82; // [rsp+80h] [rbp-80h]
  __int64 v83; // [rsp+88h] [rbp-78h] BYREF
  char *v84; // [rsp+90h] [rbp-70h]
  __int64 v85; // [rsp+98h] [rbp-68h] BYREF
  XLATEOBJ *v86; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int v87; // [rsp+A8h] [rbp-58h]
  int v88; // [rsp+ACh] [rbp-54h]
  unsigned int *v89; // [rsp+B0h] [rbp-50h]
  __int64 v90; // [rsp+B8h] [rbp-48h] BYREF
  SURFACE *v91; // [rsp+C0h] [rbp-40h]
  int v92; // [rsp+C8h] [rbp-38h]
  int v93; // [rsp+CCh] [rbp-34h]
  struct SURFACE *v94; // [rsp+D0h] [rbp-30h]
  char *v95; // [rsp+D8h] [rbp-28h] BYREF
  int v96; // [rsp+E0h] [rbp-20h]
  int v97; // [rsp+E4h] [rbp-1Ch]
  unsigned int v98; // [rsp+E8h] [rbp-18h]
  struct PALETTE *v99; // [rsp+F0h] [rbp-10h]
  struct _RECTL v100; // [rsp+100h] [rbp+0h]
  struct _RECTL v101; // [rsp+110h] [rbp+10h]
  __int64 v102; // [rsp+120h] [rbp+20h] BYREF
  __int64 v103; // [rsp+128h] [rbp+28h] BYREF
  struct PALETTE *v104; // [rsp+130h] [rbp+30h] BYREF
  __int64 v105; // [rsp+138h] [rbp+38h] BYREF
  __int64 v106; // [rsp+140h] [rbp+40h]
  struct PALETTE *v107; // [rsp+148h] [rbp+48h]
  struct _RECTL v108; // [rsp+150h] [rbp+50h] BYREF
  __int128 v109; // [rsp+160h] [rbp+60h] BYREF
  __int64 v110; // [rsp+170h] [rbp+70h]
  int v111; // [rsp+178h] [rbp+78h]
  __int64 v112; // [rsp+180h] [rbp+80h]
  __int64 v113; // [rsp+188h] [rbp+88h]
  __int64 v114; // [rsp+190h] [rbp+90h]
  __int64 v115; // [rsp+198h] [rbp+98h]
  __int64 v116; // [rsp+1A0h] [rbp+A0h]
  _QWORD v117[4]; // [rsp+1B0h] [rbp+B0h] BYREF
  __int64 v118; // [rsp+1D0h] [rbp+D0h]
  __int64 v119; // [rsp+1D8h] [rbp+D8h]
  __int64 v120; // [rsp+1E0h] [rbp+E0h]
  struct _RECTL v121; // [rsp+200h] [rbp+100h] BYREF

  v106 = a1;
  v109 = 0LL;
  v79 = 0LL;
  v4 = 0LL;
  LODWORD(v5) = 0;
  v107 = gppalRGB;
  v6 = 0LL;
  v80 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v95 = 0LL;
  v9 = 0LL;
  v97 = 0;
  v10 = 0LL;
  v113 = 0LL;
  v11 = 0LL;
  v91 = 0LL;
  v12 = 0LL;
  v94 = 0LL;
  v13 = 0;
  v99 = 0LL;
  v81 = 0LL;
  v86 = 0LL;
  v82 = 0;
  v84 = 0LL;
  v88 = 0;
  v110 = 0LL;
  v111 = 0;
  v112 = 0LL;
  v116 = 0LL;
  v115 = 0LL;
  v114 = 0LL;
  if ( a2 >= 4 )
  {
    v14 = *a3 == 1148352339;
    v15 = a3 + 1;
    v89 = a3 + 1;
    if ( v14 )
    {
      v16 = a2 - 4;
      v78 = v16;
      if ( v16 >= 4 )
      {
        while ( 1 )
        {
          v17 = *v15;
          if ( !(_DWORD)v17 )
          {
            if ( v12 )
              goto LABEL_136;
            if ( v13 == 1 )
              DEVLOCKOBJ::vDestructorNULL((DEVLOCKOBJ *)&v109);
            if ( v79 )
            {
              XDCOBJ::RestoreAttributes((XDCOBJ *)&v79);
              _InterlockedDecrement((volatile signed __int32 *)v79 + 3);
              v79 = 0LL;
            }
            if ( v4 )
            {
              if ( v4 == SURFACE::pdibDefault )
              {
                DEC_SHARE_REF_CNT(v4);
              }
              else
              {
                GreAcquireHmgrSemaphore(v17, v6);
                SURFACE::vDec_cRef(v4);
                GreReleaseHmgrSemaphore();
              }
              v4 = 0LL;
            }
            v87 = 24;
            if ( v78 < 0x18 )
              goto LABEL_166;
            v57 = (int)v15[1];
            if ( v57 != v106 )
              goto LABEL_166;
            LOBYTE(v6) = 1;
            v58 = HmgLockEx(v57, v6, HIDWORD(v80));
            v79 = (DC *)v58;
            if ( !v58 )
              goto LABEL_166;
            if ( HIDWORD(v80)
              && ((*(_DWORD *)(*(_QWORD *)(v58 + 48) + 32LL) & 0x8000) == 0
               || (v59 = *(_DWORD *)(v58 + 2544), v59 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC)))
              || !(unsigned int)XDCOBJ::bSaveAttributes((XDCOBJ *)&v79) )
            {
              _InterlockedDecrement((volatile signed __int32 *)v79 + 3);
              v79 = 0LL;
LABEL_166:
              LODWORD(v5) = 0;
              goto LABEL_167;
            }
            if ( (*((_DWORD *)v79 + 134) & 4) != 0 )
              DC::vMarkTransformDirty(v79);
            if ( !v79
              || (*((_DWORD *)v79 + 9) & 0x10000) != 0
              || !DEVLOCKOBJ::bLock((DEVLOCKOBJ *)&v109, (struct XDCOBJ *)&v79, 0) )
            {
              goto LABEL_166;
            }
            v96 = *(_DWORD *)(*((_QWORD *)v79 + 10) + 68LL);
            v60 = *(_DWORD *)(*((_QWORD *)v79 + 10) + 312LL) & 1;
            v97 = v60;
            if ( (*(_DWORD *)(*((_QWORD *)v79 + 10) + 352LL) & 0x1E000) != 0 )
            {
              EXFORMOBJ::vInit((EXFORMOBJ *)&v95, (struct XDCOBJ *)&v79, 0x204u, 0);
              v61 = v95;
              v60 = v97;
            }
            else
            {
              v61 = (char *)v79 + 336;
              v95 = (char *)v79 + 336;
            }
            v62 = *((_DWORD *)v61 + 8);
            if ( (v61[32] & 1) == 0 )
              goto LABEL_166;
            v101 = *(struct _RECTL *)(v15 + 2);
            v121 = v101;
            if ( (v62 & 0x43) != 0x43 )
              bCvtPts1((unsigned __int64)v61, &v121, 2LL);
            left = v121.left;
            right = v121.right;
            if ( v60 )
            {
              left = v121.left + 1;
              right = v121.right + 1;
              ++v121.left;
              ++v121.right;
            }
            if ( left > right )
            {
              v121.left = right;
              v121.right = left;
            }
            top = v121.top;
            if ( v121.top > v121.bottom )
            {
              v121.top = v121.bottom;
              v121.bottom = top;
            }
            if ( (*((_DWORD *)v79 + 9) & 0xE0) != 0 )
              XDCOBJ::vAccumulate((XDCOBJ *)&v79, (struct ERECTL *)&v121);
            v6 = (SURFACE *)*((_QWORD *)v79 + 64);
            v91 = v6;
            if ( !v6 )
              goto LABEL_166;
            v9 = *((_QWORD *)v6 + 16);
            v10 = *((_QWORD *)v79 + 12);
            if ( v11 )
            {
              if ( (*(_DWORD *)(v11 + 24) & 0x2000) != 0 )
                goto LABEL_166;
            }
            v7 = v94;
            v88 = 1;
            goto LABEL_133;
          }
          v18 = (unsigned int)(v17 - 1);
          if ( !(_DWORD)v18 )
            break;
          if ( (_DWORD)v18 != 8 )
            goto LABEL_166;
          v87 = 60;
          if ( v16 < 0x3C )
            goto LABEL_166;
          v19 = v15[9];
          if ( (v19 & 0xFFFFFF80) != 0 )
            goto LABEL_166;
          if ( !v7 )
            goto LABEL_166;
          v20 = v15[5];
          if ( v20 < 0 )
            goto LABEL_166;
          v21 = v15[6];
          if ( v21 < 0 )
            goto LABEL_166;
          v22 = v15[7];
          if ( v22 > *((_DWORD *)v7 + 14) )
            goto LABEL_166;
          v23 = v15[8];
          if ( v23 > *((_DWORD *)v7 + 15) )
            goto LABEL_166;
          v24 = v22 - v20;
          v25 = v23 - v21;
          if ( v24 <= 0 )
            goto LABEL_166;
          if ( v25 <= 0 )
            goto LABEL_166;
          if ( (v19 & 0x20) == 0 )
          {
            v26 = v15[10];
            if ( v26 < 0 )
              goto LABEL_166;
            v27 = v15[11];
            if ( v27 < 0 )
              goto LABEL_166;
            v28 = v15[12];
            if ( v28 < 0 )
              goto LABEL_166;
            v29 = v15[13];
            if ( v29 < 0 || v26 > v24 || v27 > v24 || v28 > v25 || v29 > v25 || v26 + v27 > v24 || v29 + v28 > v25 )
              goto LABEL_166;
          }
          if ( (v19 & 0xC) == 0xC )
            goto LABEL_166;
          if ( (v19 & 8) != 0 )
          {
            v15[14] = ulGetNearestIndexFromColorref(v11, v8, v15[14], 1LL);
          }
          else
          {
            v30 = v82;
            if ( (v19 & 4) != 0 )
              v30 = 1;
            v82 = v30;
          }
          if ( v84 )
          {
            ERECTL::operator+=((unsigned int *)&v108, v15 + 1);
            v6 = v91;
LABEL_133:
            v31 = v84;
            goto LABEL_134;
          }
          v31 = (char *)v15;
          v6 = v91;
          v100 = *(struct _RECTL *)(v15 + 1);
          v108 = v100;
          v84 = (char *)v15;
LABEL_134:
          v16 = v78 - v87;
          v78 = v16;
          v15 += (unsigned __int64)v87 >> 2;
          v89 = v15;
          if ( v16 )
            goto LABEL_163;
          if ( !v31 )
            goto LABEL_176;
LABEL_136:
          if ( v79 && v7 )
          {
            v117[0] = 72LL;
            v66 = 0LL;
            v5 = 0LL;
            v67 = 0LL;
            v90 = 0LL;
            v83 = 0LL;
            v85 = 0LL;
            v117[1] = 33488896LL;
            v117[2] = 0LL;
            if ( v82 )
            {
              v68 = *((_DWORD *)v6 + 24);
              if ( (unsigned int)(v68 - 1) <= 1 || v68 == 3 )
              {
LABEL_173:
                EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v90);
                EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v85);
                EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v83);
                LODWORD(v5) = 0;
                goto LABEL_167;
              }
              v69 = v107;
              if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(&v83, 0LL, 0LL, v11, v107, v99, v99, 0, 0, 0, 0) )
              {
                EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v90);
                EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v85);
                EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v83);
                goto LABEL_167;
              }
              v5 = v83;
              v118 = v83;
              if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(&v85, 0LL, 0LL, v9, v69, v10, v10, 0, 0, 0, 0) )
                goto LABEL_173;
              v67 = v85;
              v119 = v85;
              if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(&v90, 0LL, 0LL, v69, v9, v10, v10, 0, 0, 0, 0) )
              {
LABEL_172:
                EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v90);
                EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v85);
                EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v83);
                goto LABEL_166;
              }
              v66 = v90;
              v120 = v90;
            }
            else
            {
              v120 = 0LL;
              v119 = 0LL;
              v118 = 0LL;
            }
            if ( !(unsigned int)NtGdiDrawStreamInternal(
                                  &v79,
                                  (struct EXFORMOBJ *)&v95,
                                  v94,
                                  v81,
                                  &v121,
                                  &v108,
                                  (int)v89 - (int)v84,
                                  v84,
                                  (struct _DRAWSTREAMINFO *)v117) )
              goto LABEL_172;
            v84 = 0LL;
            v82 = 0;
            if ( v66 )
            {
              v70 = *(int *)(v66 + 36);
              if ( (int)v70 < 0 )
              {
                if ( (_DWORD)v70 == -1 )
                  FreeThreadBufferWithTag(v66);
              }
              else
              {
                _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8 * v70);
                v5 = v83;
                v67 = v85;
              }
            }
            if ( v67 )
            {
              v71 = *(int *)(v67 + 36);
              if ( (int)v71 < 0 )
              {
                if ( (_DWORD)v71 == -1 )
                  FreeThreadBufferWithTag(v67);
              }
              else
              {
                _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8 * v71);
                v5 = v83;
              }
            }
            if ( v5 )
            {
              v72 = *(int *)(v5 + 36);
              if ( (int)v72 < 0 )
              {
                if ( (_DWORD)v72 == -1 )
                  FreeThreadBufferWithTag(v5);
              }
              else
              {
                _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8 * v72);
              }
            }
            v16 = v78;
            v15 = v89;
          }
LABEL_163:
          if ( v16 < 4 )
            goto LABEL_176;
          v8 = v99;
          v6 = v91;
          v13 = v88;
          v7 = v94;
          v12 = v84;
        }
        if ( v12 )
          goto LABEL_136;
        if ( v4 )
        {
          if ( v4 == SURFACE::pdibDefault )
          {
            DEC_SHARE_REF_CNT(v4);
          }
          else
          {
            GreAcquireHmgrSemaphore(v18, v6);
            SURFACE::vDec_cRef(v4);
            GreReleaseHmgrSemaphore();
          }
          v13 = v88;
          v4 = 0LL;
          v16 = v78;
        }
        v87 = 8;
        if ( v16 < 8 )
          goto LABEL_166;
        if ( !v13 )
          goto LABEL_166;
        LOBYTE(v6) = 5;
        v4 = (SURFACE *)HmgShareLockCheck((int)v15[1], v6);
        if ( !v4 )
          goto LABEL_166;
        if ( v4 != SURFACE::pdibDefault )
        {
          GreAcquireHmgrSemaphore(v33, v32);
          INC_SHARE_REF_CNT(v4, v34);
          ++*((_DWORD *)v4 + 42);
          DEC_SHARE_REF_CNT(v4);
          GreReleaseHmgrSemaphore();
        }
        v11 = *((_QWORD *)v4 + 16);
        v94 = v4;
        v99 = ppalDefault;
        if ( !v11 )
          goto LABEL_166;
        v35 = *(_DWORD *)(v11 + 24);
        if ( (v35 & 0x2000) != 0 || v4 == v91 || *((_DWORD *)v4 + 24) != 6 )
          goto LABEL_166;
        v36 = *((_QWORD *)v79 + 10);
        v37 = *(_DWORD *)(v36 + 32);
        v93 = *(_DWORD *)(v36 + 40);
        v98 = *((_DWORD *)v79 + 28);
        v92 = v37;
        if ( v9 )
        {
          v39 = *(_QWORD *)(v11 + 128);
          if ( v39 == v11 )
            v40 = *(_DWORD *)(v11 + 32);
          else
            v40 = *(_DWORD *)(v39 + 32);
          v41 = *(_QWORD *)(v9 + 128);
          if ( v41 == v9 )
            v42 = *(_DWORD *)(v9 + 32);
          else
            v42 = *(_DWORD *)(v41 + 32);
          if ( v40 == v42 )
          {
            v86 = xloIdent;
            goto LABEL_90;
          }
          v43 = *(_DWORD *)(v11 + 56);
          v103 = v10;
          v104 = ppalDefault;
          v102 = v9;
          v105 = ghsemPalette;
          GreAcquireSemaphore(ghsemPalette);
          v44 = (struct _XLATEOBJ *)xlateTable;
          v45 = 0;
          v46 = *(_QWORD *)(v11 + 128);
          v81 = (struct _XLATEOBJ *)xlateTable;
          do
          {
            if ( v46 == v11 )
              v47 = *(_DWORD *)(v11 + 32);
            else
              v47 = *(_DWORD *)(v46 + 32);
            if ( *((_DWORD *)&v44->pulXlate + 8 * v43) == v47 )
            {
              v48 = XEPALOBJ::ulTime((XEPALOBJ *)&v102);
              if ( *(_DWORD *)((char *)&v44->pulXlate + v49 + 4) == v48 )
              {
                v50 = XEPALOBJ::ulTime((XEPALOBJ *)&v103);
                if ( *(FLONG *)((char *)&v44[1].flXlate + v51) == v50 )
                {
                  v52 = *(XLATEOBJ **)((char *)&v44->iSrcType + v51);
                  v86 = v52;
                  flXlate = v52[3].flXlate;
                  if ( (flXlate & 0x6000) == 0 )
                  {
                    if ( (v52->flXlate & 4) == 0 && (flXlate & 0x100) == 0 )
                    {
                      v55 = v81;
LABEL_92:
                      _InterlockedIncrement((volatile signed __int32 *)((char *)v55 + v51));
                      *(_DWORD *)(v11 + 56) = v43;
                      SEMOBJ::~SEMOBJ((SEMOBJ *)&v105);
                      goto LABEL_90;
                    }
                    if ( (v52->flXlate & 4) == 0 || v52[1].iUniq )
                    {
                      v55 = v81;
                    }
                    else
                    {
                      v54 = XEPALOBJ::ulTime((XEPALOBJ *)&v104);
                      v55 = v81;
                      if ( *(ULONG *)((char *)&v81[1].iUniq + v51) == v54 )
                        goto LABEL_92;
                    }
                    if ( (flXlate & 0x100) != 0 && v93 == v52[1].flXlate && v92 == *(_DWORD *)&v52[1].iSrcType )
                      goto LABEL_92;
                  }
                  v44 = v81;
                }
              }
            }
            ++v45;
            v43 = ((_BYTE)v43 + 1) & 7;
          }
          while ( v45 < 8 );
          if ( ghsemPalette )
          {
            EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemPalette);
            GreReleaseSemaphoreInternal(ghsemPalette);
          }
        }
        else if ( (v35 & 0x800) != 0 )
        {
          v38 = *(_QWORD *)(v10 + 80);
          if ( !v38 || v38 == *(_QWORD *)(v10 + 72) )
          {
            v86 = xloIdent;
LABEL_90:
            v7 = v4;
            v15 = v89;
            v81 = v86;
            v6 = v91;
            goto LABEL_133;
          }
        }
        XlateObject = CreateXlateObject(0LL, v98, v11, v9, ppalDefault, v10, v93, v92, 0, 0);
        v86 = (XLATEOBJ *)XlateObject;
        if ( !XlateObject )
          goto LABEL_166;
        if ( v9 && (*(_DWORD *)(XlateObject + 76) & 0x200) == 0 )
          EXLATEOBJ::vAddToCache(&v86, v11, v9, ppalDefault, v10);
        goto LABEL_90;
      }
LABEL_176:
      LODWORD(v5) = 1;
LABEL_167:
      if ( v79 )
      {
        XDCOBJ::RestoreAttributes((XDCOBJ *)&v79);
        _InterlockedDecrement((volatile signed __int32 *)v79 + 3);
        v79 = 0LL;
      }
      if ( v86 )
      {
        cEntries = (int)v86[1].cEntries;
        if ( (int)cEntries < 0 )
        {
          if ( (_DWORD)cEntries == -1 )
            FreeThreadBufferWithTag(v86);
        }
        else
        {
          _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8 * cEntries);
        }
      }
    }
    else
    {
      LODWORD(v5) = 0;
    }
  }
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v109);
  if ( v4 )
  {
    if ( v4 == SURFACE::pdibDefault )
    {
      DEC_SHARE_REF_CNT(v4);
    }
    else
    {
      GreAcquireHmgrSemaphore(v75, v74);
      DEC_SHARE_REF_CNT(v4);
      v14 = (*((_DWORD *)v4 + 42))-- == 1;
      if ( v14 )
      {
        if ( (*(_DWORD *)v4 & 0x800000) != 0 )
        {
          v76 = *((_WORD *)v4 + 51);
          if ( (v76 & 0x400) != 0 )
          {
            *((_WORD *)v4 + 51) = v76 & 0xFBFF;
            GreMakeBitmapNonStock(*(_QWORD *)v4);
          }
        }
        *((_QWORD *)v4 + 20) = 0LL;
      }
      GreReleaseHmgrSemaphore();
    }
  }
  return (unsigned int)v5;
}
