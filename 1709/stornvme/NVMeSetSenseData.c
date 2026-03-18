/*
 * XREFs of NVMeSetSenseData @ 0x1C0012294
 * Callers:
 *     NVMeHwBuildIo @ 0x1C00021D0 (NVMeHwBuildIo.c)
 *     FormInquiryStandardData @ 0x1C000782C (FormInquiryStandardData.c)
 *     FormInquirySerialNumberData @ 0x1C0007AE4 (FormInquirySerialNumberData.c)
 *     FormInquiryDeviceIdentifiersData @ 0x1C0007D74 (FormInquiryDeviceIdentifiersData.c)
 *     FormInquiryBlockLimitsData @ 0x1C0007FD0 (FormInquiryBlockLimitsData.c)
 *     FormInquiryBlockProvisioningData @ 0x1C00080B8 (FormInquiryBlockProvisioningData.c)
 *     ScsiInquiryRequest @ 0x1C00081A8 (ScsiInquiryRequest.c)
 *     ScsiReadCapacityRequest @ 0x1C0008330 (ScsiReadCapacityRequest.c)
 *     ScsiModeSenseRequest @ 0x1C000897C (ScsiModeSenseRequest.c)
 *     ScsiModeSelectRequest @ 0x1C0008B20 (ScsiModeSelectRequest.c)
 *     LogSenseTemperature @ 0x1C0008E48 (LogSenseTemperature.c)
 *     LogSenseInformationalExceptions @ 0x1C0009054 (LogSenseInformationalExceptions.c)
 *     ScsiLogSenseRequest @ 0x1C00091F8 (ScsiLogSenseRequest.c)
 *     ScsiReadWriteRequest @ 0x1C0009324 (ScsiReadWriteRequest.c)
 *     ScsiUnmapRequest @ 0x1C00095B0 (ScsiUnmapRequest.c)
 *     ScsiStartStopUnitRequest @ 0x1C00097D0 (ScsiStartStopUnitRequest.c)
 *     ScsiSecurityProtocolInRequest @ 0x1C0009890 (ScsiSecurityProtocolInRequest.c)
 *     ScsiSecurityProtocolOutRequest @ 0x1C00099BC (ScsiSecurityProtocolOutRequest.c)
 *     ScsiSanitizeRequest @ 0x1C0009AE8 (ScsiSanitizeRequest.c)
 *     ScsiToNVMe @ 0x1C0009FE4 (ScsiToNVMe.c)
 * Callees:
 *     GetSrbScsiData @ 0x1C0006CB0 (GetSrbScsiData.c)
 *     memmove @ 0x1C00139C0 (memmove.c)
 *     memset @ 0x1C0013D00 (memset.c)
 */

unsigned __int8 __fastcall NVMeSetSenseData(__int64 a1, char a2, __int64 a3, char a4)
{
  unsigned __int8 result; // al
  char *v6; // rdi
  unsigned int v7; // ebx
  __int64 v8; // rsi
  unsigned int v9; // ebx
  char *v10; // rcx
  unsigned int v11; // ebx
  void *v12; // [rsp+30h] [rbp-20h] BYREF
  char Src; // [rsp+38h] [rbp-18h] BYREF
  __int64 v14; // [rsp+39h] [rbp-17h]
  __int64 v15; // [rsp+41h] [rbp-Fh]
  char v16; // [rsp+49h] [rbp-7h]
  _BYTE *v17; // [rsp+80h] [rbp+30h] BYREF
  unsigned __int8 v18; // [rsp+90h] [rbp+40h] BYREF

  *(_BYTE *)(a1 + 3) = a2;
  v17 = 0LL;
  v12 = 0LL;
  v14 = 0xA000000000500LL;
  v15 = 0LL;
  v16 = 0;
  v18 = 0;
  BYTE3(v15) = a4;
  Src = -16;
  result = GetSrbScsiData(a1, 0LL, &v17, &v12, &v18);
  if ( v17 )
    *v17 = 2;
  v6 = (char *)v12;
  if ( v12 )
  {
    result = v18;
    if ( v18 )
    {
      v7 = v18;
      v8 = v18;
      if ( v18 > 0x12u )
        v8 = 18LL;
      result = (unsigned __int8)memmove(v12, &Src, (unsigned int)v8);
      *(_BYTE *)(a1 + 3) |= 0x80u;
      if ( v7 > (unsigned int)v8 )
      {
        v9 = v7 - v8;
        v10 = &v6[v8];
        if ( (v9 & 3) != 0 )
        {
          if ( v9 )
            return (unsigned __int8)memset(v10, 0, v9);
        }
        else
        {
          v11 = v9 >> 2;
          if ( v11 )
            return (unsigned __int8)memset(v10, 0, 4LL * v11);
        }
      }
    }
  }
  return result;
}
