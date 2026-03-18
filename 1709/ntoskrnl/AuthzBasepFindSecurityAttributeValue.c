/*
 * XREFs of AuthzBasepFindSecurityAttributeValue @ 0x14001A630
 * Callers:
 *     AuthzBasepAddSecurityAttributeValues @ 0x14001A47C (AuthzBasepAddSecurityAttributeValues.c)
 *     AuthzBasepDeleteSecurityAttributeValues @ 0x14028D938 (AuthzBasepDeleteSecurityAttributeValues.c)
 *     AuthzBasepCompareSecurityAttribute @ 0x14058B06C (AuthzBasepCompareSecurityAttribute.c)
 * Callees:
 *     AuthzBasepEqualUnicodeString @ 0x140018C50 (AuthzBasepEqualUnicodeString.c)
 *     memcmp @ 0x14015F370 (memcmp.c)
 */

__int64 __fastcall AuthzBasepFindSecurityAttributeValue(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  unsigned __int64 v3; // r14
  __int64 *v4; // r15
  __int64 *v5; // rdi
  char v9; // bl
  _QWORD *v10; // rdi
  const UNICODE_STRING *v12; // rdx
  const UNICODE_STRING *v13; // rdx
  unsigned int v14; // eax
  unsigned int v15; // eax
  UNICODE_STRING v16; // [rsp+20h] [rbp-20h] BYREF
  __int16 v17; // [rsp+30h] [rbp-10h] BYREF
  __int16 v18; // [rsp+32h] [rbp-Eh]
  __int64 v19; // [rsp+38h] [rbp-8h]

  v3 = 0LL;
  v4 = (__int64 *)(a1 + 72);
  v5 = *(__int64 **)(a1 + 72);
  v9 = 0;
  while ( v5 != v4 )
  {
    v3 = (unsigned __int64)v5;
    if ( !a3 )
      goto LABEL_18;
    if ( a3 <= 2u )
      goto LABEL_25;
    switch ( a3 )
    {
      case 3u:
        v12 = (const UNICODE_STRING *)(v5 + 5);
        v16.Length = *(_WORD *)a2;
        v16.MaximumLength = v16.Length;
        v16.Buffer = *(wchar_t **)(a2 + 8);
        goto LABEL_17;
      case 4u:
        v16.Length = *(_WORD *)(a2 + 8);
        v16.MaximumLength = v16.Length;
        v16.Buffer = *(wchar_t **)(a2 + 16);
        v17 = *((_WORD *)v5 + 24);
        v18 = v17;
        v19 = v5[7];
        if ( *(_QWORD *)a2 != v5[5] )
          break;
        v12 = (const UNICODE_STRING *)&v17;
LABEL_17:
        if ( AuthzBasepEqualUnicodeString(&v16, v12) )
          goto LABEL_24;
        break;
      case 5u:
        goto LABEL_48;
      case 6u:
LABEL_25:
        if ( a2 == v5[5] )
          v9 = 1;
        break;
      case 0x10u:
LABEL_48:
        v14 = *(_DWORD *)(a2 + 8);
        if ( v14 == *((_DWORD *)v5 + 12) && !memcmp(*(const void **)a2, (const void *)v5[5], v14) )
LABEL_24:
          v9 = 1;
        break;
    }
LABEL_18:
    v5 = (__int64 *)*v5;
    if ( v9 )
      break;
  }
  v10 = *(_QWORD **)(a1 + 96);
  while ( 2 )
  {
    if ( !v9 && v10 != (_QWORD *)(a1 + 96) )
    {
      v3 = (unsigned __int64)(v10 - 2);
      if ( (v10[2] & 1) != 0 || !a3 )
        goto LABEL_12;
      if ( a3 <= 2u )
        goto LABEL_10;
      if ( a3 == 3 )
      {
        v13 = (const UNICODE_STRING *)(v3 + 40);
        v16.Length = *(_WORD *)a2;
        v16.MaximumLength = v16.Length;
        v16.Buffer = *(wchar_t **)(a2 + 8);
      }
      else
      {
        if ( a3 != 4 )
        {
          switch ( a3 )
          {
            case 5u:
              goto LABEL_49;
            case 6u:
LABEL_10:
              if ( a2 == *(_QWORD *)(v3 + 40) )
                v9 = 1;
              goto LABEL_12;
            case 0x10u:
LABEL_49:
              v15 = *(_DWORD *)(a2 + 8);
              if ( v15 == *(_DWORD *)(v3 + 48) && !memcmp(*(const void **)a2, *(const void **)(v3 + 40), v15) )
                goto LABEL_23;
              break;
          }
          goto LABEL_12;
        }
        v16.Length = *(_WORD *)(a2 + 8);
        v16.MaximumLength = v16.Length;
        v16.Buffer = *(wchar_t **)(a2 + 16);
        v17 = *(_WORD *)(v3 + 48);
        v18 = v17;
        v19 = *(_QWORD *)(v3 + 56);
        if ( *(_QWORD *)a2 != *(_QWORD *)(v3 + 40) )
          goto LABEL_12;
        v13 = (const UNICODE_STRING *)&v17;
      }
      if ( AuthzBasepEqualUnicodeString(&v16, v13) )
LABEL_23:
        v9 = 1;
LABEL_12:
      v10 = (_QWORD *)*v10;
      continue;
    }
    return v3 & -(__int64)(v9 != 0);
  }
}
