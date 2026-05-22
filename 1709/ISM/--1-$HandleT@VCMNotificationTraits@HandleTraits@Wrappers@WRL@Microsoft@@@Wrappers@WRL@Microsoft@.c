/*
 * XREFs of ??1?$HandleT@VCMNotificationTraits@HandleTraits@Wrappers@WRL@Microsoft@@@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x1800BB1B8
 * Callers:
 *     _Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::SpatialGraphDriverHandleWrapper_::_1_::dtor$5 @ 0x1800D1BD8 (_Windows--Internal--Holographic--SpatialGraphDriverHandleWrapper--SpatialGraphDrive_ea_1800D1BD8.c)
 * Callees:
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1800367A8 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 */

void **__fastcall Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::CMNotificationTraits>::~HandleT<Microsoft::WRL::Wrappers::HandleTraits::CMNotificationTraits>(
        _QWORD *a1)
{
  void **result; // rax
  __int64 v3; // rcx
  signed int LastError; // eax
  unsigned __int64 v5; // rcx

  result = &Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::CMNotificationTraits>::`vftable';
  *a1 = &Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::CMNotificationTraits>::`vftable';
  v3 = a1[1];
  if ( v3 )
  {
    result = (void **)CM_Unregister_Notification(v3);
    if ( (_DWORD)result )
    {
      LastError = GetLastError();
      v5 = (unsigned __int16)LastError | 0x80070000;
      if ( LastError <= 0 )
        v5 = (unsigned int)LastError;
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)v5);
      JUMPOUT(0x1800BB202LL);
    }
    a1[1] = 0LL;
  }
  return result;
}
