/*
 * XREFs of ndisAllocateConfigurationString @ 0x1C00E3B00
 * Callers:
 *     NdisOpenConfigurationEx @ 0x1C00B3720 (NdisOpenConfigurationEx.c)
 * Callees:
 *     memset @ 0x1C0025280 (memset.c)
 *     WPP_SF_qqq @ 0x1C00395C4 (WPP_SF_qqq.c)
 *     ?RtlUShortAdd@@YAJGGPEAG@Z @ 0x1C00500D8 (-RtlUShortAdd@@YAJGGPEAG@Z.c)
 */

__int64 __fastcall ndisAllocateConfigurationString(
        PCUNICODE_STRING SourceString,
        PCUNICODE_STRING Source,
        PCUNICODE_STRING a3,
        PUNICODE_STRING Destination)
{
  unsigned __int16 *p_MaximumLength; // rsi
  unsigned int v9; // ebx
  unsigned __int16 *v10; // r8
  int v11; // r9d
  unsigned __int16 *v12; // r8
  int v13; // eax
  int v14; // r9d
  unsigned __int16 v15; // ax
  wchar_t *Buffer; // rcx

  if ( (unsigned __int8)byte_1C009874F >= 4u )
    WPP_SF_qqq(0x1Du, &WPP_fb5e2801bcb8364427405c45392b258b_Traceguids, SourceString, Source, a3);
  p_MaximumLength = &Destination->MaximumLength;
  v9 = 0;
  v11 = RtlUShortAdd(SourceString->Length, ndisParameterStr.Length, &Destination->MaximumLength);
  if ( Source )
  {
    RtlUShortAdd(*p_MaximumLength, a3->Length, v10);
    v13 = RtlUShortAdd(*p_MaximumLength, Source->Length, v12);
    v11 = v13 | v14;
  }
  *p_MaximumLength += 2;
  v15 = *p_MaximumLength;
  Destination->Buffer = 0LL;
  Destination->Length = 0;
  if ( !v11 )
    Destination->Buffer = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, v15, 0x2020444Eu);
  Buffer = Destination->Buffer;
  if ( Buffer )
  {
    memset(Buffer, 0, *p_MaximumLength);
    RtlCopyUnicodeString(Destination, SourceString);
    RtlAppendUnicodeStringToString(Destination, &ndisParameterStr);
    if ( Source )
    {
      RtlAppendUnicodeStringToString(Destination, a3);
      RtlAppendUnicodeStringToString(Destination, Source);
    }
  }
  else
  {
    v9 = -1073741670;
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qqq(0x1Eu, &WPP_fb5e2801bcb8364427405c45392b258b_Traceguids, SourceString, Source, a3);
  return v9;
}
