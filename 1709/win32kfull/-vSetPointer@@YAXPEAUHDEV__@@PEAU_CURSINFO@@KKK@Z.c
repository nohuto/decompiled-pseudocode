/*
 * XREFs of ?vSetPointer@@YAXPEAUHDEV__@@PEAU_CURSINFO@@KKK@Z @ 0x1C00899BC
 * Callers:
 *     GreSetPointer @ 0x1C0089688 (GreSetPointer.c)
 * Callees:
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C00182EC (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0022CE0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?bValid@PDEVOBJ@@QEAAHXZ @ 0x1C008A1D8 (-bValid@PDEVOBJ@@QEAAHXZ.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C008A1E8 (--1EPALOBJ@@QEAA@XZ.c)
 *     EngSetPointerShape @ 0x1C00E4010 (EngSetPointerShape.c)
 *     ?vProcessCursorShape@@YAXPEAUHDEV__@@HHPEAU_SURFOBJ@@1PEAVPALETTE@@PEAU_RECTL@@PEAPEAUHBITMAP__@@@Z @ 0x1C00EEAC0 (-vProcessCursorShape@@YAXPEAUHDEV__@@HHPEAU_SURFOBJ@@1PEAVPALETTE@@PEAU_RECTL@@PEAPEAUHBITMAP__@.c)
 *     ?SETFLAG@@YAXHAECKK@Z @ 0x1C00FDBCC (-SETFLAG@@YAXHAECKK@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 *     ??1EXLATEOBJ@@QEAA@XZ @ 0x1C01A0B04 (--1EXLATEOBJ@@QEAA@XZ.c)
 */

