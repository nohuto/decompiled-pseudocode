/*
 * XREFs of ?UpdateStreamPriority@CAudioStream@@QEAAJXZ @ 0x18001B42C
 * Callers:
 *     ?SetVolumeAllStreams@CAudioSession@@IEAAXW4AudioVolumeChangeType@@_NPEAUSessionPolicyGains@@1MIPEAM_J@Z @ 0x1800185E8 (-SetVolumeAllStreams@CAudioSession@@IEAAXW4AudioVolumeChangeType@@_NPEAUSessionPolicyGains@@1MIP.c)
 *     ?StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180019450 (-StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     ?StartStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180019640 (-StartStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     ?AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x1800198A0 (-AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180007BA0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?UpdateStreamResourcePriority@CBaseStreamGroupProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z @ 0x18000DC60 (-UpdateStreamResourcePriority@CBaseStreamGroupProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z.c)
 *     ?GetConnectedStreamGroup@CProcessSubmixProxy@@UEAAJPEAPEAUIStreamGroupProxy@@@Z @ 0x180011EC0 (-GetConnectedStreamGroup@CProcessSubmixProxy@@UEAAJPEAPEAUIStreamGroupProxy@@@Z.c)
 *     ?IsCaptureStream@CAudioStream@@UEAAHXZ @ 0x18001B050 (-IsCaptureStream@CAudioStream@@UEAAHXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005E7F8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioStream::UpdateStreamPriority(CAudioStream *this)
{
  unsigned int v2; // r14d
  __int64 (*v3)(void); // rax
  int IsCaptureStream; // eax
  int v5; // esi
  __int64 v6; // rbx
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // eax
  CProcessSubmixProxy *v10; // rcx
  __int64 (__fastcall *v11)(CProcessSubmixProxy *, struct IStreamGroupProxy **); // rax
  __int64 (__fastcall *v12)(__int64, unsigned int, unsigned int, unsigned int); // rax
  int updated; // eax
  int v15; // [rsp+20h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  unsigned int v17; // [rsp+80h] [rbp+30h]
  struct IStreamGroupProxy *v18; // [rsp+88h] [rbp+38h] BYREF
  __int64 v19; // [rsp+90h] [rbp+40h]

  v19 = 0LL;
  v2 = *((_DWORD *)this + 101);
  v17 = -1;
  if ( (*(unsigned int (__fastcall **)(struct IAudioPolicyManager *))(*(_QWORD *)g_PolicyManager + 160LL))(g_PolicyManager) )
  {
    v3 = *(__int64 (**)(void))(*((_QWORD *)this + 1) + 64LL);
    if ( (char *)v3 == (char *)CAudioStream::IsCaptureStream )
      IsCaptureStream = CAudioStream::IsCaptureStream((CAudioStream *)((char *)this + 8));
    else
      IsCaptureStream = v3();
    v5 = IsCaptureStream;
    v6 = *(_QWORD *)g_PolicyManager;
    v15 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 9) + 120LL))(*((_QWORD *)this + 9));
    v7 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, bool, _QWORD, _QWORD))(v6 + 56))(
           g_PolicyManager,
           v5 != 0,
           *((unsigned int *)this + 134),
           *((unsigned __int8 *)this + 400));
    v8 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x455,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
        (const char *)(unsigned int)v7,
        v15);
      return v8;
    }
    v9 = -1;
  }
  else
  {
    v9 = 0;
    v17 = 0;
  }
  if ( v9 != *((_DWORD *)this + 101) )
  {
    *((_DWORD *)this + 101) = v9;
    v10 = (CProcessSubmixProxy *)*((_QWORD *)this + 7);
    v18 = 0LL;
    v11 = *(__int64 (__fastcall **)(CProcessSubmixProxy *, struct IStreamGroupProxy **))(*(_QWORD *)v10 + 80LL);
    if ( v11 == CProcessSubmixProxy::GetConnectedStreamGroup )
      CProcessSubmixProxy::GetConnectedStreamGroup(v10, &v18);
    else
      v11(v10, &v18);
    v12 = *(__int64 (__fastcall **)(__int64, unsigned int, unsigned int, unsigned int))(*(_QWORD *)v18 + 216LL);
    if ( v12 == CBaseStreamGroupProxy::UpdateStreamResourcePriority )
      updated = CBaseStreamGroupProxy::UpdateStreamResourcePriority((__int64)v18, 1u, v17, v2);
    else
      updated = v12((__int64)v18, 1u, v17, v2);
    v8 = updated;
    if ( updated < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x466,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
        (const char *)(unsigned int)updated,
        v15);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v18);
      return v8;
    }
    if ( v18 )
      (*(void (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)v18 + 16LL))(v18);
  }
  return 0;
}
