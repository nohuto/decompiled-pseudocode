/*
 * XREFs of fsg_CheckOutlineOrientation @ 0x1C02C6208
 * Callers:
 *     fsg_ExecuteGlyph @ 0x1C02C7254 (fsg_ExecuteGlyph.c)
 * Callees:
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     CalculateXExtremum @ 0x1C02C4E8C (CalculateXExtremum.c)
 *     CalculateYExtremum @ 0x1C02C4FC4 (CalculateYExtremum.c)
 *     Misoriented @ 0x1C02C5B24 (Misoriented.c)
 */

unsigned __int64 __fastcall fsg_CheckOutlineOrientation(__int64 a1)
{
  unsigned __int64 result; // rax
  int v3; // r13d
  __int64 v4; // r15
  __int16 v5; // r14
  __int16 v6; // r10
  __int64 v7; // rdx
  int v8; // esi
  __int16 v9; // r8
  __int64 v10; // r13
  __int64 v11; // r15
  __int16 v12; // ax
  __int16 v13; // bx
  int v14; // r9d
  __int64 v15; // r12
  int v16; // r11d
  __int64 v17; // rcx
  __int64 v18; // r9
  int v19; // esi
  __int16 v20; // dx
  __int16 v21; // ax
  __int64 v22; // rcx
  __int64 v23; // r9
  __int16 v24; // dx
  __int16 v25; // ax
  int v26; // esi
  __int64 v27; // rcx
  __int64 v28; // r9
  int v29; // r10d
  __int16 v30; // dx
  __int16 v31; // ax
  __int64 v32; // rcx
  __int64 v33; // r9
  int v34; // r11d
  __int16 v35; // dx
  __int16 v36; // ax
  __int64 v37; // r10
  int v38; // ecx
  int v39; // r8d
  __int64 v40; // r9
  int v41; // eax
  int v42; // edx
  int v43; // esi
  int v44; // r8d
  int v45; // r11d
  int v46; // edx
  int v47; // r11d
  int v48; // ecx
  int v49; // eax
  unsigned __int16 v50; // bx
  unsigned __int16 v51; // r14
  int v52; // esi
  __int16 v53; // [rsp+68h] [rbp-29h]
  __int16 v54; // [rsp+6Ch] [rbp-25h]
  int v55; // [rsp+70h] [rbp-21h]
  int v56; // [rsp+74h] [rbp-1Dh]
  __int16 v57; // [rsp+78h] [rbp-19h]
  int v58; // [rsp+7Ch] [rbp-15h]
  signed int v59; // [rsp+80h] [rbp-11h]
  int v60; // [rsp+84h] [rbp-Dh]
  int v61; // [rsp+88h] [rbp-9h]
  __int64 v62; // [rsp+90h] [rbp-1h]
  __int64 v63; // [rsp+98h] [rbp+7h] BYREF
  int v64; // [rsp+A0h] [rbp+Fh] BYREF
  int v65; // [rsp+A4h] [rbp+13h] BYREF
  int v66; // [rsp+A8h] [rbp+17h] BYREF
  int v67; // [rsp+ACh] [rbp+1Bh] BYREF
  int v68; // [rsp+B0h] [rbp+1Fh] BYREF
  int v69; // [rsp+B4h] [rbp+23h] BYREF
  __int16 v70; // [rsp+B8h] [rbp+27h]
  __int16 v71; // [rsp+BAh] [rbp+29h]
  __int16 v72; // [rsp+BCh] [rbp+2Bh]
  __int16 v73; // [rsp+BEh] [rbp+2Dh]
  _UNKNOWN *retaddr; // [rsp+F0h] [rbp+5Fh] BYREF

  result = (unsigned __int64)&retaddr;
  v3 = 0;
  v61 = 0;
  if ( *(__int16 *)(a1 + 80) > 0 )
  {
    v62 = 0LL;
    v4 = 0LL;
    do
    {
      *(_BYTE *)(v4 + *(_QWORD *)(a1 + 88)) = 0;
      v5 = *(_WORD *)(*(_QWORD *)(a1 + 56) + 2 * v4);
      v6 = *(_WORD *)(*(_QWORD *)(a1 + 64) + 2 * v4);
      v53 = v6;
      v54 = v6 - v5 + 1;
      if ( v54 > 2 )
      {
        LOWORD(v7) = -1;
        v58 = 0x7FFFFFFF;
        v57 = -1;
        v8 = 0x7FFFFFFF;
        v70 = -1;
        v9 = -1;
        v71 = -1;
        v72 = -1;
        v73 = -1;
        v60 = 0x7FFFFFFF;
        v59 = 0x80000000;
        v55 = 0x80000000;
        v10 = *(_QWORD *)(a1 + 32);
        v11 = *(_QWORD *)(a1 + 40);
        v12 = -v5;
        v13 = v5;
        v14 = v5;
        while ( 1 )
        {
          v15 = v14 + (__int16)(v13 + v12);
          v16 = *(_DWORD *)(v10 + 4 * v15);
          v56 = v16;
          if ( v16 < v8
            || v16 == v8
            && ((v17 = *(_QWORD *)(a1 + 48), v7 = (__int16)v7, !*(_BYTE *)((__int16)v7 + v17))
             || *(_BYTE *)(v15 + v17) && *(_DWORD *)(v11 + 4 * v15) < *(_DWORD *)(v11 + 4 * v7)) )
          {
            v18 = *(_QWORD *)(a1 + 48);
            v57 = v13;
            v70 = v13;
            v19 = *(_DWORD *)(v10 + 4LL * v13);
            v60 = v19;
            if ( *(_BYTE *)(v13 + v18) )
            {
              LODWORD(v63) = 2 * v19;
              HIDWORD(v63) = 2 * *(_DWORD *)(v11 + 4LL * v13);
            }
            else
            {
              if ( v13 == v5 )
                v20 = v6;
              else
                v20 = v13 - 1;
              if ( v13 == v6 )
                v21 = v5;
              else
                v21 = v13 + 1;
              CalculateXExtremum(
                1,
                *(_DWORD *)(v10 + 4LL * v20),
                *(_DWORD *)(v11 + 4LL * v20),
                *(_BYTE *)(v20 + v18) & 1,
                v19,
                *(_DWORD *)(v11 + 4LL * v13),
                *(_DWORD *)(v10 + 4LL * v21),
                *(_DWORD *)(v11 + 4LL * v21),
                *(_BYTE *)(v21 + v18) & 1,
                (int *)&v63,
                (_DWORD *)&v63 + 1);
              v6 = v53;
              v16 = v56;
            }
            v9 = v71;
          }
          if ( v16 > v55
            || v16 == v55
            && ((v22 = *(_QWORD *)(a1 + 48), !*(_BYTE *)(v9 + v22))
             || *(_BYTE *)(v15 + v22) && *(_DWORD *)(v11 + 4 * v15) > *(_DWORD *)(v11 + 4LL * v9)) )
          {
            v23 = *(_QWORD *)(a1 + 48);
            v71 = v13;
            v55 = *(_DWORD *)(v10 + 4LL * v13);
            if ( *(_BYTE *)(v13 + v23) )
            {
              v64 = 2 * *(_DWORD *)(v10 + 4LL * v13);
              v65 = 2 * *(_DWORD *)(v11 + 4LL * v13);
            }
            else
            {
              if ( v13 == v5 )
                v24 = v6;
              else
                v24 = v13 - 1;
              if ( v13 == v6 )
                v25 = v5;
              else
                v25 = v13 + 1;
              CalculateXExtremum(
                0,
                *(_DWORD *)(v10 + 4LL * v24),
                *(_DWORD *)(v11 + 4LL * v24),
                *(_BYTE *)(v24 + v23) & 1,
                v55,
                *(_DWORD *)(v11 + 4LL * v13),
                *(_DWORD *)(v10 + 4LL * v25),
                *(_DWORD *)(v11 + 4LL * v25),
                *(_BYTE *)(v25 + v23) & 1,
                &v64,
                &v65);
              v16 = v56;
            }
          }
          v26 = *(_DWORD *)(v11 + 4 * v15);
          if ( v26 < v58
            || v26 == v58
            && ((v27 = *(_QWORD *)(a1 + 48), !*(_BYTE *)(v72 + v27))
             || *(_BYTE *)(v15 + v27) && v16 > *(_DWORD *)(v10 + 4LL * v72)) )
          {
            v28 = *(_QWORD *)(a1 + 48);
            v72 = v13;
            v29 = *(_DWORD *)(v11 + 4LL * v13);
            v58 = v29;
            if ( *(_BYTE *)(v13 + v28) )
            {
              v66 = 2 * *(_DWORD *)(v10 + 4LL * v13);
              v67 = 2 * v29;
            }
            else
            {
              if ( v13 == v5 )
                v30 = v53;
              else
                v30 = v13 - 1;
              if ( v13 == v53 )
                v31 = v5;
              else
                v31 = v13 + 1;
              CalculateYExtremum(
                1,
                *(_DWORD *)(v10 + 4LL * v30),
                *(_DWORD *)(v11 + 4LL * v30),
                *(_BYTE *)(v30 + v28) & 1,
                *(_DWORD *)(v10 + 4LL * v13),
                v29,
                *(_DWORD *)(v10 + 4LL * v31),
                *(_DWORD *)(v11 + 4LL * v31),
                *(_BYTE *)(v31 + v28) & 1,
                &v66,
                &v67);
            }
          }
          if ( v26 > v59
            || v26 == v59
            && ((v32 = *(_QWORD *)(a1 + 48), !*(_BYTE *)(v73 + v32))
             || *(_BYTE *)(v15 + v32) && v56 < *(_DWORD *)(v10 + 4LL * v73)) )
          {
            v33 = *(_QWORD *)(a1 + 48);
            v73 = v13;
            v34 = *(_DWORD *)(v11 + 4LL * v13);
            v59 = v34;
            if ( *(_BYTE *)(v13 + v33) )
            {
              v68 = 2 * *(_DWORD *)(v10 + 4LL * v13);
              v69 = 2 * v34;
            }
            else
            {
              if ( v13 == v5 )
                v35 = v53;
              else
                v35 = v13 - 1;
              if ( v13 == v53 )
                v36 = v5;
              else
                v36 = v13 + 1;
              CalculateYExtremum(
                0,
                *(_DWORD *)(v10 + 4LL * v35),
                *(_DWORD *)(v11 + 4LL * v35),
                *(_BYTE *)(v35 + v33) & 1,
                *(_DWORD *)(v10 + 4LL * v13),
                v34,
                *(_DWORD *)(v10 + 4LL * v36),
                *(_DWORD *)(v11 + 4LL * v36),
                *(_BYTE *)(v36 + v33) & 1,
                &v68,
                &v69);
            }
          }
          v6 = v53;
          v9 = v71;
          ++v13;
          v8 = v60;
          v12 = -v5;
          v14 = v5;
          if ( (__int16)(v13 - v5) >= v54 )
            break;
          LOWORD(v7) = v57;
        }
        v4 = v62;
        v3 = v61;
        v37 = *(_QWORD *)(a1 + 32);
        v38 = *(_DWORD *)(v37 + 4LL * v57);
        v39 = *(_DWORD *)(v37 + 4LL * v71) - v38;
        if ( v39 < 0 )
          v39 = v38 - *(_DWORD *)(v37 + 4LL * v71);
        v40 = *(_QWORD *)(a1 + 40);
        v41 = *(_DWORD *)(v40 + 4LL * v57);
        v42 = *(_DWORD *)(v40 + 4LL * v71) - v41;
        if ( v42 < 0 )
          v42 = v41 - *(_DWORD *)(v40 + 4LL * v71);
        v43 = v42 + v39;
        v44 = *(_DWORD *)(v37 + 4LL * v72) - v38;
        if ( v44 < 0 )
          v44 = v38 - *(_DWORD *)(v37 + 4LL * v72);
        v45 = *(_DWORD *)(v40 + 4LL * v72);
        v46 = v45 - v41;
        if ( v45 - v41 < 0 )
          v46 = v41 - v45;
        v47 = v44 + v46;
        if ( *(_DWORD *)(v37 + 4LL * v73) - v38 >= 0 )
          v48 = *(_DWORD *)(v37 + 4LL * v73) - v38;
        else
          v48 = v38 - *(_DWORD *)(v37 + 4LL * v73);
        if ( *(_DWORD *)(v40 + 4LL * v73) - v41 >= 0 )
          v49 = *(_DWORD *)(v40 + 4LL * v73) - v41;
        else
          v49 = v41 - *(_DWORD *)(v40 + 4LL * v73);
        if ( v47 <= v49 + v48 )
        {
          v51 = 3;
          if ( v47 <= v43 )
            v50 = 1;
          else
            v50 = 2;
        }
        else
        {
          v50 = 3;
          v51 = 2;
          if ( v49 + v48 <= v43 )
            v50 = 1;
        }
        v52 = Misoriented(v61, 0, v57, v63, a1);
        if ( v52 != (unsigned int)Misoriented(v61, v51, *(&v70 + v51), *(&v63 + v51), a1) )
          v52 = Misoriented(v61, v50, *(&v70 + v50), *(&v63 + v50), a1);
        if ( v52 )
          *(_BYTE *)(*(_QWORD *)(a1 + 88) + v62) |= 1u;
      }
      result = (unsigned int)*(__int16 *)(a1 + 80);
      ++v3;
      ++v4;
      v61 = v3;
      v62 = v4;
    }
    while ( v3 < (int)result );
  }
  return result;
}
