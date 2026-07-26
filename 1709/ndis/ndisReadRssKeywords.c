/*
 * XREFs of ndisReadRssKeywords @ 0x1C00B2810
 * Callers:
 *     ndisAddDevice @ 0x1C0103FA8 (ndisAddDevice.c)
 * Callees:
 *     ?ndisCompareProcNum@@YAHU_PROCESSOR_NUMBER@@0@Z @ 0x1C00042F8 (-ndisCompareProcNum@@YAHU_PROCESSOR_NUMBER@@0@Z.c)
 *     ?NdisTraceLoggingRssConfiguration@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CONFIGURATION_PARAMETER@@H@Z @ 0x1C00120B0 (-NdisTraceLoggingRssConfiguration@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CONFIGURATION_PARAMETE.c)
 *     NdisCloseConfiguration @ 0x1C00B0D80 (NdisCloseConfiguration.c)
 *     NdisReadConfiguration @ 0x1C00B30F0 (NdisReadConfiguration.c)
 *     NdisOpenConfigurationEx @ 0x1C00B3720 (NdisOpenConfigurationEx.c)
 */

__int64 __fastcall ndisReadRssKeywords(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _PROCESSOR_NUMBER v1; // ebx
  struct _PROCESSOR_NUMBER v3; // r14d
  _NDIS_RSS_PROFILE IntegerData; // esi
  unsigned __int16 Length; // r15
  PVOID v6; // rbx
  unsigned __int16 Group; // r12
  unsigned int MaxNumRssProcessors; // ecx
  int v9; // eax
  unsigned int Blink; // r15d
  struct _PROCESSOR_NUMBER v11; // r8d
  __int64 result; // rax
  _PROCESSOR_NUMBER v13; // r8d
  __int64 v14; // r11
  unsigned int v15; // r9d
  struct _PROCESSOR_NUMBER v16; // r8d
  int v17; // r9d
  _PROCESSOR_NUMBER v18; // r8d
  _PROCESSOR_NUMBER ProcNumber; // [rsp+30h] [rbp-38h] BYREF
  PVOID ConfigurationHandle; // [rsp+38h] [rbp-30h] BYREF
  struct _NDIS_CONFIGURATION_OBJECT ConfigObject; // [rsp+40h] [rbp-28h] BYREF
  int Status; // [rsp+B0h] [rbp+48h] BYREF
  PNDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+B8h] [rbp+50h] BYREF
  _PROCESSOR_NUMBER v24; // [rsp+C0h] [rbp+58h]
  struct _PROCESSOR_NUMBER v25; // [rsp+C8h] [rbp+60h]

  v1 = 0;
  v24 = 0;
  v3 = 0;
  ProcNumber = 0;
  IntegerData = NdisRssProfileNumaStatic;
  v25 = 0;
  KeGetProcessorNumberFromIndex(ndisRssBaseCpu, &ProcNumber);
  ConfigObject.Header = (_NDIS_OBJECT_HEADER)1311145;
  ConfigObject.Flags = 0;
  ConfigObject.NdisHandle = a1;
  Length = 20;
  Status = NdisOpenConfigurationEx(&ConfigObject, &ConfigurationHandle);
  if ( !Status )
  {
    v6 = ConfigurationHandle;
    NdisReadConfiguration(&Status, &ParameterValue, ConfigurationHandle, &RssStr, NdisParameterInteger);
    NdisTraceLoggingRssConfiguration(a1, ParameterValue);
    NdisReadConfiguration(&Status, &ParameterValue, v6, &MaxRssProcStr, NdisParameterInteger);
    if ( !Status )
      a1->MaxNumRssProcessors = ParameterValue->ParameterData.IntegerData;
    NdisReadConfiguration(&Status, &ParameterValue, v6, &RssBaseProcGroupStr, NdisParameterInteger);
    if ( Status || ParameterValue->ParameterData.IntegerData >= 0x14 )
    {
      Group = v25.Group;
    }
    else
    {
      Group = ParameterValue->ParameterData.StringData.Length;
      v25.Group = Group;
      v3 = v25;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v6, &RssBaseProcNumStr, NdisParameterInteger);
    if ( !Status && ParameterValue->ParameterData.IntegerData < 0x40 )
    {
      v25.Number = ParameterValue->ParameterData.IntegerData;
      v3 = v25;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v6, &RssMaxProcGroupStr, NdisParameterInteger);
    if ( !Status && ParameterValue->ParameterData.IntegerData < 0x14 )
      Length = ParameterValue->ParameterData.StringData.Length;
    v24.Group = Length;
    NdisReadConfiguration(&Status, &ParameterValue, v6, &RssMaxProcNumStr, NdisParameterInteger);
    if ( Status || ParameterValue->ParameterData.IntegerData >= 0x40 )
    {
      v24.Number = 63;
    }
    else
    {
      v24.Number = ParameterValue->ParameterData.IntegerData;
      if ( Length == 20 )
        v24.Group = Group;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v6, &RssProfileStr, NdisParameterInteger);
    if ( !Status && ParameterValue->ParameterData.IntegerData - 1 <= 4 )
      IntegerData = ParameterValue->ParameterData.IntegerData;
    NdisCloseConfiguration(v6);
    v1 = v24;
  }
  MaxNumRssProcessors = ndisMaxNumRssCpus;
  if ( a1->MaxNumRssProcessors < ndisMaxNumRssCpus )
    MaxNumRssProcessors = a1->MaxNumRssProcessors;
  a1->MaxNumRssProcessors = MaxNumRssProcessors;
  v9 = ndisCompareProcNum(ProcNumber, v3);
  Blink = (unsigned int)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink;
  if ( v9 > 0 )
    v3 = ProcNumber;
  if ( (int)ndisCompareProcNum(
              v3,
              *(struct _PROCESSOR_NUMBER *)(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels
                                          + 4LL * (unsigned int)(LODWORD(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) - 1))) > 0 )
    v3 = v11;
  result = ndisCompareProcNum(v1, v11);
  v15 = 0;
  if ( (int)result > 0 )
    v1 = v13;
  if ( Blink )
  {
    while ( 1 )
    {
      result = ndisCompareProcNum(*(struct _PROCESSOR_NUMBER *)(v14 + 4LL * v15), v3);
      if ( (int)result >= 0 )
        break;
      v15 = v17 + 1;
      if ( v15 >= Blink )
        goto LABEL_30;
    }
    result = ndisCompareProcNum(v16, v1);
    if ( (int)result > 0 )
      v1 = v18;
  }
LABEL_30:
  a1->RssBaseProcessor = v3;
  a1->RssMaxProcessor = v1;
  a1->RssProfile = IntegerData;
  return result;
}
