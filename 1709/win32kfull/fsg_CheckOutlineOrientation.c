/*
 * XREFs of fsg_CheckOutlineOrientation @ 0x1C02C0028
 * Callers:
 *     fsg_ExecuteGlyph @ 0x1C02C105C (fsg_ExecuteGlyph.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     CalculateXExtremum @ 0x1C02BECDC (CalculateXExtremum.c)
 *     CalculateYExtremum @ 0x1C02BEE14 (CalculateYExtremum.c)
 *     Misoriented @ 0x1C02BF974 (Misoriented.c)
 */

unsigned __int64 __fastcall fsg_CheckOutlineOrientation(__int64 a1)
{
  unsigned __int64 result; // rax
  __int64 v3; // r13
  __int16 v4; // r15
  __int16 v5; // r12
  __int16 v6; // dx
  signed int v7; // r11d
  __int16 v8; // r9
  __int64 v9; // r14
  __int64 v10; // rsi
  __int16 v11; // ax
  __int16 v12; // bx
  int v13; // r8d
  __int64 v14; // r13
  int v15; // r10d
  __int64 v16; // rcx
  __int64 v17; // r9
  __int16 v18; // dx
  __int16 v19; // ax
  __int64 v20; // rcx
  __int64 v21; // r9
  int v22; // r11d
  __int16 v23; // dx
  __int16 v24; // ax
  int v25; // r13d
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // r9
  int v29; // ecx
  __int16 v30; // dx
  __int16 v31; // ax
  __int64 v32; // rdx
  __int64 v33; // r9
  int v34; // r11d
  __int16 v35; // dx
  __int16 v36; // ax
  __int64 v37; // r10
  __int64 v38; // r11
  int v39; // ebx
  int v40; // r15d
  int v41; // ecx
  int v42; // esi
  int v43; // ecx
  int v44; // eax
  int v45; // esi
  int v46; // ecx
  int v47; // r12d
  int v48; // eax
  int v49; // r12d
  int v50; // r8d
  int v51; // eax
  int v52; // r15d
  int v53; // ebx
  int v54; // r15d
  unsigned __int16 v55; // bx
  unsigned __int16 v56; // r14
  int v57; // r15d
  int v58; // esi
  __int16 v59; // [rsp+6Ch] [rbp-35h]
  __int16 v60; // [rsp+70h] [rbp-31h]
  int v61; // [rsp+74h] [rbp-2Dh]
  int v62; // [rsp+78h] [rbp-29h]
  int v63; // [rsp+7Ch] [rbp-25h]
  unsigned int v64; // [rsp+80h] [rbp-21h]
  int v65; // [rsp+84h] [rbp-1Dh]
  signed int v66; // [rsp+88h] [rbp-19h]
  __int64 v67; // [rsp+90h] [rbp-11h]
  __int64 v68; // [rsp+98h] [rbp-9h]
  __int64 v69; // [rsp+A0h] [rbp-1h] BYREF
  int v70; // [rsp+A8h] [rbp+7h] BYREF
  int v71; // [rsp+ACh] [rbp+Bh] BYREF
  int v72; // [rsp+B0h] [rbp+Fh] BYREF
  int v73; // [rsp+B4h] [rbp+13h] BYREF
  int v74; // [rsp+B8h] [rbp+17h] BYREF
  int v75; // [rsp+BCh] [rbp+1Bh] BYREF
  __int16 v76; // [rsp+C0h] [rbp+1Fh]
  __int16 v77; // [rsp+C2h] [rbp+21h]
  __int16 v78; // [rsp+C4h] [rbp+23h]
  __int16 v79; // [rsp+C6h] [rbp+25h]
  _UNKNOWN *retaddr; // [rsp+100h] [rbp+5Fh] BYREF

  result = (unsigned __int64)&retaddr;
  v65 = 0;
  if ( *(__int16 *)(a1 + 80) <= 0 )
    return result;
  v68 = 0LL;
  v3 = 0LL;
  do
  {
    *(_BYTE *)(*(_QWORD *)(a1 + 88) + v3) = 0;
    v4 = *(_WORD *)(*(_QWORD *)(a1 + 56) + 2 * v3);
    v5 = *(_WORD *)(*(_QWORD *)(a1 + 64) + 2 * v3);
    v60 = v5 - v4 + 1;
    if ( v60 <= 2 )
    {
      v57 = v65;
      goto LABEL_90;
    }
    v6 = -1;
    v66 = 0x80000000;
    v59 = -1;
    v76 = -1;
    v7 = 0x80000000;
    v77 = -1;
    v8 = -1;
    v78 = -1;
    v79 = -1;
    v62 = 0x7FFFFFFF;
    v61 = 0x7FFFFFFF;
    v64 = 0x80000000;
    v9 = *(_QWORD *)(a1 + 32);
    v10 = *(_QWORD *)(a1 + 40);
    v11 = -v4;
    v12 = v4;
    v13 = v4;
    do
    {
      v14 = v13 + (__int16)(v12 + v11);
      v67 = v14;
      v15 = *(_DWORD *)(v9 + 4 * v14);
      v63 = v15;
      if ( v15 < v61
        || v15 == v61
        && ((v16 = *(_QWORD *)(a1 + 48), !*(_BYTE *)(v16 + v6))
         || *(_BYTE *)(v16 + v14) && *(_DWORD *)(v10 + 4 * v14) < *(_DWORD *)(v10 + 4LL * v6)) )
      {
        v17 = *(_QWORD *)(a1 + 48);
        v59 = v12;
        v76 = v12;
        v61 = *(_DWORD *)(v9 + 4LL * v12);
        if ( *(_BYTE *)(v12 + v17) )
        {
          LODWORD(v69) = 2 * *(_DWORD *)(v9 + 4LL * v12);
          HIDWORD(v69) = 2 * *(_DWORD *)(v10 + 4LL * v12);
        }
        else
        {
          if ( v12 == v4 )
            v18 = v5;
          else
            v18 = v12 - 1;
          if ( v12 == v5 )
            v19 = v4;
          else
            v19 = v12 + 1;
          CalculateXExtremum(
            1,
            *(_DWORD *)(v9 + 4LL * v18),
            *(_DWORD *)(v10 + 4LL * v18),
            *(_BYTE *)(v17 + v18) & 1,
            v61,
            *(_DWORD *)(v10 + 4LL * v12),
            *(_DWORD *)(v9 + 4LL * v19),
            *(_DWORD *)(v10 + 4LL * v19),
            *(_BYTE *)(v17 + v19) & 1,
            (int *)&v69,
            (_DWORD *)&v69 + 1);
          v15 = v63;
          v7 = v64;
        }
        v8 = v77;
      }
      if ( v15 > v7
        || v15 == v7
        && ((v20 = *(_QWORD *)(a1 + 48), !*(_BYTE *)(v20 + v8))
         || *(_BYTE *)(v20 + v14) && *(_DWORD *)(v10 + 4 * v14) > *(_DWORD *)(v10 + 4LL * v8)) )
      {
        v21 = *(_QWORD *)(a1 + 48);
        v77 = v12;
        v22 = *(_DWORD *)(v9 + 4LL * v12);
        v64 = v22;
        if ( *(_BYTE *)(v12 + v21) )
        {
          v70 = 2 * v22;
          v71 = 2 * *(_DWORD *)(v10 + 4LL * v12);
        }
        else
        {
          if ( v12 == v4 )
            v23 = v5;
          else
            v23 = v12 - 1;
          if ( v12 == v5 )
            v24 = v4;
          else
            v24 = v12 + 1;
          CalculateXExtremum(
            0,
            *(_DWORD *)(v9 + 4LL * v23),
            *(_DWORD *)(v10 + 4LL * v23),
            *(_BYTE *)(v21 + v23) & 1,
            v22,
            *(_DWORD *)(v10 + 4LL * v12),
            *(_DWORD *)(v9 + 4LL * v24),
            *(_DWORD *)(v10 + 4LL * v24),
            *(_BYTE *)(v21 + v24) & 1,
            &v70,
            &v71);
          v15 = v63;
        }
      }
      v25 = *(_DWORD *)(v10 + 4 * v14);
      if ( v25 < v62 )
        goto LABEL_40;
      if ( v25 != v62 )
        goto LABEL_49;
      v26 = *(_QWORD *)(a1 + 48);
      if ( !*(_BYTE *)(v78 + v26) || (v27 = v67, *(_BYTE *)(v67 + v26)) && v15 > *(_DWORD *)(v9 + 4LL * v78) )
      {
LABEL_40:
        v28 = *(_QWORD *)(a1 + 48);
        v78 = v12;
        v29 = *(_DWORD *)(v10 + 4LL * v12);
        v62 = v29;
        if ( *(_BYTE *)(v12 + v28) )
        {
          v72 = 2 * *(_DWORD *)(v9 + 4LL * v12);
          v73 = 2 * v29;
        }
        else
        {
          if ( v12 == v4 )
            v30 = v5;
          else
            v30 = v12 - 1;
          if ( v12 == v5 )
            v31 = v4;
          else
            v31 = v12 + 1;
          CalculateYExtremum(
            1,
            *(_DWORD *)(v9 + 4LL * v30),
            *(_DWORD *)(v10 + 4LL * v30),
            *(_BYTE *)(v28 + v30) & 1,
            *(_DWORD *)(v9 + 4LL * v12),
            v29,
            *(_DWORD *)(v9 + 4LL * v31),
            *(_DWORD *)(v10 + 4LL * v31),
            *(_BYTE *)(v28 + v31) & 1,
            &v72,
            &v73);
        }
LABEL_49:
        v27 = v67;
      }
      if ( v25 > v66
        || v25 == v66
        && ((v32 = *(_QWORD *)(a1 + 48), !*(_BYTE *)(v79 + v32))
         || *(_BYTE *)(v27 + v32) && v63 < *(_DWORD *)(v9 + 4LL * v79)) )
      {
        v33 = *(_QWORD *)(a1 + 48);
        v79 = v12;
        v34 = *(_DWORD *)(v10 + 4LL * v12);
        v66 = v34;
        if ( *(_BYTE *)(v12 + v33) )
        {
          v74 = 2 * *(_DWORD *)(v9 + 4LL * v12);
          v75 = 2 * v34;
        }
        else
        {
          if ( v12 == v4 )
            v35 = v5;
          else
            v35 = v12 - 1;
          if ( v12 == v5 )
            v36 = v4;
          else
            v36 = v12 + 1;
          CalculateYExtremum(
            0,
            *(_DWORD *)(v9 + 4LL * v35),
            *(_DWORD *)(v10 + 4LL * v35),
            *(_BYTE *)(v33 + v35) & 1,
            *(_DWORD *)(v9 + 4LL * v12),
            v34,
            *(_DWORD *)(v9 + 4LL * v36),
            *(_DWORD *)(v10 + 4LL * v36),
            *(_BYTE *)(v33 + v36) & 1,
            &v74,
            &v75);
        }
      }
      v6 = v59;
      v7 = v64;
      ++v12;
      v8 = v77;
      v11 = -v4;
      v13 = v4;
    }
    while ( (__int16)(v12 - v4) < v60 );
    v3 = v68;
    v37 = *(_QWORD *)(a1 + 40);
    v38 = *(_QWORD *)(a1 + 32);
    v39 = *(_DWORD *)(v38 + 4LL * v59);
    v40 = *(_DWORD *)(v37 + 4LL * v59);
    v41 = *(_DWORD *)(v37 + 4LL * v77);
    v42 = v40 - v41;
    v43 = v41 - v40;
    if ( v43 >= 0 )
      v42 = v43;
    v44 = v39 - *(_DWORD *)(v38 + 4LL * v77);
    if ( *(_DWORD *)(v38 + 4LL * v77) - v39 >= 0 )
      v44 = *(_DWORD *)(v38 + 4LL * v77) - v39;
    v45 = v44 + v42;
    v46 = *(_DWORD *)(v38 + 4LL * v78);
    v47 = v39 - v46;
    if ( v46 - v39 >= 0 )
      v47 = v46 - v39;
    v48 = v40 - *(_DWORD *)(v37 + 4LL * v78);
    if ( *(_DWORD *)(v37 + 4LL * v78) - v40 >= 0 )
      v48 = *(_DWORD *)(v37 + 4LL * v78) - v40;
    v49 = v48 + v47;
    v50 = *(_DWORD *)(v38 + 4LL * v79) - v39;
    v51 = *(_DWORD *)(v37 + 4LL * v79) - v40;
    v52 = v40 - *(_DWORD *)(v37 + 4LL * v79);
    if ( v51 >= 0 )
      v52 = v51;
    v53 = v39 - *(_DWORD *)(v38 + 4LL * v79);
    if ( v50 >= 0 )
      v53 = v50;
    v54 = v53 + v52;
    if ( v49 <= v54 )
    {
      v56 = 3;
      if ( v49 <= v45 )
        v55 = 1;
      else
        v55 = 2;
    }
    else
    {
      v55 = 3;
      v56 = 2;
      if ( v54 <= v45 )
        v55 = 1;
    }
    v57 = v65;
    v58 = Misoriented(v65, 0, v59, v69, a1);
    if ( v58 != (unsigned int)Misoriented(v65, v56, *(&v76 + v56), *(&v69 + v56), a1) )
      v58 = Misoriented(v65, v55, *(&v76 + v55), *(&v69 + v55), a1);
    if ( v58 )
      *(_BYTE *)(*(_QWORD *)(a1 + 88) + v68) |= 1u;
LABEL_90:
    result = (unsigned int)*(__int16 *)(a1 + 80);
    ++v3;
    v65 = v57 + 1;
    v68 = v3;
  }
  while ( v57 + 1 < (int)result );
  return result;
}
