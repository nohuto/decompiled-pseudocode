/*
 * XREFs of ??1?$HandleT@UHANDLENullTraits@HandleTraits@Wrappers@WRL@Microsoft@@@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x180072438
 * Callers:
 *     ?PropertyUpdatedListenerThreadProcV2@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJXZ @ 0x1800C2EFC (-PropertyUpdatedListenerThreadProcV2@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAA.c)
 *     _Windows::Internal::Holographic::SpatialGraphDriverClient::PropertyUpdatedListenerThreadProcV2_::_1_::dtor$0 @ 0x1800E99B8 (_Windows--Internal--Holographic--SpatialGraphDriverClient--PropertyUpdatedListenerThreadProcV2_-.c)
 * Callees:
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18005D838 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 */

int __fastcall Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::HANDLENullTraits>::~HandleT<Microsoft::WRL::Wrappers::HandleTraits::HANDLENullTraits>(
        _QWORD *a1)
{
  void **v1; // rax
  void *v3; // rcx
  signed int LastError; // eax
  unsigned __int64 v5; // rcx

  v1 = &Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::HANDLENullTraits>::`vftable';
  *a1 = &Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::HANDLENullTraits>::`vftable';
  v3 = (void *)a1[1];
  if ( v3 )
  {
    LODWORD(v1) = CloseHandle(v3);
    if ( !(_DWORD)v1 )
    {
      LastError = GetLastError();
      v5 = (unsigned __int16)LastError | 0x80070000;
      if ( LastError <= 0 )
        v5 = (unsigned int)LastError;
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)v5);
      JUMPOUT(0x180072482LL);
    }
    a1[1] = 0LL;
  }
  return (int)v1;
}
