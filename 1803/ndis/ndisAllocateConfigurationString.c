/*
 * XREFs of ndisAllocateConfigurationString @ 0x1C00E5260
 * Callers:
 *     NdisOpenConfigurationEx @ 0x1C00B9EE0 (NdisOpenConfigurationEx.c)
 * Callees:
 *     memset @ 0x1C0026180 (memset.c)
 *     WPP_SF_qqq @ 0x1C003A95C (WPP_SF_qqq.c)
 *     ?RtlUShortAdd@@YAJGGPEAG@Z @ 0x1C0050A28 (-RtlUShortAdd@@YAJGGPEAG@Z.c)
 */

__int64 __fastcall ndisAllocateConfigurationString(
        PCUNICODE_STRING SourceString,
        PCUNICODE_STRING Source,
        PCUNICODE_STRING a3,
        PUNICODE_STRING Destination)
{
  unsigned __int16 *p_MaximumLength; // r14
  unsigned int v9; // ebx
  unsigned __int16 *v10; // r8
  int v11; // r9d
  unsigned __int16 *v12; // r8
  int v13; // eax
  int v14; // r9d
  unsigned __int16 v15; // ax
  PVOID PoolWithTag; // rax

  if ( (unsigned __int8)byte_1C009960F >= 4u )
    WPP_SF_qqq(0x1Du, &WPP_7638764ccf46397224acdca5d7787036_Traceguids, SourceString, Source, a3);
  p_MaximumLength = &Destination->MaximumLength;
  v9 = 0;
  v11 = RtlUShortAdd(SourceString->Length, ndisParameterStr.Length, &Destination->MaximumLength);
  if ( Source )
  {
    RtlUShortAdd(*p_MaximumLength, a3->Length, v10);
    v13 = RtlUShortAdd(*p_MaximumLength, Source->Length, v12);
    v11 = v13 | v14;
  }
  v15 = *p_MaximumLength + 2;
  Destination->Buffer = 0LL;
  *p_MaximumLength = v15;
  Destination->Length = 0;
  if ( v11
    || (PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v15, 0x2020444Eu),
        (Destination->Buffer = (wchar_t *)PoolWithTag) == 0LL) )
  {
    v9 = -1073741670;
  }
  else
  {
    memset(PoolWithTag, 0, *p_MaximumLength);
    RtlCopyUnicodeString(Destination, SourceString);
    RtlAppendUnicodeStringToString(Destination, &ndisParameterStr);
    if ( Source )
    {
      RtlAppendUnicodeStringToString(Destination, a3);
      RtlAppendUnicodeStringToString(Destination, Source);
    }
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qqq(0x1Eu, &WPP_7638764ccf46397224acdca5d7787036_Traceguids, SourceString, Source, a3);
  return v9;
}
