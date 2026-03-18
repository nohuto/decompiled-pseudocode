/*
 * XREFs of rimExtractParallelFrameInfoAndAbandonIncompleteFrame @ 0x1C01110E4
 * Callers:
 *     rimExtractFrameInfoAndAbandonIncompleteFrame @ 0x1C0110EE4 (rimExtractFrameInfoAndAbandonIncompleteFrame.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C0008C0C (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C001802C (WPP_RECORDER_SF_d.c)
 *     RIMAbandonPointerDeviceFrame @ 0x1C00188F0 (RIMAbandonPointerDeviceFrame.c)
 *     rimHidP_GetUsageValue @ 0x1C0094650 (rimHidP_GetUsageValue.c)
 */

__int64 __fastcall rimExtractParallelFrameInfoAndAbandonIncompleteFrame(
        __int64 a1,
        __int64 a2,
        char *a3,
        unsigned int a4,
        unsigned int *a5,
        unsigned int *a6,
        _DWORD *a7,
        _DWORD *a8,
        _DWORD *a9,
        _WORD *a10)
{
  unsigned int v12; // ebp
  struct _HIDP_PREPARSED_DATA *v13; // rbx
  __int64 v14; // r14
  unsigned int v15; // eax
  unsigned int v16; // ecx
  unsigned int v17; // eax
  unsigned int v18; // ecx
  _DWORD *v19; // rax
  __int64 v21; // [rsp+28h] [rbp-60h]
  __int64 v22; // [rsp+30h] [rbp-58h]
  __int64 v23; // [rsp+40h] [rbp-48h]

  v12 = 0;
  v13 = *(struct _HIDP_PREPARSED_DATA **)(*(_QWORD *)(a2 + 456) + 16LL);
  v23 = *(_QWORD *)(a2 + 472);
  v14 = *(_QWORD *)(v23 + 672);
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0x2Eu,
    (__int64)&WPP_4b64136d5a3a3091dec9dc3eda06ecad_Traceguids);
  *a8 = 0;
  *a9 = 0;
  *a5 = 0;
  *a6 = 0;
  *a7 = 0;
  *a10 = 0;
  if ( rimHidP_GetUsageValue(HidP_Input, 0xDu, 0, 0x54u, a5, v13, a3, a4) < 0 )
  {
    if ( (*(_DWORD *)(v14 + 32) & 1) != 0 )
    {
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x14u,
        0x31u,
        (__int64)&WPP_4b64136d5a3a3091dec9dc3eda06ecad_Traceguids);
      goto LABEL_20;
    }
    *a6 = *(_DWORD *)v14;
    v19 = a9;
LABEL_17:
    *v19 = 1;
    goto LABEL_18;
  }
  if ( *a5 )
  {
    if ( *(_DWORD *)(v14 + 36) )
    {
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x14u,
        0x2Fu,
        (__int64)&WPP_4b64136d5a3a3091dec9dc3eda06ecad_Traceguids);
      RIMAbandonPointerDeviceFrame(a1, a2);
    }
    v15 = *a5;
    if ( *a5 <= *(_DWORD *)(v23 + 680) )
    {
      v16 = *(_DWORD *)v14;
      if ( v15 <= *(_DWORD *)v14 )
      {
        *a6 = v15;
        *(_DWORD *)(v14 + 36) = 0;
        *a8 = 1;
      }
      else
      {
        *a6 = v16;
        *(_DWORD *)(v14 + 36) = v15 - v16;
      }
      goto LABEL_8;
    }
    LODWORD(v22) = *(_DWORD *)(v23 + 680);
    LODWORD(v21) = *a5;
    WPP_RECORDER_SF_dd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x14u,
      0x30u,
      (__int64)&WPP_4b64136d5a3a3091dec9dc3eda06ecad_Traceguids,
      v21,
      v22);
LABEL_20:
    v12 = -1073741668;
    goto LABEL_21;
  }
  v17 = *(_DWORD *)(v14 + 36);
  if ( v17 )
  {
    v18 = *(_DWORD *)v14;
    if ( v17 > *(_DWORD *)v14 )
    {
      *a6 = v18;
      *(_DWORD *)(v14 + 36) = v17 - v18;
      goto LABEL_18;
    }
    *a6 = v17;
    v19 = a8;
    *(_DWORD *)(v14 + 36) = 0;
    goto LABEL_17;
  }
LABEL_8:
  *a7 = 1;
LABEL_18:
  *a10 = *(_WORD *)(v14 + 6);
LABEL_21:
  LODWORD(v21) = v12;
  WPP_RECORDER_SF_d(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0x32u,
    (__int64)&WPP_4b64136d5a3a3091dec9dc3eda06ecad_Traceguids,
    v21);
  return v12;
}
