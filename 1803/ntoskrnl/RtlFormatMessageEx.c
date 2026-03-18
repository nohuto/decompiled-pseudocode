/*
 * XREFs of RtlFormatMessageEx @ 0x140782874
 * Callers:
 *     PiGetDeviceRegProperty @ 0x1405261D8 (PiGetDeviceRegProperty.c)
 *     PiGetDeviceRegistryProperty @ 0x140724398 (PiGetDeviceRegistryProperty.c)
 *     RtlFormatMessage @ 0x140782820 (RtlFormatMessage.c)
 * Callees:
 *     RtlStringCchPrintfExW @ 0x14006DED4 (RtlStringCchPrintfExW.c)
 *     RtlStringCbCopyExW @ 0x14014AF24 (RtlStringCbCopyExW.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 */

__int64 __fastcall RtlFormatMessageEx(
        __int16 *a1,
        unsigned int a2,
        char a3,
        char a4,
        char a5,
        __int64 *a6,
        NTSTRSAFE_PWSTR a7,
        unsigned int a8,
        __int64 a9)
{
  __int64 *v9; // r11
  unsigned int v10; // r13d
  char v11; // r10
  unsigned int v13; // r9d
  NTSTRSAFE_PWSTR v14; // r8
  NTSTRSAFE_PWSTR v15; // rbx
  signed int v16; // esi
  unsigned int v17; // r14d
  NTSTRSAFE_PWSTR v18; // r12
  __int16 v19; // ax
  NTSTRSAFE_PWSTR v20; // rcx
  wchar_t v21; // cx
  NTSTRSAFE_PWSTR v22; // rdx
  unsigned __int16 v23; // dx
  __int16 v24; // ax
  int v25; // r14d
  int v26; // eax
  unsigned __int16 v27; // dx
  int v28; // r15d
  __int64 v29; // r14
  __int16 *v30; // rdi
  NTSTRSAFE_PWSTR v31; // r8
  char v32; // r10
  __int16 v33; // cx
  char *v34; // rdx
  __int16 v35; // r9
  unsigned int v36; // eax
  __int64 v37; // rcx
  int v38; // ecx
  NTSTATUS v39; // eax
  __int16 v40; // dx
  char *v41; // rcx
  unsigned __int16 v42; // ax
  int v43; // r9d
  __int64 v44; // rdx
  signed __int64 v45; // r8
  __int16 v46; // ax
  unsigned __int16 v47; // ax
  signed __int64 v48; // r8
  __int16 v49; // ax
  char *v50; // rax
  __int16 v51; // ax
  unsigned int v52; // r15d
  unsigned int v53; // r8d
  __int64 v54; // rax
  wchar_t *v55; // r9
  __int64 v56; // r8
  __int64 v57; // rax
  __int64 v58; // rax
  unsigned int v59; // r15d
  __int64 v60; // rax
  NTSTRSAFE_PWSTR v61; // rdx
  __int16 v62; // ax
  NTSTRSAFE_PWSTR v63; // rcx
  __int64 v64; // rax
  __int64 v65; // rbx
  _WORD *v66; // r12
  _WORD *v67; // rbx
  _DWORD *v69; // rdx
  __int64 v70; // [rsp+30h] [rbp-D0h]
  unsigned int v73; // [rsp+54h] [rbp-ACh]
  unsigned int v74; // [rsp+58h] [rbp-A8h]
  __int64 v75; // [rsp+60h] [rbp-A0h]
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+70h] [rbp-90h] BYREF
  NTSTRSAFE_PWSTR v78; // [rsp+78h] [rbp-88h] BYREF
  NTSTRSAFE_PWSTR v79; // [rsp+80h] [rbp-80h]
  NTSTRSAFE_PWSTR v80; // [rsp+88h] [rbp-78h]
  __int64 v81; // [rsp+90h] [rbp-70h]
  _QWORD v82[200]; // [rsp+A0h] [rbp-60h]
  wchar_t pszDest; // [rsp+6E0h] [rbp+5E0h] BYREF
  _WORD v84[30]; // [rsp+6E2h] [rbp+5E2h] BYREF
  char v85; // [rsp+71Eh] [rbp+61Eh] BYREF

  v9 = a6;
  v10 = 0;
  v11 = a3;
  v13 = a2;
  v14 = a7;
  v81 = a9;
  v15 = a7;
  v75 = (__int64)a6;
  v79 = a7;
  v73 = 0;
  v16 = a8 >> 1;
