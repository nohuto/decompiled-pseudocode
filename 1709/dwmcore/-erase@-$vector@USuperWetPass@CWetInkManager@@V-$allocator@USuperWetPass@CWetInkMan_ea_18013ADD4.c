/*
 * XREFs of ?erase@?$vector@USuperWetPass@CWetInkManager@@V?$allocator@USuperWetPass@CWetInkManager@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@USuperWetPass@CWetInkManager@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@USuperWetPass@CWetInkManager@@@std@@@std@@@2@@Z @ 0x18013ADD4
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x180012360 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 *     ?DrawSuperWetPassForFrame@CWetInkManager@@AEAAJ_K@Z @ 0x18011D224 (-DrawSuperWetPassForFrame@CWetInkManager@@AEAAJ_K@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x180001680 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007950C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCD3DPhysicalSwapChainBuffer@@@WRL@Microsoft@@IEAAKXZ @ 0x180128430 (-InternalRelease@-$ComPtr@VCD3DPhysicalSwapChainBuffer@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4SuperWetPass@CWetInkManager@@QEAAAEAU01@$$QEAU01@@Z @ 0x18013A974 (--4SuperWetPass@CWetInkManager@@QEAAAEAU01@$$QEAU01@@Z.c)
 */

_QWORD *__fastcall std::vector<CWetInkManager::SuperWetPass>::erase(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // rbp
  __int64 i; // rdi
  __int64 v8; // rbp
  __int64 j; // rdi
  _QWORD *result; // rax

  v3 = *(_QWORD *)(a1 + 8);
  for ( i = a3 + 32; i != v3; i += 32LL )
    CWetInkManager::SuperWetPass::operator=(i - 32, i);
  v8 = *(_QWORD *)(a1 + 8);
  for ( j = v8 - 32; j != v8; j += 32LL )
  {
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(j + 24));
    Microsoft::WRL::ComPtr<CD3DPhysicalSwapChainBuffer>::InternalRelease((CMILPoolResource **)(j + 8));
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)j);
  }
  *(_QWORD *)(a1 + 8) -= 32LL;
  result = a2;
  *a2 = a3;
  return result;
}
