/*
 * XREFs of sub_18003FCD8 @ 0x18003FCD8
 * Callers:
 *     RtlFindActivationContextSectionString @ 0x18003F770 (RtlFindActivationContextSectionString.c)
 *     RtlQueryActivationContextApplicationSettings @ 0x180080700 (RtlQueryActivationContextApplicationSettings.c)
 * Callees:
 *     RtlCompareUnicodeStrings @ 0x18003B5B0 (RtlCompareUnicodeStrings.c)
 *     RtlHashUnicodeString @ 0x180040070 (RtlHashUnicodeString.c)
 *     DbgPrintEx @ 0x18005FEB0 (DbgPrintEx.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     bsearch @ 0x1800986E0 (bsearch.c)
 */

__int64 __fastcall sub_18003FCD8(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int16 **a3,
        unsigned int *a4,
        _DWORD *a5,
        unsigned int *a6)
{
  char v6; // r14
  char v7; // r12
  bool v8; // zf
  __int64 v12; // r8
  __int64 result; // rax
  __int64 v14; // rdx
  char v15; // dl
  unsigned int v16; // r11d
  __int64 v17; // rcx
  __int64 v18; // rbp
  __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned int *v21; // rdx
  unsigned int v22; // eax
  char *v23; // r15
  unsigned __int64 v24; // rdx
  int *v25; // r9
  unsigned __int64 v26; // rax
  char *v27; // rbx
  size_t v28; // r8
  char *v29; // rbx
  char *v30; // r12
  char *v31; // rax
  unsigned int v32; // ebp
  unsigned __int16 *v33; // rcx
  unsigned __int64 v34; // r14
  unsigned __int64 v35; // rax
  __int64 v36; // rcx
  int v37; // ebp
  char v38; // [rsp+50h] [rbp-78h]
  int v39; // [rsp+54h] [rbp-74h] BYREF
  unsigned int v40; // [rsp+58h] [rbp-70h]
  unsigned int v41; // [rsp+5Ch] [rbp-6Ch]
  unsigned __int16 *v42; // [rsp+60h] [rbp-68h]
  unsigned __int64 v43; // [rsp+68h] [rbp-60h]
  unsigned int Key[6]; // [rsp+70h] [rbp-58h] BYREF

  v6 = 1;
  v7 = *(_BYTE *)(a1 + 16) & 1;
  v8 = *(_DWORD *)a1 == 1682469715;
  v43 = a2;
  v38 = v7;
  if ( !v8 )
    return 3222601731LL;
  if ( !*(_DWORD *)(a1 + 20) )
    return 3222601736LL;
  v12 = *(unsigned int *)(a1 + 28);
  if ( (_DWORD)v12 != -1 )
  {
    if ( *a5 == (_DWORD)v12 )
      goto LABEL_7;
    LOBYTE(a2) = v7;
    result = RtlHashUnicodeString(a3, a2, v12, a6);
    if ( (int)result >= 0 )
    {
      *a5 = *(_DWORD *)(a1 + 28);
      goto LABEL_7;
    }
    if ( (_DWORD)result != -1073741811 )
      return result;
    LOBYTE(v14) = v7;
    result = RtlHashUnicodeString(a3, v14, 0LL, &v39);
    if ( (int)result < 0 )
      return result;
    DbgPrintEx(
      51LL,
      0LL,
      "RtlpFindUnicodeStringInSection: Unsupported hash algorithm %lu found in string section.\n",
      *(_DWORD *)(a1 + 28));
  }
  v6 = 0;
LABEL_7:
  v15 = 0;
  if ( *(_DWORD *)(a1 + 8) == 1 )
    v15 = v6;
  if ( ((unsigned __int8)-(*(_DWORD *)(a1 + 32) != 0) & (unsigned __int8)v15) != 0 )
  {
    v17 = *(unsigned int *)(a1 + 32);
    v18 = 0LL;
    v40 = *a6;
    v16 = v40;
    v19 = v40 % *(_DWORD *)(v17 + a1);
    v20 = a1 + *(unsigned int *)(v17 + a1 + 4);
    v39 = v19;
    v21 = (unsigned int *)(v20 + 8 * v19);
    v22 = *v21;
    v23 = (char *)(a1 + v21[1]);
    v42 = (unsigned __int16 *)v21;
    v41 = v22;
    if ( v22 )
    {
      v24 = v43;
      while ( 1 )
      {
        v25 = (int *)&v23[4 * v18];
        v26 = *v25;
        if ( v26 > v24 )
          break;
        v27 = (char *)(v26 + a1);
        if ( !v6 || *(_DWORD *)v27 == v16 )
        {
          v35 = *((unsigned int *)v27 + 1);
          if ( v35 > v24 )
          {
            DbgPrintEx(
              51LL,
              0LL,
              "SXS: String hash table entry at %p has invalid key offset (= %ld)\n"
              "   Header = %p; Index = %lu; Bucket = %p; Chain = %p\n",
              v27,
              *((_DWORD *)v27 + 1),
              (const void *)a1,
              v39,
              v42,
              v23);
            return 3222601731LL;
          }
          if ( !(unsigned int)RtlCompareUnicodeStrings(
                                a3[1],
                                (unsigned __int64)*(unsigned __int16 *)a3 >> 1,
                                v35 + a1,
                                (unsigned __int64)*((unsigned __int16 *)v27 + 4) >> 1,
                                v7) )
            goto LABEL_33;
          v16 = v40;
          v24 = v43;
        }
        v18 = (unsigned int)(v18 + 1);
        if ( (unsigned int)v18 >= v41 )
          return 3222601736LL;
      }
      DbgPrintEx(51LL, 0LL, "SXS: String hash collision chain offset at %p (= %ld) out of bounds\n", v25, *v25);
      return 3222601731LL;
    }
    return 3222601736LL;
  }
  if ( v6 && (*(_BYTE *)(a1 + 16) & 2) != 0 )
  {
    v28 = *(unsigned int *)(a1 + 20);
    v29 = (char *)(a1 + *(unsigned int *)(a1 + 24));
    v30 = &v29[24 * (unsigned int)(v28 - 1)];
    Key[0] = *a6;
    v31 = (char *)bsearch(Key, v29, v28, 0x18uLL, sub_18007FE50);
    if ( v31 )
    {
      for ( ; v31 != v29; v31 -= 24 )
      {
        if ( *(_DWORD *)v31 != *a6 )
          break;
      }
      v32 = *a6;
      v27 = v31 + 24;
      v33 = a3[1];
      if ( *(_DWORD *)v31 == *a6 )
        v27 = v31;
      v34 = (unsigned __int64)*(unsigned __int16 *)a3 >> 1;
      v42 = a3[1];
      do
      {
        if ( !(unsigned int)RtlCompareUnicodeStrings(
                              v33,
                              v34,
                              a1 + *((unsigned int *)v27 + 1),
                              (unsigned __int64)*((unsigned __int16 *)v27 + 4) >> 1,
                              v38) )
          break;
        v27 += 24;
        if ( v27 > v30 )
          goto LABEL_30;
        v33 = v42;
      }
      while ( *(_DWORD *)v27 == v32 );
      if ( v27 > v30 || *(_DWORD *)v27 != v32 )
      {
LABEL_30:
        v27 = 0LL;
        goto LABEL_33;
      }
      goto LABEL_33;
    }
    return 3222601736LL;
  }
  v37 = *(_DWORD *)(a1 + 20);
  v27 = (char *)(a1 + *(unsigned int *)(a1 + 24));
  if ( !v37 )
    return 3222601736LL;
  while ( v6 && *(_DWORD *)v27 != *a6
       || (unsigned int)RtlCompareUnicodeStrings(
                          a3[1],
                          (unsigned __int64)*(unsigned __int16 *)a3 >> 1,
                          a1 + *((unsigned int *)v27 + 1),
                          (unsigned __int64)*((unsigned __int16 *)v27 + 4) >> 1,
                          v7) )
  {
    v27 += 24;
    if ( !--v37 )
      return 3222601736LL;
  }
LABEL_33:
  if ( !v27 || !*((_DWORD *)v27 + 3) )
    return 3222601736LL;
  if ( a4 )
  {
    v36 = *a4;
    a4[1] = *(_DWORD *)(a1 + 12);
    *((_QWORD *)a4 + 1) = a1 + *((unsigned int *)v27 + 3);
    a4[4] = *((_DWORD *)v27 + 4);
    if ( a4 + 17 <= (unsigned int *)((char *)a4 + v36) )
      a4[16] = *((_DWORD *)v27 + 5);
  }
  return 0LL;
}