LABEL_2:
  v17 = 0;
  v74 = 0;
LABEL_3:
  v18 = 0LL;
  while ( 1 )
  {
    v19 = *a1;
    v20 = v15;
    if ( !*a1 )
      break;
    ++a1;
    if ( v19 != 37 )
    {
      if ( v19 == 13 )
      {
        if ( *a1 != 10 )
          goto LABEL_114;
      }
      else
      {
        if ( v19 != 10 )
        {
LABEL_116:
          if ( --v16 < 0 )
            return 2147483653LL;
          *v15 = v19;
          ++v17;
          ++v15;
          if ( v19 != 32 )
            v20 = v18;
          v18 = v20;
          goto LABEL_120;
        }
        if ( *a1 != 13 )
        {
LABEL_114:
          if ( !v13 )
          {
            v16 -= 2;
            if ( v16 < 0 )
              return 2147483653LL;
            *(_DWORD *)v15 = 655373;
            v15 += 2;
            goto LABEL_2;
          }
          v18 = v15;
          v19 = 32;
          goto LABEL_116;
        }
      }
      ++a1;
      goto LABEL_114;
    }
    v21 = *a1;
    v22 = v15;
    v80 = v15;
    if ( (unsigned __int16)(v21 - 49) > 8u )
    {
      switch ( v21 )
      {
        case 0x30u:
          goto LABEL_144;
        case 0u:
          return 3221225485LL;
        case 0x72u:
          if ( --v16 < 0 )
            return 2147483653LL;
          *v15++ = 13;
          ++a1;
LABEL_106:
          v18 = 0LL;
          v17 = 0;
          goto LABEL_120;
        case 0x6Eu:
          v16 -= 2;
          if ( v16 < 0 )
            return 2147483653LL;
          *(_DWORD *)v15 = 655373;
          v15 += 2;
          ++a1;
          goto LABEL_106;
        case 0x74u:
          if ( --v16 < 0 )
            return 2147483653LL;
          if ( (v17 & 7) != 0 )
            v17 = (v17 + 7) & 0xFFFFFFF8;
          else
            v17 += 8;
          v18 = v15;
          *v15 = 9;
          goto LABEL_103;
        case 0x62u:
          if ( --v16 < 0 )
            return 2147483653LL;
          v18 = v15;
          *v15 = 32;
          goto LABEL_103;
      }
      if ( v11 )
      {
        v16 -= 2;
        if ( v16 < 0 )
          return 2147483653LL;
        *v15 = 37;
        v15[1] = *a1;
        v15 += 2;
      }
      else
      {
        if ( --v16 < 0 )
          return 2147483653LL;
        *v15 = v21;
LABEL_103:
        ++v15;
      }
      ++a1;
      goto LABEL_105;
    }
    v23 = a1[1];
    ++a1;
    v24 = v23;
    v25 = v21 - 48;
    if ( v23 >= 0x30u && v23 <= 0x39u )
    {
      v26 = v23;
      v27 = a1[1];
      ++a1;
      v25 = v26 + 2 * (5 * v25 - 24);
      v24 = v27;
      if ( v27 >= 0x30u && v27 <= 0x39u )
      {
        ++a1;
        v25 = v27 + 2 * (5 * v25 - 24);
        v24 = *a1;
        if ( (unsigned __int16)*a1 >= 0x30u && (unsigned __int16)*a1 <= 0x39u )
          return 3221225485LL;
      }
    }
    v28 = v25;
    v29 = (unsigned int)(v25 - 1);
    if ( v24 == 33 )
    {
      v30 = a1 + 1;
      v31 = v84;
      ppszDestEnd = v84;
      pszDest = 37;
      v32 = 0;
      v33 = *v30;
      if ( *v30 != 33 )
      {
        v34 = (char *)v84;
        do
        {
          v35 = v33;
          if ( !v33 )
            return 3221225485LL;
          if ( v34 >= &v85 )
            return 3221225485LL;
          if ( v33 == 42 )
          {
            v33 = 42;
            if ( v10 > 1 )
              return 3221225485LL;
          }
          ++v30;
          *v31 = v33;
          v36 = v10 + 1;
          v31 = (NTSTRSAFE_PWSTR)(v34 + 2);
          if ( v35 != 42 )
            v36 = v10;
          ppszDestEnd = (NTSTRSAFE_PWSTR)(v34 + 2);
          v33 = *v30;
          v34 += 2;
          v10 = v36;
        }
        while ( *v30 != 33 );
      }
      a1 = v30 + 1;
      v37 = 0LL;
      *v31 = 0;
    }
    else
    {
      RtlStringCbCopyExW(&pszDest, 0x40uLL, L"%s", &ppszDestEnd, 0LL, 0);
      v31 = ppszDestEnd;
      v32 = 1;
      v9 = (__int64 *)v75;
      v37 = 0LL;
    }
    if ( !a3 )
    {
      if ( !v9 || (unsigned int)v29 + v10 >= 0xC8 )
        return 3221225485LL;
      if ( !a4 )
        goto LABEL_63;
      v40 = *(v31 - 1);
      v41 = (char *)(v31 - 1);
      if ( v40 == 99 )
      {
        v42 = *(v31 - 2) - 104;
        if ( v42 > 0xFu || (v43 = 32785, !_bittest(&v43, v42)) )
        {
          v44 = 3LL;
          v45 = (char *)L"hc" - v41;
          do
          {
            if ( v44 == -2147483643 )
              break;
            v46 = *(_WORD *)&v41[v45];
            if ( !v46 )
              break;
            *(_WORD *)v41 = v46;
            v41 += 2;
            --v44;
          }
          while ( v44 );
          goto LABEL_54;
        }
      }
      else
      {
        v43 = 32785;
      }
      if ( v40 == 115 )
      {
        v47 = *(v31 - 2) - 104;
        if ( v47 > 0xFu || !_bittest(&v43, v47) )
        {
          v44 = 3LL;
          v48 = (char *)L"hs" - v41;
          do
          {
            if ( v44 == -2147483643 )
              break;
            v49 = *(_WORD *)&v41[v48];
            if ( !v49 )
              break;
            *(_WORD *)v41 = v49;
            v41 += 2;
            --v44;
          }
          while ( v44 );
LABEL_54:
          v50 = v41 - 2;
          if ( v44 )
            v50 = v41;
          v37 = 0LL;
          *(_WORD *)v50 = 0;
LABEL_63:
          v52 = v73;
          if ( (unsigned int)v29 >= v73 )
          {
            do
            {
              v53 = v52 + 1;
              if ( a5 )
              {
                v54 = *v9++;
                v82[v52] = v54;
              }
              else
              {
                *v9 += 8LL;
                v82[v52] = *(_QWORD *)(*v9 - 8);
              }
              ++v52;
            }
            while ( v53 <= (unsigned int)v29 );
            v75 = (__int64)v9;
            v37 = 0LL;
            v73 = v53;
          }
          v55 = (wchar_t *)v82[v29];
          v56 = 0LL;
          ppszDestEnd = v55;
          if ( v10 )
          {
            if ( a5 )
            {
              v56 = *v9;
              v57 = v52++;
              ++v9;
              v73 = v52;
              v75 = (__int64)v9;
              v82[v57] = v56;
            }
            else
            {
              *v9 += 8LL;
              v56 = *(_QWORD *)(*v9 - 8);
            }
            if ( v10 > 1 )
            {
              v58 = v52;
              v59 = v52 + 1;
              v73 = v59;
              if ( a5 )
              {
                v37 = *v9;
                v75 = (__int64)(v9 + 1);
              }
              else
              {
                *v9 += 8LL;
                v73 = v59;
                v37 = *(_QWORD *)(*v9 - 8);
              }
              v82[v58] = v37;
            }
          }
          v10 = 0;
          if ( RtlStringCchPrintfExW(v15, v16, &v78, 0LL, 0, &pszDest, v55, v56, v37) < 0 )
            return 2147483653LL;
          goto LABEL_79;
        }
      }
      if ( v40 == 83 )
      {
        v51 = 115;
        goto LABEL_61;
      }
      if ( v40 == 67 )
      {
        v51 = 99;
LABEL_61:
        *(_WORD *)v41 = v51;
      }
      v37 = 0LL;
      goto LABEL_63;
    }
    if ( v32 == 1 )
      goto LABEL_32;
    v38 = pszDest - aS_1[0];
    if ( pszDest == aS_1[0] )
    {
      v38 = v84[0] - aS_1[1];
      if ( v84[0] == aS_1[1] )
        v38 = v84[1] - aS_1[2];
    }
    if ( !v38 )
    {
LABEL_32:
      LODWORD(v70) = v28;
      v10 = 0;
      v39 = RtlStringCchPrintfExW(v15, v16, &v78, 0LL, 0, L"%%%u", v70);
    }
    else
    {
      LODWORD(v70) = v28;
      v10 = 0;
      v39 = RtlStringCchPrintfExW(v15, v16, &v78, 0LL, 0, L"%%%u!%s!", v70, v84);
    }
    if ( v39 < 0 )
      return 2147483653LL;
LABEL_79:
    v60 = v78 - v15;
    v16 -= v60;
    if ( v16 < 0 )
      return 2147483653LL;
    v17 = v74;
    v9 = (__int64 *)v75;
    v22 = v80;
    v14 = v79;
    v13 = a2;
    v11 = a3;
    v15 += (int)v60;
LABEL_105:
    if ( !v22 )
      goto LABEL_106;
    v17 += v15 - v22;
LABEL_120:
    v74 = v17;
    if ( v13 && v13 != -1 && v17 >= v13 )
    {
      if ( v18 )
      {
        v61 = v18;
        do
        {
          if ( *v61 != 32 && *v61 != 9 )
            break;
          ++v61;
        }
        while ( v61 != v15 );
        if ( v18 > v14 )
        {
          do
          {
            v62 = *(v18 - 1);
            v63 = v18 - 1;
            if ( v62 != 32 && v62 != 9 )
              break;
            --v18;
          }
          while ( v63 > v14 );
        }
        v64 = v61 - v18;
        if ( (_DWORD)v64 == 1 )
        {
          if ( --v16 >= 0 )
            goto LABEL_137;
          return 2147483653LL;
        }
        if ( (unsigned int)v64 > 2 )
          v16 = v64 + v16 - 2;
LABEL_137:
        v65 = v15 - v61;
        v17 = v65;
        v74 = v65;
        memmove(v18 + 2, v61, 2 * v65);
        v9 = (__int64 *)v75;
        v14 = v79;
        v13 = a2;
        v11 = a3;
        *v18 = 13;
        v66 = v18 + 1;
        *v66 = 10;
        v67 = &v66[(unsigned int)v65];
      }
      else
      {
        v16 -= 2;
        if ( v16 < 0 )
          return 2147483653LL;
        *v15 = 13;
        v17 = 0;
        v67 = v15 + 1;
        v74 = 0;
        *v67 = 10;
      }
      v15 = v67 + 1;
      goto LABEL_3;
    }
  }
LABEL_144:
  if ( v16 < 1 )
    return 2147483653LL;
  v69 = (_DWORD *)v81;
  *v15 = 0;
  if ( v69 )
    *v69 = 2 * (((char *)v15 - (char *)v14 + 2) >> 1);
  return 0LL;
}
