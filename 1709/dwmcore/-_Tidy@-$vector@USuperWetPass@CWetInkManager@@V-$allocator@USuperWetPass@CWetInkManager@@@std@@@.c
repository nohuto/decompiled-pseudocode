/*
 * XREFs of ?_Tidy@?$vector@USuperWetPass@CWetInkManager@@V?$allocator@USuperWetPass@CWetInkManager@@@std@@@std@@IEAAXXZ @ 0x180129094
 * Callers:
 *     ??1CComposition@@MEAA@XZ @ 0x1801274D8 (--1CComposition@@MEAA@XZ.c)
 *     ?Initialize@CComposition@@IEAAJXZ @ 0x180128180 (-Initialize@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x180001680 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007950C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCD3DPhysicalSwapChainBuffer@@@WRL@Microsoft@@IEAAKXZ @ 0x180128430 (-InternalRelease@-$ComPtr@VCD3DPhysicalSwapChainBuffer@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall std::vector<CWetInkManager::SuperWetPass>::_Tidy(void **a1)
{
  char *v1; // rdi
  char *v3; // rsi

  v1 = (char *)*a1;
  if ( *a1 )
  {
    v3 = (char *)a1[1];
    while ( v1 != v3 )
    {
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v1 + 3);
      Microsoft::WRL::ComPtr<CD3DPhysicalSwapChainBuffer>::InternalRelease((CMILPoolResource **)v1 + 1);
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)v1);
      v1 += 32;
    }
    WPF::ProcessHeapImpl::Free(*a1);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
}
