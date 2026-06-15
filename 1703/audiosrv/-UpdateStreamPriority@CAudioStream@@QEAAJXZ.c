/*
 * XREFs of ?UpdateStreamPriority@CAudioStream@@QEAAJXZ @ 0x18001A150
 * Callers:
 *     ?SetVolumeAllStreams@CAudioSession@@IEAAXW4AudioVolumeChangeType@@_NPEAUSessionPolicyGains@@1MIPEAM_J@Z @ 0x180013F60 (-SetVolumeAllStreams@CAudioSession@@IEAAXW4AudioVolumeChangeType@@_NPEAUSessionPolicyGains@@1MIP.c)
 *     ?StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180014D50 (-StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     ?StartStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180014FA0 (-StartStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     ?AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180015200 (-AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 * Callees:
 *     ?GetConnectedStreamGroup@CProcessSubmixProxy@@UEAAJPEAPEAUIStreamGroupProxy@@@Z @ 0x180007C30 (-GetConnectedStreamGroup@CProcessSubmixProxy@@UEAAJPEAPEAUIStreamGroupProxy@@@Z.c)
 *     ?UpdateStreamResourcePriority@CBaseStreamGroupProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z @ 0x18000A420 (-UpdateStreamResourcePriority@CBaseStreamGroupProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z.c)
 *     ??1?$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800393B0 (--1-$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007ECA8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioStream::UpdateStreamPriority(CAudioStream *this)
{
  unsigned int v2; // ebp
  CAudioSession *v3; // rdi
  __int64 (__fastcall *v4)(CAudioSession *, struct IAudioProcess **); // rax
  unsigned int (*v5)(void); // rax
  unsigned int v6; // esi
  __int64 v7; // rdi
  int v8; // eax
  unsigned int v9; // edi
  int v10; // eax
  CProcessSubmixProxy *v11; // rcx
  __int64 (__fastcall *v12)(CProcessSubmixProxy *, struct IStreamGroupProxy **); // rax
  __int64 (__fastcall *v13)(__int64, int, unsigned int, unsigned int); // rax
  int updated; // eax
  int v16; // [rsp+20h] [rbp-58h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  unsigned int v18; // [rsp+80h] [rbp+8h]
  struct IStreamGroupProxy *v19; // [rsp+88h] [rbp+10h] BYREF
  _QWORD *v20; // [rsp+90h] [rbp+18h] BYREF

  v2 = *((_DWORD *)this + 101);
  v18 = -1;
  v20 = 0LL;
  v3 = (CAudioSession *)*((_QWORD *)this + 8);
  v4 = *(__int64 (__fastcall **)(CAudioSession *, struct IAudioProcess **))(*(_QWORD *)v3 + 24LL);
  if ( v4 == CAudioSession::GetProcess )
  {
    (*(void (__fastcall **)(_QWORD *))(**((_QWORD **)v3 + 109) + 8LL))(*((_QWORD **)v3 + 109));
    v20 = (_QWORD *)*((_QWORD *)v3 + 109);
  }
  else
  {
    v4(v3, (struct IAudioProcess **)&v20);
  }
  if ( !(*(unsigned int (__fastcall **)(struct IAudioPolicyManager *))(*(_QWORD *)g_PolicyManager + 160LL))(g_PolicyManager) )
  {
    v10 = 0;
    v18 = 0;
    goto LABEL_9;
  }
  v5 = *(unsigned int (**)(void))(*((_QWORD *)this + 1) + 56LL);
  if ( (char *)v5 != (char *)CAudioStream::IsCaptureStream )
  {
    if ( !v5() )
      goto LABEL_6;
LABEL_24:
    v6 = 1;
    goto LABEL_7;
  }
  if ( (unsigned int)(*((_DWORD *)this + 135) - 1) <= 1 )
    goto LABEL_24;
LABEL_6:
  v6 = 0;
LABEL_7:
  v7 = *(_QWORD *)g_PolicyManager;
  v16 = (*(__int64 (__fastcall **)(_QWORD *))(*v20 + 120LL))(v20);
  v8 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, _QWORD, _QWORD, _QWORD))(v7 + 56))(
         g_PolicyManager,
         v6,
         *((unsigned int *)this + 134),
         *((unsigned __int8 *)this + 400));
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x48B,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)(unsigned int)v8,
      v16);
    goto LABEL_18;
  }
  v10 = -1;
LABEL_9:
  if ( v10 == *((_DWORD *)this + 101) )
  {
LABEL_17:
    v9 = 0;
    goto LABEL_18;
  }
  *((_DWORD *)this + 101) = v10;
  v11 = (CProcessSubmixProxy *)*((_QWORD *)this + 7);
  v19 = 0LL;
  v12 = *(__int64 (__fastcall **)(CProcessSubmixProxy *, struct IStreamGroupProxy **))(*(_QWORD *)v11 + 80LL);
  if ( v12 == CProcessSubmixProxy::GetConnectedStreamGroup )
    CProcessSubmixProxy::GetConnectedStreamGroup(v11, &v19);
  else
    v12(v11, &v19);
  v13 = *(__int64 (__fastcall **)(__int64, int, unsigned int, unsigned int))(*(_QWORD *)v19 + 224LL);
  if ( v13 == CBaseStreamGroupProxy::UpdateStreamResourcePriority )
    updated = CBaseStreamGroupProxy::UpdateStreamResourcePriority((__int64)v19, 1, v18, v2);
  else
    updated = v13((__int64)v19, 1, v18, v2);
  v9 = updated;
  if ( updated >= 0 )
  {
    if ( v19 )
      (*(void (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)v19 + 16LL))(v19);
    goto LABEL_17;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x49C,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
    (const char *)(unsigned int)updated,
    v16);
  wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>(&v19);
LABEL_18:
  if ( v20 )
    (*(void (__fastcall **)(_QWORD *))(*v20 + 16LL))(v20);
  return v9;
}
