/*
 * XREFs of sub_18003EC30 @ 0x18003EC30
 * Callers:
 *     RtlFindActivationContextSectionString @ 0x18003E8E0 (RtlFindActivationContextSectionString.c)
 *     RtlQueryActivationContextApplicationSettings @ 0x18007BAE0 (RtlQueryActivationContextApplicationSettings.c)
 * Callees:
 *     DbgPrintEx @ 0x180006B80 (DbgPrintEx.c)
 *     RtlCompareUnicodeStrings @ 0x180022BB0 (RtlCompareUnicodeStrings.c)
 *     RtlHashUnicodeString @ 0x18003EEE0 (RtlHashUnicodeString.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     bsearch @ 0x18008DB40 (bsearch.c)
 */

__int64 __fastcall sub_18003EC30(
        _DWORD *a1,
        unsigned __int64 a2,
        unsigned __int16 **a3,
        unsigned int *a4,
        _DWORD *a5,
        unsigned int *a6)
{
  int v7; // r10d
  bool v8; // zf
  char v11; // r14
  __int64 v12; // r8
  __int64 result; // rax
  __int64 v14; // rdx
  char v15; // dl
  unsigned int v16; // r11d
  __int64 v17; // rcx
  __int64 v18; // rbp
  __int64 v19; // rdx
  char *v20; // rcx
  char *v21; // r12
  char *v22; // r15
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rax
  char *v25; // rbx
  size_t v26; // r8
  char *v27; // rbx
  char *v28; // r12
  char *v29; // rax
  unsigned int v30; // ebp
  unsigned __int64 v31; // r14
  unsigned __int64 v32; // rax
  __int64 v33; // rcx
  int v34; // ebp
  _CoreCrtNonSecureSearchSortCompareFunction CompareFunction; // [rsp+20h] [rbp-A8h]
  char v36; // [rsp+50h] [rbp-78h]
  int v37; // [rsp+54h] [rbp-74h] BYREF
  unsigned int v38; // [rsp+58h] [rbp-70h]
  unsigned __int64 v39; // [rsp+60h] [rbp-68h]
  unsigned int Key[6]; // [rsp+68h] [rbp-60h] BYREF

  v7 = a1[4] & 1;
  v8 = *a1 == 1682469715;
  v39 = a2;
  v11 = 1;
  v36 = v7;
  if ( !v8 )
    return 3222601731LL;
  if ( !a1[5] )
    return 3222601736LL;
  v12 = (unsigned int)a1[7];
  if ( (_DWORD)v12 == -1 )
  {
    v11 = 0;
  }
  else if ( *a5 != (_DWORD)v12 )
  {
    LOBYTE(a2) = v7;
    result = RtlHashUnicodeString(a3, a2, v12, a6);
    if ( (int)result < 0 )
    {
      if ( (_DWORD)result != -1073741811 )
        return result;
      LOBYTE(v14) = v36;
      result = RtlHashUnicodeString(a3, v14, 0LL, &v37);
      if ( (int)result < 0 )
        return result;
      DbgPrintEx(
        51,
        0,
        (int)"RtlpFindUnicodeStringInSection: Unsupported hash algorithm %lu found in string section.\n",
        (unsigned int)a1[7]);
      v11 = 0;
    }
    else
    {
      *a5 = a1[7];
    }
    LOBYTE(v7) = v36;
  }
  v15 = 0;
  if ( a1[2] == 1 )
    v15 = v11;
  if ( ((unsigned __int8)-(a1[8] != 0) & (unsigned __int8)v15) != 0 )
  {
    v17 = (unsigned int)a1[8];
    v18 = 0LL;
    v38 = *a6;
    v16 = v38;
    v19 = v38 % *(_DWORD *)((char *)a1 + v17);
    v20 = (char *)a1 + *(unsigned int *)((char *)a1 + v17 + 4);
    v37 = v19;
    v21 = &v20[8 * v19];
    v22 = (char *)a1 + *((unsigned int *)v21 + 1);
    if ( *(_DWORD *)v21 )
    {
      v23 = v39;
      while ( 1 )
      {
        v24 = *(int *)&v22[4 * v18];
        if ( v24 > v23 )
          break;
        v25 = (char *)a1 + v24;
        if ( !v11 || *(_DWORD *)v25 == v16 )
        {
          v32 = *((unsigned int *)v25 + 1);
          if ( v32 > v23 )
          {
            LODWORD(CompareFunction) = *((_DWORD *)v25 + 1);
            DbgPrintEx(
              51,
              0,
              (int)"SXS: String hash table entry at %p has invalid key offset (= %ld)\n"
                   "   Header = %p; Index = %lu; Bucket = %p; Chain = %p\n",
              v25,
              CompareFunction,
              a1,
              v37,
              v21,
              v22);
            return 3222601731LL;
          }
          if ( !(unsigned int)RtlCompareUnicodeStrings(
                                a3[1],
                                (unsigned __int64)*(unsigned __int16 *)a3 >> 1,
                                (__int64)a1 + v32,
                                (unsigned __int64)*((unsigned __int16 *)v25 + 4) >> 1,
                                v7) )
            goto LABEL_32;
          v16 = v38;
          v23 = v39;
        }
        LOBYTE(v7) = v36;
        v18 = (unsigned int)(v18 + 1);
        if ( (unsigned int)v18 >= *(_DWORD *)v21 )
          return 3222601736LL;
      }
      DbgPrintEx(51, 0, (int)"SXS: String hash collision chain offset at %p (= %ld) out of bounds\n");
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
    v29 = (char *)bsearch(Key, v27, v26, 0x18uLL, sub_18007AE40);
    if ( v29 )
    {
      for ( ; v29 != v27; v29 -= 24 )
      {
        if ( *(_DWORD *)v29 != *a6 )
          break;
      }
      v30 = *a6;
      v25 = v29 + 24;
      if ( *(_DWORD *)v29 == *a6 )
        v25 = v29;
      v31 = (unsigned __int64)*(unsigned __int16 *)a3 >> 1;
      do
      {
        if ( !(unsigned int)RtlCompareUnicodeStrings(
                              a3[1],
                              v31,
                              (__int64)a1 + *((unsigned int *)v25 + 1),
                              (unsigned __int64)*((unsigned __int16 *)v25 + 4) >> 1,
                              v36) )
          break;
        v25 += 24;
        if ( v25 > v28 )
          goto LABEL_29;
      }
      while ( *(_DWORD *)v25 == v30 );
      if ( v25 > v28 || *(_DWORD *)v25 != v30 )
      {
LABEL_29:
        v25 = 0LL;
        goto LABEL_32;
      }
      goto LABEL_32;
    }
    return 3222601736LL;
  }
  v34 = a1[5];
  v25 = (char *)a1 + (unsigned int)a1[6];
  if ( !v34 )
    return 3222601736LL;
  while ( v11 && *(_DWORD *)v25 != *a6
       || (unsigned int)RtlCompareUnicodeStrings(
                          a3[1],
                          (unsigned __int64)*(unsigned __int16 *)a3 >> 1,
                          (__int64)a1 + *((unsigned int *)v25 + 1),
                          (unsigned __int64)*((unsigned __int16 *)v25 + 4) >> 1,
                          v7) )
  {
    LOBYTE(v7) = v36;
    v25 += 24;
    if ( !--v34 )
      return 3222601736LL;
  }
LABEL_32:
  if ( !v25 || !*((_DWORD *)v25 + 3) )
    return 3222601736LL;
  if ( a4 )
  {
    v33 = *a4;
    a4[1] = a1[3];
    *((_QWORD *)a4 + 1) = (char *)a1 + *((unsigned int *)v25 + 3);
    a4[4] = *((_DWORD *)v25 + 4);
    if ( a4 + 17 <= (unsigned int *)((char *)a4 + v33) )
      a4[16] = *((_DWORD *)v25 + 5);
  }
  return 0LL;
}
