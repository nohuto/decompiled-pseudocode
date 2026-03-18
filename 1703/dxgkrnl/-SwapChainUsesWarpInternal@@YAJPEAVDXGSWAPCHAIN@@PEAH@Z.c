/*
 * XREFs of ?SwapChainUsesWarpInternal@@YAJPEAVDXGSWAPCHAIN@@PEAH@Z @ 0x1C01BE4E4
 * Callers:
 *     ?SetIndirectSwapChainHandles@BLTQUEUE@@QEAAJPEAX@Z @ 0x1C003B7DC (-SetIndirectSwapChainHandles@BLTQUEUE@@QEAAJPEAX@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 */

__int64 __fastcall SwapChainUsesWarpInternal(struct DXGSWAPCHAIN *a1, int *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  bool v9; // zf
  _BYTE v11[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v11, a1, a3, a4);
  v9 = v11[8] == 0;
  *a2 = *((_DWORD *)a1 + 47);
  if ( !v9 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v11, v6, v7, v8);
  return 0LL;
}
