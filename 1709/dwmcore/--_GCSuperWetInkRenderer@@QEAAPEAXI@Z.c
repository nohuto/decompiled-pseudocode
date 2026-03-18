/*
 * XREFs of ??_GCSuperWetInkRenderer@@QEAAPEAXI@Z @ 0x180127910
 * Callers:
 *     ?Initialize@CComposition@@IEAAJXZ @ 0x180128180 (-Initialize@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007950C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCD3DDeviceLevel1@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C0C38 (-InternalRelease@-$ComPtr@VCD3DDeviceLevel1@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x18011E430 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 */

CSuperWetInkRenderer *__fastcall CSuperWetInkRenderer::`scalar deleting destructor'(
        CSuperWetInkRenderer *this,
        void *a2)
{
  wil::details *v3; // rcx

  v3 = (wil::details *)*((_QWORD *)this + 5);
  if ( v3 )
    wil::details::CloseHandle(v3, a2);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 4);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 3);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 2);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 1);
  Microsoft::WRL::ComPtr<CD3DDeviceLevel1>::InternalRelease((__int64 *)this);
  WPF::ProcessHeapImpl::Free(this);
  return this;
}
