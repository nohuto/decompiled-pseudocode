/*
 * XREFs of AuthzBasepFindSecurityAttributeValue @ 0x14006C17C
 * Callers:
 *     AuthzBasepAddSecurityAttributeValues @ 0x14006BFC8 (AuthzBasepAddSecurityAttributeValues.c)
 *     AuthzBasepDeleteSecurityAttributeValues @ 0x1402C35AC (AuthzBasepDeleteSecurityAttributeValues.c)
 *     AuthzBasepCompareSecurityAttribute @ 0x140576670 (AuthzBasepCompareSecurityAttribute.c)
 * Callees:
 *     AuthzBasepEqualUnicodeString @ 0x14006C420 (AuthzBasepEqualUnicodeString.c)
 *     memcmp @ 0x140189130 (memcmp.c)
 */

__int64 __fastcall AuthzBasepFindSecurityAttributeValue(__int64 a1, __int16 *a2, unsigned __int16 a3)
{
  unsigned __int64 v3; // r14
  __int64 *v4; // r15
  __int64 *v5; // rdi
  char v9; // bl
  _QWORD *v10; // rdi
  __int16 *v12; // rdx
  __int16 *v13; // rdx
  unsigned int v14; // eax
  unsigned int v15; // eax
  __int16 v16; // [rsp+20h] [rbp-20h] BYREF
  __int16 v17; // [rsp+22h] [rbp-1Eh]
  __int64 v18; // [rsp+28h] [rbp-18h]
  __int16 v19; // [rsp+30h] [rbp-10h] BYREF
  __int16 v20; // [rsp+32h] [rbp-Eh]
  __int64 v21; // [rsp+38h] [rbp-8h]

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
        v12 = (__int16 *)(v5 + 5);
        v16 = *a2;
        v17 = v16;
        v18 = *((_QWORD *)a2 + 1);
        goto LABEL_17;
      case 4u:
        v16 = a2[4];
        v17 = v16;
        v18 = *((_QWORD *)a2 + 2);
        v19 = *((_WORD *)v5 + 24);
        v20 = v19;
        v21 = v5[7];
        if ( *(_QWORD *)a2 != v5[5] )
          break;
        v12 = &v19;
LABEL_17:
        if ( (unsigned __int8)AuthzBasepEqualUnicodeString(&v16, v12) )
          goto LABEL_24;
        break;
      case 5u:
        goto LABEL_48;
      case 6u:
LABEL_25:
        if ( a2 == (__int16 *)v5[5] )
          v9 = 1;
        break;
      case 0x10u:
LABEL_48:
        v14 = *((_DWORD *)a2 + 2);
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
        v13 = (__int16 *)(v3 + 40);
        v16 = *a2;
        v17 = v16;
        v18 = *((_QWORD *)a2 + 1);
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
              if ( a2 == *(__int16 **)(v3 + 40) )
                v9 = 1;
              goto LABEL_12;
            case 0x10u:
LABEL_49:
              v15 = *((_DWORD *)a2 + 2);
              if ( v15 == *(_DWORD *)(v3 + 48) && !memcmp(*(const void **)a2, *(const void **)(v3 + 40), v15) )
                goto LABEL_23;
              break;
          }
          goto LABEL_12;
        }
        v16 = a2[4];
        v17 = v16;
        v18 = *((_QWORD *)a2 + 2);
        v19 = *(_WORD *)(v3 + 48);
        v20 = v19;
        v21 = *(_QWORD *)(v3 + 56);
        if ( *(_QWORD *)a2 != *(_QWORD *)(v3 + 40) )
          goto LABEL_12;
        v13 = &v19;
      }
      if ( (unsigned __int8)AuthzBasepEqualUnicodeString(&v16, v13) )
LABEL_23:
        v9 = 1;
LABEL_12:
      v10 = (_QWORD *)*v10;
      continue;
    }
    return v3 & -(__int64)(v9 != 0);
  }
}
