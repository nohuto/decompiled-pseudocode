/*
 * XREFs of ??4SuperWetPass@CWetInkManager@@QEAAAEAU01@$$QEAU01@@Z @ 0x18013A974
 * Callers:
 *     ?erase@?$vector@USuperWetPass@CWetInkManager@@V?$allocator@USuperWetPass@CWetInkManager@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@USuperWetPass@CWetInkManager@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@USuperWetPass@CWetInkManager@@@std@@@std@@@2@0@Z @ 0x18013AD18 (-erase@-$vector@USuperWetPass@CWetInkManager@@V-$allocator@USuperWetPass@CWetInkManager@@@std@@@.c)
 *     ?erase@?$vector@USuperWetPass@CWetInkManager@@V?$allocator@USuperWetPass@CWetInkManager@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@USuperWetPass@CWetInkManager@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@USuperWetPass@CWetInkManager@@@std@@@std@@@2@@Z @ 0x18013ADD4 (-erase@-$vector@USuperWetPass@CWetInkManager@@V-$allocator@USuperWetPass@CWetInkMan_ea_18013ADD4.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x180001680 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007950C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCD3DPhysicalSwapChainBuffer@@@WRL@Microsoft@@IEAAKXZ @ 0x180128430 (-InternalRelease@-$ComPtr@VCD3DPhysicalSwapChainBuffer@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CWetInkManager::SuperWetPass::operator=(__int64 a1, __int64 a2)
{
  CMILPoolResource *v3; // rcx
  CMILPoolResource *v5; // rax
  __int64 *v6; // rax
  __int64 v7; // rcx
  CMILPoolResource *v8; // rax
  CMILPoolResource *v9; // rcx
  CMILPoolResource **v10; // rdi
  CMILPoolResource *v11; // rax
  CMILPoolResource *v13; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  if ( &v13 != (CMILPoolResource **)a2 )
  {
    v3 = *(CMILPoolResource **)a2;
    *(_QWORD *)a2 = 0LL;
  }
  v5 = *(CMILPoolResource **)a1;
  *(_QWORD *)a1 = v3;
  v13 = v5;
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v13);
  v6 = (__int64 *)(a2 + 8);
  v7 = 0LL;
  if ( &v13 != (CMILPoolResource **)(a2 + 8) )
  {
    v7 = *v6;
    *v6 = 0LL;
  }
  v8 = *(CMILPoolResource **)(a1 + 8);
  *(_QWORD *)(a1 + 8) = v7;
  v13 = v8;
  Microsoft::WRL::ComPtr<CD3DPhysicalSwapChainBuffer>::InternalRelease(&v13);
  v9 = 0LL;
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
  v10 = (CMILPoolResource **)(a2 + 24);
  if ( &v13 != v10 )
  {
    v9 = *v10;
    *v10 = 0LL;
  }
  v11 = *(CMILPoolResource **)(a1 + 24);
  *(_QWORD *)(a1 + 24) = v9;
  v13 = v11;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v13);
  return a1;
}
