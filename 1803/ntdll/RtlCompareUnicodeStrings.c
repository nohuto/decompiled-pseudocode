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

LONG __cdecl RtlCompareUnicodeStrings(
        PCWCH String1,
        SIZE_T String1Length,
        PCWCH String2,
        SIZE_T String2Length,
        BOOLEAN CaseInSensitive)
{
  SIZE_T v5; // rax
  int v6; // edi
  int v7; // ebx
  const WCHAR *v8; // r10
  signed __int64 v9; // r11
  unsigned int v10; // r8d
  unsigned int v11; // r9d
  signed __int64 v13; // r11
  int v14; // eax
  int v15; // edx

  v5 = String1Length;
  v6 = String2Length;
  if ( String1Length > String2Length )
    v5 = String2Length;
  v7 = String1Length;
  v8 = &String1[v5];
  if ( CaseInSensitive )
  {
    if ( String1 < v8 )
    {
      v9 = (char *)String2 - (char *)String1;
      while ( 1 )
      {
        v10 = *String1;
        v11 = *(PCWCH)((char *)String1 + v9);
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
        if ( ++String1 >= v8 )
          return String1Length - v6;
      }
      return v10 - v11;
    }
    return String1Length - v6;
  }
  if ( String1 >= v8 )
    return String1Length - v6;
  v13 = (char *)String2 - (char *)String1;
  while ( 1 )
  {
    v14 = *String1;
    v15 = *(PCWCH)((char *)String1 + v13);
    if ( v14 != v15 )
      break;
    if ( ++String1 >= v8 )
      return v7 - String2Length;
  }
  return v14 - v15;
}
