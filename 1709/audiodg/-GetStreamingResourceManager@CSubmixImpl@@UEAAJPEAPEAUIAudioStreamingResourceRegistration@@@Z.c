/*
 * XREFs of ?GetStreamingResourceManager@CSubmixImpl@@UEAAJPEAPEAUIAudioStreamingResourceRegistration@@@Z @ 0x1400106A0
 * Callers:
 *     ?DisconnectFromRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@@Z @ 0x140001D90 (-DisconnectFromRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@@Z.c)
 *     ?ConnectToRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@PEBVCPipeInstance@@_J@Z @ 0x140001E70 (-ConnectToRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@PEBVCPipeInstance@@_J@Z.c)
 *     ?DestroyStream@CSubmixImpl@@UEAAJ_K@Z @ 0x140011370 (-DestroyStream@CSubmixImpl@@UEAAJ_K@Z.c)
 * Callees:
 *     ?GetStreamingResourceManager@CSystemAudioDeviceSharedBase@@UEAAJPEAPEAUIAudioStreamingResourceRegistration@@@Z @ 0x14000EE70 (-GetStreamingResourceManager@CSystemAudioDeviceSharedBase@@UEAAJPEAPEAUIAudioStreamingResourceRe.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140033668 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1400336E4 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CSubmixImpl::GetStreamingResourceManager(
        CSubmixImpl *this,
        struct IAudioStreamingResourceRegistration **a2)
{
  __int64 (__fastcall ***v3)(_QWORD, GUID *, CSystemAudioDeviceSharedBase **); // rcx
  int v4; // eax
  unsigned int v5; // edi
  __int64 (__fastcall *v6)(CSystemAudioDeviceSharedBase *, struct IAudioStreamingResourceRegistration **); // rax
  unsigned int StreamingResourceManager; // eax
  int v9; // [rsp+20h] [rbp-8h]
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  CSystemAudioDeviceSharedBase *v12; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v3 = (__int64 (__fastcall ***)(_QWORD, GUID *, CSystemAudioDeviceSharedBase **))*((_QWORD *)this + 33);
  if ( !v3 )
    return 2147500034LL;
  v12 = 0LL;
  v4 = (**v3)(v3, &GUID_cc56354c_5984_4beb_b60f_04b87fd5f8ee, &v12);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x15E1,
      (unsigned int)"internal\\sdk\\inc\\wil\\resultmacros.h",
      (const char *)(unsigned int)v4,
      v9);
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x424,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)v5,
      v10);
  }
  else
  {
    v6 = *(__int64 (__fastcall **)(CSystemAudioDeviceSharedBase *, struct IAudioStreamingResourceRegistration **))(*(_QWORD *)v12 + 120LL);
    if ( v6 == CSystemAudioDeviceSharedBase::GetStreamingResourceManager )
      StreamingResourceManager = CSystemAudioDeviceSharedBase::GetStreamingResourceManager(v12, a2);
    else
      StreamingResourceManager = v6(v12, a2);
    v5 = StreamingResourceManager;
  }
  if ( v12 )
    (*(void (__fastcall **)(CSystemAudioDeviceSharedBase *))(*(_QWORD *)v12 + 16LL))(v12);
  return v5;
}
