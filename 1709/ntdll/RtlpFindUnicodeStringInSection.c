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

NTSTATUS __fastcall RtlpFindUnicodeStringInSection(
        _DWORD *a1,
        unsigned __int64 a2,
        _UNICODE_STRING *a3,
        unsigned int *a4,
        _DWORD *a5,
        ULONG *HashValue)
{
  int v7; // r12d
  bool v8; // zf
  char v11; // r14
  ULONG v12; // r8d
  NTSTATUS result; // eax
  char v14; // dl
  ULONG v15; // r11d
  __int64 v16; // rcx
  __int64 v17; // rbp
  ULONG *v18; // rdx
  ULONG v19; // eax
  char *v20; // r15
  unsigned __int64 v21; // rdx
  int *v22; // r9
  unsigned __int64 v23; // rax
  char *v24; // rbx
  size_t v25; // r8
  char *v26; // rbx
  char *v27; // r12
  char *v28; // rax
  ULONG v29; // ebp
  const WCHAR *Buffer; // rcx
  SIZE_T v31; // r14
  unsigned __int64 v32; // rax
  __int64 v33; // rcx
  int v34; // ebp
  BOOLEAN CaseInSensitive; // [rsp+50h] [rbp-78h]
  unsigned int CaseInSensitivea; // [rsp+50h] [rbp-78h]
  ULONG v37; // [rsp+54h] [rbp-74h] BYREF
  ULONG v38; // [rsp+58h] [rbp-70h]
  const WCHAR *v39; // [rsp+60h] [rbp-68h]
  unsigned __int64 v40; // [rsp+68h] [rbp-60h]
  ULONG Key[6]; // [rsp+70h] [rbp-58h] BYREF

  v7 = a1[4] & 1;
  v8 = *a1 == 1682469715;
  v40 = a2;
  v11 = 1;
  CaseInSensitive = v7;
  if ( !v8 )
    return -1072365565;
  if ( !a1[5] )
    return -1072365560;
  v12 = a1[7];
  if ( v12 != -1 )
  {
    if ( *a5 == v12 )
      goto LABEL_7;
    result = RtlHashUnicodeString(a3, v7, v12, HashValue);
    if ( result >= 0 )
    {
      *a5 = a1[7];
      goto LABEL_7;
    }
    if ( result != -1073741811 )
      return result;
    result = RtlHashUnicodeString(a3, v7, 0, &v37);
    if ( result < 0 )
      return result;
    DbgPrintEx(
      0x33u,
      0,
      "RtlpFindUnicodeStringInSection: Unsupported hash algorithm %lu found in string section.\n",
      a1[7]);
  }
  v11 = 0;
LABEL_7:
  v14 = 0;
  if ( a1[2] == 1 )
    v14 = v11;
  if ( ((unsigned __int8)-(a1[8] != 0) & (unsigned __int8)v14) != 0 )
  {
    v16 = (unsigned int)a1[8];
    v17 = 0LL;
    v38 = *HashValue;
    v15 = v38;
    CaseInSensitivea = v38 % *(_DWORD *)((char *)a1 + v16);
    v18 = (_DWORD *)((char *)&a1[2 * CaseInSensitivea] + *(unsigned int *)((char *)a1 + v16 + 4));
    v19 = *v18;
    v20 = (char *)a1 + v18[1];
    v39 = (const WCHAR *)v18;
    v37 = v19;
    if ( v19 )
    {
      v21 = v40;
      while ( 1 )
      {
        v22 = (int *)&v20[4 * v17];
        v23 = *v22;
        if ( v23 > v21 )
          break;
        v24 = (char *)a1 + v23;
        if ( !v11 || *(_DWORD *)v24 == v15 )
        {
          v32 = *((unsigned int *)v24 + 1);
          if ( v32 > v21 )
          {
            DbgPrintEx(
              0x33u,
              0,
              "SXS: String hash table entry at %p has invalid key offset (= %ld)\n"
              "   Header = %p; Index = %lu; Bucket = %p; Chain = %p\n",
              v24,
              v32,
              a1,
              CaseInSensitivea,
              v39,
              v20);
            return -1072365565;
          }
          if ( !RtlCompareUnicodeStrings(
                  a3->Buffer,
                  (unsigned __int64)a3->Length >> 1,
                  (PCWCH)((char *)a1 + v32),
                  (unsigned __int64)*((unsigned __int16 *)v24 + 4) >> 1,
                  v7) )
            goto LABEL_33;
          v15 = v38;
          v21 = v40;
        }
        v17 = (unsigned int)(v17 + 1);
        if ( (unsigned int)v17 >= v37 )
          return -1072365560;
      }
      DbgPrintEx(0x33u, 0, "SXS: String hash collision chain offset at %p (= %ld) out of bounds\n", v22, *v22);
      return -1072365565;
    }
    return -1072365560;
  }
  if ( v11 && (a1[4] & 2) != 0 )
  {
    v25 = (unsigned int)a1[5];
    v26 = (char *)a1 + (unsigned int)a1[6];
    v27 = &v26[24 * (unsigned int)(v25 - 1)];
    Key[0] = *HashValue;
    v28 = (char *)bsearch(Key, v26, v25, 0x18uLL, RtlpCompareActivationContextDataTOCEntryById);
    if ( v28 )
    {
      for ( ; v28 != v26; v28 -= 24 )
      {
        if ( *(_DWORD *)v28 != *HashValue )
          break;
      }
      v29 = *HashValue;
      v24 = v28 + 24;
      Buffer = a3->Buffer;
      if ( *(_DWORD *)v28 == *HashValue )
        v24 = v28;
      v31 = (unsigned __int64)a3->Length >> 1;
      v39 = a3->Buffer;
      do
      {
        if ( !RtlCompareUnicodeStrings(
                Buffer,
                v31,
                (PCWCH)((char *)a1 + *((unsigned int *)v24 + 1)),
                (unsigned __int64)*((unsigned __int16 *)v24 + 4) >> 1,
                CaseInSensitive) )
          break;
        v24 += 24;
        if ( v24 > v27 )
          goto LABEL_30;
        Buffer = v39;
      }
      while ( *(_DWORD *)v24 == v29 );
      if ( v24 > v27 || *(_DWORD *)v24 != v29 )
      {
LABEL_30:
        v24 = 0LL;
        goto LABEL_33;
      }
      goto LABEL_33;
    }
    return -1072365560;
  }
  v34 = a1[5];
  v24 = (char *)a1 + (unsigned int)a1[6];
  if ( !v34 )
    return -1072365560;
  while ( v11 && *(_DWORD *)v24 != *HashValue
       || RtlCompareUnicodeStrings(
            a3->Buffer,
            (unsigned __int64)a3->Length >> 1,
            (PCWCH)((char *)a1 + *((unsigned int *)v24 + 1)),
            (unsigned __int64)*((unsigned __int16 *)v24 + 4) >> 1,
            v7) )
  {
    v24 += 24;
    if ( !--v34 )
      return -1072365560;
  }
LABEL_33:
  if ( !v24 || !*((_DWORD *)v24 + 3) )
    return -1072365560;
  if ( a4 )
  {
    v33 = *a4;
    a4[1] = a1[3];
    *((_QWORD *)a4 + 1) = (char *)a1 + *((unsigned int *)v24 + 3);
    a4[4] = *((_DWORD *)v24 + 4);
    if ( a4 + 17 <= (unsigned int *)((char *)a4 + v33) )
      a4[16] = *((_DWORD *)v24 + 5);
  }
  return 0;
}
