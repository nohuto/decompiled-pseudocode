/*
 * XREFs of ??1?$HandleT@UFileHandleTraits@HandleTraits@Wrappers@WRL@Microsoft@@@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x18007D048
 * Callers:
 *     _SpatialInteractionDevices::HID_HANDLE::HID_HANDLE_::_1_::dtor$0 @ 0x1800D00A8 (_SpatialInteractionDevices--HID_HANDLE--HID_HANDLE_--_1_--dtor$0.c)
 *     _WGIRawInputProvider::_WGIRawInputProvider_::_1_::dtor$3 @ 0x1800D12E4 (_WGIRawInputProvider--_WGIRawInputProvider_--_1_--dtor$3.c)
 * Callees:
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1800367A8 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 */

int __fastcall Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::FileHandleTraits>::~HandleT<Microsoft::WRL::Wrappers::HandleTraits::FileHandleTraits>(
        _QWORD *a1)
{
  void **v1; // rax
  void *v3; // rcx
  signed int LastError; // eax
  unsigned __int64 v5; // rcx

  v1 = &Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::HANDLENullTraits>::`vftable';
  *a1 = &Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::HANDLENullTraits>::`vftable';
  v3 = (void *)a1[1];
  if ( v3 != (void *)-1LL )
  {
    LODWORD(v1) = CloseHandle(v3);
    if ( !(_DWORD)v1 )
    {
      LastError = GetLastError();
      v5 = (unsigned __int16)LastError | 0x80070000;
      if ( LastError <= 0 )
        v5 = (unsigned int)LastError;
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)v5);
      __debugbreak();
    }
    a1[1] = -1LL;
  }
  return (int)v1;
}
