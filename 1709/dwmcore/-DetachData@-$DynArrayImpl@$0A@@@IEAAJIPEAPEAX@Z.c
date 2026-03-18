/*
 * XREFs of ?DetachData@?$DynArrayImpl@$0A@@@IEAAJIPEAPEAX@Z @ 0x180068504
 * Callers:
 *     ?ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEAV?$DynArray@PEAVCOverlayContext@@$0A@@@AEAV?$DynArray@UReservedPlaneInfo@COverlayContext@@$0A@@@@Z @ 0x180068020 (-ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEAV-$DynArray@PEAVCOverlayContext@@$.c)
 *     ?RetrieveCurrentLightBufferForContextNoRef@CLightStack@@QEAAJPEAVCDrawingContext@@PEBVCMILMatrix@@PEAPEAVCHwLightCollectionBuffer@@@Z @ 0x18009E9C8 (-RetrieveCurrentLightBufferForContextNoRef@CLightStack@@QEAAJPEAVCDrawingContext@@PEBVCMILMatrix.c)
 *     ?ParseGpuIdListKey@CCommonRegistryData@@CA_NPEBDPEAPEAUGpuId@1@PEAI@Z @ 0x1800BD8A0 (-ParseGpuIdListKey@CCommonRegistryData@@CA_NPEBDPEAPEAUGpuId@1@PEAI@Z.c)
 *     ?ReplaceWith@?$DynArray@VOverlayPlaneInfo@COverlayContext@@$0A@@@QEAAJPEAV1@@Z @ 0x1801446F8 (-ReplaceWith@-$DynArray@VOverlayPlaneInfo@COverlayContext@@$0A@@@QEAAJPEAV1@@Z.c)
 * Callees:
 *     memcpy_0 @ 0x1800C5D86 (memcpy_0.c)
 */

__int64 __fastcall DynArrayImpl<0>::DetachData(__int64 a1, unsigned int a2, _QWORD *a3)
{
  void *v3; // rsi
  int v4; // edi
  unsigned __int64 v8; // rcx
  SIZE_T v9; // r8
  int v10; // eax

  v3 = *(void **)a1;
  v4 = 0;
  if ( *(_QWORD *)a1 == *(_QWORD *)(a1 + 8) )
  {
    v3 = 0LL;
    v8 = *(unsigned int *)(a1 + 20);
    if ( v8 && a2 && a2 < 0xFFFFFFFFFFFFFFFFuLL / v8 )
    {
      v9 = v8 * a2;
      if ( !v9 )
        v9 = 1LL;
      v3 = HeapAlloc(WPF::g_processHeap, 0, v9);
      if ( !v3 )
        v4 = -2147024882;
    }
    else
    {
      v4 = -2147024809;
    }
    if ( v4 < 0 )
    {
      *a3 = 0LL;
      return (unsigned int)v4;
    }
    v10 = *(_DWORD *)(a1 + 24);
    if ( v10 )
      memcpy_0(v3, *(const void **)a1, a2 * v10);
  }
  *(_QWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *a3 = v3;
  return (unsigned int)v4;
}
