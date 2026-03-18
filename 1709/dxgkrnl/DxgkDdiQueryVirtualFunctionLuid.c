/*
 * XREFs of DxgkDdiQueryVirtualFunctionLuid @ 0x1C018A428
 * Callers:
 *     ?DpiQueryVirtualFunctionLuid@@YAJPEAXGPEAU_LUID@@@Z @ 0x1C0032A20 (-DpiQueryVirtualFunctionLuid@@YAJPEAXGPEAU_LUID@@@Z.c)
 * Callees:
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x1C00248BC (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     ?QueryVirtualFunctionLuid@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_QUERYVIRTUALFUNCTIONLUID@@@Z @ 0x1C0189794 (-QueryVirtualFunctionLuid@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_QUERYVIRTUAL.c)
 */

__int64 __fastcall DxgkDdiQueryVirtualFunctionLuid(_QWORD *a1, int a2, int a3, __int64 a4)
{
  __int64 v6; // rcx
  unsigned int VirtualFunctionLuid; // ebx
  int v9; // [rsp+28h] [rbp-20h]
  _QWORD v10[3]; // [rsp+30h] [rbp-18h] BYREF

  v10[0] = 0LL;
  v6 = a1[289];
  LODWORD(v10[0]) = a3;
  v10[1] = a4;
  VirtualFunctionLuid = ADAPTER_RENDER::QueryVirtualFunctionLuid(v6, a2, (unsigned int *)v10);
  if ( bTracingEnabled )
  {
    v9 = a3;
    VgpuTrace(1, VirtualFunctionLuid, a1, L"DxgkDdiQueryVirtualFunctionLuid", (wchar_t *)L"%d", v9);
  }
  return VirtualFunctionLuid;
}
