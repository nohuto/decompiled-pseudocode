/*
 * XREFs of ndisAllocateConfigurationString @ 0x1C00AF2CC
 * Callers:
 *     NdisOpenConfigurationEx @ 0x1C00AF420 (NdisOpenConfigurationEx.c)
 * Callees:
 *     memset @ 0x1C0028B80 (memset.c)
 *     WPP_SF_qqq @ 0x1C003CB3C (WPP_SF_qqq.c)
 */

__int64 __fastcall ndisAllocateConfigurationString(
        PCUNICODE_STRING SourceString,
        PCUNICODE_STRING Source,
        PCUNICODE_STRING a3,
        PUNICODE_STRING Destination)
{
  unsigned __int16 Length; // ax
  unsigned int v9; // edi
  int v10; // edx
  int v11; // ecx
  unsigned __int16 v12; // r8
  int v13; // eax
  int v14; // ecx
  unsigned __int16 MaximumLength; // ax
  unsigned __int16 v16; // r8
  unsigned __int16 v17; // ax
  wchar_t *Buffer; // rcx

  if ( (unsigned __int8)byte_1C009260F >= 4u )
    WPP_SF_qqq(0x1Du, &WPP_99a60aa0491337cae2647d317c30bcf5_Traceguids, SourceString, Source, a3);
  Length = SourceString->Length;
  v9 = 0;
  v10 = -1073741675;
  if ( (unsigned __int16)(Length + ndisParameterStr.Length) < Length )
  {
    Destination->MaximumLength = -1;
    v11 = -1073741675;
  }
  else
  {
    Destination->MaximumLength = Length + ndisParameterStr.Length;
    v11 = 0;
  }
  if ( Source )
  {
    v12 = Destination->MaximumLength + a3->Length;
    if ( v12 < Destination->MaximumLength )
    {
      Destination->MaximumLength = -1;
      v13 = -1073741675;
    }
    else
    {
      Destination->MaximumLength = v12;
      v13 = 0;
    }
    v14 = v11 | v13;
    MaximumLength = Destination->MaximumLength;
    v16 = MaximumLength + Source->Length;
    if ( v16 < MaximumLength )
    {
      Destination->MaximumLength = -1;
    }
    else
    {
      Destination->MaximumLength = v16;
      v10 = 0;
    }
    v11 = v10 | v14;
  }
  Destination->MaximumLength += 2;
  v17 = Destination->MaximumLength;
  Destination->Buffer = 0LL;
  Destination->Length = 0;
  if ( !v11 )
    Destination->Buffer = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, v17, 0x2020444Eu);
  Buffer = Destination->Buffer;
  if ( Buffer )
  {
    memset(Buffer, 0, Destination->MaximumLength);
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
    WPP_SF_qqq(0x1Eu, &WPP_99a60aa0491337cae2647d317c30bcf5_Traceguids, SourceString, Source, a3);
  return v9;
}
