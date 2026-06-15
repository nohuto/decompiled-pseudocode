/*
 * XREFs of ?GetInterruptPeriodicity@CSystemAudioDeviceSharedBase@@UEAA_JXZ @ 0x1400392D0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14001BC70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     ??0?$CComQIPtr@UIAudioDeviceGraphInternal@@$1?_GUID_394afc11_8be4_4e54_b91c_8fcc82d1f0a6@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x140030168 (--0-$CComQIPtr@UIAudioDeviceGraphInternal@@$1-_GUID_394afc11_8be4_4e54_b91c_8fcc82d1f0a6@@3U__s_.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::GetInterruptPeriodicity(CSystemAudioDeviceSharedBase *this)
{
  __int64 v2; // rbx
  __int64 v4; // [rsp+20h] [rbp-38h] BYREF
  __int128 v5; // [rsp+28h] [rbp-30h]
  __int128 v6; // [rsp+38h] [rbp-20h] BYREF

  v5 = *(_OWORD *)((char *)this - 56);
  v6 = v5;
  EtwEventActivityIdControl(4LL, &v6);
  ATL::CComQIPtr<IAudioDeviceGraphInternal,&__s_GUID const _GUID_394afc11_8be4_4e54_b91c_8fcc82d1f0a6>::CComQIPtr<IAudioDeviceGraphInternal,&__s_GUID const _GUID_394afc11_8be4_4e54_b91c_8fcc82d1f0a6>(
    &v4,
    *((void (__fastcall ****)(_QWORD, GUID *, _QWORD *))this + 3));
  if ( v4 )
  {
    v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 56LL))(v4);
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  else
  {
    v2 = 0LL;
  }
  EtwEventActivityIdControl(4LL, &v6);
  return v2;
}
