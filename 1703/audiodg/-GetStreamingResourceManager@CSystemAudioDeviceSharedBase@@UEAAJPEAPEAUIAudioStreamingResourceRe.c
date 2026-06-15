/*
 * XREFs of ?GetStreamingResourceManager@CSystemAudioDeviceSharedBase@@UEAAJPEAPEAUIAudioStreamingResourceRegistration@@@Z @ 0x140004C20
 * Callers:
 *     ?ConnectToRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@PEBVCPipeInstance@@_J@Z @ 0x1400037B0 (-ConnectToRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@PEBVCPipeInstance@@_J@Z.c)
 *     ?GetStreamingResourceManager@CSubmixImpl@@UEAAJPEAPEAUIAudioStreamingResourceRegistration@@@Z @ 0x1400065D0 (-GetStreamingResourceManager@CSubmixImpl@@UEAAJPEAPEAUIAudioStreamingResourceRegistration@@@Z.c)
 * Callees:
 *     ?QueryInterface@?$CComObject@VCAudioDeviceGraph@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400060A0 (-QueryInterface@-$CComObject@VCAudioDeviceGraph@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?GetStreamingResourceManager@CAudioDeviceGraph@@UEAAJPEAPEAUIAudioStreamingResourceRegistration@@@Z @ 0x14000E9D0 (-GetStreamingResourceManager@CAudioDeviceGraph@@UEAAJPEAPEAUIAudioStreamingResourceRegistration@.c)
 *     __security_check_cookie @ 0x14001CE40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::GetStreamingResourceManager(
        CSystemAudioDeviceSharedBase *this,
        struct IAudioStreamingResourceRegistration **a2)
{
  CAudioDeviceGraph *v4; // rcx
  void (__fastcall ***v5)(_QWORD, GUID *, CAudioDeviceGraph **); // rax
  __int64 (__fastcall *v6)(CAudioDeviceGraph *__hidden, struct IAudioStreamingResourceRegistration **); // rax
  unsigned int StreamingResourceManager; // eax
  unsigned int v8; // ebx
  CAudioDeviceGraph *v10; // [rsp+20h] [rbp-38h] BYREF
  __int128 v11; // [rsp+28h] [rbp-30h]
  __int128 v12; // [rsp+38h] [rbp-20h] BYREF

  v11 = *(_OWORD *)((char *)this - 56);
  v12 = v11;
  EtwEventActivityIdControl(4LL, &v12);
  v4 = 0LL;
  *a2 = 0LL;
  v5 = (void (__fastcall ***)(_QWORD, GUID *, CAudioDeviceGraph **))*((_QWORD *)this + 3);
  v10 = 0LL;
  if ( v5 )
  {
    if ( (char *)**v5 == (char *)ATL::CComObject<CAudioDeviceGraph>::QueryInterface )
      ATL::CComObject<CAudioDeviceGraph>::QueryInterface(v5, &GUID_a58eaafa_16b4_41ca_82d6_645113442e7d, &v10);
    else
      (**v5)(v5, &GUID_a58eaafa_16b4_41ca_82d6_645113442e7d, &v10);
    v4 = v10;
  }
  v6 = *(__int64 (__fastcall **)(CAudioDeviceGraph *__hidden, struct IAudioStreamingResourceRegistration **))(*(_QWORD *)v4 + 72LL);
  if ( v6 == CAudioDeviceGraph::GetStreamingResourceManager )
    StreamingResourceManager = CAudioDeviceGraph::GetStreamingResourceManager(v4, a2);
  else
    StreamingResourceManager = v6(v4, a2);
  v8 = StreamingResourceManager;
  if ( v10 )
    (*(void (__fastcall **)(CAudioDeviceGraph *))(*(_QWORD *)v10 + 16LL))(v10);
  EtwEventActivityIdControl(4LL, &v12);
  return v8;
}
