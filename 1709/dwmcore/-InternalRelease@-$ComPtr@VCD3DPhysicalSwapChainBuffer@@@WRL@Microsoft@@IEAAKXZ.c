/*
 * XREFs of ?InternalRelease@?$ComPtr@VCD3DPhysicalSwapChainBuffer@@@WRL@Microsoft@@IEAAKXZ @ 0x180128430
 * Callers:
 *     ??1?$ComPtr@VCD3DPhysicalSwapChainBuffer@@@WRL@Microsoft@@QEAA@XZ @ 0x1801274D0 (--1-$ComPtr@VCD3DPhysicalSwapChainBuffer@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?_Tidy@?$vector@USuperWetPass@CWetInkManager@@V?$allocator@USuperWetPass@CWetInkManager@@@std@@@std@@IEAAXXZ @ 0x180129094 (-_Tidy@-$vector@USuperWetPass@CWetInkManager@@V-$allocator@USuperWetPass@CWetInkManager@@@std@@@.c)
 *     ??4SuperWetPass@CWetInkManager@@QEAAAEAU01@$$QEAU01@@Z @ 0x18013A974 (--4SuperWetPass@CWetInkManager@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ?clear@?$vector@USuperWetPass@CWetInkManager@@V?$allocator@USuperWetPass@CWetInkManager@@@std@@@std@@QEAAXXZ @ 0x18013ACC0 (-clear@-$vector@USuperWetPass@CWetInkManager@@V-$allocator@USuperWetPass@CWetInkManager@@@std@@@.c)
 *     ?erase@?$vector@USuperWetPass@CWetInkManager@@V?$allocator@USuperWetPass@CWetInkManager@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@USuperWetPass@CWetInkManager@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@USuperWetPass@CWetInkManager@@@std@@@std@@@2@0@Z @ 0x18013AD18 (-erase@-$vector@USuperWetPass@CWetInkManager@@V-$allocator@USuperWetPass@CWetInkManager@@@std@@@.c)
 *     ?erase@?$vector@USuperWetPass@CWetInkManager@@V?$allocator@USuperWetPass@CWetInkManager@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@USuperWetPass@CWetInkManager@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@USuperWetPass@CWetInkManager@@@std@@@std@@@2@@Z @ 0x18013ADD4 (-erase@-$vector@USuperWetPass@CWetInkManager@@V-$allocator@USuperWetPass@CWetInkMan_ea_18013ADD4.c)
 *     ?Create@CD3DPhysicalSwapChainBuffer@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAPEAV1@@Z @ 0x1801A8CD0 (-Create@CD3DPhysicalSwapChainBuffer@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAPEAV1@@.c)
 *     ?GetCurrentPhysicalBackBuffer@CSwapChainBase@@QEAAJPEAPEAVCD3DPhysicalSwapChainBuffer@@@Z @ 0x1801B2858 (-GetCurrentPhysicalBackBuffer@CSwapChainBase@@QEAAJPEAPEAVCD3DPhysicalSwapChainBuffer@@@Z.c)
 * Callees:
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180081030 (-Release@CMILPoolResource@@UEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CD3DPhysicalSwapChainBuffer>::InternalRelease(CMILPoolResource **a1)
{
  CMILPoolResource *v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return CMILPoolResource::Release(v1);
  }
  return result;
}
