/*
 * XREFs of AuthzBasepFindSecurityAttributeValue @ 0x140065AF0
 * Callers:
 *     AuthzBasepAddSecurityAttributeValues @ 0x14006593C (AuthzBasepAddSecurityAttributeValues.c)
 *     AuthzBasepDeleteSecurityAttributeValues @ 0x140263604 (AuthzBasepDeleteSecurityAttributeValues.c)
 *     AuthzBasepCompareSecurityAttribute @ 0x14041F9D0 (AuthzBasepCompareSecurityAttribute.c)
 * Callees:
 *     AuthzBasepEqualUnicodeString @ 0x140089584 (AuthzBasepEqualUnicodeString.c)
 *     memcmp @ 0x14016A960 (memcmp.c)
 */

__int64 __fastcall AuthzBasepFindSecurityAttributeValue(__int64 a1, __int16 *a2, unsigned __int16 a3)
{
  unsigned __int64 v3; // r14
  __int64 *v4; // r15
  __int64 *v5; // rdi
  bool v9; // bl
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
    if ( a3 )
    {
      if ( a3 <= 2u )
        goto LABEL_18;
      switch ( a3 )
      {
        case 3u:
          v13 = (__int16 *)(v5 + 5);
          v16 = *a2;
          v17 = v16;
          v18 = *((_QWORD *)a2 + 1);
          break;
        case 4u:
          v16 = a2[4];
          v17 = v16;
          v18 = *((_QWORD *)a2 + 2);
          v19 = *((_WORD *)v5 + 24);
          v20 = v19;
          v21 = v5[7];
          if ( *(_QWORD *)a2 != v5[5] )
            goto LABEL_19;
          v13 = &v19;
          break;
        case 5u:
          goto LABEL_29;
        case 6u:
LABEL_18:
          v9 = a2 == (__int16 *)v5[5];
          goto LABEL_19;
        case 0x10u:
LABEL_29:
          v14 = *((_DWORD *)a2 + 2);
          if ( v14 != *((_DWORD *)v5 + 12) || memcmp(*(const void **)a2, (const void *)v5[5], v14) )
            goto LABEL_19;
LABEL_24:
          v9 = 1;
          goto LABEL_19;
        default:
          goto LABEL_19;
      }
      if ( (unsigned __int8)AuthzBasepEqualUnicodeString(&v16, v13) )
        goto LABEL_24;
    }
LABEL_19:
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
        goto LABEL_11;
      if ( a3 <= 2u )
        goto LABEL_10;
      if ( a3 == 3 )
      {
        v12 = (__int16 *)(v3 + 40);
        v16 = *a2;
        v17 = v16;
        v18 = *((_QWORD *)a2 + 1);
      }
      else
      {
        if ( a3 != 4 )
        {
          if ( a3 != 5 )
          {
            if ( a3 == 6 )
            {
LABEL_10:
              v9 = a2 == *(__int16 **)(v3 + 40);
LABEL_11:
              v10 = (_QWORD *)*v10;
              continue;
            }
            if ( a3 != 16 )
              goto LABEL_11;
          }
          v15 = *((_DWORD *)a2 + 2);
          if ( v15 != *(_DWORD *)(v3 + 48) || memcmp(*(const void **)a2, *(const void **)(v3 + 40), v15) )
            goto LABEL_11;
LABEL_15:
          v9 = 1;
          goto LABEL_11;
        }
        v16 = a2[4];
        v17 = v16;
        v18 = *((_QWORD *)a2 + 2);
        v19 = *(_WORD *)(v3 + 48);
        v20 = v19;
        v21 = *(_QWORD *)(v3 + 56);
        if ( *(_QWORD *)a2 != *(_QWORD *)(v3 + 40) )
          goto LABEL_11;
        v12 = &v19;
      }
      if ( !(unsigned __int8)AuthzBasepEqualUnicodeString(&v16, v12) )
        goto LABEL_11;
      goto LABEL_15;
    }
    return v3 & -(__int64)v9;
  }
}
