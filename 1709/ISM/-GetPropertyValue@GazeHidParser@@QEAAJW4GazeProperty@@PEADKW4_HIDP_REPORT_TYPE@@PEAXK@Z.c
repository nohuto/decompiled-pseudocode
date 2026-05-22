/*
 * XREFs of ?GetPropertyValue@GazeHidParser@@QEAAJW4GazeProperty@@PEADKW4_HIDP_REPORT_TYPE@@PEAXK@Z @ 0x1800C845C
 * Callers:
 *     ?OnInputReport@GazeDeviceCollection@@MEAAJKPEAXK@Z @ 0x18009BA70 (-OnInputReport@GazeDeviceCollection@@MEAAJKPEAXK@Z.c)
 *     ?UpdateCalibrationInfo@GazeDeviceCollection@@IEAAJPEAUDeviceInfo@@@Z @ 0x18009BFD0 (-UpdateCalibrationInfo@GazeDeviceCollection@@IEAAJPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800032A4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall GazeHidParser::GetPropertyValue(
        __int64 a1,
        int a2,
        CHAR *Report,
        ULONG ReportLength,
        HIDP_REPORT_TYPE ReportType,
        PCHAR a6,
        unsigned int a7)
{
  __int64 *v10; // rax
  __int64 *v11; // r11
  __int64 *v12; // r10
  USHORT v13; // si
  PCHAR v14; // r13
  __int64 v15; // rdx
  USAGE v16; // r9
  HIDP_REPORT_TYPE v18; // ecx
  PCHAR v19; // r13
  HIDP_REPORT_TYPE v20; // ecx
  HIDP_REPORT_TYPE v21; // ecx
  HIDP_REPORT_TYPE v22; // ecx
  USAGE v23; // r9
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  ULONG UsageValue; // [rsp+80h] [rbp+30h] BYREF

  UsageValue = 0;
  v10 = *(__int64 **)(a1 + 72);
  v11 = v10;
  v12 = (__int64 *)v10[1];
  while ( !*((_BYTE *)v12 + 25) )
  {
    if ( *((_DWORD *)v12 + 7) >= a2 )
    {
      v11 = v12;
      v12 = (__int64 *)*v12;
    }
    else
    {
      v12 = (__int64 *)v12[2];
    }
  }
  if ( v11 == v10 || a2 < *((_DWORD *)v11 + 7) )
  {
    std::_Xout_of_range("invalid map<K, T> key");
    JUMPOUT(0x1800C8884LL);
  }
  v13 = *((_WORD *)v11 + 16);
  switch ( a2 )
  {
    case 1:
      v23 = 1024;
LABEL_45:
      if ( HidP_GetUsageValue(
             ReportType,
             0x12u,
             v13,
             v23,
             &UsageValue,
             *(PHIDP_PREPARSED_DATA *)(a1 + 64),
             Report,
             ReportLength) == 1114112 )
      {
        *(_DWORD *)a6 = UsageValue;
        return 0LL;
      }
      return 2147943568LL;
    case 2:
      v23 = 769;
      goto LABEL_45;
    case 3:
      if ( a7 < 0xC )
      {
        v15 = 352LL;
        goto LABEL_27;
      }
      if ( HidP_GetUsageValue(
             ReportType,
             0x12u,
             v13,
             0x200u,
             &UsageValue,
             *(PHIDP_PREPARSED_DATA *)(a1 + 64),
             Report,
             ReportLength) != 1114112 )
        return 2147943568LL;
      v19 = a6;
      v20 = ReportType;
      *(_WORD *)a6 = UsageValue;
      if ( HidP_GetUsageValue(
             v20,
             0x12u,
             v13,
             0x201u,
             &UsageValue,
             *(PHIDP_PREPARSED_DATA *)(a1 + 64),
             Report,
             ReportLength) != 1114112 )
        return 2147943568LL;
      v21 = ReportType;
      *((_WORD *)v19 + 1) = UsageValue;
      if ( HidP_GetUsageValue(
             v21,
             0x12u,
             v13,
             0x202u,
             &UsageValue,
             *(PHIDP_PREPARSED_DATA *)(a1 + 64),
             Report,
             ReportLength) != 1114112 )
        return 2147943568LL;
      v22 = ReportType;
      *((_DWORD *)v19 + 1) = UsageValue;
      if ( HidP_GetUsageValue(
             v22,
             0x12u,
             v13,
             0x203u,
             &UsageValue,
             *(PHIDP_PREPARSED_DATA *)(a1 + 64),
             Report,
             ReportLength) != 1114112 )
        return 2147943568LL;
      *((_WORD *)v19 + 4) = UsageValue;
      return 0LL;
    case 4:
      if ( a7 < 8 )
      {
        v15 = 411LL;
        goto LABEL_27;
      }
      if ( HidP_GetUsageValue(
             ReportType,
             0x12u,
             v13,
             0x204u,
             &UsageValue,
             *(PHIDP_PREPARSED_DATA *)(a1 + 64),
             Report,
             ReportLength) != 1114112 )
        return 2147943568LL;
      v14 = a6;
      v16 = 517;
      goto LABEL_34;
    case 5:
      if ( a7 < 8 )
      {
        v15 = 269LL;
        goto LABEL_27;
      }
      if ( HidP_GetUsageValueArray(
             ReportType,
             0x12u,
             v13,
             0x20u,
             a6,
             8u,
             *(PHIDP_PREPARSED_DATA *)(a1 + 64),
             Report,
             ReportLength) != 1114112 )
        return 2147943568LL;
      return 0LL;
  }
  v14 = a6;
  if ( a2 != 6 )
  {
    if ( (unsigned int)(a2 - 7) > 2 )
    {
      v15 = 442LL;
      goto LABEL_27;
    }
    if ( a7 < 0xC )
    {
      v15 = 294LL;
LABEL_27:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v15,
        (__int64)"onecoreuap\\windows\\input\\gaze\\hid\\lib\\gazehidparser.cpp",
        (const char *)0x80070057LL);
      return 2147942487LL;
    }
    if ( HidP_GetUsageValue(
           ReportType,
           0x12u,
           v13,
           0x23u,
           &UsageValue,
           *(PHIDP_PREPARSED_DATA *)(a1 + 64),
           Report,
           ReportLength) != 1114112 )
      return 2147943568LL;
    *((_DWORD *)v14 + 2) = UsageValue;
  }
  if ( a7 < 8 )
  {
    v15 = 317LL;
    goto LABEL_27;
  }
  if ( HidP_GetUsageValue(
         ReportType,
         0x12u,
         v13,
         0x21u,
         &UsageValue,
         *(PHIDP_PREPARSED_DATA *)(a1 + 64),
         Report,
         ReportLength) != 1114112 )
    return 2147943568LL;
  v16 = 34;
LABEL_34:
  v18 = ReportType;
  *(_DWORD *)v14 = UsageValue;
  if ( HidP_GetUsageValue(v18, 0x12u, v13, v16, &UsageValue, *(PHIDP_PREPARSED_DATA *)(a1 + 64), Report, ReportLength) != 1114112 )
    return 2147943568LL;
  *((_DWORD *)v14 + 1) = UsageValue;
  return 0LL;
}
