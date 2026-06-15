/*
 * XREFs of ?GetChannelCount@CMeterSoftware@@MEAAJPEAI@Z @ 0x180065EE0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CComQIPtr@UIAudioProcessingObject@@$1?_GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x180008E14 (--0-$CComQIPtr@UIAudioProcessingObject@@$1-_GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10@@3U__s_GUI.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?GetChannelCountFromDeviceFormat@CMeterControlBase@@QEAAJPEAI@Z @ 0x180065F8C (-GetChannelCountFromDeviceFormat@CMeterControlBase@@QEAAJPEAI@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CMeterSoftware::GetChannelCount(CMeterSoftware *this, unsigned int *a2)
{
  void (__fastcall ***v4)(_QWORD, GUID *, _QWORD *); // rdx
  __int64 v5; // rcx
  int ChannelCountFromDeviceFormat; // ebx
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  v4 = (void (__fastcall ***)(_QWORD, GUID *, _QWORD *))*((_QWORD *)this + 4);
  if ( v4 )
  {
    ATL::CComQIPtr<IAudioProcessingObject,&__s_GUID const _GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10>::CComQIPtr<IAudioProcessingObject,&__s_GUID const _GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10>(
      &v8,
      v4);
    v5 = v8;
    if ( v8 )
    {
      ChannelCountFromDeviceFormat = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 4) + 32LL))(
                                       *((_QWORD *)this + 4),
                                       a2);
      v5 = v8;
    }
    else
    {
      ChannelCountFromDeviceFormat = -2147467262;
    }
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  else
  {
    ChannelCountFromDeviceFormat = CMeterControlBase::GetChannelCountFromDeviceFormat(this, a2);
  }
  if ( ChannelCountFromDeviceFormat < 0 )
    AudSrvTraceLoggingErrorHelper("CMeterSoftware::GetChannelCount", 818, ChannelCountFromDeviceFormat);
  return (unsigned int)ChannelCountFromDeviceFormat;
}
