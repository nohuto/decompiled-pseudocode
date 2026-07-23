/*
 * XREFs of sub_180044C70 @ 0x180044C70
 * Callers:
 *     sub_180037618 @ 0x180037618 (sub_180037618.c)
 *     sub_180045B5C @ 0x180045B5C (sub_180045B5C.c)
 *     sub_180046AF0 @ 0x180046AF0 (sub_180046AF0.c)
 *     sub_180046C08 @ 0x180046C08 (sub_180046C08.c)
 *     RtlGetUserPreferredUILanguages @ 0x18006CBF0 (RtlGetUserPreferredUILanguages.c)
 *     RtlGetSystemPreferredUILanguages @ 0x18006D510 (RtlGetSystemPreferredUILanguages.c)
 *     sub_18008EC68 @ 0x18008EC68 (sub_18008EC68.c)
 *     RtlGetUILanguageInfo @ 0x1800EBC90 (RtlGetUILanguageInfo.c)
 *     sub_1800EC5DC @ 0x1800EC5DC (sub_1800EC5DC.c)
 *     RtlpCleanupRegistryKeys @ 0x1800EC730 (RtlpCleanupRegistryKeys.c)
 *     RtlpSetUserPreferredUILanguages @ 0x1800EDFA0 (RtlpSetUserPreferredUILanguages.c)
 *     sub_1800F5068 @ 0x1800F5068 (sub_1800F5068.c)
 *     sub_1800FD750 @ 0x1800FD750 (sub_1800FD750.c)
 * Callees:
 *     sub_180045B5C @ 0x180045B5C (sub_180045B5C.c)
 *     sub_180045EFC @ 0x180045EFC (sub_180045EFC.c)
 *     RtlCultureNameToLCID @ 0x180045FF0 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x1800461D0 (RtlInitUnicodeString.c)
 */

__int64 __fastcall sub_180044C70(__int64 a1, const WCHAR *a2, char a3, _WORD *a4)
{
  unsigned int v8; // ebx
  char v9; // r15
  __int64 v10; // rbp
  __int16 v11; // r9
  int v13; // ecx
  __int64 v14; // r10
  __int64 v15; // rdx
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-38h] BYREF
  DWORD Lcid; // [rsp+60h] [rbp+8h] BYREF

  v8 = -1073741772;
  v9 = 0;
  if ( !a1 || !a2 )
    return 3221225485LL;
  v10 = *(_QWORD *)(a1 + 24);
  if ( *a2 )
  {
    v11 = sub_180045EFC(*(_QWORD *)(a1 + 32), a2, 0LL, &Lcid);
    if ( v11 >= 0 )
    {
      v13 = 0;
      if ( *(_WORD *)(v10 + 6) )
      {
        v14 = *(_QWORD *)(v10 + 16);
        do
        {
          v15 = 28LL * v13;
          if ( *(_WORD *)(v15 + v14 + 6) == v11 )
          {
            if ( (*(_WORD *)(v15 + v14) & 0x1020) == 0x20 )
            {
              if ( a4 )
              {
                *a4 = v13;
                return 0LL;
              }
            }
            else if ( (*(_WORD *)(v15 + v14) & 0x1000) != 0 )
            {
              v9 = 1;
            }
          }
          ++v13;
        }
        while ( v13 < *(unsigned __int16 *)(v10 + 6) );
      }
    }
  }
  if ( a3 )
  {
    RtlInitUnicodeString(&DestinationString, a2);
    if ( RtlCultureNameToLCID(&DestinationString, &Lcid) )
    {
      if ( Lcid != 4096 )
        v8 = sub_180045B5C(a1, (unsigned __int16)Lcid, 0LL, a4);
    }
  }
  if ( v9 && v8 == -1073741772 )
    return 3221225659LL;
  else
    return v8;
}
