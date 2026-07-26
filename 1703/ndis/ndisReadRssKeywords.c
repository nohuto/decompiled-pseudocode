/*
 * XREFs of ndisReadRssKeywords @ 0x1C00ADFC8
 * Callers:
 *     ndisAddDevice @ 0x1C00F6250 (ndisAddDevice.c)
 * Callees:
 *     ?NdisTraceLoggingRssConfiguration@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CONFIGURATION_PARAMETER@@H@Z @ 0x1C0014F2C (-NdisTraceLoggingRssConfiguration@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CONFIGURATION_PARAMETE.c)
 *     ?ndisCompareProcNum@@YAHU_PROCESSOR_NUMBER@@0@Z @ 0x1C00168F0 (-ndisCompareProcNum@@YAHU_PROCESSOR_NUMBER@@0@Z.c)
 *     NdisCloseConfiguration @ 0x1C00ADB10 (NdisCloseConfiguration.c)
 *     NdisReadConfiguration @ 0x1C00AE8B0 (NdisReadConfiguration.c)
 *     NdisOpenConfigurationEx @ 0x1C00AF420 (NdisOpenConfigurationEx.c)
 */

__int64 __fastcall ndisReadRssKeywords(struct _TlgProvider_t *a1)
{
  struct _PROCESSOR_NUMBER v1; // edi
  _PROCESSOR_NUMBER v3; // ebx
  _NDIS_RSS_PROFILE IntegerData; // r15d
  unsigned __int16 Length; // r14
  PVOID v6; // rbx
  unsigned __int16 Group; // r12
  unsigned int AnnotationFunc; // ecx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 result; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // r11d
  unsigned int v15; // r9d
  int v16; // r9d
  __int64 v17; // r10
  unsigned int v18; // r11d
  __int64 v19; // r8
  unsigned int v20; // r9d
  _PROCESSOR_NUMBER ProcNumber; // [rsp+30h] [rbp-38h] BYREF
  PVOID ConfigurationHandle; // [rsp+38h] [rbp-30h] BYREF
  struct _NDIS_CONFIGURATION_OBJECT ConfigObject; // [rsp+40h] [rbp-28h] BYREF
  int Status; // [rsp+B0h] [rbp+48h] BYREF
  PNDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+B8h] [rbp+50h] BYREF
  _PROCESSOR_NUMBER v26; // [rsp+C0h] [rbp+58h]
  struct _PROCESSOR_NUMBER v27; // [rsp+C8h] [rbp+60h]

  v1 = 0;
  v27 = 0;
  v3 = 0;
  ProcNumber = 0;
  IntegerData = NdisRssProfileNumaStatic;
  v26 = 0;
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
      LODWORD(a1[68].AnnotationFunc) = ParameterValue->ParameterData.IntegerData;
    NdisReadConfiguration(&Status, &ParameterValue, v6, &RssBaseProcGroupStr, NdisParameterInteger);
    if ( Status || ParameterValue->ParameterData.IntegerData >= 0x14 )
    {
      Group = v27.Group;
    }
    else
    {
      Group = ParameterValue->ParameterData.StringData.Length;
      v27.Group = Group;
      v1 = v27;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v6, &RssBaseProcNumStr, NdisParameterInteger);
    if ( !Status && ParameterValue->ParameterData.IntegerData < 0x40 )
    {
      v27.Number = ParameterValue->ParameterData.IntegerData;
      v1 = v27;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v6, &RssMaxProcGroupStr, NdisParameterInteger);
    if ( !Status && ParameterValue->ParameterData.IntegerData < 0x14 )
      Length = ParameterValue->ParameterData.StringData.Length;
    v26.Group = Length;
    NdisReadConfiguration(&Status, &ParameterValue, v6, &RssMaxProcNumStr, NdisParameterInteger);
    if ( Status || ParameterValue->ParameterData.IntegerData >= 0x40 )
    {
      v26.Number = 63;
    }
    else
    {
      v26.Number = ParameterValue->ParameterData.IntegerData;
      if ( Length == 20 )
        v26.Group = Group;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v6, &RssProfileStr, NdisParameterInteger);
    if ( !Status && ParameterValue->ParameterData.IntegerData - 1 <= 4 )
      IntegerData = ParameterValue->ParameterData.IntegerData;
    NdisCloseConfiguration(v6);
    v3 = v26;
  }
  AnnotationFunc = ndisMaxNumRssCpus;
  if ( LODWORD(a1[68].AnnotationFunc) < ndisMaxNumRssCpus )
    AnnotationFunc = (unsigned int)a1[68].AnnotationFunc;
  LODWORD(a1[68].AnnotationFunc) = AnnotationFunc;
  if ( (int)ndisCompareProcNum(ProcNumber, v1) > 0 )
    v1 = ProcNumber;
  if ( (int)ndisCompareProcNum(
              v1,
              *(struct _PROCESSOR_NUMBER *)((char *)ndisRssProcessors
                                          + 4 * (WPP_MAIN_CB.Queue.Wcb.WaitQueueEntry.SortKey - 1))) > 0 )
    v1 = *(struct _PROCESSOR_NUMBER *)(v9 + 4 * v10);
  result = ndisCompareProcNum(v3, *(struct _PROCESSOR_NUMBER *)(v9 + 4 * v10));
  if ( (int)result > 0 )
    v3 = *(_PROCESSOR_NUMBER *)(v12 + 4 * v13);
  v15 = 0;
  if ( v14 )
  {
    while ( 1 )
    {
      result = ndisCompareProcNum(*(struct _PROCESSOR_NUMBER *)(v12 + 4LL * v15), v1);
      if ( (int)result >= 0 )
        break;
      v15 = v16 + 1;
      if ( v15 >= v18 )
        goto LABEL_30;
    }
    result = ndisCompareProcNum(*(struct _PROCESSOR_NUMBER *)(v12 + 4 * v17), v3);
    if ( (int)result > 0 )
    {
      result = v20;
      v3 = *(_PROCESSOR_NUMBER *)(v19 + 4LL * v20);
    }
  }
LABEL_30:
  HIDWORD(a1[68].AnnotationFunc) = v1;
  a1[69].LevelPlus1 = (unsigned int)v3;
  *(&a1[69].LevelPlus1 + 1) = IntegerData;
  return result;
}
