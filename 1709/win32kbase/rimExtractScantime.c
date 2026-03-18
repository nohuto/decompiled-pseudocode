/*
 * XREFs of rimExtractScantime @ 0x1C0111890
 * Callers:
 *     rimUpdatePointerDeviceFrameScanTime @ 0x1C0112A74 (rimUpdatePointerDeviceFrameScanTime.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C001802C (WPP_RECORDER_SF_d.c)
 *     rimHidP_GetUsageValue @ 0x1C0094650 (rimHidP_GetUsageValue.c)
 *     RIMDivideToCeilingOrNearestInt @ 0x1C010F6A4 (RIMDivideToCeilingOrNearestInt.c)
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
  _DWORD *v11; // rsi
  _QWORD *v12; // r14
  int v13; // r8d
  unsigned int v14; // eax
  unsigned int v15; // r9d
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  unsigned int v18; // edi
  __int64 result; // rax
  __int64 v20; // [rsp+28h] [rbp-30h]
  unsigned int v21; // [rsp+68h] [rbp+10h] BYREF

  v21 = 0;
  v7 = a5;
  ++*(_DWORD *)(a2 + 768);
  UsageValue = rimHidP_GetUsageValue(HidP_Input, 0xDu, 0, 0x56u, &v21, a3, a4, v7);
  v11 = a7;
  v12 = a6;
  if ( UsageValue < 0 )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0x11u,
      0x3Cu,
      (__int64)&WPP_4b64136d5a3a3091dec9dc3eda06ecad_Traceguids);
LABEL_17:
    *(_DWORD *)(a2 + 756) += 80;
    goto LABEL_18;
  }
  v13 = *(_DWORD *)(a2 + 768);
  if ( v13 == 1 )
  {
    *(_DWORD *)(a2 + 744) = *a7;
    *(_QWORD *)(a2 + 784) = *v12;
    v14 = v21;
    *(_DWORD *)(a2 + 756) = v21;
    *(_DWORD *)(a2 + 760) = v14;
    goto LABEL_18;
  }
  if ( (*(_DWORD *)(a2 + 792) & 1) == 0 )
  {
    v15 = *(_DWORD *)(a2 + 756);
    if ( v21 < v15 % *(_DWORD *)(a2 + 800) )
      ++*(_DWORD *)(a2 + 772);
    v16 = v21 + *(_DWORD *)(a2 + 800) * *(_DWORD *)(a2 + 772);
    if ( v16 <= v15 )
    {
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x14u,
        0x39u,
        (__int64)&WPP_4b64136d5a3a3091dec9dc3eda06ecad_Traceguids);
      *(_DWORD *)(a2 + 792) |= 1u;
    }
    else
    {
      LODWORD(a7) = 0;
      *(_DWORD *)(a2 + 756) = v16;
      if ( (unsigned int)RIMDivideToCeilingOrNearestInt(v16 - *(_DWORD *)(a2 + 760), v13 - 1, 1, (int *)&a7) )
        *(_DWORD *)(a2 + 764) = (_DWORD)a7;
    }
  }
  if ( (*(_DWORD *)(a2 + 792) & 1) != 0 )
  {
    if ( *(_DWORD *)(a2 + 764) && *(_DWORD *)(a2 + 768) >= 5u )
    {
      LODWORD(v20) = *(_DWORD *)(a2 + 764);
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x14u,
        0x3Au,
        (__int64)&WPP_4b64136d5a3a3091dec9dc3eda06ecad_Traceguids,
        v20);
      *(_DWORD *)(a2 + 756) += *(_DWORD *)(a2 + 764);
      goto LABEL_18;
    }
    LODWORD(v20) = 80;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x14u,
      0x3Bu,
      (__int64)&WPP_4b64136d5a3a3091dec9dc3eda06ecad_Traceguids,
      v20);
    goto LABEL_17;
  }
LABEL_18:
  if ( *(_DWORD *)(a2 + 768) > 1u )
  {
    v17 = *(_DWORD *)(a2 + 756) - *(_DWORD *)(a2 + 760);
    LODWORD(a7) = 0;
    if ( (unsigned int)RIMDivideToCeilingOrNearestInt(v17, 0xAu, 0, (int *)&a7) )
    {
      v18 = (unsigned int)a7;
    }
    else
    {
      v18 = 8;
      LODWORD(v20) = 8;
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x14u,
        0x3Du,
        (__int64)&WPP_4b64136d5a3a3091dec9dc3eda06ecad_Traceguids,
        v20);
    }
    *v11 = v18 + *(_DWORD *)(a2 + 744);
    *v12 = *(_QWORD *)(a2 + 784) + (unsigned __int64)v18 * *(_QWORD *)(a1 + 648) / 0x3E8;
  }
  *(_DWORD *)(a2 + 752) = *(_DWORD *)(a2 + 748);
  *(_DWORD *)(a2 + 748) = *v11;
  result = *v12;
  *(_QWORD *)(a2 + 776) = *v12;
  return result;
}
