/*
 * XREFs of RtlCompareUnicodeStrings @ 0x18003B5B0
 * Callers:
 *     sub_18001094C @ 0x18001094C (sub_18001094C.c)
 *     sub_18003B41C @ 0x18003B41C (sub_18003B41C.c)
 *     RtlCompareUnicodeString @ 0x18003B570 (RtlCompareUnicodeString.c)
 *     sub_18003C49C @ 0x18003C49C (sub_18003C49C.c)
 *     sub_18003FCD8 @ 0x18003FCD8 (sub_18003FCD8.c)
 *     sub_180040424 @ 0x180040424 (sub_180040424.c)
 *     sub_18004BD40 @ 0x18004BD40 (sub_18004BD40.c)
 *     sub_180076B14 @ 0x180076B14 (sub_180076B14.c)
 *     sub_18007B4A8 @ 0x18007B4A8 (sub_18007B4A8.c)
 *     sub_18007C494 @ 0x18007C494 (sub_18007C494.c)
 *     sub_1800812A8 @ 0x1800812A8 (sub_1800812A8.c)
 *     sub_1800D7198 @ 0x1800D7198 (sub_1800D7198.c)
 *     sub_1800D7750 @ 0x1800D7750 (sub_1800D7750.c)
 *     sub_1800F5558 @ 0x1800F5558 (sub_1800F5558.c)
 *     sub_1800F5630 @ 0x1800F5630 (sub_1800F5630.c)
 *     sub_1800FC568 @ 0x1800FC568 (sub_1800FC568.c)
 *     sub_1800FCB2C @ 0x1800FCB2C (sub_1800FCB2C.c)
 *     sub_18010C3D8 @ 0x18010C3D8 (sub_18010C3D8.c)
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
                                     + *(_WORD *)(qword_180159D68
                                                + 2LL
                                                * ((v10 & 0xF)
                                                 + *(unsigned __int16 *)(qword_180159D68
                                                                       + 2LL
                                                                       * (((unsigned __int8)v10 >> 4)
                                                                        + (unsigned int)*(unsigned __int16 *)(qword_180159D68 + 2LL * BYTE1(v10)))))));
            else
              v10 -= 32;
          }
          if ( v11 >= 0x61 )
          {
            if ( v11 > 0x7A )
              v11 = (unsigned __int16)(v11
                                     + *(_WORD *)(qword_180159D68
                                                + 2LL
                                                * ((v11 & 0xF)
                                                 + *(unsigned __int16 *)(qword_180159D68
                                                                       + 2LL
                                                                       * (((unsigned __int8)v11 >> 4)
                                                                        + (unsigned int)*(unsigned __int16 *)(qword_180159D68 + 2LL * BYTE1(v11)))))));
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
