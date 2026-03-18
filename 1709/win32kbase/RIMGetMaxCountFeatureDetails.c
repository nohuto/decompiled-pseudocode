/*
 * XREFs of RIMGetMaxCountFeatureDetails @ 0x1C00944D4
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C000F028 (RIMCreatePointerDeviceInfo.c)
 * Callees:
 *     rimHidP_GetSpecificValueCaps @ 0x1C00128A8 (rimHidP_GetSpecificValueCaps.c)
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C001802C (WPP_RECORDER_SF_d.c)
 *     Win32AllocPoolNonPaged @ 0x1C0024C70 (Win32AllocPoolNonPaged.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     rimHidP_GetUsageValue @ 0x1C0094650 (rimHidP_GetUsageValue.c)
 *     RIMGetFeatureReport @ 0x1C00946C0 (RIMGetFeatureReport.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     RIMDiscoverCustomPTPSettings @ 0x1C01166F0 (RIMDiscoverCustomPTPSettings.c)
 *     RIMExtractCustomPTPSettings @ 0x1C0116BA0 (RIMExtractCustomPTPSettings.c)
 */

__int64 __fastcall RIMGetMaxCountFeatureDetails(
        __int64 a1,
        __int64 a2,
        struct _HIDP_PREPARSED_DATA *a3,
        _WORD *a4,
        __int64 a5,
        __int64 a6)
{
  int SpecificValueCaps; // ebx
  union _LARGE_INTEGER *v10; // rax
  union _LARGE_INTEGER *v11; // rdi
  int v12; // eax
  unsigned int *v13; // r15
  int UsageValue; // eax
  unsigned int v15; // ecx
  int v17; // ecx
  int v18; // eax
  __int64 v19; // [rsp+28h] [rbp-81h]
  __int64 v20; // [rsp+28h] [rbp-81h]
  char v21; // [rsp+40h] [rbp-69h] BYREF
  unsigned __int16 v22; // [rsp+44h] [rbp-65h] BYREF
  __int16 v23[2]; // [rsp+48h] [rbp-61h] BYREF
  __int16 v24; // [rsp+4Ch] [rbp-5Dh] BYREF
  _QWORD v25[2]; // [rsp+50h] [rbp-59h] BYREF
  struct _HIDP_VALUE_CAPS v26; // [rsp+60h] [rbp-49h] BYREF

  v22 = 1;
  v25[0] = a1;
  v25[1] = a5;
  SpecificValueCaps = rimHidP_GetSpecificValueCaps(HidP_Feature, 0xDu, 0, 0x55u, &v26, &v22, a3);
  if ( SpecificValueCaps < 0 )
    return (unsigned int)SpecificValueCaps;
  v10 = (union _LARGE_INTEGER *)Win32AllocPoolNonPaged((unsigned __int16)a4[4], 0x69667352u);
  v11 = v10;
  if ( v10 )
  {
    v12 = RIMGetFeatureReport(v10, a6);
    if ( v12 )
    {
      LODWORD(v19) = v12;
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x12u,
        0x1Bu,
        (__int64)&WPP_0f3e873ef26134f564643c470ca4b782_Traceguids,
        v19);
    }
    else
    {
      v13 = (unsigned int *)(a2 + 680);
      UsageValue = rimHidP_GetUsageValue(2, 13, 0, 85, a2 + 680, (__int64)a3, (__int64)v11, (unsigned __int16)a4[4]);
      SpecificValueCaps = UsageValue;
      if ( UsageValue < 0 || (v15 = *v13) == 0 )
      {
        LODWORD(v20) = UsageValue;
        WPP_RECORDER_SF_d(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          0x12u,
          0x1Cu,
          (__int64)&WPP_0f3e873ef26134f564643c470ca4b782_Traceguids,
          v20);
        SpecificValueCaps = -1073741668;
        goto LABEL_9;
      }
      if ( v15 <= 0x100 )
      {
        if ( *a4 == 5 )
        {
          *v13 = v15 + 1;
          goto LABEL_9;
        }
        if ( *(_DWORD *)(v25[0] + 660LL) + v15 <= 0xA00 )
        {
LABEL_9:
          if ( SpecificValueCaps >= 0 && *a4 == 5 )
          {
            *(_DWORD *)(a2 + 864) = 3;
            SpecificValueCaps = rimHidP_GetUsageValue(
                                  2,
                                  13,
                                  0,
                                  89,
                                  (__int64)v25,
                                  (__int64)a3,
                                  (__int64)v11,
                                  (unsigned __int16)a4[4]);
            if ( SpecificValueCaps >= 0 )
            {
              v17 = ((v25[0] & 1) != 0) + 1;
              *(_DWORD *)(a2 + 864) = v17;
            }
            v18 = RIMDiscoverCustomPTPSettings(
                    v17,
                    *(_QWORD *)(a2 + 672),
                    (_DWORD)a3,
                    (unsigned int)&v21,
                    (__int64)&v24,
                    (__int64)v23);
            if ( v18 >= 0 )
            {
              if ( v21 != v26.ReportID )
                v18 = RIMGetFeatureReport(v11, a6);
              if ( v18 >= 0 )
                RIMExtractCustomPTPSettings(a2, (_DWORD)a3, (_DWORD)a4, (_DWORD)v11, v24, v23[0]);
            }
          }
          goto LABEL_11;
        }
      }
    }
    SpecificValueCaps = -1073741668;
  }
  else
  {
    SpecificValueCaps = -1073741668;
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x12u,
      0x1Du,
      (__int64)&WPP_0f3e873ef26134f564643c470ca4b782_Traceguids);
  }
LABEL_11:
  if ( v11 )
    Win32FreePool((__int64)v11);
  return (unsigned int)SpecificValueCaps;
}