void __fastcall vSetPointer(HDEV a1, struct _CURSINFO *a2, char a3, unsigned int a4, unsigned int a5)
{
  HDEV v5; // r15
  struct _CURSINFO *v6; // r12
  int v7; // eax
  void (__fastcall *v9)(__int64, __int64, __int64, _QWORD); // rax
  volatile unsigned int v10; // ett
  volatile unsigned int v11; // ett
  volatile unsigned int v12; // ett
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rbx
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  struct PALETTE *v22; // rdx
  HDEV v23; // rax
  signed int v24; // eax
  LONG v25; // r8d
  LONG v26; // r9d
  __int64 v27; // rcx
  LONG v28; // eax
  LONG v29; // ecx
  LONG v30; // edx
  LONG v31; // r8d
  int v32; // eax
  __int64 *v33; // rdx
  RECTL *v34; // rcx
  int v35; // ecx
  int v36; // eax
  int v37; // r11d
  int v38; // r8d
  bool v39; // zf
  int v40; // ecx
  int v41; // ebx
  unsigned int v42; // edx
  LONG v43; // r9d
  int v44; // esi
  LONG v45; // r10d
  int v46; // eax
  unsigned __int8 v47; // al
  int v48; // ecx
  char v49; // al
  int v50; // ecx
  int v51; // ecx
  __int64 (__fastcall *v52)(SURFOBJ *, __int64, __int64, __int64, int, int, LONG, LONG, RECTL *, unsigned int); // r11
  int v53; // edx
  int v54; // ecx
  unsigned int v55; // edx
  int v56; // ecx
  int v57; // r10d
  int v58; // eax
  char v59; // dl
  void (__fastcall *v60)(SURFOBJ *, __int64, __int64, _QWORD); // rax
  SURFOBJ *v61; // rdi
  void (__fastcall *v62)(SURFOBJ *, __int64, __int64, _QWORD); // rax
  volatile unsigned int *v63; // rdx
  volatile unsigned int *v64; // rdx
  volatile unsigned int *v65; // rdx
  int v66; // esi
  LONG v67; // ecx
  LONG v68; // eax
  SURFOBJ *v69; // r8
  XLATEOBJ *v70; // r9
  SURFOBJ *v71; // rdx
  LONG xHot; // [rsp+20h] [rbp-E0h]
  int yHota; // [rsp+28h] [rbp-D8h]
  LONG yHot; // [rsp+28h] [rbp-D8h]
  LONG x; // [rsp+30h] [rbp-D0h]
  LONG y; // [rsp+38h] [rbp-C8h]
  RECTL *prcl; // [rsp+40h] [rbp-C0h]
  int fl; // [rsp+48h] [rbp-B8h]
  int v79; // [rsp+60h] [rbp-A0h]
  int v80; // [rsp+60h] [rbp-A0h]
  LONG v81; // [rsp+64h] [rbp-9Ch]
  LONG v82; // [rsp+64h] [rbp-9Ch]
  int v83; // [rsp+68h] [rbp-98h]
  SURFOBJ *pso; // [rsp+70h] [rbp-90h]
  LONG v85; // [rsp+78h] [rbp-88h]
  int v87; // [rsp+80h] [rbp-80h]
  struct PALETTE *v88; // [rsp+88h] [rbp-78h] BYREF
  __int64 v89; // [rsp+90h] [rbp-70h]
  __int64 v90; // [rsp+98h] [rbp-68h] BYREF
  RECTL v91; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v92; // [rsp+B0h] [rbp-50h]
  unsigned int v93; // [rsp+B8h] [rbp-48h]
  int v94; // [rsp+BCh] [rbp-44h]
  int v95; // [rsp+C0h] [rbp-40h]
  __int64 v96; // [rsp+C8h] [rbp-38h]
  __int64 v97; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v98; // [rsp+D8h] [rbp-28h] BYREF
  RECTL v99; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v100; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v101; // [rsp+F8h] [rbp-8h] BYREF
  int v102; // [rsp+100h] [rbp+0h]
  int v103; // [rsp+104h] [rbp+4h]
  __int64 v104; // [rsp+108h] [rbp+8h] BYREF
  int v105; // [rsp+110h] [rbp+10h]
  int v106; // [rsp+114h] [rbp+14h]
  RECTL v107; // [rsp+120h] [rbp+20h] BYREF

  v93 = a4;
  v79 = a3 & 0x10;
  v5 = a1 + 8;
  v81 = 0;
  v94 = a3 & 0x20;
  v6 = a2;
  v7 = *((_DWORD *)a1 + 8);
  if ( (v7 & 0x400) != 0 )
    return;
  if ( a2 )
  {
    v13 = *((_QWORD *)a2 + 1);
    LOBYTE(a2) = 5;
    v100 = HmgShareLockCheck(v13, a2);
    v14 = v100;
    if ( !(unsigned int)PDEVOBJ::bValid((PDEVOBJ *)&v100)
      || *(_DWORD *)(v14 + 96) != 1
      || (*(_DWORD *)(v14 + 60) & 1) != 0 )
    {
      goto LABEL_92;
    }
    v15 = *((_QWORD *)a1 + 321);
    v16 = 0LL;
    v17 = 0LL;
    v89 = 0LL;
    v18 = 0LL;
    v92 = 0LL;
    v96 = 0LL;
    v98 = 0LL;
    v90 = 0LL;
    v97 = 0LL;
    pso = (SURFOBJ *)((v15 + 24) & -(__int64)(v15 != 0));
    v19 = *((_QWORD *)v6 + 2);
    v88 = 0LL;
    if ( v19 || *((_QWORD *)v6 + 6) )
    {
      v20 = *((_QWORD *)v6 + 6);
      LOBYTE(v16) = 5;
      if ( v20 )
      {
        v21 = HmgShareLockCheck(v20, v16);
        v81 = 1;
      }
      else
      {
        v21 = HmgShareLockCheck(v19, v16);
      }
      v90 = v21;
      v17 = v21;
      if ( !(unsigned int)PDEVOBJ::bValid((PDEVOBJ *)&v90) )
        goto LABEL_32;
      if ( *(_DWORD *)(v17 + 60) != *(int *)(v14 + 60) >> 1 || *(_DWORD *)(v17 + 56) < *(_DWORD *)(v14 + 56) )
        goto LABEL_91;
      v22 = *(struct PALETTE **)(v17 + 128);
      v88 = v22;
      if ( !v22 )
      {
        v23 = (HDEV)*((_QWORD *)a1 + 2);
        if ( v23 != a1 )
        {
          v22 = (struct PALETTE *)*((_QWORD *)v23 + 228);
          v88 = v22;
        }
      }
      if ( !(unsigned int)bIsCompatible(&v88, v22, v17, a1, 1) )
        goto LABEL_91;
      if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                           &v98,
                           0LL,
                           0,
                           (__int64)v88,
                           *((_QWORD *)a1 + 228),
                           (__int64)ppalDefault,
                           (__int64)ppalDefault,
                           0,
                           0xFFFFFF,
                           0,
                           0) )
      {
        v16 = v17;
        v96 = v98;
        v89 = v17;
      }
      else
      {
LABEL_32:
        v16 = 0LL;
      }
    }
    if ( *((_DWORD *)v6 + 11) )
    {
      if ( (*(_DWORD *)v6 & 0x400) != 0 )
      {
        if ( v79 )
        {
LABEL_41:
          v24 = *((_DWORD *)v6 + 8);
          if ( v24 > *((_DWORD *)v6 + 10) )
            goto LABEL_91;
          v25 = *((_DWORD *)v6 + 9);
          v26 = *((_DWORD *)v6 + 11);
          if ( v25 > v26 )
            goto LABEL_91;
          v99.right = *((_DWORD *)v6 + 10);
          v27 = *((_QWORD *)v6 + 3);
          *(_QWORD *)&v99.left = __PAIR64__(v25, v24);
          v99.bottom = v26;
          if ( v27 && *((_DWORD *)a1 + 531) > 3u )
          {
            LOBYTE(v16) = 5;
            v18 = HmgShareLockCheck(v27, v16);
            v97 = v18;
          }
          if ( (unsigned int)PDEVOBJ::bValid((PDEVOBJ *)&v97) )
          {
            v28 = *((_DWORD *)v6 + 8);
            v29 = *((_DWORD *)v6 + 9);
            v30 = *((_DWORD *)v6 + 10);
            v31 = *((_DWORD *)v6 + 11);
            v91.left = v28;
            v91.top = v29;
            v91.right = v30;
            v91.bottom = v31;
            v92 = v18;
            if ( v79 )
            {
              v91.left = v28 + 1;
              v91.top = v29 + 1;
              v91.bottom = v31 + 6;
              v91.right = v30 + 8;
            }
            v32 = *(_DWORD *)(v18 + 56);
            v33 = &v101;
            v101 = 0LL;
            v34 = &v91;
            v102 = v32;
            v103 = *(_DWORD *)(v18 + 60);
          }
          else
          {
            if ( (unsigned int)PDEVOBJ::bValid((PDEVOBJ *)&v90) )
            {
              v35 = *(_DWORD *)(v17 + 56);
              if ( *(_DWORD *)(v14 + 56) < v35 )
                v35 = *(_DWORD *)(v14 + 56);
            }
            else
            {
              v35 = *(_DWORD *)(v14 + 56);
            }
            v104 = 0LL;
            v33 = &v104;
            v36 = *(int *)(v14 + 60) >> 1;
            v105 = v35;
            v34 = &v99;
            v106 = v36;
          }
          ERECTL::operator*=(v34, v33);
          v38 = v79 != 0 ? 3 : 0;
          v39 = (*(_DWORD *)v5 & 0x400) == 0;
          v95 = v38;
          if ( !v39 )
            goto LABEL_91;
          v40 = *((__int16 *)v6 + 3);
          v41 = v37;
          v42 = v93;
          v43 = *((_DWORD *)a1 + 14);
          v44 = a3 & 0xC | 1;
          v45 = *((_DWORD *)a1 + 15);
          *((_DWORD *)a1 + 16) = *((__int16 *)v6 + 2);
          v46 = v37;
          *((_DWORD *)a1 + 17) = v40;
          v85 = v43;
          v82 = v45;
          v83 = 1;
          v87 = v37;
          v80 = v37;
          if ( v42 && a5 )
          {
            v47 = -1;
            if ( a5 < 0xFF )
              v47 = a5;
            v48 = v47;
            v49 = 16;
            v50 = 16 * v48;
            if ( v42 < 0x10 )
              v49 = v42;
            v51 = v49 & 0xF | v50;
            v46 = 1;
            v44 |= v51 << 8;
            v87 = 1;
          }
          if ( v94 != v37 )
            goto LABEL_95;
          v52 = (__int64 (__fastcall *)(SURFOBJ *, __int64, __int64, __int64, int, int, LONG, LONG, RECTL *, unsigned int))*((_QWORD *)a1 + 367);
          if ( !v52 || v46 && ((_DWORD)a1[536] & 0x200) == 0 )
            goto LABEL_95;
          if ( v92 )
          {
            if ( ((_DWORD)a1[536] & 0x20) == 0 )
              goto LABEL_95;
            v53 = v38 + *((__int16 *)v6 + 3);
            v54 = v38 + *((__int16 *)v6 + 2);
            v107 = v91;
            v55 = v52(pso, 0LL, v92 + 24, 0LL, v54, v53, v43, v45, &v107, v44 | 0x10u);
            if ( v55 == 3 )
              v41 = 0;
            else
              v41 = ((unsigned __int8)v55 >> 1) & 1;
            v56 = v41 ^ 1;
            v80 = (v55 >> 2) & 1;
          }
          else
          {
            v57 = *((__int16 *)v6 + 2);
            yHota = *((__int16 *)v6 + 3);
            v107 = v99;
            v58 = v52(pso, v14 + 24, (v89 + 24) & -(__int64)(v89 != 0), v96, v57, yHota, v43, v82, &v107, v44);
            v59 = v58;
            if ( v58 == 3 )
            {
              v60 = (void (__fastcall *)(SURFOBJ *, __int64, __int64, _QWORD))*((_QWORD *)a1 + 368);
              if ( v60 )
                v60(pso, 0xFFFFFFFFLL, 0xFFFFFFFFLL, 0LL);
              v59 = 1;
            }
            v41 = (v59 & 2) != 0;
            v56 = (v59 & 2) == 0;
            v83 = v56;
            if ( (v59 & 4) != 0 )
            {
              v80 = 1;
LABEL_82:
              if ( !v56 )
              {
                if ( (*(_DWORD *)v5 & 4) != 0 )
                  EngSetPointerShape(
                    (SURFOBJ *)((*((_QWORD *)a1 + 321) + 24LL) & -(__int64)(*((_QWORD *)a1 + 321) != 0LL)),
                    0LL,
                    0LL,
                    0LL,
                    0,
                    0,
                    0,
                    0,
                    0LL,
                    0);
                v61 = pso;
                goto LABEL_86;
              }
              v38 = v95;
              v43 = v85;
              v45 = v82;
LABEL_95:
              v66 = a3 & 0x40 | v44;
              if ( v92 )
              {
                v67 = v38 + *((__int16 *)v6 + 3);
                v68 = v38 + *((__int16 *)v6 + 2);
                v69 = (SURFOBJ *)(v92 + 24);
                fl = v66 | 0x10;
                prcl = &v91;
                y = v45;
                x = v43;
                v70 = 0LL;
                yHot = v67;
                v71 = 0LL;
                xHot = v68;
              }
              else
              {
                v71 = (SURFOBJ *)(v14 + 24);
                fl = v66;
                v69 = (SURFOBJ *)((v89 + 24) & -(__int64)(v89 != 0));
                prcl = &v99;
                y = v82;
                x = v43;
                v70 = (XLATEOBJ *)v96;
                yHot = *((__int16 *)v6 + 3);
                xHot = *((__int16 *)v6 + 2);
              }
              v61 = pso;
              EngSetPointerShape(pso, v71, v69, v70, xHot, yHot, x, y, prcl, fl);
LABEL_86:
              if ( !v41 && (*(_DWORD *)v5 & 2) != 0 )
              {
                v62 = (void (__fastcall *)(SURFOBJ *, __int64, __int64, _QWORD))*((_QWORD *)a1 + 368);
                if ( v62 )
                  v62(v61, 0xFFFFFFFFLL, 0xFFFFFFFFLL, 0LL);
              }
              SETFLAG(v83, (volatile unsigned int *)v5, 4u);
              SETFLAG(v41, v63, 2u);
              SETFLAG(v87, v64, 0x100000u);
              SETFLAG(v80, v65, 0x200000u);
LABEL_91:
              EPALOBJ::~EPALOBJ((EPALOBJ *)&v97);
              EPALOBJ::~EPALOBJ((EPALOBJ *)&v90);
              EXLATEOBJ::~EXLATEOBJ((EXLATEOBJ *)&v98);
LABEL_92:
              EPALOBJ::~EPALOBJ((EPALOBJ *)&v100);
              return;
            }
            v80 = 0;
          }
          v83 = v56;
          goto LABEL_82;
        }
      }
      else if ( !v79 )
      {
        goto LABEL_41;
      }
    }
    vProcessCursorShape(
      (HDEV)(v16 + 24),
      v79,
      v81,
      (struct _SURFOBJ *)(v14 + 24),
      (struct _SURFOBJ *)((v16 + 24) & -(__int64)(v16 != 0)),
      v88,
      (struct _RECTL *)v6 + 2,
      (HBITMAP *)v6 + 3);
    if ( v79 )
      *(_DWORD *)v6 |= 0x400u;
    else
      *(_DWORD *)v6 &= ~0x400u;
    goto LABEL_41;
  }
  if ( (v7 & 4) != 0 )
    EngSetPointerShape(
      (SURFOBJ *)((*((_QWORD *)a1 + 321) + 24LL) & -(__int64)(*((_QWORD *)a1 + 321) != 0LL)),
      0LL,
      0LL,
      0LL,
      0,
      0,
      0,
      0,
      0LL,
      0);
  if ( (*(_DWORD *)v5 & 2) != 0 )
  {
    v9 = (void (__fastcall *)(__int64, __int64, __int64, _QWORD))*((_QWORD *)a1 + 368);
    if ( v9 )
      v9((*((_QWORD *)a1 + 321) + 24LL) & -(__int64)(*((_QWORD *)a1 + 321) != 0LL), 0xFFFFFFFFLL, 0xFFFFFFFFLL, 0LL);
  }
  _m_prefetchw(v5);
  do
    v10 = *(_DWORD *)v5;
  while ( v10 != _InterlockedCompareExchange((volatile signed __int32 *)v5, *(_DWORD *)v5 & 0xFFFFFFFD, *(_DWORD *)v5) );
  _m_prefetchw(v5);
  do
    v11 = *(_DWORD *)v5;
  while ( v11 != _InterlockedCompareExchange((volatile signed __int32 *)v5, *(_DWORD *)v5 & 0xFFFFFFFB, *(_DWORD *)v5) );
  _m_prefetchw(v5);
  do
    v12 = *(_DWORD *)v5;
  while ( v12 != _InterlockedCompareExchange((volatile signed __int32 *)v5, *(_DWORD *)v5 & 0xFFEFFFFF, *(_DWORD *)v5) );
}
