/*
 * XREFs of ScsiToNVMe @ 0x1C0009FE4
 * Callers:
 *     NVMeHwBuildIo @ 0x1C00021D0 (NVMeHwBuildIo.c)
 * Callees:
 *     GetSrbScsiData @ 0x1C0006CB0 (GetSrbScsiData.c)
 *     MdlToPrp @ 0x1C0006E34 (MdlToPrp.c)
 *     SglToPrp @ 0x1C0007118 (SglToPrp.c)
 *     ScsiReportLunsCommand @ 0x1C000776C (ScsiReportLunsCommand.c)
 *     ScsiInquiryRequest @ 0x1C00081A8 (ScsiInquiryRequest.c)
 *     ScsiReadCapacityRequest @ 0x1C0008330 (ScsiReadCapacityRequest.c)
 *     ScsiModeSenseRequest @ 0x1C000897C (ScsiModeSenseRequest.c)
 *     ScsiModeSelectRequest @ 0x1C0008B20 (ScsiModeSelectRequest.c)
 *     ScsiLogSenseRequest @ 0x1C00091F8 (ScsiLogSenseRequest.c)
 *     ScsiReadWriteRequest @ 0x1C0009324 (ScsiReadWriteRequest.c)
 *     ScsiSyncCacheRequest @ 0x1C0009500 (ScsiSyncCacheRequest.c)
 *     ScsiUnmapRequest @ 0x1C00095B0 (ScsiUnmapRequest.c)
 *     ScsiStartStopUnitRequest @ 0x1C00097D0 (ScsiStartStopUnitRequest.c)
 *     ScsiSecurityProtocolInRequest @ 0x1C0009890 (ScsiSecurityProtocolInRequest.c)
 *     ScsiSecurityProtocolOutRequest @ 0x1C00099BC (ScsiSecurityProtocolOutRequest.c)
 *     ScsiSanitizeRequest @ 0x1C0009AE8 (ScsiSanitizeRequest.c)
 *     NVMeSplitIoCommand @ 0x1C0009EC4 (NVMeSplitIoCommand.c)
 *     NVMeSetSenseData @ 0x1C0012294 (NVMeSetSenseData.c)
 */

