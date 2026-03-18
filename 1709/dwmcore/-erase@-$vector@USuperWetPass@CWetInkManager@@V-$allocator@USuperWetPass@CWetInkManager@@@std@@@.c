/*
 * XREFs of ?erase@?$vector@USuperWetPass@CWetInkManager@@V?$allocator@USuperWetPass@CWetInkManager@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@USuperWetPass@CWetInkManager@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@USuperWetPass@CWetInkManager@@@std@@@std@@@2@0@Z @ 0x18013AD18
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x180012360 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 *     ?DrawSuperWetPassForFrame@CWetInkManager@@AEAAJ_K@Z @ 0x18011D224 (-DrawSuperWetPassForFrame@CWetInkManager@@AEAAJ_K@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x180001680 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007950C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCD3DPhysicalSwapChainBuffer@@@WRL@Microsoft@@IEAAKXZ @ 0x180128430 (-InternalRelease@-$ComPtr@VCD3DPhysicalSwapChainBuffer@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4SuperWetPass@CWetInkManager@@QEAAAEAU01@$$QEAU01@@Z @ 0x18013A974 (--4SuperWetPass@CWetInkManager@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ?clear@?$vector@USuperWetPass@CWetInkManager@@V?$allocator@USuperWetPass@CWetInkManager@@@std@@@std@@QEAAXXZ @ 0x18013ACC0 (-clear@-$vector@USuperWetPass@CWetInkManager@@V-$allocator@USuperWetPass@CWetInkManager@@@std@@@.c)
 */

__int64 *__fastcall std::vector<CWetInkManager::SuperWetPass>::erase(__int64 *a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 v8; // r14
  __int64 v9; // rbp
  __int64 v10; // r12
  __int64 i; // r14
  __int64 *result; // rax

  v4 = a4;
  if ( a3 == *a1 && a4 == a1[1] )
  {
    std::vector<CWetInkManager::SuperWetPass>::clear(a1);
  }
  else if ( a3 != a4 )
  {
    v8 = a1[1];
    v9 = a3;
    if ( a4 != v8 )
    {
      do
      {
        CWetInkManager::SuperWetPass::operator=(v9, v4);
        v9 += 32LL;
        v4 += 32LL;
      }
      while ( v4 != v8 );
    }
    v10 = a1[1];
    for ( i = v9; i != v10; i += 32LL )
    {
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(i + 24));
      Microsoft::WRL::ComPtr<CD3DPhysicalSwapChainBuffer>::InternalRelease((CMILPoolResource **)(i + 8));
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)i);
    }
    a1[1] = v9;
  }
  result = a2;
  *a2 = a3;
  return result;
}
