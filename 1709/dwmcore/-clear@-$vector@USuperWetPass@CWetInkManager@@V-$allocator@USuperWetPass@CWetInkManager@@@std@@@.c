/*
 * XREFs of ?clear@?$vector@USuperWetPass@CWetInkManager@@V?$allocator@USuperWetPass@CWetInkManager@@@std@@@std@@QEAAXXZ @ 0x18013ACC0
 * Callers:
 *     ?erase@?$vector@USuperWetPass@CWetInkManager@@V?$allocator@USuperWetPass@CWetInkManager@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@USuperWetPass@CWetInkManager@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@USuperWetPass@CWetInkManager@@@std@@@std@@@2@0@Z @ 0x18013AD18 (-erase@-$vector@USuperWetPass@CWetInkManager@@V-$allocator@USuperWetPass@CWetInkManager@@@std@@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x180001680 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007950C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCD3DPhysicalSwapChainBuffer@@@WRL@Microsoft@@IEAAKXZ @ 0x180128430 (-InternalRelease@-$ComPtr@VCD3DPhysicalSwapChainBuffer@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall std::vector<CWetInkManager::SuperWetPass>::clear(__int64 *a1)
{
  __int64 v1; // rsi
  __int64 i; // rbx
  __int64 result; // rax

  v1 = a1[1];
  for ( i = *a1; i != v1; i += 32LL )
  {
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(i + 24));
    Microsoft::WRL::ComPtr<CD3DPhysicalSwapChainBuffer>::InternalRelease((CMILPoolResource **)(i + 8));
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)i);
  }
  result = *a1;
  a1[1] = *a1;
  return result;
}
