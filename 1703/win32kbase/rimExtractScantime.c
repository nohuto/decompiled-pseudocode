/*
 * XREFs of rimExtractScantime @ 0x1C0112DA8
 * Callers:
 *     rimUpdatePointerDeviceFrameScanTime @ 0x1C0113FA0 (rimUpdatePointerDeviceFrameScanTime.c)
 * Callees:
 *     rimHidP_GetUsageValue @ 0x1C000848C (rimHidP_GetUsageValue.c)
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0051A08 (WPP_RECORDER_SF_D.c)
 *     RIMDivideToCeilingOrNearestInt @ 0x1C0110C0C (RIMDivideToCeilingOrNearestInt.c)
 */

__int64 __fastcall rimExtractScantime(
        __int64 a1,
        __int64 a2,
        struct _HIDP_PREPARSED_DATA *a3,
        char *a4,
        unsigned int a5,
        _QWORD *a6,
        _DWORD *a7)
{
  unsigned int v7; // eax
  int UsageValue; // eax
  int v11; // edx
  _DWORD *v12; // rsi
  _QWORD *v13; // r14
  int v14; // r8d
  unsigned int v15; // eax
  unsigned int v16; // edx
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  __int16 v19; // r8
  unsigned int v20; // edi
  __int64 result; // rax
  __int64 v22; // [rsp+28h] [rbp-30h]
  unsigned int v23; // [rsp+68h] [rbp+10h] BYREF

  v23 = 0;
  v7 = a5;
  ++*(_DWORD *)(a2 + 1432);
  UsageValue = rimHidP_GetUsageValue(HidP_Input, 0xDu, 0, 0x56u, &v23, a3, a4, v7);
  v12 = a7;
  v13 = a6;
  if ( UsageValue < 0 )
  {
    LOBYTE(v11) = 2;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v11,
      17,
      59,
      (__int64)&WPP_dfd4f4505ada31d2876bd05252fd7a48_Traceguids);
LABEL_17:
    *(_DWORD *)(a2 + 1420) += 80;
    goto LABEL_18;
  }
  v14 = *(_DWORD *)(a2 + 1432);
  if ( v14 == 1 )
  {
    *(_DWORD *)(a2 + 1408) = *a7;
    *(_QWORD *)(a2 + 1448) = *v13;
    v15 = v23;
    *(_DWORD *)(a2 + 1420) = v23;
    *(_DWORD *)(a2 + 1424) = v15;
    goto LABEL_18;
  }
  if ( (*(_DWORD *)(a2 + 1456) & 1) == 0 )
  {
    v16 = *(_DWORD *)(a2 + 1420) % *(_DWORD *)(a2 + 1464);
    if ( v23 < v16 )
      ++*(_DWORD *)(a2 + 1436);
    v17 = v23 + *(_DWORD *)(a2 + 1464) * *(_DWORD *)(a2 + 1436);
    if ( v17 <= *(_DWORD *)(a2 + 1420) )
    {
      LOBYTE(v16) = 3;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v16,
        20,
        56,
        (__int64)&WPP_dfd4f4505ada31d2876bd05252fd7a48_Traceguids);
      *(_DWORD *)(a2 + 1456) |= 1u;
    }
    else
    {
      LODWORD(a7) = 0;
      *(_DWORD *)(a2 + 1420) = v17;
      if ( (unsigned int)RIMDivideToCeilingOrNearestInt(v17 - *(_DWORD *)(a2 + 1424), v14 - 1, 1, &a7) )
        *(_DWORD *)(a2 + 1428) = (_DWORD)a7;
    }
  }
  if ( (*(_DWORD *)(a2 + 1456) & 1) != 0 )
  {
    if ( *(_DWORD *)(a2 + 1428) && *(_DWORD *)(a2 + 1432) >= 5u )
    {
      LODWORD(v22) = *(_DWORD *)(a2 + 1428);
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x14u,
        0x39u,
        (__int64)&WPP_dfd4f4505ada31d2876bd05252fd7a48_Traceguids,
        v22);
      *(_DWORD *)(a2 + 1420) += *(_DWORD *)(a2 + 1428);
      goto LABEL_18;
    }
    LODWORD(v22) = 80;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x14u,
      0x3Au,
      (__int64)&WPP_dfd4f4505ada31d2876bd05252fd7a48_Traceguids,
      v22);
    goto LABEL_17;
  }
LABEL_18:
  if ( *(_DWORD *)(a2 + 1432) > 1u )
  {
    v18 = *(_DWORD *)(a2 + 1420) - *(_DWORD *)(a2 + 1424);
    LODWORD(a7) = 0;
    if ( (unsigned int)RIMDivideToCeilingOrNearestInt(v18, 0xAu, 0, &a7) )
    {
      v20 = (unsigned int)a7;
    }
    else
    {
      v20 = 8;
      LODWORD(v22) = 8;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x14u,
        v19 + 60,
        (__int64)&WPP_dfd4f4505ada31d2876bd05252fd7a48_Traceguids,
        v22);
    }
    *v12 = v20 + *(_DWORD *)(a2 + 1408);
    *v13 = *(_QWORD *)(a2 + 1448) + (unsigned __int64)v20 * *(_QWORD *)(a1 + 648) / 0x3E8;
  }
  *(_DWORD *)(a2 + 1416) = *(_DWORD *)(a2 + 1412);
  *(_DWORD *)(a2 + 1412) = *v12;
  result = *v13;
  *(_QWORD *)(a2 + 1440) = *v13;
  return result;
}
