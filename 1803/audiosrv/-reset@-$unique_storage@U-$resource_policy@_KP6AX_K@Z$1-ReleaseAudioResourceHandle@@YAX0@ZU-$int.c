/*
 * XREFs of ?reset@?$unique_storage@U?$resource_policy@_KP6AX_K@Z$1?ReleaseAudioResourceHandle@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@_K$0A@$$T@details@wil@@@details@wil@@QEAAX_K@Z @ 0x180097D44
 * Callers:
 *     ?CreateInstance@TelephonyControllerCallInstance@@SAJAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@_KP6AX_K@Z$1?ReleaseAudioResourceHandle@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@_K$0A@$$T@details@wil@@@details@wil@@@wil@@PEAUIKsControl@@PEAU_TelephonyInstanceData@@PEAPEAUITelephonyControllerCallInstance@@@Z @ 0x18011C418 (-CreateInstance@TelephonyControllerCallInstance@@SAJAEAV-$unique_any_t@V-$unique_storage@U-$reso.c)
 *     ?ReacquirePhoneCallResource@TelephonyControllerCallInstance@@UEAAJH@Z @ 0x18011C8B0 (-ReacquirePhoneCallResource@TelephonyControllerCallInstance@@UEAAJH@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::unique_storage<wil::details::resource_policy<unsigned __int64,void (*)(unsigned __int64),&void ReleaseAudioResourceHandle(unsigned __int64),wistd::integral_constant<unsigned __int64,0>,unsigned __int64,0,std::nullptr_t>>::reset(
        __int64 *a1,
        __int64 a2)
{
  __int64 v2; // rsi
  DWORD LastError; // ebx

  v2 = *a1;
  if ( *a1 )
  {
    LastError = GetLastError();
    (*(void (__fastcall **)(CAudioResourceManager *, __int64))(*(_QWORD *)g_AudioResourceManager + 40LL))(
      g_AudioResourceManager,
      v2);
    SetLastError(LastError);
  }
  *a1 = a2;
}
