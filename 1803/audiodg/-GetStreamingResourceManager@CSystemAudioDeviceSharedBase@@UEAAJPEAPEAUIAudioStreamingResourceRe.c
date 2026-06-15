/*
 * XREFs of ?GetStreamingResourceManager@CSystemAudioDeviceSharedBase@@UEAAJPEAPEAUIAudioStreamingResourceRegistration@@@Z @ 0x140011E60
 * Callers:
 *     ?ConnectToRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@PEBVCPipeInstance@@_J@Z @ 0x140003190 (-ConnectToRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@PEBVCPipeInstance@@_J@Z.c)
 *     ?GetStreamingResourceManager@CSubmixImpl@@UEAAJPEAPEAUIAudioStreamingResourceRegistration@@@Z @ 0x140004B50 (-GetStreamingResourceManager@CSubmixImpl@@UEAAJPEAPEAUIAudioStreamingResourceRegistration@@@Z.c)
 * Callees:
 *     ?GetStreamingResourceManager@CAudioDeviceGraph@@UEAAJPEAPEAUIAudioStreamingResourceRegistration@@@Z @ 0x14000D980 (-GetStreamingResourceManager@CAudioDeviceGraph@@UEAAJPEAPEAUIAudioStreamingResourceRegistration@.c)
 *     ?QueryInterface@?$CComObject@VCAudioDeviceGraph@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140012FF0 (-QueryInterface@-$CComObject@VCAudioDeviceGraph@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     __security_check_cookie @ 0x14001BC70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::GetStreamingResourceManager(
        CSystemAudioDeviceSharedBase *this,
        struct IAudioStreamingResourceRegistration **a2)
{
  CAudioDeviceGraph *v4; // rcx
  void (__fastcall ***v5)(_QWORD, GUID *, CAudioDeviceGraph **); // rax
  __int64 (__fastcall *v6)(CAudioDeviceGraph *, struct IAudioStreamingResourceRegistration **); // rax
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
      ATL::CComObject<CAudioDeviceGraph>::QueryInterface(v5, &GUID_394afc11_8be4_4e54_b91c_8fcc82d1f0a6, &v10);
    else
      (**v5)(v5, &GUID_394afc11_8be4_4e54_b91c_8fcc82d1f0a6, &v10);
    v4 = v10;
  }
  v6 = *(__int64 (__fastcall **)(CAudioDeviceGraph *, struct IAudioStreamingResourceRegistration **))(*(_QWORD *)v4 + 72LL);
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
