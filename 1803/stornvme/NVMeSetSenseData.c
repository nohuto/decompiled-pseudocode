/*
 * XREFs of NVMeSetSenseData @ 0x1C00127F4
 * Callers:
 *     NVMeHwBuildIo @ 0x1C0002120 (NVMeHwBuildIo.c)
 *     FormInquiryStandardData @ 0x1C0007B20 (FormInquiryStandardData.c)
 *     FormInquirySerialNumberData @ 0x1C0007DE4 (FormInquirySerialNumberData.c)
 *     FormInquiryDeviceIdentifiersData @ 0x1C0008074 (FormInquiryDeviceIdentifiersData.c)
 *     FormInquiryBlockLimitsData @ 0x1C00082D0 (FormInquiryBlockLimitsData.c)
 *     FormInquiryBlockProvisioningData @ 0x1C00083D4 (FormInquiryBlockProvisioningData.c)
 *     ScsiInquiryRequest @ 0x1C00084D0 (ScsiInquiryRequest.c)
 *     ScsiReadCapacityRequest @ 0x1C0008668 (ScsiReadCapacityRequest.c)
 *     ScsiModeSenseRequest @ 0x1C0008CF0 (ScsiModeSenseRequest.c)
 *     ScsiModeSelectRequest @ 0x1C0008EA8 (ScsiModeSelectRequest.c)
 *     LogSenseTemperature @ 0x1C00091F4 (LogSenseTemperature.c)
 *     LogSenseInformationalExceptions @ 0x1C0009404 (LogSenseInformationalExceptions.c)
 *     ScsiLogSenseRequest @ 0x1C00095B4 (ScsiLogSenseRequest.c)
 *     ScsiReadWriteRequest @ 0x1C00096E0 (ScsiReadWriteRequest.c)
 *     ScsiUnmapRequest @ 0x1C0009980 (ScsiUnmapRequest.c)
 *     ScsiStartStopUnitRequest @ 0x1C0009BA8 (ScsiStartStopUnitRequest.c)
 *     ScsiSecurityProtocolInRequest @ 0x1C0009C68 (ScsiSecurityProtocolInRequest.c)
 *     ScsiSecurityProtocolOutRequest @ 0x1C0009D98 (ScsiSecurityProtocolOutRequest.c)
 *     ScsiSanitizeRequest @ 0x1C0009EC8 (ScsiSanitizeRequest.c)
 *     ScsiToNVMe @ 0x1C000A3C4 (ScsiToNVMe.c)
 * Callees:
 *     GetSrbScsiData @ 0x1C0006F54 (GetSrbScsiData.c)
 *     memmove @ 0x1C0014040 (memmove.c)
 *     memset @ 0x1C0014380 (memset.c)
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
  __int64 Src; // [rsp+38h] [rbp-18h] BYREF
  __int64 v14; // [rsp+40h] [rbp-10h]
  __int16 v15; // [rsp+48h] [rbp-8h]
  _BYTE *v16; // [rsp+80h] [rbp+30h] BYREF
  unsigned __int8 v17; // [rsp+90h] [rbp+40h] BYREF

  *(_BYTE *)(a1 + 3) = a2;
  v16 = 0LL;
  v12 = 0LL;
  Src = 0xA000000000500F0LL;
  v14 = 0LL;
  v15 = 0;
  v17 = 0;
  BYTE4(v14) = a4;
  result = GetSrbScsiData(a1, 0LL, &v16, &v12, &v17);
  if ( v16 )
    *v16 = 2;
  v6 = (char *)v12;
  if ( v12 )
  {
    result = v17;
    if ( v17 )
    {
      v7 = v17;
      v8 = v17;
      if ( v17 > 0x12u )
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
