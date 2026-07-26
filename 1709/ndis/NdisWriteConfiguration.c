/*
 * XREFs of NdisWriteConfiguration @ 0x1C00B0A40
 * Callers:
 *     ndisCheckIfTypeMismatch @ 0x1C005ED8C (ndisCheckIfTypeMismatch.c)
 *     ndisOidPostIovNicSwitchParameters @ 0x1C006CCF0 (ndisOidPostIovNicSwitchParameters.c)
 *     ?ndisIfSetFilterIfInfoInRegistry@@YAHPEAU_NDIS_FILTER_BLOCK@@U_GUID@@@Z @ 0x1C00B0BA8 (-ndisIfSetFilterIfInfoInRegistry@@YAHPEAU_NDIS_FILTER_BLOCK@@U_GUID@@@Z.c)
 *     ndisUpdateHDSplitKeyword @ 0x1C00DE0A8 (ndisUpdateHDSplitKeyword.c)
 *     ndisWritePMAdminConfigState @ 0x1C00E22BC (ndisWritePMAdminConfigState.c)
 *     ndisWriteConfigurationIfPresent @ 0x1C00E3C4C (ndisWriteConfigurationIfPresent.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00EC100 (ndisWmiChangeSingleInstance.c)
 *     ndisNDKHandleWmiChangeRequest @ 0x1C00EDF60 (ndisNDKHandleWmiChangeRequest.c)
 *     ndisMInitializeAdapter @ 0x1C00FF8D8 (ndisMInitializeAdapter.c)
 * Callees:
 *     memmove @ 0x1C0024F40 (memmove.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 */

void __stdcall NdisWriteConfiguration(
        PNDIS_STATUS Status,
        NDIS_HANDLE ConfigurationHandle,
        PNDIS_STRING Keyword,
        PNDIS_CONFIGURATION_PARAMETER ParameterValue)
{
  char v7; // r13
  _NDIS_PARAMETER_TYPE ParameterType; // eax
  wchar_t *Buffer; // r14
  ULONG v11; // ebp
  _NDIS_CONFIGURATION_PARAMETER::<unnamed_type_ParameterData> *ValueData; // r15
  ULONG ValueLength; // ebx
  unsigned __int16 Length; // cx
  wchar_t *PoolWithTag; // rax
  const WCHAR *v16; // rdx
  ULONG v17; // ecx

  v7 = 0;
  if ( (unsigned __int8)byte_1C009874F >= 4u )
    WPP_SF_q(0x15u, &WPP_fb5e2801bcb8364427405c45392b258b_Traceguids, (__int64)ConfigurationHandle);
  *Status = 0;
  ParameterType = ParameterValue->ParameterType;
  Buffer = Keyword->Buffer;
  if ( ParameterValue->ParameterType < NdisParameterInteger )
    goto LABEL_25;
  if ( ParameterType <= NdisParameterHexInteger )
  {
    ValueData = &ParameterValue->ParameterData;
    ValueLength = 4;
    v11 = 4;
  }
  else if ( ParameterType == NdisParameterString )
  {
    ValueData = (_NDIS_CONFIGURATION_PARAMETER::<unnamed_type_ParameterData> *)ParameterValue->ParameterData.StringData.Buffer;
    v11 = 1;
    ValueLength = ParameterValue->ParameterData.StringData.Length + 2;
  }
  else
  {
    v11 = 3;
    if ( ParameterType != NdisParameterMultiString )
    {
      if ( ParameterType == NdisParameterBinary )
      {
        ValueData = (_NDIS_CONFIGURATION_PARAMETER::<unnamed_type_ParameterData> *)ParameterValue->ParameterData.StringData.Buffer;
        ValueLength = ParameterValue->ParameterData.StringData.Length;
        goto LABEL_9;
      }
LABEL_25:
      *Status = -1073741637;
      goto LABEL_18;
    }
    ValueData = (_NDIS_CONFIGURATION_PARAMETER::<unnamed_type_ParameterData> *)ParameterValue->ParameterData.StringData.Buffer;
    v11 = 7;
    ValueLength = ParameterValue->ParameterData.StringData.Length;
  }
LABEL_9:
  Length = Keyword->Length;
  if ( Keyword->Length < 2u || Buffer[((unsigned __int64)Length >> 1) - 1] )
  {
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, Length + 2LL, 0x2020444Eu);
    Buffer = PoolWithTag;
    if ( !PoolWithTag )
    {
      *Status = -1073741670;
      goto LABEL_18;
    }
    v7 = 1;
    memmove(PoolWithTag, Keyword->Buffer, Keyword->Length);
    Buffer[(unsigned __int64)Keyword->Length >> 1] = 0;
  }
  if ( (*(_DWORD *)(*((_QWORD *)ConfigurationHandle + 2) + 16LL) & 2) == 0 || *((_QWORD *)ConfigurationHandle + 4) )
  {
    v16 = (const WCHAR *)*((_QWORD *)ConfigurationHandle + 4);
    v17 = 0x40000000;
  }
  else
  {
    v16 = (const WCHAR *)((char *)ConfigurationHandle + 176);
    v17 = 1;
  }
  *Status = RtlWriteRegistryValue(v17, v16, (PCWSTR)Buffer, v11, ValueData, ValueLength);
  if ( v7 )
    ExFreePoolWithTag(Buffer, 0);
LABEL_18:
  if ( (unsigned __int8)byte_1C009874F >= 4u )
    WPP_SF_q(0x16u, &WPP_fb5e2801bcb8364427405c45392b258b_Traceguids, (__int64)ConfigurationHandle);
}
