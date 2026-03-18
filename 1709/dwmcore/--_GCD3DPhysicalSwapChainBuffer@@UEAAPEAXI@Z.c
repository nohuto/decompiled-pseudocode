/*
 * XREFs of ??_GCD3DPhysicalSwapChainBuffer@@UEAAPEAXI@Z @ 0x1801A8C30
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800684E0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007950C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x18011E430 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 */

CD3DPhysicalSwapChainBuffer *__fastcall CD3DPhysicalSwapChainBuffer::`scalar deleting destructor'(
        CD3DPhysicalSwapChainBuffer *this,
        void *a2)
{
  char v3; // di
  wil::details *v4; // rcx

  v3 = (char)a2;
  v4 = (wil::details *)*((_QWORD *)this + 22);
  if ( v4 )
    wil::details::CloseHandle(v4, a2);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 21);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 20);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 19);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 18);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 17);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 16);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 15);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 9);
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
  if ( (v3 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
