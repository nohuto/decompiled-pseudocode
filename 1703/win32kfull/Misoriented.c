/*
 * XREFs of Misoriented @ 0x1C02C5B24
 * Callers:
 *     fsg_CheckOutlineOrientation @ 0x1C02C6208 (fsg_CheckOutlineOrientation.c)
 * Callees:
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     CheckBoundingBoxCurve @ 0x1C02C50F8 (CheckBoundingBoxCurve.c)
 *     CheckBoundingBoxSegment @ 0x1C02C51DC (CheckBoundingBoxSegment.c)
 *     CurveTransitions @ 0x1C02C5298 (CurveTransitions.c)
 *     CurveTransitionsSegment @ 0x1C02C5470 (CurveTransitionsSegment.c)
 *     SetLineToInfinity @ 0x1C02C6128 (SetLineToInfinity.c)
 */

__int64 __fastcall Misoriented(int a1, unsigned __int16 a2, __int16 a3, __int64 a4, __int64 a5)
{
  unsigned int v7; // r14d
  _WORD *v9; // r9
  __int16 v10; // bx
  __int16 v11; // si
  int v12; // r11d
  __int16 v13; // r13
  __int64 v14; // r9
  int v15; // r12d
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned int v18; // eax
  unsigned int v19; // edi
  unsigned int v20; // r15d
  __int16 v21; // r9
  unsigned int v22; // r8d
  unsigned int v23; // r10^4
  unsigned int v24; // r11d
  int v25; // r12d
  int v26; // edx
  __int64 v27; // rcx
  int v28; // r8d
  int v29; // eax
  int v30; // ecx
  __int64 i; // rcx
  _QWORD *v32; // rbx
  __int16 v33; // ax
  int v34; // r13d
  _WORD *v35; // rcx
  __int64 v36; // rsi
  __int64 v37; // r8
  unsigned __int64 v38; // rdi
  __int64 v39; // r15
  __int16 v40; // dx
  int v41; // r9d
  __int16 v42; // r10
  __int16 v43; // r9
  __int64 v44; // rdx
  int v45; // r11d
  int v46; // r8d
  unsigned __int64 v47; // r12
  __int64 v48; // rcx
  int v49; // r10d
  unsigned __int64 v50; // rdx
  __int16 v51; // ax
  __int64 v52; // rcx
  __int64 v53; // rbx
  __int16 v54; // ax
  int v55; // r9d
  int v56; // edx
  int v57; // eax
  int v58; // edx
  __int64 v59; // rbx
  int v60; // eax
  __int64 v61; // rbx
  __int64 v62; // rbx
  __int16 v65; // [rsp+3Ah] [rbp-6Fh]
  __int64 v66; // [rsp+40h] [rbp-69h]
  __int64 v67; // [rsp+40h] [rbp-69h]
  __int64 v68; // [rsp+40h] [rbp-69h]
  __int16 v69; // [rsp+48h] [rbp-61h]
  __int16 v70; // [rsp+4Ah] [rbp-5Fh]
  __int16 v71; // [rsp+4Ch] [rbp-5Dh]
  unsigned __int64 v72; // [rsp+50h] [rbp-59h]
  unsigned __int64 v73; // [rsp+58h] [rbp-51h]
  unsigned __int64 v74; // [rsp+60h] [rbp-49h]
  int v75; // [rsp+68h] [rbp-41h]
  int v76; // [rsp+6Ch] [rbp-3Dh]
  int v77; // [rsp+70h] [rbp-39h]
  int v78; // [rsp+74h] [rbp-35h]
  __int64 v79; // [rsp+78h] [rbp-31h]
  __int64 v80; // [rsp+80h] [rbp-29h]
  __int64 v81; // [rsp+88h] [rbp-21h]
  _WORD *v82; // [rsp+90h] [rbp-19h]
  unsigned __int64 v83; // [rsp+98h] [rbp-11h]
  __int64 v84; // [rsp+A0h] [rbp-9h]
  unsigned __int64 v85; // [rsp+A8h] [rbp-1h] BYREF
  __int64 v86; // [rsp+B0h] [rbp+7h] BYREF
  __int64 v87; // [rsp+B8h] [rbp+Fh]

  v76 = a1;
  v7 = 0;
  v9 = *(_WORD **)(a5 + 64);
  v10 = 0;
  v81 = *(_QWORD *)(a5 + 56);
  v82 = v9;
  v11 = v9[a1] - *(_WORD *)(v81 + 2LL * a1) + 1;
  SetLineToInfinity(a2, a4, &v85, &v86);
  v13 = a3 - v12;
  v14 = *(_QWORD *)(a5 + 40);
  v15 = 0;
  v79 = *(_QWORD *)(a5 + 32);
  v75 = v12;
  v80 = v14;
  v77 = 0;
  v16 = v12 + (__int16)((v11 + v13 - 1) % v11);
  v17 = v12 + v13;
  v18 = *(_DWORD *)(v14 + 4 * v16);
  v19 = *(_DWORD *)(v79 + 4 * v17);
  v20 = *(_DWORD *)(v14 + 4 * v17);
  v21 = 0;
  v22 = *(_DWORD *)(v79 + 4 * v16);
  v73 = __PAIR64__(v20, v19);
  LODWORD(v66) = v19 - v22;
  v23 = v20;
  v72 = __PAIR64__(v18, v22);
  HIDWORD(v66) = v20 - v18;
  v24 = v19 - v22;
  v87 = v66;
  if ( v11 > 0 )
  {
    v25 = v11;
    do
    {
      if ( v10 )
        break;
      v26 = (v13 + 1) % v25;
      v13 = v26;
      v27 = v26 + v75;
      v28 = *(_DWORD *)(v79 + 4 * v27);
      LODWORD(v74) = v28;
      v29 = *(_DWORD *)(v80 + 4 * v27);
      HIDWORD(v74) = v29;
      if ( v19 != v28 || v20 != v29 )
      {
        LODWORD(v67) = v28 - v19;
        HIDWORD(v67) = HIDWORD(v74) - v23;
        v30 = v24 * (HIDWORD(v74) - v23) - (v28 - v19) * HIDWORD(v87);
        if ( v30 >= 0 )
          v10 = v30 > 0;
        else
          v10 = -1;
        for ( i = 0LL; i < 2; ++i )
          *(&v72 + i) = *(&v73 + i);
        v24 = v67;
        v20 = HIDWORD(v73);
        v19 = v73;
        v23 = HIDWORD(v73);
        v87 = v67;
        v25 = v11;
      }
      ++v21;
    }
    while ( v21 < v11 );
    v15 = 0;
    if ( v21 < v11 )
    {
      if ( v10 > 0 )
        v15 = 2;
      v77 = v15;
    }
  }
  v32 = (_QWORD *)a5;
  v33 = 0;
  v34 = 0;
  v71 = 0;
  v70 = *(_WORD *)(a5 + 80);
  if ( v70 > 0 )
  {
    v35 = v82;
    v36 = v86;
    v37 = v81 - (_QWORD)v82;
    v38 = v85;
    v39 = v72;
    v40 = *(_WORD *)(a5 + 80);
    v41 = v76;
    v81 -= (__int64)v82;
    while ( 1 )
    {
      if ( v33 == v41 )
        goto LABEL_53;
      v42 = *v35;
      LOWORD(v75) = *(_WORD *)((char *)v35 + v37);
      v43 = v75;
      v65 = v42;
      if ( (__int16)(v42 - v75 + 1) <= 2 )
        goto LABEL_52;
      v44 = v32[6];
      v45 = *(unsigned __int8 *)((__int16)v75 + v44);
      v46 = 2 * *(_DWORD *)(v79 + 4LL * (__int16)v75);
      LODWORD(v73) = v46;
      HIDWORD(v73) = 2 * *(_DWORD *)(v80 + 4LL * (__int16)v75);
      v47 = v73;
      if ( !v45 )
      {
        v48 = v42;
        v49 = 2 * *(_DWORD *)(v79 + 4LL * v42);
        LODWORD(v72) = v49;
        HIDWORD(v72) = 2 * *(_DWORD *)(v80 + 4 * v48);
        if ( *(_BYTE *)(v48 + v44) )
        {
          v39 = v72;
        }
        else
        {
          HIDWORD(v83) = (HIDWORD(v73) + HIDWORD(v72)) >> 1;
          LODWORD(v83) = (v49 + v46) >> 1;
          v39 = v83;
          v72 = v83;
        }
        v42 = v65;
      }
      v50 = v32[4];
      v51 = v75;
      v52 = v32[5];
      v53 = v32[6];
      v68 = v53;
      v85 = v50;
      v87 = v52;
      while ( 1 )
      {
        if ( v51 == v42 )
          v54 = v43;
        else
          v54 = v51 + 1;
        v69 = v54;
        v55 = 2 * *(_DWORD *)(v50 + 4LL * v54);
        LODWORD(v74) = v55;
        v56 = *(_DWORD *)(v87 + 4LL * v54);
        v57 = *(unsigned __int8 *)(v54 + v53);
        v58 = 2 * v56;
        HIDWORD(v74) = v58;
        v78 = v57;
        switch ( v57 | (2 * v45) )
        {
          case 0:
            HIDWORD(v84) = (HIDWORD(v47) + HIDWORD(v74)) >> 1;
            LODWORD(v84) = (v55 + v46) >> 1;
            v62 = v84;
            if ( v72 != v84 && (unsigned int)CheckBoundingBoxCurve(v38, v39, v47, v84, a2) )
              v34 += CurveTransitions(v38, v36, v39, v47, v62);
            v39 = v62;
            v72 = v62;
            goto LABEL_48;
          case 1:
            if ( (_DWORD)v72 != v55 || HIDWORD(v39) != v58 )
            {
              v61 = v74;
              if ( (unsigned int)CheckBoundingBoxCurve(v38, v39, v47, v74, a2) )
              {
                v60 = CurveTransitions(v38, v36, v39, v47, v61);
LABEL_38:
                v34 += v60;
              }
LABEL_48:
              v53 = v68;
            }
            break;
          case 2:
            v39 = v47;
            v72 = v47;
            break;
          default:
            if ( (v57 | (2 * v45)) == 3 && (v46 != v55 || HIDWORD(v47) != v58) )
            {
              v59 = v74;
              if ( (unsigned int)CheckBoundingBoxSegment(v38, v47, v74, a2) )
              {
                v60 = CurveTransitionsSegment(v38, v36, v47, v59);
                goto LABEL_38;
              }
              goto LABEL_48;
            }
            break;
        }
        v51 = v69;
        v43 = v75;
        v47 = v74;
        v45 = v78;
        v73 = v74;
        if ( v69 == (_WORD)v75 )
          break;
        v42 = v65;
        v46 = v74;
        v50 = v85;
      }
      v35 = v82;
      v32 = (_QWORD *)a5;
      v40 = v70;
      v37 = v81;
LABEL_52:
      v41 = v76;
LABEL_53:
      ++v35;
      v33 = v71 + 1;
      v82 = v35;
      v71 = v33;
      if ( v33 >= v40 )
      {
        v15 = v77;
        break;
      }
    }
  }
  LOBYTE(v7) = (~(2 * v34) & 2) == v15;
  return v7;
}
