/*
 * XREFs of RtlCompareUnicodeStrings @ 0x140557CF0
 * Callers:
 *     ApiSetpSearchForApiSet @ 0x14016A36C (ApiSetpSearchForApiSet.c)
 *     ApiSetpSearchForApiSetHost @ 0x1402C0560 (ApiSetpSearchForApiSetHost.c)
 *     AsiSortValueList @ 0x1402C0A60 (AsiSortValueList.c)
 *     CmQueryValueKey @ 0x1405A0B80 (CmQueryValueKey.c)
 *     EtwpExpandFileName @ 0x1405E82A4 (EtwpExpandFileName.c)
 *     PnpCheckDeviceIdsChanged @ 0x140602BF8 (PnpCheckDeviceIdsChanged.c)
 *     PiDevCfgResolveVariableExpression @ 0x14072E820 (PiDevCfgResolveVariableExpression.c)
 *     PnpCompareMultiSz @ 0x14073949C (PnpCompareMultiSz.c)
 *     _RtlpMuiRegInitLIPLanguage @ 0x1407F7E7C (_RtlpMuiRegInitLIPLanguage.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x1407F8120 (_RtlpMuiRegPopulateBaseLanguages.c)
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
  int v6; // r11d
  const WCHAR *v7; // r10
  signed __int64 v9; // rbx
  unsigned int v10; // esi
  unsigned int v11; // ebp
  signed __int64 v12; // rbx
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
