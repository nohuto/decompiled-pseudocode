/*
 * XREFs of RtlUnicodeStringToInteger @ 0x140428AD0
 * Callers:
 *     RtlpMuiRegAddAlternateCodePage @ 0x1401570CC (RtlpMuiRegAddAlternateCodePage.c)
 *     RtlpMuiRegCreateKernelRegistryInfo @ 0x1401572B0 (RtlpMuiRegCreateKernelRegistryInfo.c)
 *     _PnpParseIndirectResourceString @ 0x140428980 (_PnpParseIndirectResourceString.c)
 *     PspReadIFEOPerfOptions @ 0x1404495D0 (PspReadIFEOPerfOptions.c)
 *     RtlQueryImageFileKeyOption @ 0x1404497B8 (RtlQueryImageFileKeyOption.c)
 *     RtlGetIntegerAtom @ 0x1404FA690 (RtlGetIntegerAtom.c)
 *     ExpSetCurrentUserUILanguage @ 0x140587598 (ExpSetCurrentUserUILanguage.c)
 *     ExpGetCurrentUserUILanguage @ 0x140587B34 (ExpGetCurrentUserUILanguage.c)
 *     ExpGetUILanguagePolicy @ 0x140587C64 (ExpGetUILanguagePolicy.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x14059365C (_PnpGetGenericStorePropertyKeys.c)
 *     PiDcInitUpdateProperties @ 0x14059DB24 (PiDcInitUpdateProperties.c)
 *     PspIsDfssEnabled @ 0x1405A5620 (PspIsDfssEnabled.c)
 *     WdipSemLoadNextScenario @ 0x1405ADF68 (WdipSemLoadNextScenario.c)
 *     PopDetectSimulatedHeteroProcessors @ 0x1405C0A84 (PopDetectSimulatedHeteroProcessors.c)
 *     CmpGetAcpiProfileInformation @ 0x1405C9074 (CmpGetAcpiProfileInformation.c)
 *     WdipSemLoadNextEndEvent @ 0x1405C9FD8 (WdipSemLoadNextEndEvent.c)
 *     PiCMDeleteDeviceKey @ 0x1406A4B08 (PiCMDeleteDeviceKey.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlUnicodeStringToInteger(PCUNICODE_STRING String, ULONG Base, PULONG Value)
{
  ULONG v5; // r9d
  NTSTATUS v6; // esi
  unsigned __int16 Length; // ax
  wchar_t *Buffer; // r10
  int v9; // r8d
  unsigned __int16 v10; // di
  unsigned __int16 v11; // ax
  wchar_t *v12; // rcx
  int v13; // edx
  int v14; // r11d
  ULONG v15; // edx
  __int16 v17; // ax

  v5 = 0;
  v6 = 0;
  Length = String->Length;
  if ( !String->Length || (Length & 1) != 0 )
    goto LABEL_38;
  Buffer = String->Buffer;
  v9 = Length >> 1;
  v10 = 0;
  if ( v9 )
  {
    while ( 1 )
    {
      --v9;
      v10 = *Buffer++;
      if ( v10 > 0x20u )
        break;
      if ( !v9 )
      {
        v10 = 0;
        break;
      }
    }
  }
  else
  {
    v9 = -1;
  }
  v11 = v10;
  if ( ((v10 - 43) & 0xFFFD) == 0 )
  {
    if ( v9 )
    {
      --v9;
      v11 = *Buffer++;
    }
    else
    {
      v11 = 0;
    }
  }
  v12 = Buffer;
  v13 = v9;
  if ( !Base )
  {
    Base = 10;
    v14 = 0;
    if ( v11 == 48 )
    {
      if ( !v9 )
        goto LABEL_40;
      --v9;
      v17 = *Buffer++;
      switch ( v17 )
      {
        case 'x':
          Base = 16;
          v14 = 4;
          break;
        case 'o':
          Base = 8;
          v14 = 3;
          break;
        case 'b':
          Base = 2;
          v14 = 1;
          break;
        default:
          v9 = v13;
          Buffer = v12;
          break;
      }
      if ( v9 )
      {
        --v9;
        v11 = *Buffer++;
      }
      else
      {
LABEL_40:
        v11 = 0;
      }
    }
    goto LABEL_9;
  }
  if ( Base != 16 )
  {
    switch ( Base )
    {
      case 2u:
        v14 = 1;
        goto LABEL_9;
      case 8u:
        v14 = 3;
        goto LABEL_9;
      case 0xAu:
        v14 = 0;
        goto LABEL_9;
    }
LABEL_38:
    v6 = -1073741811;
    goto LABEL_19;
  }
  v14 = 4;
LABEL_9:
  while ( v11 )
  {
    if ( (unsigned __int16)(v11 - 48) > 9u )
    {
      if ( (unsigned __int16)(v11 - 65) <= 5u )
      {
        v15 = v11 - 55;
      }
      else
      {
        if ( (unsigned __int16)(v11 - 97) > 5u )
          break;
        v15 = v11 - 87;
      }
    }
    else
    {
      v15 = v11 - 48;
    }
    if ( v15 >= Base )
      break;
    v5 = v14 ? v15 | (v5 << v14) : v15 + Base * v5;
    if ( !v9 )
      break;
    --v9;
    v11 = *Buffer++;
  }
  if ( v10 == 45 )
    v5 = -v5;
LABEL_19:
  *Value = v5;
  return v6;
}
