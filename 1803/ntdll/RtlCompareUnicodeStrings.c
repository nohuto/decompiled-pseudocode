/*
 * XREFs of RtlCompareUnicodeStrings @ 0x180022BB0
 * Callers:
 *     sub_180022A1C @ 0x180022A1C (sub_180022A1C.c)
 *     RtlCompareUnicodeString @ 0x180022B70 (RtlCompareUnicodeString.c)
 *     sub_18003B6FC @ 0x18003B6FC (sub_18003B6FC.c)
 *     sub_18003EC30 @ 0x18003EC30 (sub_18003EC30.c)
 *     sub_18003F70C @ 0x18003F70C (sub_18003F70C.c)
 *     sub_18003F7F8 @ 0x18003F7F8 (sub_18003F7F8.c)
 *     sub_1800410D4 @ 0x1800410D4 (sub_1800410D4.c)
 *     sub_1800477EC @ 0x1800477EC (sub_1800477EC.c)
 *     sub_180076488 @ 0x180076488 (sub_180076488.c)
 *     sub_1800770AC @ 0x1800770AC (sub_1800770AC.c)
 *     sub_18007C368 @ 0x18007C368 (sub_18007C368.c)
 *     sub_18008363C @ 0x18008363C (sub_18008363C.c)
 *     sub_1800CCC9C @ 0x1800CCC9C (sub_1800CCC9C.c)
 *     sub_1800CFFE8 @ 0x1800CFFE8 (sub_1800CFFE8.c)
 *     sub_1800F29FC @ 0x1800F29FC (sub_1800F29FC.c)
 *     sub_1800F2AD4 @ 0x1800F2AD4 (sub_1800F2AD4.c)
 *     sub_1800FAB18 @ 0x1800FAB18 (sub_1800FAB18.c)
 *     sub_1800FB0E8 @ 0x1800FB0E8 (sub_1800FB0E8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlCompareUnicodeStrings(
        unsigned __int16 *a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        char a5)
{
  unsigned __int64 v5; // rax
  int v6; // edi
  int v7; // ebx
  unsigned __int16 *v8; // r10
  __int64 v9; // r11
  unsigned int v10; // r8d
  unsigned int v11; // r9d
  __int64 v13; // r11
  int v14; // eax
  int v15; // edx

  v5 = a2;
  v6 = a4;
  if ( a2 > a4 )
    v5 = a4;
  v7 = a2;
  v8 = &a1[v5];
  if ( a5 )
  {
    if ( a1 < v8 )
    {
      v9 = a3 - (_QWORD)a1;
      while ( 1 )
      {
        v10 = *a1;
        v11 = *(unsigned __int16 *)((char *)a1 + v9);
        if ( v10 != v11 )
        {
          if ( v10 >= 0x61 )
          {
            if ( v10 > 0x7A )
              v10 = (unsigned __int16)(v10
                                     + *(_WORD *)(qword_18015B238
                                                + 2LL
                                                * ((v10 & 0xF)
                                                 + *(unsigned __int16 *)(qword_18015B238
                                                                       + 2LL
                                                                       * (((unsigned __int8)v10 >> 4)
                                                                        + (unsigned int)*(unsigned __int16 *)(qword_18015B238 + 2LL * BYTE1(v10)))))));
            else
              v10 -= 32;
          }
          if ( v11 >= 0x61 )
          {
            if ( v11 > 0x7A )
              v11 = (unsigned __int16)(v11
                                     + *(_WORD *)(qword_18015B238
                                                + 2LL
                                                * ((v11 & 0xF)
                                                 + *(unsigned __int16 *)(qword_18015B238
                                                                       + 2LL
                                                                       * (((unsigned __int8)v11 >> 4)
                                                                        + (unsigned int)*(unsigned __int16 *)(qword_18015B238 + 2LL * BYTE1(v11)))))));
            else
              v11 -= 32;
          }
          if ( v10 != v11 )
            break;
        }
        if ( ++a1 >= v8 )
          return (unsigned int)(a2 - v6);
      }
      return v10 - v11;
    }
    return (unsigned int)(a2 - v6);
  }
  if ( a1 >= v8 )
    return (unsigned int)(a2 - v6);
  v13 = a3 - (_QWORD)a1;
  while ( 1 )
  {
    v14 = *a1;
    v15 = *(unsigned __int16 *)((char *)a1 + v13);
    if ( v14 != v15 )
      break;
    if ( ++a1 >= v8 )
      return (unsigned int)(v7 - a4);
  }
  return (unsigned int)(v14 - v15);
}
