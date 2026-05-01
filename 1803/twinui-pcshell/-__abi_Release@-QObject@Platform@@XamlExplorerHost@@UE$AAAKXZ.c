/*
 * XREFs of ?__abi_Release@?QObject@Platform@@XamlExplorerHost@@UE$AAAKXZ @ 0x1801FB6E0
 * Callers:
 *     ?__abi_Release@?QObject@Platform@@XamlExplorerHost@@W7E$AAAKXZ @ 0x1800A9270 (-__abi_Release@-QObject@Platform@@XamlExplorerHost@@W7E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@XamlExplorerHost@@WBA@E$AAAKXZ @ 0x1800A9280 (-__abi_Release@-QObject@Platform@@XamlExplorerHost@@WBA@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@XamlExplorerHost@@WBI@E$AAAKXZ @ 0x1800A9290 (-__abi_Release@-QObject@Platform@@XamlExplorerHost@@WBI@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@XamlExplorerHost@@WCA@E$AAAKXZ @ 0x1800A92A0 (-__abi_Release@-QObject@Platform@@XamlExplorerHost@@WCA@E$AAAKXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z @ 0x1801F9568 (-__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z.c)
 *     ?Decrement@__abi_FTMWeakRefData@@QECAKXZ @ 0x1801FAB7C (-Decrement@__abi_FTMWeakRefData@@QECAKXZ.c)
 *     ?__abi_Release@ControlBlock@Details@Platform@@UEAAKXZ @ 0x1801FB7AC (-__abi_Release@ControlBlock@Details@Platform@@UEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall ___abi_Release__QObject_Platform__XamlExplorerHost__UE_AAAKXZ(__int64 a1)
{
  unsigned int v2; // edi
  Platform::Details::ControlBlock *v3; // rbx

  v2 = __abi_FTMWeakRefData::Decrement((int **)(a1 + 112));
  if ( !v2 )
  {
    __abi_winrt_ptr_dtor(*(_QWORD *)(a1 + 88));
    __abi_winrt_ptr_dtor(*(_QWORD *)(a1 + 72));
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 64));
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 48));
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 40));
    v3 = *(Platform::Details::ControlBlock **)(a1 + 112);
    Platform::Details::ControlBlock::ReleaseTarget(v3);
    Platform::Details::ControlBlock::__abi_Release(v3);
  }
  return v2;
}
