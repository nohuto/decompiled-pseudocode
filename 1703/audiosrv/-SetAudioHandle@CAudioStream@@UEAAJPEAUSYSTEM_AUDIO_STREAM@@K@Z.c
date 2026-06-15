/*
 * XREFs of ?SetAudioHandle@CAudioStream@@UEAAJPEAUSYSTEM_AUDIO_STREAM@@K@Z @ 0x1800195A0
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@_J6PEBU_GUID@@KPEBGKHPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180004D20 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHPEAVCEndp.c)
 * Callees:
 *     ?GetConnectedStreamGroup@CProcessSubmixProxy@@UEAAJPEAPEAUIStreamGroupProxy@@@Z @ 0x180007C30 (-GetConnectedStreamGroup@CProcessSubmixProxy@@UEAAJPEAPEAUIStreamGroupProxy@@@Z.c)
 *     ?UpdateStreamResourcePriority@CBaseStreamGroupProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z @ 0x18000A420 (-UpdateStreamResourcePriority@CBaseStreamGroupProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z.c)
 *     ??1?$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800393B0 (--1-$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007ECA8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CAudioStream::SetAudioHandle(CAudioStream *this, struct SYSTEM_AUDIO_STREAM *a2, int a3)
{
  CProcessSubmixProxy *v4; // rdi
  __int64 v7; // rcx
  __int64 (__fastcall *v8)(CProcessSubmixProxy *, struct IStreamGroupProxy **); // rax
  __int64 v9; // r8
  __int64 (__fastcall *v10)(__int64, int, unsigned int, unsigned int); // rax
  int updated; // eax
  unsigned int v12; // ebx
  int v14; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IStreamGroupProxy *v16; // [rsp+40h] [rbp+8h] BYREF

  v4 = (CProcessSubmixProxy *)*((_QWORD *)a2 + 8);
  *((_QWORD *)this + 5) = *((_QWORD *)a2 + 6);
  v7 = *((_QWORD *)this + 6);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  *((_QWORD *)this + 6) = v4;
  if ( v4 )
  {
    v16 = 0LL;
    *((_DWORD *)this + 99) = a3;
    v8 = *(__int64 (__fastcall **)(CProcessSubmixProxy *, struct IStreamGroupProxy **))(*(_QWORD *)v4 + 80LL);
    if ( v8 == CProcessSubmixProxy::GetConnectedStreamGroup )
      CProcessSubmixProxy::GetConnectedStreamGroup(v4, &v16);
    else
      v8(v4, &v16);
    v9 = *((unsigned int *)this + 99);
    v10 = *(__int64 (__fastcall **)(__int64, int, unsigned int, unsigned int))(*(_QWORD *)v16 + 224LL);
    if ( v10 == CBaseStreamGroupProxy::UpdateStreamResourcePriority )
      updated = CBaseStreamGroupProxy::UpdateStreamResourcePriority((__int64)v16, 0, v9, 0xFFFFFFFF);
    else
      updated = v10((__int64)v16, 0, v9, 0xFFFFFFFF);
    v12 = updated;
    if ( updated < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x1D0,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
        (const char *)(unsigned int)updated,
        v14);
      wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>(&v16);
      goto LABEL_12;
    }
    if ( v16 )
      (*(void (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)v16 + 16LL))(v16);
  }
  v12 = 0;
LABEL_12:
  *((_QWORD *)a2 + 8) = 0LL;
  return v12;
}
