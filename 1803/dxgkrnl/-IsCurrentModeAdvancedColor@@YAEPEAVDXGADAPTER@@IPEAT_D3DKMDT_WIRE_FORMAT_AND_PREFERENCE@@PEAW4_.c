/*
 * XREFs of ?IsCurrentModeAdvancedColor@@YAEPEAVDXGADAPTER@@IPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE@@@Z @ 0x1C00DC224
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C00AB300 (DxgkDisplayConfigDeviceInfo.c)
 * Callees:
 *     ?MapVidPnTargetToVidPnSource@ADAPTER_DISPLAY@@QEAAII@Z @ 0x1C0014CA0 (-MapVidPnTargetToVidPnSource@ADAPTER_DISPLAY@@QEAAII@Z.c)
 *     ?DmmGetCurrentWireFormatAndColorSpace@@YAJPEAXIIPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE@@@Z @ 0x1C00A9F40 (-DmmGetCurrentWireFormatAndColorSpace@@YAJPEAXIIPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_D.c)
 */

unsigned __int8 __fastcall IsCurrentModeAdvancedColor(
        ADAPTER_DISPLAY **a1,
        unsigned int a2,
        union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE *a3,
        enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE *a4)
{
  __int64 v5; // rbp
  int v8; // eax
  int CurrentWireFormatAndColorSpace; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  char v12; // cl
  __int64 v13; // r14
  unsigned __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v17; // rax
  unsigned int v18; // eax
  _QWORD *v19; // r11
  enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE v20[10]; // [rsp+30h] [rbp-28h] BYREF
  union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v21; // [rsp+60h] [rbp+8h] BYREF

  v5 = a2;
  v8 = ADAPTER_DISPLAY::MapVidPnTargetToVidPnSource(a1[307], a2);
  CurrentWireFormatAndColorSpace = DmmGetCurrentWireFormatAndColorSpace((DXGADAPTER *)a1, v8, v5, &v21, v20);
  v12 = 0;
  v13 = CurrentWireFormatAndColorSpace;
  if ( CurrentWireFormatAndColorSpace < 0 )
  {
    v17 = WdLogNewEntry5_WdWarning(0LL, v10, v11);
    *(_QWORD *)(v17 + 24) = *((int *)a1 + 68);
    *(_QWORD *)(v17 + 32) = *((unsigned int *)a1 + 67);
    v18 = ADAPTER_DISPLAY::MapVidPnTargetToVidPnSource(a1[307], v5);
    v19[5] = v18;
    v19[6] = v5;
    v19[7] = v13;
    WdLogEvent5_WdWarning(v19);
    return 0;
  }
  else
  {
    if ( a3 )
      a3->0 = v21.0;
    v14 = v20[0];
    if ( a4 )
      *a4 = v20[0];
    if ( (unsigned int)v14 <= 0x20 )
    {
      v15 = 0x140001000LL;
      if ( _bittest64(&v15, v14) )
        return 1;
    }
    return v12;
  }
}
