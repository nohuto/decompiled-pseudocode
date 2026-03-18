/*
 * XREFs of RtlCompareUnicodeStrings @ 0x14056CEE0
 * Callers:
 *     ApiSetpSearchForApiSet @ 0x14015139C (ApiSetpSearchForApiSet.c)
 *     ApiSetpSearchForApiSetHost @ 0x14028AE68 (ApiSetpSearchForApiSetHost.c)
 *     AsiSortValueList @ 0x14028B368 (AsiSortValueList.c)
 *     CmQueryValueKey @ 0x1404AB970 (CmQueryValueKey.c)
 *     PnpCheckDeviceIdsChanged @ 0x14056CD1C (PnpCheckDeviceIdsChanged.c)
 *     EtwpExpandFileName @ 0x1405DFEEC (EtwpExpandFileName.c)
 *     PiDevCfgResolveVariableExpression @ 0x1406C78A0 (PiDevCfgResolveVariableExpression.c)
 *     PnpCompareMultiSz @ 0x1406D1A4C (PnpCompareMultiSz.c)
 *     _RtlpMuiRegInitLIPLanguage @ 0x14078B9BC (_RtlpMuiRegInitLIPLanguage.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x14078BC60 (_RtlpMuiRegPopulateBaseLanguages.c)
 * Callees:
 *     <none>
 */

LONG __stdcall RtlCompareUnicodeStrings(
        PCWCH String1,
        SIZE_T String1Length,
        PCWCH String2,
        SIZE_T String2Length,
        BOOLEAN CaseInSensitive)
{
  SIZE_T v5; // rax
  int v6; // ebx
  const WCHAR *v7; // r10
  signed __int64 v9; // r11
  unsigned int v10; // esi
  unsigned int v11; // ebp
  signed __int64 v12; // r11
  int v13; // eax
  int v14; // edx

  v5 = String1Length;
  if ( String1Length > String2Length )
    v5 = String2Length;
  v6 = String1Length;
  v7 = &String1[v5];
  if ( CaseInSensitive )
  {
    if ( String1 >= v7 )
      return v6 - String2Length;
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
                                   + *(_WORD *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * (v10 & 0xF)
                                                                                             + 2
                                                                                             * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * ((unsigned __int8)v10 >> 4) + 2 * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * BYTE1(v10)]]]);
          else
            v10 -= 32;
        }
        if ( v11 >= 0x61 )
        {
          if ( v11 > 0x7A )
            v11 = (unsigned __int16)(v11
                                   + *(_WORD *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * (v11 & 0xF)
                                                                                             + 2
                                                                                             * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * ((unsigned __int8)v11 >> 4) + 2 * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * BYTE1(v11)]]]);
          else
            v11 -= 32;
        }
        if ( v10 != v11 )
          break;
      }
      if ( ++String1 >= v7 )
        return v6 - String2Length;
    }
    return v10 - v11;
  }
  else
  {
    if ( String1 >= v7 )
      return v6 - String2Length;
    v12 = (char *)String2 - (char *)String1;
    while ( 1 )
    {
      v13 = *String1;
      v14 = *(PCWCH)((char *)String1 + v12);
      if ( v13 != v14 )
        break;
      if ( ++String1 >= v7 )
        return v6 - String2Length;
    }
    return v13 - v14;
  }
}
