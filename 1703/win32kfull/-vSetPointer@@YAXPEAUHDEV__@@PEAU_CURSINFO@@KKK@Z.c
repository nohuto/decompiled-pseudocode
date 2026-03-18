/*
 * XREFs of ?vSetPointer@@YAXPEAUHDEV__@@PEAU_CURSINFO@@KKK@Z @ 0x1C0045988
 * Callers:
 *     GreSetPointer @ 0x1C00471C8 (GreSetPointer.c)
 * Callees:
 *     ?bValid@DWMSPRITEREF@@QEAAHXZ @ 0x1C0025780 (-bValid@DWMSPRITEREF@@QEAAHXZ.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C0071AC4 (--1EPALOBJ@@QEAA@XZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C0081670 (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0086EE0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     EngSetPointerShape @ 0x1C00A0710 (EngSetPointerShape.c)
 *     ?vProcessCursorShape@@YAXPEAUHDEV__@@HHPEAU_SURFOBJ@@1PEAVPALETTE@@PEAU_RECTL@@PEAPEAUHBITMAP__@@@Z @ 0x1C00DD8D4 (-vProcessCursorShape@@YAXPEAUHDEV__@@HHPEAU_SURFOBJ@@1PEAVPALETTE@@PEAU_RECTL@@PEAPEAUHBITMAP__@.c)
 *     ?SETFLAG@@YAXHAECKK@Z @ 0x1C00F1EEC (-SETFLAG@@YAXHAECKK@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 *     ??1EXLATEOBJ@@QEAA@XZ @ 0x1C01958D4 (--1EXLATEOBJ@@QEAA@XZ.c)
 */

