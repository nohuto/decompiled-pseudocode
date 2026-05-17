/*
 * XREFs of RtlFormatMessageEx @ 0x1800607E0
 * Callers:
 *     RtlFormatMessage @ 0x1800F4570 (RtlFormatMessage.c)
 * Callees:
 *     sub_180060750 @ 0x180060750 (sub_180060750.c)
 *     sub_180060D78 @ 0x180060D78 (sub_180060D78.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 */

__int64 __fastcall RtlFormatMessageEx(
        __int16 *a1,
        unsigned int a2,
        char a3,
        char a4,
        char a5,
        __int64 *a6,
        __int16 *a7,
        unsigned int a8,
        _DWORD *a9,
        __int64 a10)
{
  __int64 v10; // r10
  char v11; // r13
  __int64 v12; // r8
  unsigned __int64 v13; // r9
  int v14; // r14d
  char v15; // r11
  unsigned int v16; // r15d
  __int16 *v17; // rdi
  __int16 *v18; // rsi
  __int16 *v19; // rbx
  __int16 v20; // ax
  unsigned __int16 v22; // cx
  __int16 *v23; // rdx
  __int64 v24; // rdx
  int v25; // r15d
  __int64 v26; // r9
  int v27; // r12d
  int v28; // r13d
  __int64 v29; // r15
  unsigned int v30; // r10d
  char *v31; // r8
  char v32; // cl
  __int64 *v33; // r12
  unsigned int v34; // r13d
  __int64 v35; // rcx
  __int64 v36; // rax
  char *v37; // rcx
  __int64 v38; // r8
  int v39; // eax
  __int64 v40; // rax
  __int16 *v41; // rbx
  __int16 v42; // dx
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rdi
  __int64 v46; // rsi
  __int64 v47; // rax
  int v48; // ecx
  int v49; // r15d
  int v50; // ecx
  int v51; // r15d
  unsigned int v52; // eax
  int v53; // ecx
  __int16 v54; // dx
  char *v55; // rcx
  unsigned __int16 v56; // ax
  int v57; // r13d
  __int64 v58; // rdx
  signed __int64 v59; // r8
  __int16 v60; // ax
  unsigned __int16 v61; // ax
  signed __int64 v62; // r8
  __int16 v63; // ax
  char *v64; // rax
  __int16 v65; // ax
  __int64 v66; // rax
  __int64 v67; // rax
  unsigned int v68; // r13d
  __int16 *v69; // rdx
  __int16 v70; // ax
  __int16 *v71; // rcx
  __int64 v72; // rax
  __int64 v73; // rdi
  _WORD *v74; // rsi
  _WORD *v75; // rdi
  __int64 v76; // [rsp+30h] [rbp-D0h]
  __int16 *v79; // [rsp+58h] [rbp-A8h]
  unsigned int v80; // [rsp+68h] [rbp-98h]
  unsigned int v81; // [rsp+70h] [rbp-90h]
  char *v83; // [rsp+80h] [rbp-80h] BYREF
  __int64 *v84; // [rsp+88h] [rbp-78h]
  __int64 v85; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v86; // [rsp+98h] [rbp-68h]
  __int64 v87; // [rsp+A0h] [rbp-60h]
  __int16 *v88; // [rsp+A8h] [rbp-58h]
  __int16 *v89; // [rsp+B0h] [rbp-50h]
  _DWORD *v90; // [rsp+B8h] [rbp-48h]
  _QWORD v91[200]; // [rsp+C0h] [rbp-40h]
  unsigned __int16 v92; // [rsp+700h] [rbp+600h] BYREF
  _WORD v93[30]; // [rsp+702h] [rbp+602h] BYREF
  char v94; // [rsp+73Eh] [rbp+63Eh] BYREF

  v10 = a10;
  v11 = a3;
  v12 = a2;
  v90 = a9;
  v13 = (unsigned __int64)a7;
  v14 = a8 >> 1;
  v89 = a1;
  v84 = a6;
  v87 = (__int64)a7;
  v80 = 0;
  if ( a10 && (*(_DWORD *)a10 & 1) != 0 )
  {
    v16 = *(_DWORD *)(a10 + 4);
    *(_DWORD *)a10 &= ~1u;
    v81 = v16;
    v19 = &a1[*(_QWORD *)(a10 + 8)];
    a1 = v19;
    v79 = v19;
    v17 = &a7[*(_QWORD *)(a10 + 16)];
    v47 = *(_QWORD *)(a10 + 24);
    if ( v47 == -1 )
      v18 = 0LL;
    else
      v18 = &a7[v47];
    v14 -= *(_DWORD *)(a10 + 16);
    v15 = a5;
    if ( !a5 && a6 )
      *a6 = *(_QWORD *)(a10 + 32);
    if ( (*(_DWORD *)a10 & 2) != 0 )
    {
      *(_DWORD *)a10 &= ~2u;
      goto LABEL_145;
    }
  }
  else
  {
    v15 = a5;
    v16 = 0;
    v81 = 0;
    v17 = a7;
    v79 = a1;
    v18 = 0LL;
    v19 = a1;
    if ( !a5 && a6 && a10 )
      *(_QWORD *)(a10 + 32) = *a6;
  }
  while ( 1 )
  {
    while ( 1 )
    {
      v20 = *v19;
      if ( !*v19 )
        goto LABEL_16;
      if ( v20 == 37 )
        break;
      ++v19;
      if ( v20 == 13 )
      {
        if ( *v19 != 10 )
          goto LABEL_22;
LABEL_21:
        ++v19;
        goto LABEL_22;
      }
      if ( v20 != 10 )
        goto LABEL_9;
      if ( *v19 == 13 )
        goto LABEL_21;
LABEL_22:
      if ( (_DWORD)v12 )
      {
        v18 = v17;
        v20 = 32;
LABEL_9:
        if ( --v14 < 0 )
          goto LABEL_65;
        *v17 = v20;
        if ( v20 == 32 )
          v18 = v17;
        ++v17;
        ++v16;
        goto LABEL_13;
      }
      v14 -= 2;
      if ( v14 < 0 )
        goto LABEL_65;
      v16 = 0;
      *(_DWORD *)v17 = 655373;
      v81 = 0;
      v17 += 2;
      v79 = v19;
      v18 = 0LL;
      a1 = v19;
    }
    v22 = v19[1];
    v23 = v17;
    v88 = v17;
    if ( (unsigned __int16)(v22 - 49) > 8u )
      break;
    v24 = (unsigned __int16)v19[2];
    v19 += 2;
    v25 = v22 - 48;
    if ( (unsigned __int16)(v24 - 48) <= 9u )
    {
      v48 = 5 * v25;
      ++v19;
      v49 = (unsigned __int16)v24 - 48;
      v24 = (unsigned __int16)*v19;
      v25 = v49 + 2 * v48;
      if ( (unsigned __int16)(v24 - 48) <= 9u )
      {
        v50 = 5 * v25;
        ++v19;
        v51 = (unsigned __int16)v24 - 48;
        v24 = (unsigned __int16)*v19;
        v25 = v51 + 2 * v50;
        if ( (unsigned __int16)(v24 - 48) <= 9u )
          return 3221225485LL;
      }
    }
    v26 = 0LL;
    v27 = v25;
    v28 = v25;
    v86 = 0;
    v29 = (unsigned int)(v25 - 1);
    v30 = 0;
    if ( (_WORD)v24 == 33 )
    {
      v41 = v19 + 1;
      v31 = (char *)v93;
      v83 = (char *)v93;
      v92 = 37;
      v32 = 0;
      v42 = *v41;
      if ( *v41 != 33 )
      {
        while ( v42 )
        {
          if ( v31 >= &v94 )
            break;
          if ( v42 == 42 )
          {
            v52 = v30++;
            if ( v52 > 1 )
              break;
          }
          ++v41;
          *(_WORD *)v31 = v42;
          v31 += 2;
          v83 = v31;
          v42 = *v41;
          if ( *v41 == 33 )
            goto LABEL_56;
        }
        return 3221225485LL;
      }
LABEL_56:
      v19 = v41 + 1;
      *(_WORD *)v31 = 0;
    }
    else
    {
      sub_180060750(&v92, v24, v12, &v83);
      v31 = v83;
      v32 = 1;
      v30 = v86;
      v26 = 0LL;
      v15 = a5;
    }
    if ( a3 )
    {
      if ( v32 == 1 )
        goto LABEL_47;
      v53 = v92 - aS[0];
      if ( v92 == aS[0] )
      {
        v53 = v93[0] - aS[1];
        if ( v93[0] == aS[1] )
          v53 = v93[1] - aS[2];
      }
      if ( !v53 )
      {
LABEL_47:
        LODWORD(v76) = v27;
        v39 = sub_180060D78((_DWORD)v17, v14, (unsigned int)&v85, 0, 0, (__int64)L"%%%u", v76);
      }
      else
      {
        LODWORD(v76) = v28;
        v39 = sub_180060D78((_DWORD)v17, v14, (unsigned int)&v85, 0, 0, (__int64)L"%%%u!%s!", v76, v93);
      }
      goto LABEL_41;
    }
    v33 = v84;
    if ( !v84 || v30 + (unsigned int)v29 >= 0xC8 )
      return 3221225485LL;
    if ( a4 )
    {
      v54 = *((_WORD *)v31 - 1);
      v55 = v31 - 2;
      if ( v54 == 99 )
      {
        v56 = *((_WORD *)v31 - 2) - 104;
        if ( v56 > 0xFu || (v57 = 32785, !_bittest(&v57, v56)) )
        {
          v58 = 3LL;
          v59 = (char *)L"hc" - v55;
          while ( v58 != -2147483643 )
          {
            v60 = *(_WORD *)&v55[v59];
            if ( !v60 )
              break;
            *(_WORD *)v55 = v60;
            v55 += 2;
            if ( !--v58 )
            {
              *((_WORD *)v55 - 1) = 0;
              goto LABEL_34;
            }
          }
          goto LABEL_116;
        }
      }
      else
      {
        v57 = 32785;
      }
      if ( v54 == 115 )
      {
        v61 = *((_WORD *)v31 - 2) - 104;
        if ( v61 > 0xFu || !_bittest(&v57, v61) )
        {
          v58 = 3LL;
          v62 = (char *)L"hs" - v55;
          do
          {
            if ( v58 == -2147483643 )
              break;
            v63 = *(_WORD *)&v55[v62];
            if ( !v63 )
              break;
            *(_WORD *)v55 = v63;
            v55 += 2;
            --v58;
          }
          while ( v58 );
LABEL_116:
          v64 = v55 - 2;
          if ( v58 )
            v64 = v55;
          *(_WORD *)v64 = 0;
          goto LABEL_34;
        }
      }
      if ( v54 == 83 )
      {
        v65 = 115;
LABEL_123:
        *(_WORD *)v55 = v65;
        goto LABEL_34;
      }
      if ( v54 == 67 )
      {
        v65 = 99;
        goto LABEL_123;
      }
    }
LABEL_34:
    v34 = v80;
    if ( (unsigned int)v29 >= v80 )
    {
      do
      {
        v35 = v34;
        if ( v15 )
        {
          v36 = *v33++;
        }
        else
        {
          *v33 += 8LL;
          v36 = *(_QWORD *)(*v33 - 8);
        }
        ++v34;
        v91[v35] = v36;
      }
      while ( v34 <= (unsigned int)v29 );
      v80 = v34;
      v84 = v33;
    }
    v37 = (char *)v91[v29];
    v38 = 0LL;
    v83 = v37;
    if ( v30 )
    {
      if ( v15 )
      {
        v26 = *v33;
        v66 = v34++;
        ++v33;
        v80 = v34;
        v84 = v33;
        v91[v66] = v26;
      }
      else
      {
        *v33 += 8LL;
        v26 = *(_QWORD *)(*v33 - 8);
      }
      if ( v30 > 1 )
      {
        if ( v15 )
        {
          v38 = *v33;
          v67 = v34;
          v68 = v34 + 1;
          v84 = v33 + 1;
        }
        else
        {
          *v33 += 8LL;
          v38 = *(_QWORD *)(*v33 - 8);
          v67 = v34;
          v68 = v34 + 1;
        }
        v80 = v68;
        v91[v67] = v38;
      }
    }
    v39 = sub_180060D78((_DWORD)v17, v14, (unsigned int)&v85, 0, 0, (__int64)&v92, v37, v26, v38);
LABEL_41:
    v16 = v81;
    if ( v39 < 0 || (v40 = (v85 - (__int64)v17) >> 1, v14 -= v40, v14 < 0) )
    {
LABEL_64:
      a1 = v79;
      goto LABEL_65;
    }
    v23 = v88;
    v12 = a2;
    v13 = v87;
    v15 = a5;
    v11 = a3;
    v17 += (int)v40;
LABEL_44:
    if ( v23 )
    {
      v16 += v17 - v23;
      goto LABEL_13;
    }
LABEL_63:
    v18 = 0LL;
    v16 = 0;
LABEL_13:
    v81 = v16;
    v79 = v19;
    a1 = v19;
    if ( (unsigned int)(v12 - 1) <= 0xFFFFFFFD && v16 >= (unsigned int)v12 )
    {
      v10 = a10;
LABEL_145:
      if ( v18 )
      {
        v69 = v18;
        do
        {
          if ( *v69 != 32 && *v69 != 9 )
            break;
          ++v69;
        }
        while ( v69 != v17 );
        if ( (unsigned __int64)v18 > v13 )
        {
          do
          {
            v70 = *(v18 - 1);
            v71 = v18 - 1;
            if ( v70 != 32 && v70 != 9 )
              break;
            --v18;
          }
          while ( (unsigned __int64)v71 > v13 );
          a1 = v79;
        }
        v72 = v69 - v18;
        if ( (_DWORD)v72 == 1 )
        {
          if ( --v14 < 0 )
            goto LABEL_157;
        }
        else if ( (unsigned int)v72 > 2 )
        {
          v14 = v72 + v14 - 2;
        }
        v73 = v17 - v69;
        v16 = v73;
        v81 = v73;
        memmove(v18 + 2, v69, 2 * v73);
        a1 = v79;
        v12 = a2;
        v13 = v87;
        v15 = a5;
        *v18 = 13;
        v74 = v18 + 1;
        *v74 = 10;
        v75 = &v74[(unsigned int)v73];
      }
      else
      {
        v14 -= 2;
        if ( v14 < 0 )
        {
LABEL_157:
          if ( v10 )
          {
            *(_DWORD *)v10 |= 2u;
            goto LABEL_66;
          }
          return 2147483653LL;
        }
        v16 = 0;
        *v17 = 13;
        v75 = v17 + 1;
        v81 = 0;
        *v75 = 10;
      }
      v18 = 0LL;
      v17 = v75 + 1;
    }
  }
  if ( v22 != 48 )
  {
    switch ( v22 )
    {
      case 0u:
        return 3221225485LL;
      case 0x72u:
        if ( --v14 < 0 )
          goto LABEL_64;
        *v17++ = 13;
        v19 += 2;
        goto LABEL_63;
      case 0x6Eu:
        v14 -= 2;
        if ( v14 < 0 )
          goto LABEL_64;
        *(_DWORD *)v17 = 655373;
        v17 += 2;
        v19 += 2;
        goto LABEL_63;
      case 0x74u:
        if ( --v14 < 0 )
          goto LABEL_64;
        if ( (v16 & 7) != 0 )
          v16 = (v16 + 7) & 0xFFFFFFF8;
        else
          v16 += 8;
        v18 = v17;
        *v17 = 9;
        break;
      case 0x62u:
        if ( --v14 < 0 )
          goto LABEL_64;
        v18 = v17;
        *v17 = 32;
        break;
      default:
        if ( !v11 )
        {
          if ( --v14 < 0 )
            goto LABEL_64;
          *v17 = v22;
          break;
        }
        v14 -= 2;
        if ( v14 < 0 )
          goto LABEL_64;
        *v17 = 37;
        v17[1] = v19[1];
        v17 += 2;
LABEL_90:
        v19 += 2;
        goto LABEL_44;
    }
    ++v17;
    goto LABEL_90;
  }
  a1 = v79;
LABEL_16:
  if ( v14 < 1 )
  {
LABEL_65:
    v10 = a10;
LABEL_66:
    if ( v10 )
    {
      v43 = v87;
      v44 = a1 - v89;
      v45 = ((__int64)v17 - v87) >> 1;
      *(_DWORD *)(v10 + 4) = v16;
      *(_QWORD *)(v10 + 8) = v44;
      *(_QWORD *)(v10 + 16) = v45;
      if ( v18 )
        v46 = ((__int64)v18 - v43) >> 1;
      else
        v46 = -1LL;
      *(_DWORD *)v10 |= 1u;
      *(_QWORD *)(v10 + 24) = v46;
    }
    return 2147483653LL;
  }
  *v17 = 0;
  if ( v90 )
    *v90 = 2 * ((__int64)((__int64)v17 - v13 + 2) >> 1);
  return 0LL;
}
