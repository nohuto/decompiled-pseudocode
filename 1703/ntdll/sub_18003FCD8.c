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

NTSTATUS __fastcall sub_18003FCD8(
        __int64 a1,
        unsigned __int64 a2,
        _UNICODE_STRING *a3,
        unsigned int *a4,
        _DWORD *a5,
        ULONG *HashValue)
{
  char v6; // r14
  BOOLEAN v7; // r12
  bool v8; // zf
  ULONG v12; // r8d
  NTSTATUS result; // eax
  char v14; // dl
  ULONG v15; // r11d
  __int64 v16; // rcx
  __int64 v17; // rbp
  __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned int *v20; // rdx
  unsigned int v21; // eax
  char *v22; // r15
  unsigned __int64 v23; // rdx
  int *v24; // r9
  unsigned __int64 v25; // rax
  char *v26; // rbx
  size_t v27; // r8
  char *v28; // rbx
  char *v29; // r12
  char *v30; // rax
  ULONG v31; // ebp
  const WCHAR *Buffer; // rcx
  SIZE_T v33; // r14
  unsigned __int64 v34; // rax
  __int64 v35; // rcx
  int v36; // ebp
  BOOLEAN CaseInSensitive; // [rsp+50h] [rbp-78h]
  ULONG v38; // [rsp+54h] [rbp-74h] BYREF
  ULONG v39; // [rsp+58h] [rbp-70h]
  unsigned int v40; // [rsp+5Ch] [rbp-6Ch]
  const WCHAR *v41; // [rsp+60h] [rbp-68h]
  unsigned __int64 v42; // [rsp+68h] [rbp-60h]
  ULONG Key[6]; // [rsp+70h] [rbp-58h] BYREF

  v6 = 1;
  v7 = *(_BYTE *)(a1 + 16) & 1;
  v8 = *(_DWORD *)a1 == 1682469715;
  v42 = a2;
  CaseInSensitive = v7;
  if ( !v8 )
    return -1072365565;
  if ( !*(_DWORD *)(a1 + 20) )
    return -1072365560;
  v12 = *(_DWORD *)(a1 + 28);
  if ( v12 != -1 )
  {
    if ( *a5 == v12 )
      goto LABEL_7;
    result = RtlHashUnicodeString(a3, v7, v12, HashValue);
    if ( result >= 0 )
    {
      *a5 = *(_DWORD *)(a1 + 28);
      goto LABEL_7;
    }
    if ( result != -1073741811 )
      return result;
    result = RtlHashUnicodeString(a3, v7, 0, &v38);
    if ( result < 0 )
      return result;
    DbgPrintEx(
      0x33u,
      0,
      "RtlpFindUnicodeStringInSection: Unsupported hash algorithm %lu found in string section.\n",
      *(_DWORD *)(a1 + 28));
  }
  v6 = 0;
LABEL_7:
  v14 = 0;
  if ( *(_DWORD *)(a1 + 8) == 1 )
    v14 = v6;
  if ( ((unsigned __int8)-(*(_DWORD *)(a1 + 32) != 0) & (unsigned __int8)v14) != 0 )
  {
    v16 = *(unsigned int *)(a1 + 32);
    v17 = 0LL;
    v39 = *HashValue;
    v15 = v39;
    v18 = v39 % *(_DWORD *)(v16 + a1);
    v19 = a1 + *(unsigned int *)(v16 + a1 + 4);
    v38 = v18;
    v20 = (unsigned int *)(v19 + 8 * v18);
    v21 = *v20;
    v22 = (char *)(a1 + v20[1]);
    v41 = (const WCHAR *)v20;
    v40 = v21;
    if ( v21 )
    {
      v23 = v42;
      while ( 1 )
      {
        v24 = (int *)&v22[4 * v17];
        v25 = *v24;
        if ( v25 > v23 )
          break;
        v26 = (char *)(v25 + a1);
        if ( !v6 || *(_DWORD *)v26 == v15 )
        {
          v34 = *((unsigned int *)v26 + 1);
          if ( v34 > v23 )
          {
            DbgPrintEx(
              0x33u,
              0,
              "SXS: String hash table entry at %p has invalid key offset (= %ld)\n"
              "   Header = %p; Index = %lu; Bucket = %p; Chain = %p\n",
              v26,
              *((_DWORD *)v26 + 1),
              (const void *)a1,
              v38,
              v41,
              v22);
            return -1072365565;
          }
          if ( !RtlCompareUnicodeStrings(
                  a3->Buffer,
                  (unsigned __int64)a3->Length >> 1,
                  (PCWCH)(v34 + a1),
                  (unsigned __int64)*((unsigned __int16 *)v26 + 4) >> 1,
                  v7) )
            goto LABEL_33;
          v15 = v39;
          v23 = v42;
        }
        v17 = (unsigned int)(v17 + 1);
        if ( (unsigned int)v17 >= v40 )
          return -1072365560;
      }
      DbgPrintEx(0x33u, 0, "SXS: String hash collision chain offset at %p (= %ld) out of bounds\n", v24, *v24);
      return -1072365565;
    }
    return -1072365560;
  }
  if ( v6 && (*(_BYTE *)(a1 + 16) & 2) != 0 )
  {
    v27 = *(unsigned int *)(a1 + 20);
    v28 = (char *)(a1 + *(unsigned int *)(a1 + 24));
    v29 = &v28[24 * (unsigned int)(v27 - 1)];
    Key[0] = *HashValue;
    v30 = (char *)bsearch(Key, v28, v27, 0x18uLL, sub_18007FE50);
    if ( v30 )
    {
      for ( ; v30 != v28; v30 -= 24 )
      {
        if ( *(_DWORD *)v30 != *HashValue )
          break;
      }
      v31 = *HashValue;
      v26 = v30 + 24;
      Buffer = a3->Buffer;
      if ( *(_DWORD *)v30 == *HashValue )
        v26 = v30;
      v33 = (unsigned __int64)a3->Length >> 1;
      v41 = a3->Buffer;
      do
      {
        if ( !RtlCompareUnicodeStrings(
                Buffer,
                v33,
                (PCWCH)(a1 + *((unsigned int *)v26 + 1)),
                (unsigned __int64)*((unsigned __int16 *)v26 + 4) >> 1,
                CaseInSensitive) )
          break;
        v26 += 24;
        if ( v26 > v29 )
          goto LABEL_30;
        Buffer = v41;
      }
      while ( *(_DWORD *)v26 == v31 );
      if ( v26 > v29 || *(_DWORD *)v26 != v31 )
      {
LABEL_30:
        v26 = 0LL;
        goto LABEL_33;
      }
      goto LABEL_33;
    }
    return -1072365560;
  }
  v36 = *(_DWORD *)(a1 + 20);
  v26 = (char *)(a1 + *(unsigned int *)(a1 + 24));
  if ( !v36 )
    return -1072365560;
  while ( v6 && *(_DWORD *)v26 != *HashValue
       || RtlCompareUnicodeStrings(
            a3->Buffer,
            (unsigned __int64)a3->Length >> 1,
            (PCWCH)(a1 + *((unsigned int *)v26 + 1)),
            (unsigned __int64)*((unsigned __int16 *)v26 + 4) >> 1,
            v7) )
  {
    v26 += 24;
    if ( !--v36 )
      return -1072365560;
  }
LABEL_33:
  if ( !v26 || !*((_DWORD *)v26 + 3) )
    return -1072365560;
  if ( a4 )
  {
    v35 = *a4;
    a4[1] = *(_DWORD *)(a1 + 12);
    *((_QWORD *)a4 + 1) = a1 + *((unsigned int *)v26 + 3);
    a4[4] = *((_DWORD *)v26 + 4);
    if ( a4 + 17 <= (unsigned int *)((char *)a4 + v35) )
      a4[16] = *((_DWORD *)v26 + 5);
  }
  return 0;
}
