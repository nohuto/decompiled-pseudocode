/*
 * XREFs of Misoriented @ 0x1C02BF974
 * Callers:
 *     fsg_CheckOutlineOrientation @ 0x1C02C0028 (fsg_CheckOutlineOrientation.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     CheckBoundingBoxCurve @ 0x1C02BEF48 (CheckBoundingBoxCurve.c)
 *     CheckBoundingBoxSegment @ 0x1C02BF02C (CheckBoundingBoxSegment.c)
 *     CurveTransitions @ 0x1C02BF0E8 (CurveTransitions.c)
 *     CurveTransitionsSegment @ 0x1C02BF2C0 (CurveTransitionsSegment.c)
 *     SetLineToInfinity @ 0x1C02BFF48 (SetLineToInfinity.c)
 */

__int64 __fastcall Misoriented(int a1, unsigned __int16 a2, __int16 a3, __int64 a4, __int64 a5)
{
  unsigned int v6; // r14d
  _WORD *v7; // r13
  __int16 v8; // bx
  __int16 v9; // r15
  __int64 v10; // r10
  int v11; // r11d
  __int64 v12; // r9
  int v13; // esi
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int v16; // eax
  unsigned int v17; // edi
  unsigned int v18; // r12d
  __int16 v19; // r9
  unsigned int v20; // r8d
  unsigned int v21; // r10^4
  unsigned int v22; // r11d
  int v23; // edx
  int v24; // esi
  int v25; // r13d
  __int64 v26; // rcx
  int v27; // r8d
  int v28; // eax
  int v29; // ecx
  __int64 i; // rcx
  __int64 v31; // r11
  __int16 v32; // ax
  int v33; // r15d
  __int16 v34; // cx
  __int64 v35; // rsi
  __int64 v36; // rdx
  __int64 v37; // rdi
  __int64 v38; // r12
  int v39; // r8d
  __int16 v40; // r9
  __int16 v41; // dx
  __int64 v42; // rbx
  __int64 v43; // r10
  int v44; // r11d
  int v45; // r8d
  unsigned __int64 v46; // r13
  __int64 v47; // rcx
  int v48; // edx
  __int16 v49; // ax
  __int16 v50; // ax
  int v51; // r10d
  int v52; // edx
  int v53; // eax
  int v54; // edx
  __int64 v55; // rbx
  int v56; // eax
  __int64 v57; // rbx
  __int64 v58; // rbx
  __int16 v60; // [rsp+38h] [rbp-61h]
  __int16 v62; // [rsp+3Ch] [rbp-5Dh]
  unsigned __int64 v63; // [rsp+40h] [rbp-59h]
  unsigned __int64 v64; // [rsp+40h] [rbp-59h]
  __int64 v65; // [rsp+40h] [rbp-59h]
  __int16 v66; // [rsp+48h] [rbp-51h]
  unsigned __int64 v67; // [rsp+50h] [rbp-49h]
  unsigned __int64 v68; // [rsp+58h] [rbp-41h]
  unsigned __int64 v69; // [rsp+60h] [rbp-39h]
  int v70; // [rsp+68h] [rbp-31h]
  int v71; // [rsp+6Ch] [rbp-2Dh]
  int v72; // [rsp+70h] [rbp-29h]
  int v73; // [rsp+74h] [rbp-25h]
  __int64 v74; // [rsp+78h] [rbp-21h]
  __int64 v75; // [rsp+80h] [rbp-19h]
  int v76; // [rsp+88h] [rbp-11h]
  __int64 v77; // [rsp+90h] [rbp-9h]
  _WORD *v78; // [rsp+98h] [rbp-1h]
  __int64 v79; // [rsp+A0h] [rbp+7h] BYREF
  __int64 v80; // [rsp+A8h] [rbp+Fh] BYREF
  unsigned __int64 v81; // [rsp+B0h] [rbp+17h]

  v73 = a1;
  v6 = 0;
  v7 = *(_WORD **)(a5 + 64);
  v75 = *(_QWORD *)(a5 + 56);
  v8 = 0;
  v78 = v7;
  v9 = v7[a1] - *(_WORD *)(v75 + 2LL * a1) + 1;
  SetLineToInfinity(a2, a4, &v79, &v80);
  v10 = *(_QWORD *)(a5 + 32);
  v12 = *(_QWORD *)(a5 + 40);
  v13 = 0;
  v71 = (unsigned __int16)(a3 - v11);
  v77 = v10;
  v70 = v11;
  v74 = v12;
  v72 = 0;
  v14 = v11 + (__int16)((v9 + (__int16)v71 - 1) % v9);
  v15 = v11 + (__int16)v71;
  v16 = *(_DWORD *)(v12 + 4 * v14);
  v17 = *(_DWORD *)(v10 + 4 * v15);
  v18 = *(_DWORD *)(v12 + 4 * v15);
  v19 = 0;
  v20 = *(_DWORD *)(v10 + 4 * v14);
  v68 = __PAIR64__(v18, v17);
  LODWORD(v63) = v17 - v20;
  v21 = v18;
  v67 = __PAIR64__(v16, v20);
  HIDWORD(v63) = v18 - v16;
  v22 = v17 - v20;
  v81 = v63;
  if ( v9 > 0 )
  {
    LOWORD(v23) = v71;
    v24 = v70;
    v25 = v9;
    do
    {
      if ( v8 )
        break;
      v23 = ((__int16)v23 + 1) % v25;
      v26 = v24 + v23;
      v27 = *(_DWORD *)(v77 + 4 * v26);
      LODWORD(v69) = v27;
      v28 = *(_DWORD *)(v74 + 4 * v26);
      HIDWORD(v69) = v28;
      if ( v17 != v27 || v18 != v28 )
      {
        LODWORD(v64) = v27 - v17;
        HIDWORD(v64) = HIDWORD(v69) - v21;
        v29 = v22 * (HIDWORD(v69) - v21) - (v27 - v17) * HIDWORD(v81);
        if ( v29 >= 0 )
          v8 = v29 > 0;
        else
          v8 = -1;
        for ( i = 0LL; i < 2; ++i )
          *(&v67 + i) = *(&v68 + i);
        v22 = v64;
        v18 = HIDWORD(v68);
        v17 = v68;
        v21 = HIDWORD(v68);
        v81 = v64;
        v25 = v9;
      }
      ++v19;
    }
    while ( v19 < v9 );
    v7 = v78;
    v13 = 0;
    if ( v19 < v9 )
    {
      if ( v8 > 0 )
        v13 = 2;
      v72 = v13;
    }
  }
  v31 = a5;
  v32 = 0;
  v33 = 0;
  LOWORD(v70) = 0;
  v34 = *(_WORD *)(a5 + 80);
  LOWORD(v71) = v34;
  if ( v34 > 0 )
  {
    v35 = v80;
    v36 = v75 - (_QWORD)v7;
    v37 = v79;
    v38 = v67;
    v39 = v73;
    v75 -= (__int64)v7;
    while ( 1 )
    {
      if ( v32 == v39 )
        goto LABEL_55;
      v40 = *(_WORD *)((char *)v7 + v36);
      v41 = *v7;
      v60 = v40;
      v62 = *v7;
      if ( (__int16)(*v7 - v40 + 1) <= 2 )
        goto LABEL_54;
      v42 = *(_QWORD *)(v31 + 48);
      v43 = v77;
      v65 = v42;
      v44 = *(unsigned __int8 *)(v40 + v42);
      v45 = 2 * *(_DWORD *)(v77 + 4LL * v40);
      LODWORD(v68) = v45;
      HIDWORD(v68) = 2 * *(_DWORD *)(v74 + 4LL * v40);
      v46 = v68;
      if ( !v44 )
      {
        v47 = v41;
        v48 = 2 * *(_DWORD *)(v77 + 4LL * v41);
        LODWORD(v67) = v48;
        HIDWORD(v67) = 2 * *(_DWORD *)(v74 + 4 * v47);
        if ( *(_BYTE *)(v47 + v42) )
        {
          v38 = v67;
        }
        else
        {
          HIDWORD(v81) = (HIDWORD(v68) + HIDWORD(v67)) >> 1;
          LODWORD(v81) = (v48 + v45) >> 1;
          v38 = v81;
          v67 = v81;
        }
        v41 = v62;
      }
      v49 = v40;
      while ( 1 )
      {
        if ( v49 == v41 )
          v50 = v40;
        else
          v50 = v49 + 1;
        v66 = v50;
        v51 = 2 * *(_DWORD *)(v43 + 4LL * v50);
        LODWORD(v69) = v51;
        v52 = *(_DWORD *)(v74 + 4LL * v50);
        v53 = *(unsigned __int8 *)(v50 + v42);
        v54 = 2 * v52;
        HIDWORD(v69) = v54;
        v76 = v53;
        switch ( v53 | (2 * v44) )
        {
          case 0:
            HIDWORD(v79) = (HIDWORD(v46) + HIDWORD(v69)) >> 1;
            LODWORD(v79) = (v51 + v45) >> 1;
            v58 = v79;
            if ( v67 != v79 )
            {
              if ( (unsigned int)CheckBoundingBoxCurve(v37, v38, v46, v79, a2) )
                v33 += CurveTransitions(v37, v35, v38, v46, v58);
              v40 = v60;
            }
            v38 = v58;
            v67 = v58;
            goto LABEL_40;
          case 1:
            if ( (_DWORD)v67 != v51 || HIDWORD(v38) != v54 )
            {
              v57 = v69;
              if ( (unsigned int)CheckBoundingBoxCurve(v37, v38, v46, v69, a2) )
              {
                v56 = CurveTransitions(v37, v35, v38, v46, v57);
LABEL_38:
                v33 += v56;
              }
LABEL_39:
              v40 = v60;
LABEL_40:
              v42 = v65;
            }
            break;
          case 2:
            v38 = v46;
            v67 = v46;
            break;
          default:
            if ( (v53 | (2 * v44)) == 3 && (v45 != v51 || HIDWORD(v46) != v54) )
            {
              v55 = v69;
              if ( (unsigned int)CheckBoundingBoxSegment(v37, v46, v69, a2) )
              {
                v56 = CurveTransitionsSegment(v37, v35, v46, v55);
                goto LABEL_38;
              }
              goto LABEL_39;
            }
            break;
        }
        v49 = v66;
        v46 = v69;
        v44 = v76;
        v68 = v69;
        if ( v66 == v40 )
          break;
        v41 = v62;
        v45 = v69;
        v43 = v77;
      }
      v7 = v78;
      v34 = v71;
      v31 = a5;
      v39 = v73;
LABEL_54:
      v36 = v75;
LABEL_55:
      ++v7;
      v32 = v70 + 1;
      v78 = v7;
      LOWORD(v70) = v32;
      if ( v32 >= v34 )
      {
        v13 = v72;
        break;
      }
    }
  }
  LOBYTE(v6) = 2 * ((v33 & 1) == 0) == v13;
  return v6;
}
