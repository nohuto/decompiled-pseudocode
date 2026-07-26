/*
 * XREFs of ndisReadPMAdminConfigState @ 0x1C00B9550
 * Callers:
 *     ndisReadPMRegistry @ 0x1C00B9410 (ndisReadPMRegistry.c)
 * Callees:
 *     NdisReadConfiguration @ 0x1C00B9A70 (NdisReadConfiguration.c)
 */

__int64 __fastcall ndisReadPMAdminConfigState(NDIS_HANDLE ConfigurationHandle, PNDIS_STRING Keyword)
{
  unsigned int v2; // ebx
  int Status; // [rsp+50h] [rbp+18h] BYREF
  PNDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+58h] [rbp+20h] BYREF

  v2 = 0;
  NdisReadConfiguration(&Status, &ParameterValue, ConfigurationHandle, Keyword, NdisParameterInteger);
  if ( !Status )
    return (unsigned int)(ParameterValue->ParameterData.IntegerData != 0) + 1;
  return v2;
}