__int64 __fastcall ScsiToNVMe(__int64 a1, __int64 a2)
{
  bool v4; // bp
  __int64 v5; // rdx
  unsigned __int8 *SrbScsiData; // r8
  __int64 v7; // r9
  bool v8; // zf
  __int64 v9; // rax
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  unsigned int CapacityRequest; // eax
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  unsigned int v19; // edi
  unsigned int v20; // ecx
  unsigned int v21; // ecx
  unsigned int v22; // ecx
  unsigned int v23; // eax
  bool v25; // [rsp+50h] [rbp+8h] BYREF
  unsigned int v26; // [rsp+58h] [rbp+10h] BYREF

  v26 = 0;
  v4 = 0;
  SrbScsiData = (unsigned __int8 *)GetSrbScsiData(a2, &v26, 0LL, 0LL, 0LL);
  v8 = *(_BYTE *)(a2 + 2) == 40;
  v25 = 0;
  if ( v8 )
    v9 = *(unsigned __int8 *)(*(unsigned int *)(a2 + 52) + a2 + 10);
  else
    v9 = *(unsigned __int8 *)(a2 + 7);
  if ( *(_QWORD *)(a1 + 8 * v9 + 1184) == v7 || (v7 = v26, v26 < 6) || !SrbScsiData )
  {
    LOBYTE(v7) = 32;
    LOBYTE(v5) = 8;
    NVMeSetSenseData(a2, v5, SrbScsiData, v7);
    return 3238002695LL;
  }
  v10 = *SrbScsiData;
  if ( v10 > 0x48 )
  {
    if ( v10 > 0x8F )
    {
      v20 = v10 - 158;
      if ( !v20 )
        goto LABEL_45;
      v21 = v20 - 2;
      if ( !v21 )
      {
        CapacityRequest = ScsiReportLunsCommand(a1, a2);
        goto LABEL_46;
      }
      v22 = v21 - 2;
      if ( !v22 )
      {
        CapacityRequest = ScsiSecurityProtocolInRequest(a1, a2, SrbScsiData);
        goto LABEL_46;
      }
      if ( v22 == 19 )
      {
        CapacityRequest = ScsiSecurityProtocolOutRequest(a1, a2, SrbScsiData);
        goto LABEL_46;
      }
LABEL_41:
      LOBYTE(v7) = 32;
      LOBYTE(v5) = 6;
      NVMeSetSenseData(a2, v5, SrbScsiData, v7);
      v19 = -1056964601;
      goto LABEL_47;
    }
    if ( v10 == 143 )
      goto LABEL_36;
    v15 = v10 - 77;
    if ( !v15 )
    {
      CapacityRequest = ScsiLogSenseRequest(a1, a2, (size_t)SrbScsiData, v26);
      goto LABEL_46;
    }
    v16 = v15 - 8;
    if ( !v16 )
      goto LABEL_34;
    v17 = v16 - 5;
    if ( !v17 )
      goto LABEL_33;
    v18 = v17 - 46;
    if ( v18 && v18 != 2 )
      goto LABEL_41;
LABEL_32:
    CapacityRequest = ScsiReadWriteRequest(a1, a2, SrbScsiData, v26, &v25);
    v4 = v25;
    goto LABEL_46;
  }
  if ( v10 == 72 )
  {
    CapacityRequest = ScsiSanitizeRequest(a1, a2, (__int64)SrbScsiData, v26);
    goto LABEL_46;
  }
  if ( v10 > 0x25 )
  {
    if ( ((v10 - 40) & 0xFFFFFFFD) != 0 )
    {
      switch ( v10 )
      {
        case '/':
          goto LABEL_36;
        case '5':
          CapacityRequest = ScsiSyncCacheRequest(a1, a2);
          goto LABEL_46;
        case 'B':
          CapacityRequest = ScsiUnmapRequest(a1, a2, (__int64)SrbScsiData);
          goto LABEL_46;
      }
      goto LABEL_41;
    }
    goto LABEL_32;
  }
  if ( v10 == 37 )
  {
LABEL_45:
    CapacityRequest = ScsiReadCapacityRequest(a1, a2, SrbScsiData, v26);
    goto LABEL_46;
  }
  if ( *SrbScsiData )
  {
    v11 = v10 - 18;
    if ( !v11 )
    {
      CapacityRequest = ScsiInquiryRequest(a1, a2, (__int64)SrbScsiData, v26);
      goto LABEL_46;
    }
    v12 = v11 - 3;
    if ( v12 )
    {
      v13 = v12 - 5;
      if ( v13 )
      {
        if ( v13 == 1 )
        {
          CapacityRequest = ScsiStartStopUnitRequest(a1, a2, (__int64)SrbScsiData, v26);
LABEL_46:
          v19 = CapacityRequest;
          goto LABEL_47;
        }
        goto LABEL_41;
      }
LABEL_33:
      CapacityRequest = ScsiModeSenseRequest(a1, a2, SrbScsiData);
      goto LABEL_46;
    }
LABEL_34:
    CapacityRequest = ScsiModeSelectRequest(a1, a2, (char *)SrbScsiData);
    goto LABEL_46;
  }
LABEL_36:
  *(_BYTE *)(a2 + 3) = 1;
  v19 = 0;
LABEL_47:
  if ( !*(_BYTE *)(a2 + 3) )
  {
    if ( (*(_DWORD *)(a1 + 52) & 8) != 0 )
      v23 = MdlToPrp(a1, a2);
    else
      v23 = SglToPrp(a1, a2, (__int64)SrbScsiData);
    v19 = v23;
    if ( v23 )
    {
      ++*(_DWORD *)(a1 + 3272);
      *(_BYTE *)(a2 + 3) = 4;
    }
    else if ( v4 )
    {
      NVMeSplitIoCommand(a1, a2);
    }
  }
  return v19;
}
