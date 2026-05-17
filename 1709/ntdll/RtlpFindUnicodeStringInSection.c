/*
 * XREFs of RtlpFindUnicodeStringInSection @ 0x180034718
 * Callers:
 *     RtlFindActivationContextSectionString @ 0x1800343D0 (RtlFindActivationContextSectionString.c)
 *     RtlQueryActivationContextApplicationSettings @ 0x18007EAD0 (RtlQueryActivationContextApplicationSettings.c)
 * Callees:
 *     RtlHashUnicodeString @ 0x180034F10 (RtlHashUnicodeString.c)
 *     RtlCompareUnicodeStrings @ 0x180049F70 (RtlCompareUnicodeStrings.c)
 *     DbgPrintEx @ 0x18006C580 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     bsearch @ 0x1800935E0 (bsearch.c)
 */

__int64 __fastcall RtlpFindUnicodeStringInSection(
        _DWORD *a1,
        unsigned __int64 a2,
        unsigned __int16 *a3,
        unsigned int *a4,
        _DWORD *a5,
        unsigned int *a6)
{
  int v7; // r12d
  bool v8; // zf
  char v11; // r14
  __int64 v12; // r8
  __int64 result; // rax
  __int64 v14; // rdx
  char v15; // dl
  unsigned int v16; // r11d
  __int64 v17; // rcx
  __int64 v18; // rbp
  unsigned int *v19; // rdx
  unsigned int v20; // eax
  char *v21; // r15
  unsigned __int64 v22; // rdx
  int *v23; // r9
  unsigned __int64 v24; // rax
  char *v25; // rbx
  size_t v26; // r8
  char *v27; // rbx
  char *v28; // r12
  char *v29; // rax
  unsigned int v30; // ebp
  __int64 v31; // rcx
  unsigned __int64 v32; // r14
  unsigned __int64 v33; // rax
  __int64 v34; // rcx
  int v35; // ebp
  char v36; // [rsp+50h] [rbp-78h]
  unsigned int v37; // [rsp+50h] [rbp-78h]
  unsigned int v38; // [rsp+54h] [rbp-74h] BYREF
  unsigned int v39; // [rsp+58h] [rbp-70h]
  unsigned int *v40; // [rsp+60h] [rbp-68h]
  unsigned __int64 v41; // [rsp+68h] [rbp-60h]
  unsigned int Key[6]; // [rsp+70h] [rbp-58h] BYREF

  v7 = a1[4] & 1;
  v8 = *a1 == 1682469715;
  v41 = a2;
  v11 = 1;
  v36 = v7;
  if ( !v8 )
    return 3222601731LL;
  if ( !a1[5] )
    return 3222601736LL;
  v12 = (unsigned int)a1[7];
  if ( (_DWORD)v12 != -1 )
  {
    if ( *a5 == (_DWORD)v12 )
      goto LABEL_7;
    LOBYTE(a2) = v7;
    result = RtlHashUnicodeString(a3, a2, v12, a6);
    if ( (int)result >= 0 )
    {
      *a5 = a1[7];
      goto LABEL_7;
    }
    if ( (_DWORD)result != -1073741811 )
      return result;
    LOBYTE(v14) = v7;
    result = RtlHashUnicodeString(a3, v14, 0LL, &v38);
    if ( (int)result < 0 )
      return result;
    DbgPrintEx(
      51LL,
      0LL,
      "RtlpFindUnicodeStringInSection: Unsupported hash algorithm %lu found in string section.\n",
      a1[7]);
  }
  v11 = 0;
LABEL_7:
  v15 = 0;
  if ( a1[2] == 1 )
    v15 = v11;
  if ( ((unsigned __int8)-(a1[8] != 0) & (unsigned __int8)v15) != 0 )
  {
    v17 = (unsigned int)a1[8];
    v18 = 0LL;
    v39 = *a6;
    v16 = v39;
    v37 = v39 % *(_DWORD *)((char *)a1 + v17);
    v19 = (_DWORD *)((char *)&a1[2 * v37] + *(unsigned int *)((char *)a1 + v17 + 4));
    v20 = *v19;
    v21 = (char *)a1 + v19[1];
    v40 = v19;
    v38 = v20;
    if ( v20 )
    {
      v22 = v41;
      while ( 1 )
      {
        v23 = (int *)&v21[4 * v18];
        v24 = *v23;
        if ( v24 > v22 )
          break;
        v25 = (char *)a1 + v24;
        if ( !v11 || *(_DWORD *)v25 == v16 )
        {
          v33 = *((unsigned int *)v25 + 1);
          if ( v33 > v22 )
          {
            DbgPrintEx(
              51LL,
              0LL,
              "SXS: String hash table entry at %p has invalid key offset (= %ld)\n"
              "   Header = %p; Index = %lu; Bucket = %p; Chain = %p\n",
              v25,
              v33,
              a1,
              v37,
              v40,
              v21);
            return 3222601731LL;
          }
          if ( !(unsigned int)RtlCompareUnicodeStrings(
                                *((_QWORD *)a3 + 1),
                                (unsigned __int64)*a3 >> 1,
                                (int)v33 + (int)a1,
                                (unsigned __int64)*((unsigned __int16 *)v25 + 4) >> 1,
                                v7) )
            goto LABEL_33;
          v16 = v39;
          v22 = v41;
        }
        v18 = (unsigned int)(v18 + 1);
        if ( (unsigned int)v18 >= v38 )
          return 3222601736LL;
      }
      DbgPrintEx(51LL, 0LL, "SXS: String hash collision chain offset at %p (= %ld) out of bounds\n", v23, *v23);
      return 3222601731LL;
    }
    return 3222601736LL;
  }
  if ( v11 && (a1[4] & 2) != 0 )
  {
    v26 = (unsigned int)a1[5];
    v27 = (char *)a1 + (unsigned int)a1[6];
    v28 = &v27[24 * (unsigned int)(v26 - 1)];
    Key[0] = *a6;
    v29 = (char *)bsearch(Key, v27, v26, 0x18uLL, RtlpCompareActivationContextDataTOCEntryById);
    if ( v29 )
    {
      for ( ; v29 != v27; v29 -= 24 )
      {
        if ( *(_DWORD *)v29 != *a6 )
          break;
      }
      v30 = *a6;
      v25 = v29 + 24;
      v31 = *((_QWORD *)a3 + 1);
      if ( *(_DWORD *)v29 == *a6 )
        v25 = v29;
      v32 = (unsigned __int64)*a3 >> 1;
      v40 = (unsigned int *)*((_QWORD *)a3 + 1);
      do
      {
        if ( !(unsigned int)RtlCompareUnicodeStrings(
                              v31,
                              v32,
                              (int)a1 + *((_DWORD *)v25 + 1),
                              (unsigned __int64)*((unsigned __int16 *)v25 + 4) >> 1,
                              v36) )
          break;
        v25 += 24;
        if ( v25 > v28 )
          goto LABEL_30;
        LODWORD(v31) = (_DWORD)v40;
      }
      while ( *(_DWORD *)v25 == v30 );
      if ( v25 > v28 || *(_DWORD *)v25 != v30 )
      {
LABEL_30:
        v25 = 0LL;
        goto LABEL_33;
      }
      goto LABEL_33;
    }
    return 3222601736LL;
  }
  v35 = a1[5];
  v25 = (char *)a1 + (unsigned int)a1[6];
  if ( !v35 )
    return 3222601736LL;
  while ( v11 && *(_DWORD *)v25 != *a6
       || (unsigned int)RtlCompareUnicodeStrings(
                          *((_QWORD *)a3 + 1),
                          (unsigned __int64)*a3 >> 1,
                          (int)a1 + *((_DWORD *)v25 + 1),
                          (unsigned __int64)*((unsigned __int16 *)v25 + 4) >> 1,
                          v7) )
  {
    v25 += 24;
    if ( !--v35 )
      return 3222601736LL;
  }
LABEL_33:
  if ( !v25 || !*((_DWORD *)v25 + 3) )
    return 3222601736LL;
  if ( a4 )
  {
    v34 = *a4;
    a4[1] = a1[3];
    *((_QWORD *)a4 + 1) = (char *)a1 + *((unsigned int *)v25 + 3);
    a4[4] = *((_DWORD *)v25 + 4);
    if ( a4 + 17 <= (unsigned int *)((char *)a4 + v34) )
      a4[16] = *((_DWORD *)v25 + 5);
  }
  return 0LL;
}
