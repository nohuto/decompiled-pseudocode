/*
 * XREFs of ??1HolographicDriverHandleWrapper@Holographic@Internal@Windows@@MEAA@XZ @ 0x1800B3DD0
 * Callers:
 *     ??_EHolographicDriverHandleWrapper@Holographic@Internal@Windows@@MEAAPEAXI@Z @ 0x1800B4760 (--_EHolographicDriverHandleWrapper@Holographic@Internal@Windows@@MEAAPEAXI@Z.c)
 *     ??1SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@UEAA@XZ @ 0x1800B7504 (--1SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@UEAA@XZ.c)
 *     _Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::SpatialGraphDriverHandleWrapper_::_1_::dtor$0 @ 0x1800D1BE8 (_Windows--Internal--Holographic--SpatialGraphDriverHandleWrapper--SpatialGraphDrive_ea_1800D1BE8.c)
 * Callees:
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1800367A8 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?CloseDriverHandle@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAXK@Z @ 0x1800B41E8 (-CloseDriverHandle@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAXK@Z.c)
 */

void __fastcall Windows::Internal::Holographic::HolographicDriverHandleWrapper::~HolographicDriverHandleWrapper(
        Windows::Internal::Holographic::HolographicDriverHandleWrapper *this)
{
  RTL_SRWLOCK *v2; // rdi
  __int64 v3; // rsi
  __int64 v4; // rcx
  char *v5; // rcx
  signed int LastError; // eax
  unsigned __int64 v7; // rcx
  signed int v8; // eax
  unsigned __int64 v9; // rcx

  v2 = (RTL_SRWLOCK *)((char *)this + 80);
  *(_QWORD *)this = &Windows::Internal::Holographic::HolographicDriverHandleWrapper::`vftable';
  AcquireSRWLockExclusive((PSRWLOCK)this + 10);
  v3 = *((_QWORD *)this + 12);
  *((_QWORD *)this + 12) = 0LL;
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  if ( v3 && (unsigned int)CM_Unregister_Notification(v3) )
  {
    LastError = GetLastError();
    v7 = (unsigned __int16)LastError | 0x80070000;
    if ( LastError <= 0 )
      v7 = (unsigned int)LastError;
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)v7);
    __debugbreak();
  }
  Windows::Internal::Holographic::HolographicDriverHandleWrapper::CloseDriverHandle(this, 6u);
  v4 = *((_QWORD *)this + 12);
  *((_QWORD *)this + 11) = &Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::CMNotificationTraits>::`vftable';
  if ( v4 )
  {
    if ( (unsigned int)CM_Unregister_Notification(v4) )
    {
      v8 = GetLastError();
      v9 = (unsigned __int16)v8 | 0x80070000;
      if ( v8 <= 0 )
        v9 = (unsigned int)v8;
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)v9);
      JUMPOUT(0x1800B3EB8LL);
    }
    *((_QWORD *)this + 12) = 0LL;
  }
  v5 = (char *)*((_QWORD *)this + 9);
  if ( (unsigned __int64)(v5 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v5);
  WindowsDeleteString(*((HSTRING *)this + 4));
  *((_QWORD *)this + 4) = 0LL;
}