void __fastcall vSetPointer(_DWORD *a1, struct _CURSINFO *a2, char a3, unsigned int a4, unsigned int a5)
{
  __int64 v5; // rsi
  HDEV v6; // r15
  struct _CURSINFO *v7; // r12
  int v8; // eax
  void (__fastcall *v9)(__int64, __int64, __int64, _QWORD); // r10
  volatile unsigned int v10; // ett
  volatile unsigned int v11; // ett
  volatile unsigned int v12; // ett
  __int64 v13; // rcx
  __int64 v14; // rdi
  int v15; // r13d
  __int64 v16; // rdx
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  struct PALETTE *v21; // rdx
  __int64 v22; // rcx
  signed int v23; // eax
  LONG v24; // r8d
  LONG v25; // r9d
  _DWORD *v26; // r14
  __int64 v27; // rcx
  __int64 v28; // r9
  int v29; // r10d
  LONG v30; // edx
  __int64 v31; // r8
  LONG v32; // eax
  LONG v33; // ecx
  int v34; // eax
  _DWORD **v35; // rdx
  RECTL *v36; // rcx
  int v37; // ecx
  int v38; // eax
  char v39; // r11
  int v40; // r10d
  int v41; // r8d
  bool v42; // zf
  int v43; // ecx
  unsigned int v44; // edx
  int v45; // esi
  LONG v46; // r9d
  int v47; // ebx
  LONG v48; // r10d
  int v49; // eax
  unsigned __int8 v50; // al
  int v51; // ecx
  char v52; // al
  int v53; // ecx
  int v54; // ecx
  __int64 (__fastcall *v55)(SURFOBJ *, __int64, __int64, XLATEOBJ *); // r11
  int v56; // eax
  SURFOBJ *v57; // rbx
  int v58; // eax
  char v59; // dl
  SURFOBJ *v60; // rdi
  volatile unsigned int *v61; // rdx
  volatile unsigned int *v62; // rdx
  volatile unsigned int *v63; // rdx
  int v64; // esi
  LONG v65; // ecx
  LONG v66; // eax
  SURFOBJ *v67; // r8
  XLATEOBJ *v68; // r9
  SURFOBJ *v69; // rdx
  LONG xHot; // [rsp+20h] [rbp-E0h]
  LONG yHot; // [rsp+28h] [rbp-D8h]
  LONG x; // [rsp+30h] [rbp-D0h]
  LONG y; // [rsp+38h] [rbp-C8h]
  RECTL *prcl; // [rsp+40h] [rbp-C0h]
  int fl; // [rsp+48h] [rbp-B8h]
  int v76; // [rsp+60h] [rbp-A0h]
  int v77; // [rsp+60h] [rbp-A0h]
  LONG v78; // [rsp+64h] [rbp-9Ch]
  LONG v79; // [rsp+64h] [rbp-9Ch]
  char v81; // [rsp+68h] [rbp-98h]
  LONG v82; // [rsp+6Ch] [rbp-94h]
  _DWORD *v83; // [rsp+70h] [rbp-90h] BYREF
  int v84; // [rsp+78h] [rbp-88h]
  int v85; // [rsp+7Ch] [rbp-84h]
  SURFOBJ *pso; // [rsp+80h] [rbp-80h]
  int v87; // [rsp+88h] [rbp-78h]
  struct PALETTE *v88; // [rsp+90h] [rbp-70h] BYREF
  __int64 v89; // [rsp+98h] [rbp-68h]
  _QWORD v90[2]; // [rsp+A0h] [rbp-60h] BYREF
  RECTL v91; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v92; // [rsp+C0h] [rbp-40h]
  unsigned int v93; // [rsp+C8h] [rbp-38h]
  int v94; // [rsp+CCh] [rbp-34h]
  XLATEOBJ *v95; // [rsp+D0h] [rbp-30h]
  __int64 v96; // [rsp+D8h] [rbp-28h] BYREF
  _QWORD v97[2]; // [rsp+E0h] [rbp-20h] BYREF
  RECTL v98; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v99; // [rsp+100h] [rbp+0h] BYREF
  _DWORD v100[6]; // [rsp+108h] [rbp+8h] BYREF
  RECTL v101; // [rsp+120h] [rbp+20h]

  v5 = 0LL;
  v93 = a4;
  v83 = a1;
  v76 = a3 & 0x10;
  v6 = (HDEV)(a1 + 8);
  v78 = 0;
  v7 = a2;
  v94 = a3 & 0x20;
  v8 = a1[8];
  if ( (v8 & 0x400) != 0 )
    return;
  if ( a2 )
  {
    v13 = *((_QWORD *)a2 + 1);
    LOBYTE(a2) = 5;
    v99 = HmgShareLockCheck(v13, a2);
    v14 = v99;
    if ( !DWMSPRITEREF::bValid((DWMSPRITEREF *)&v99) )
      goto LABEL_93;
    v15 = 1;
    if ( *(_DWORD *)(v14 + 96) != 1 || (*(_DWORD *)(v14 + 60) & 1) != 0 )
      goto LABEL_93;
    v16 = 0LL;
    v17 = 0LL;
    v89 = 0LL;
    v92 = 0LL;
    v18 = *((_QWORD *)v83 + 321);
    v88 = 0LL;
    v95 = 0LL;
    v97[0] = 0LL;
    v90[0] = 0LL;
    v96 = 0LL;
    pso = (SURFOBJ *)((v18 + 24) & -(__int64)(v18 != 0));
    if ( *((_QWORD *)v7 + 2) || *((_QWORD *)v7 + 6) )
    {
      v19 = *((_QWORD *)v7 + 6);
      LOBYTE(v16) = 5;
      if ( v19 )
      {
        v20 = HmgShareLockCheck(v19, v16);
        v78 = 1;
      }
      else
      {
        v20 = HmgShareLockCheck(*((_QWORD *)v7 + 2), v16);
      }
      v90[0] = v20;
      v17 = v20;
      if ( !DWMSPRITEREF::bValid((DWMSPRITEREF *)v90) )
        goto LABEL_32;
      if ( *(_DWORD *)(v17 + 60) != *(int *)(v14 + 60) >> 1 || *(_DWORD *)(v17 + 56) < *(_DWORD *)(v14 + 56) )
        goto LABEL_92;
      v21 = *(struct PALETTE **)(v17 + 128);
      v88 = v21;
      if ( !v21 )
      {
        v22 = *((_QWORD *)v83 + 2);
        if ( (_DWORD *)v22 != v83 )
        {
          v21 = *(struct PALETTE **)(v22 + 1824);
          v88 = v21;
        }
      }
      if ( !(unsigned int)bIsCompatible(&v88, v21, v17, v83, 1) )
        goto LABEL_92;
      if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                           v97,
                           0LL,
                           0LL,
                           v88,
                           *((_QWORD *)v83 + 228),
                           ppalDefault,
                           ppalDefault,
                           0,
                           0xFFFFFF,
                           0,
                           0) )
      {
        v16 = v17;
        v95 = (XLATEOBJ *)v97[0];
        v89 = v17;
      }
      else
      {
LABEL_32:
        v16 = 0LL;
      }
    }
    if ( !*((_DWORD *)v7 + 11) || (*(_DWORD *)v7 & 0x400) != 0 && !v76 || (*(_DWORD *)v7 & 0x400) == 0 && v76 )
    {
      vProcessCursorShape(
        (HDEV)(v16 + 24),
        v76,
        v78,
        (struct _SURFOBJ *)(v14 + 24),
        (struct _SURFOBJ *)((v16 + 24) & -(__int64)(v16 != 0)),
        v88,
        (struct _RECTL *)v7 + 2,
        (HBITMAP *)v7 + 3);
      if ( v76 )
        *(_DWORD *)v7 |= 0x400u;
      else
        *(_DWORD *)v7 &= ~0x400u;
    }
    v23 = *((_DWORD *)v7 + 8);
    if ( v23 > *((_DWORD *)v7 + 10) )
      goto LABEL_92;
    v24 = *((_DWORD *)v7 + 9);
    v25 = *((_DWORD *)v7 + 11);
    if ( v24 > v25 )
      goto LABEL_92;
    v26 = v83;
    v98.right = *((_DWORD *)v7 + 10);
    v27 = *((_QWORD *)v7 + 3);
    *(_QWORD *)&v98.left = __PAIR64__(v24, v23);
    v98.bottom = v25;
    v81 = a3 & 0xEF;
    if ( v27 && v83[531] > 3u )
    {
      LOBYTE(v16) = 5;
      v5 = HmgShareLockCheck(v27, v16);
      v96 = v5;
    }
    if ( DWMSPRITEREF::bValid((DWMSPRITEREF *)&v96) )
    {
      v30 = *((_DWORD *)v7 + 8);
      v31 = *((unsigned int *)v7 + 9);
      v32 = *((_DWORD *)v7 + 10);
      v33 = *((_DWORD *)v7 + 11);
      v91.left = v30;
      v91.top = v31;
      v91.right = v32;
      v91.bottom = v33;
      v92 = v5;
      if ( v29 )
      {
        v91.left = v30 + 1;
        v31 = (unsigned int)(v31 + 1);
        v91.right = v32 + 8;
        v91.top = v31;
        v91.bottom = v33 + 6;
      }
      v34 = *(_DWORD *)(v5 + 56);
      v35 = &v83;
      v83 = 0LL;
      v36 = &v91;
      v84 = v34;
      v85 = *(_DWORD *)(v5 + 60);
    }
    else
    {
      if ( DWMSPRITEREF::bValid((DWMSPRITEREF *)v90) )
      {
        v37 = *(_DWORD *)(v17 + 56);
        if ( *(_DWORD *)(v14 + 56) < v37 )
          v37 = *(_DWORD *)(v14 + 56);
      }
      else
      {
        v37 = *(_DWORD *)(v14 + 56);
      }
      v100[0] = 0;
      v35 = (_DWORD **)v100;
      v100[1] = 0;
      v38 = *(int *)(v14 + 60) >> 1;
      v100[2] = v37;
      v36 = &v98;
      v100[3] = v38;
    }
    ERECTL::operator*=(v36, v35, v31, v28);
    v41 = v40 != 0 ? 3 : 0;
    v42 = (*(_DWORD *)v6 & 0x400) == 0;
    LODWORD(v83) = v41;
    if ( !v42 )
    {
LABEL_92:
      EPALOBJ::~EPALOBJ((EPALOBJ *)&v96);
      EPALOBJ::~EPALOBJ((EPALOBJ *)v90);
      EXLATEOBJ::~EXLATEOBJ((EXLATEOBJ *)v97);
LABEL_93:
      EPALOBJ::~EPALOBJ((EPALOBJ *)&v99);
      return;
    }
    v43 = *((__int16 *)v7 + 3);
    v44 = v93;
    v45 = v39 & 0xC | 1;
    v46 = v26[14];
    v47 = 0;
    v48 = v26[15];
    v26[16] = *((__int16 *)v7 + 2);
    v49 = 0;
    v77 = 0;
    v26[17] = v43;
    v82 = v46;
    v79 = v48;
    v87 = 0;
    if ( v44 && a5 )
    {
      v50 = -1;
      if ( a5 < 0xFF )
        v50 = a5;
      v51 = v50;
      v52 = 16;
      v53 = 16 * v51;
      if ( v44 < 0x10 )
        v52 = v44;
      v54 = v52 & 0xF | v53;
      v49 = 1;
      v45 |= v54 << 8;
      v87 = 1;
    }
    if ( v94 )
      goto LABEL_96;
    v55 = (__int64 (__fastcall *)(SURFOBJ *, __int64, __int64, XLATEOBJ *))*((_QWORD *)v26 + 367);
    if ( !v55 || v49 && (v26[536] & 0x200) == 0 )
      goto LABEL_96;
    if ( v92 )
    {
      if ( (v26[536] & 0x20) == 0 )
        goto LABEL_96;
      v101 = v91;
      v56 = v55(pso, 0LL, v92 + 24, 0LL);
      if ( v56 != 3 )
        v47 = ((unsigned __int8)v56 >> 1) & 1;
      if ( (v56 & 4) != 0 )
      {
        v77 = 1;
        v15 = v47 ^ 1;
LABEL_83:
        if ( !v15 )
        {
          if ( (*(_DWORD *)v6 & 4) != 0 )
            EngSetPointerShape(
              (SURFOBJ *)((*((_QWORD *)v26 + 321) + 24LL) & -(__int64)(*((_QWORD *)v26 + 321) != 0LL)),
              0LL,
              0LL,
              0LL,
              0,
              0,
              0,
              0,
              0LL,
              0);
          v60 = pso;
          goto LABEL_87;
        }
        v41 = (int)v83;
        v46 = v82;
        v48 = v79;
LABEL_96:
        v64 = v81 & 0x40 | v45;
        if ( v92 )
        {
          v65 = v41 + *((__int16 *)v7 + 3);
          v66 = v41 + *((__int16 *)v7 + 2);
          v67 = (SURFOBJ *)(v92 + 24);
          fl = v64 | 0x10;
          prcl = &v91;
          y = v48;
          x = v46;
          v68 = 0LL;
          yHot = v65;
          v69 = 0LL;
          xHot = v66;
        }
        else
        {
          v69 = (SURFOBJ *)(v14 + 24);
          fl = v64;
          v67 = (SURFOBJ *)((v89 + 24) & -(__int64)(v89 != 0));
          prcl = &v98;
          y = v79;
          x = v46;
          v68 = v95;
          yHot = *((__int16 *)v7 + 3);
          xHot = *((__int16 *)v7 + 2);
        }
        v60 = pso;
        EngSetPointerShape(pso, v69, v67, v68, xHot, yHot, x, y, prcl, fl);
LABEL_87:
        if ( !v47 && (*(_DWORD *)v6 & 2) != 0 && *((_QWORD *)v26 + 368) )
          (*((void (__fastcall **)(SURFOBJ *, __int64, __int64, _QWORD))v26 + 368))(
            v60,
            0xFFFFFFFFLL,
            0xFFFFFFFFLL,
            0LL);
        SETFLAG(v15, (volatile unsigned int *)v6, 4u);
        SETFLAG(v47, v61, 2u);
        SETFLAG(v87, v62, 0x100000u);
        SETFLAG(v77, v63, 0x200000u);
        goto LABEL_92;
      }
      v15 = v47 ^ 1;
    }
    else
    {
      v57 = pso;
      v101 = v98;
      v58 = v55(pso, v14 + 24, (v89 + 24) & -(__int64)(v89 != 0), v95);
      v59 = v58;
      if ( v58 == 3 )
      {
        if ( *((_QWORD *)v26 + 368) )
          (*((void (__fastcall **)(SURFOBJ *, __int64, __int64, _QWORD))v26 + 368))(
            v57,
            0xFFFFFFFFLL,
            0xFFFFFFFFLL,
            0LL);
        v59 = 1;
      }
      v47 = (v59 & 2) != 0;
      if ( (v59 & 4) != 0 )
      {
        v77 = 1;
        v15 = (v59 & 2) == 0;
        goto LABEL_83;
      }
      v15 = (v59 & 2) == 0;
    }
    v77 = 0;
    goto LABEL_83;
  }
  if ( (v8 & 4) != 0 )
  {
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
    a1 = v83;
  }
  if ( (*(_DWORD *)v6 & 2) != 0 )
  {
    v9 = (void (__fastcall *)(__int64, __int64, __int64, _QWORD))*((_QWORD *)a1 + 368);
    if ( v9 )
      v9((*((_QWORD *)a1 + 321) + 24LL) & -(__int64)(*((_QWORD *)a1 + 321) != 0LL), 0xFFFFFFFFLL, 0xFFFFFFFFLL, 0LL);
  }
  _m_prefetchw(v6);
  do
    v10 = *(_DWORD *)v6;
  while ( v10 != _InterlockedCompareExchange((volatile signed __int32 *)v6, *(_DWORD *)v6 & 0xFFFFFFFD, *(_DWORD *)v6) );
  _m_prefetchw(v6);
  do
    v11 = *(_DWORD *)v6;
  while ( v11 != _InterlockedCompareExchange((volatile signed __int32 *)v6, *(_DWORD *)v6 & 0xFFFFFFFB, *(_DWORD *)v6) );
  _m_prefetchw(v6);
  do
    v12 = *(_DWORD *)v6;
  while ( v12 != _InterlockedCompareExchange((volatile signed __int32 *)v6, *(_DWORD *)v6 & 0xFFEFFFFF, *(_DWORD *)v6) );
}
