/*
 * XREFs of ?IsCurrentModeAdvancedColor@@YAEPEAVDXGADAPTER@@IPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE@@@Z @ 0x1C00E2398
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C00B4080 (DxgkDisplayConfigDeviceInfo.c)
 * Callees:
 *     ?MapVidPnTargetToVidPnSource@ADAPTER_DISPLAY@@QEAAII@Z @ 0x1C00079B4 (-MapVidPnTargetToVidPnSource@ADAPTER_DISPLAY@@QEAAII@Z.c)
 *     ?GetColorDepthFromPickedWireFormat@@YAIT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z @ 0x1C00B999C (-GetColorDepthFromPickedWireFormat@@YAIT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z.c)
 *     ?DmmGetCurrentWireFormatAndColorSpace@@YAJPEAXIIPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE@@@Z @ 0x1C00E25C8 (-DmmGetCurrentWireFormatAndColorSpace@@YAJPEAXIIPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_D.c)
 */

unsigned __int8 __fastcall IsCurrentModeAdvancedColor(
        ADAPTER_DISPLAY **a1,
        unsigned int a2,
        union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE *a3,
        enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE *a4)
{
  __int64 v5; // rbp
  unsigned int v8; // eax
  int CurrentWireFormatAndColorSpace; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  char v13; // di
  __int64 v14; // r15
  union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v15; // ebx
  enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE v16; // esi
  __int64 v18; // rax
  unsigned int v19; // eax
  _QWORD *v20; // r11
  enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE v21[10]; // [rsp+30h] [rbp-28h] BYREF
  union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v22; // [rsp+60h] [rbp+8h] BYREF

  v5 = a2;
  v8 = ADAPTER_DISPLAY::MapVidPnTargetToVidPnSource(a1[288], a2);
  CurrentWireFormatAndColorSpace = DmmGetCurrentWireFormatAndColorSpace(a1, v8, v5, &v22, v21);
  v13 = 0;
  v14 = CurrentWireFormatAndColorSpace;
  if ( CurrentWireFormatAndColorSpace < 0 )
  {
    v18 = WdLogNewEntry5_WdWarning(v11, v10, v12);
    *(_QWORD *)(v18 + 24) = *((int *)a1 + 68);
    *(_QWORD *)(v18 + 32) = *((unsigned int *)a1 + 67);
    v19 = ADAPTER_DISPLAY::MapVidPnTargetToVidPnSource(a1[288], v5);
    v20[5] = v19;
    v20[6] = v5;
    v20[7] = v14;
    WdLogEvent5_WdWarning(v20);
    return 0;
  }
  else
  {
    v15.0 = v22.0;
    if ( a3 )
      a3->0 = v22.0;
    v16 = v21[0];
    if ( a4 )
      *a4 = v21[0];
    if ( v16 == D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G2084_P2020
      && (unsigned int)GetColorDepthFromPickedWireFormat(v15.Value) > 8
      || v16 == D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G22_P709_WCG
      && (unsigned int)GetColorDepthFromPickedWireFormat(v15.Value) >= 8 )
    {
      return 1;
    }
    return v13;
  }
}
