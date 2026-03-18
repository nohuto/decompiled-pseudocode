/*
 * XREFs of DxgkDdiGetVendorAndDevice @ 0x1C0189FF8
 * Callers:
 *     ?DpiDdiGetVendorAndDevice@@YAXPEAXGPEAG1@Z @ 0x1C0032440 (-DpiDdiGetVendorAndDevice@@YAXPEAXGPEAG1@Z.c)
 * Callees:
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x1C00248BC (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     ?GetVendorAndDevice@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_GETVENDORANDDEVICE@@@Z @ 0x1C01892D4 (-GetVendorAndDevice@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_GETVENDORANDDEVICE.c)
 */

void __fastcall DxgkDdiGetVendorAndDevice(_QWORD *a1, int a2, unsigned __int16 a3, _WORD *a4, unsigned __int16 *a5)
{
  int v5; // esi
  __int64 v7; // rcx
  bool v9; // zf
  unsigned __int16 v10; // cx
  int v11; // [rsp+28h] [rbp-20h]
  int v12; // [rsp+30h] [rbp-18h]
  int v13; // [rsp+38h] [rbp-10h]
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF

  v5 = a3;
  v14 = 0LL;
  v7 = a1[289];
  v14 = a3;
  ADAPTER_RENDER::GetVendorAndDevice(v7, a2, (unsigned int *)&v14);
  v9 = bTracingEnabled == 0;
  v10 = HIWORD(v14);
  *a4 = WORD2(v14);
  *a5 = v10;
  if ( !v9 )
  {
    v13 = v10;
    v12 = (unsigned __int16)*a4;
    v11 = v5;
    VgpuTrace(1, 0, a1, L"DxgkDdiGetVendorAndDevice", (wchar_t *)L"%d %d %d", v11, v12, v13);
  }
}
