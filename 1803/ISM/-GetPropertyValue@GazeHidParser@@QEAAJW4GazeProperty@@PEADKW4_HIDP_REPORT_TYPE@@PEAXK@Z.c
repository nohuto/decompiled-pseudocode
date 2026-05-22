/*
 * XREFs of ?GetPropertyValue@GazeHidParser@@QEAAJW4GazeProperty@@PEADKW4_HIDP_REPORT_TYPE@@PEAXK@Z @ 0x1800AEAD4
 * Callers:
 *     ?GetInputInfoForReport@GazeHidDevice@@QEAAJPEADKPEAPEAUInputInfo@@PEA_N@Z @ 0x180075D80 (-GetInputInfoForReport@GazeHidDevice@@QEAAJPEADKPEAPEAUInputInfo@@PEA_N@Z.c)
 *     ?TryUpdateDisplayMapping@GazeHidDevice@@QEAAJXZ @ 0x180075F54 (-TryUpdateDisplayMapping@GazeHidDevice@@QEAAJXZ.c)
 *     ?TryUpdateCalibrationState@GazeHidDevice@@QEAAJXZ @ 0x18007635C (-TryUpdateCalibrationState@GazeHidDevice@@QEAAJXZ.c)
 *     ?GetCalibratedRegion@GazeHidParser@@QEAAJPEADKPEAUtagRECT@@@Z @ 0x1800AEED8 (-GetCalibratedRegion@GazeHidParser@@QEAAJPEADKPEAUtagRECT@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsPropertySupported@GazeHidParser@@QEAA_NW4GazeProperty@@@Z @ 0x1800AE8B0 (-IsPropertySupported@GazeHidParser@@QEAA_NW4GazeProperty@@@Z.c)
 */

__int64 __fastcall GazeHidParser::GetPropertyValue(
        __int64 a1,
        int a2,
        CHAR *a3,
        ULONG a4,
        HIDP_REPORT_TYPE ReportType,
        PCHAR a6,
        unsigned int a7)
{
  int v10; // edx
  char v11; // r11
  __int64 *v13; // r8
  __int64 *v14; // rax
  __int64 *v15; // rcx
  int v16; // r9d
  __int64 *v17; // r10
  USHORT v18; // si
  __int64 v19; // rdx
  USAGE v20; // r9
  USAGE v21; // r9
  ULONG UsageValue[4]; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  UsageValue[0] = 0;
  if ( !GazeHidParser::IsPropertySupported(a1, a2) )
    return 2147943568LL;
  v13 = *(__int64 **)(a1 + 72);
  v14 = v13;
  v15 = (__int64 *)v13[1];
  while ( *((_BYTE *)v15 + 25) == v11 )
  {
    v16 = *((_DWORD *)v15 + 7);
    v17 = v15;
    if ( v16 >= v10 )
      v15 = (__int64 *)*v15;
    else
      v15 = (__int64 *)v15[2];
    if ( v16 >= v10 )
      v14 = v17;
  }
  if ( v14 == v13 || v10 < *((_DWORD *)v14 + 7) )
  {
    std::_Xout_of_range("invalid map<K, T> key");
    JUMPOUT(0x1800AEED4LL);
  }
  v18 = *((_WORD *)v14 + 16);
  switch ( v10 )
  {
    case 1:
      v21 = 1024;
LABEL_47:
      if ( HidP_GetUsageValue(ReportType, 0x12u, v18, v21, UsageValue, *(PHIDP_PREPARSED_DATA *)(a1 + 64), a3, a4) == 1114112 )
      {
        *(_DWORD *)a6 = UsageValue[0];
        return 0LL;
      }
      return 2147943568LL;
    case 2:
      v21 = 769;
      goto LABEL_47;
    case 3:
      if ( a7 < 0xA )
      {
        v19 = 338LL;
        goto LABEL_31;
      }
      if ( HidP_GetUsageValue(ReportType, 0x12u, v18, 0x200u, UsageValue, *(PHIDP_PREPARSED_DATA *)(a1 + 64), a3, a4) == 1114112 )
      {
        *(_WORD *)a6 = UsageValue[0];
        if ( HidP_GetUsageValue(ReportType, 0x12u, v18, 0x201u, UsageValue, *(PHIDP_PREPARSED_DATA *)(a1 + 64), a3, a4) == 1114112 )
        {
          *((_WORD *)a6 + 1) = UsageValue[0];
          if ( HidP_GetUsageValue(
                 ReportType,
                 0x12u,
                 v18,
                 0x202u,
                 UsageValue,
                 *(PHIDP_PREPARSED_DATA *)(a1 + 64),
                 a3,
                 a4) == 1114112 )
          {
            *((_DWORD *)a6 + 1) = UsageValue[0];
            if ( HidP_GetUsageValue(
                   ReportType,
                   0x12u,
                   v18,
                   0x203u,
                   UsageValue,
                   *(PHIDP_PREPARSED_DATA *)(a1 + 64),
                   a3,
                   a4) == 1114112 )
            {
              *((_WORD *)a6 + 4) = UsageValue[0];
              return 0LL;
            }
          }
        }
      }
      return 2147943568LL;
    case 4:
      if ( a7 < 8 )
      {
        v19 = 397LL;
        goto LABEL_31;
      }
      if ( HidP_GetUsageValue(ReportType, 0x12u, v18, 0x204u, UsageValue, *(PHIDP_PREPARSED_DATA *)(a1 + 64), a3, a4) != 1114112 )
        return 2147943568LL;
      v20 = 517;
LABEL_27:
      *(_DWORD *)a6 = UsageValue[0];
      if ( HidP_GetUsageValue(ReportType, 0x12u, v18, v20, UsageValue, *(PHIDP_PREPARSED_DATA *)(a1 + 64), a3, a4) == 1114112 )
      {
        *((_DWORD *)a6 + 1) = UsageValue[0];
        return 0LL;
      }
      return 2147943568LL;
  }
  if ( v10 != 5 )
  {
    if ( v10 != 6 )
    {
      if ( v10 <= 6 )
        goto LABEL_21;
      if ( v10 <= 9 )
      {
        v19 = 279LL;
        goto LABEL_31;
      }
      if ( v10 != 10 )
      {
LABEL_21:
        v19 = 428LL;
LABEL_31:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v19,
          (__int64)"onecoreuap\\windows\\input\\gaze\\hid\\lib\\gazehidparser.cpp",
          (const char *)0x80070057LL);
        return 2147942487LL;
      }
    }
    if ( a7 < 8 )
    {
      v19 = 303LL;
      goto LABEL_31;
    }
    if ( HidP_GetUsageValue(ReportType, 0x12u, v18, 0x21u, UsageValue, *(PHIDP_PREPARSED_DATA *)(a1 + 64), a3, a4) != 1114112 )
      return 2147943568LL;
    v20 = 34;
    goto LABEL_27;
  }
  if ( a7 < 8 )
  {
    v19 = 254LL;
    goto LABEL_31;
  }
  if ( HidP_GetUsageValueArray(ReportType, 0x12u, v18, 0x20u, a6, 8u, *(PHIDP_PREPARSED_DATA *)(a1 + 64), a3, a4) != 1114112 )
    return 2147943568LL;
  return 0LL;
}
