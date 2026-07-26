/*
 * XREFs of ndisReadRssKeywords @ 0x1C00B9168
 * Callers:
 *     ndisAddDevice @ 0x1C0105194 (ndisAddDevice.c)
 * Callees:
 *     ?ndisCompareProcNum@@YAHU_PROCESSOR_NUMBER@@0@Z @ 0x1C001A724 (-ndisCompareProcNum@@YAHU_PROCESSOR_NUMBER@@0@Z.c)
 *     ?NdisTraceLoggingRssConfiguration@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CONFIGURATION_PARAMETER@@H@Z @ 0x1C001E484 (-NdisTraceLoggingRssConfiguration@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CONFIGURATION_PARAMETE.c)
 *     NdisCloseConfiguration @ 0x1C00B7A60 (NdisCloseConfiguration.c)
 *     NdisReadConfiguration @ 0x1C00B9A70 (NdisReadConfiguration.c)
 *     NdisOpenConfigurationEx @ 0x1C00B9EE0 (NdisOpenConfigurationEx.c)
 */

__int64 __fastcall ndisReadRssKeywords(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _PROCESSOR_NUMBER v1; // ebx
  struct _PROCESSOR_NUMBER v3; // r15d
  _NDIS_RSS_PROFILE v4; // esi
  unsigned int IntegerData; // r12d
  PVOID v6; // rbx
  unsigned __int16 Group; // r14
  unsigned __int8 Number; // al
  unsigned int DeviceContext_high; // ecx
  int v10; // eax
  unsigned int v11; // r14d
  struct _PROCESSOR_NUMBER v12; // r8d
  __int64 result; // rax
  _PROCESSOR_NUMBER v14; // r8d
  __int64 v15; // r11
  unsigned int v16; // r9d
  struct _PROCESSOR_NUMBER v17; // r8d
  int v18; // r9d
  _PROCESSOR_NUMBER v19; // r8d
  PNDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+30h] [rbp-38h] BYREF
  PVOID ConfigurationHandle; // [rsp+38h] [rbp-30h] BYREF
  struct _NDIS_CONFIGURATION_OBJECT ConfigObject; // [rsp+40h] [rbp-28h] BYREF
  int Status; // [rsp+B0h] [rbp+48h] BYREF
  struct _PROCESSOR_NUMBER v24; // [rsp+B8h] [rbp+50h]
  _PROCESSOR_NUMBER v25; // [rsp+C0h] [rbp+58h]
  _PROCESSOR_NUMBER ProcNumber; // [rsp+C8h] [rbp+60h] BYREF

  v1 = 0;
  v25 = 0;
  v3 = 0;
  ProcNumber = 0;
  v4 = NdisRssProfileNumaStatic;
  v24 = 0;
  KeGetProcessorNumberFromIndex(ndisRssBaseCpu, &ProcNumber);
  ConfigObject.Header = (_NDIS_OBJECT_HEADER)1311145;
  ConfigObject.Flags = 0;
  ConfigObject.NdisHandle = a1;
  LOWORD(IntegerData) = 20;
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
    Group = v24.Group;
    if ( !Status )
    {
      if ( ParameterValue->ParameterData.IntegerData < 0x14 )
        Group = ParameterValue->ParameterData.IntegerData;
      v24.Group = Group;
      v3 = v24;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v6, &RssBaseProcNumStr, NdisParameterInteger);
    if ( !Status )
    {
      Number = v24.Number;
      if ( ParameterValue->ParameterData.IntegerData < 0x40 )
        Number = ParameterValue->ParameterData.IntegerData;
      v24.Number = Number;
      v3 = v24;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v6, &RssMaxProcGroupStr, NdisParameterInteger);
    if ( !Status )
    {
      IntegerData = ParameterValue->ParameterData.IntegerData;
      if ( IntegerData >= 0x14 )
        LOWORD(IntegerData) = 20;
    }
    v25.Group = IntegerData;
    NdisReadConfiguration(&Status, &ParameterValue, v6, &RssMaxProcNumStr, NdisParameterInteger);
    if ( Status || ParameterValue->ParameterData.IntegerData >= 0x40 )
    {
      v25.Number = 63;
    }
    else
    {
      v25.Number = ParameterValue->ParameterData.IntegerData;
      if ( (_WORD)IntegerData == 20 )
        v25.Group = Group;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v6, &RssProfileStr, NdisParameterInteger);
    if ( !Status && ParameterValue->ParameterData.IntegerData - 1 <= 4 )
      v4 = ParameterValue->ParameterData.IntegerData;
    NdisCloseConfiguration(v6);
    v1 = v25;
  }
  DeviceContext_high = HIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext);
  if ( a1->MaxNumRssProcessors < HIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) )
    DeviceContext_high = a1->MaxNumRssProcessors;
  a1->MaxNumRssProcessors = DeviceContext_high;
  v10 = ndisCompareProcNum(ProcNumber, v3);
  v11 = *((_DWORD *)&WPP_MAIN_CB.Queue.Wcb.1 + 5);
  if ( v10 > 0 )
    v3 = ProcNumber;
  if ( (int)ndisCompareProcNum(
              v3,
              *(struct _PROCESSOR_NUMBER *)((char *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine
                                          + 4 * (unsigned int)(*((_DWORD *)&WPP_MAIN_CB.Queue.Wcb.1 + 5) - 1))) > 0 )
    v3 = v12;
  result = ndisCompareProcNum(v1, v12);
  v16 = 0;
  if ( (int)result > 0 )
    v1 = v14;
  if ( v11 )
  {
    while ( 1 )
    {
      result = ndisCompareProcNum(*(struct _PROCESSOR_NUMBER *)(v15 + 4LL * v16), v3);
      if ( (int)result >= 0 )
        break;
      v16 = v18 + 1;
      if ( v16 >= v11 )
        goto LABEL_30;
    }
    result = ndisCompareProcNum(v17, v1);
    if ( (int)result > 0 )
      v1 = v19;
  }
LABEL_30:
  a1->RssBaseProcessor = v3;
  a1->RssMaxProcessor = v1;
  a1->RssProfile = v4;
  return result;
}
