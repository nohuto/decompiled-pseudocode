/*
 * XREFs of ?SetAudioHandle@CAudioStream@@QEAAJ_KPEAUIAudioDeviceGraph@@0K@Z @ 0x18001CB4C
 * Callers:
 *     ?SetAudioHandle@CAudioStream@@UEAAJPEAUSYSTEM_AUDIO_STREAM@@K@Z @ 0x18001CB20 (-SetAudioHandle@CAudioStream@@UEAAJPEAUSYSTEM_AUDIO_STREAM@@K@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180007BA0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?UpdateStreamResourcePriority@CBaseStreamGroupProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z @ 0x18000DC60 (-UpdateStreamResourcePriority@CBaseStreamGroupProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z.c)
 *     ?GetConnectedStreamGroup@CProcessSubmixProxy@@UEAAJPEAPEAUIStreamGroupProxy@@@Z @ 0x180011EC0 (-GetConnectedStreamGroup@CProcessSubmixProxy@@UEAAJPEAPEAUIStreamGroupProxy@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005E7F8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioStream::SetAudioHandle(
        CAudioStream *this,
        __int64 a2,
        struct IAudioDeviceGraph *a3,
        CProcessSubmixProxy *a4,
        unsigned int a5)
{
  __int64 v7; // rcx
  __int64 (__fastcall *v8)(CProcessSubmixProxy *, struct IStreamGroupProxy **); // rax
  __int64 v9; // r8
  __int64 (__fastcall *v10)(__int64, unsigned int, unsigned int, unsigned int); // rax
  int updated; // eax
  unsigned int v12; // ebx
  int v14; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct IStreamGroupProxy *v16; // [rsp+60h] [rbp+18h] BYREF

  v16 = a3;
  *((_QWORD *)this + 6) = a2;
  v7 = *((_QWORD *)this + 7);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  *((_QWORD *)this + 7) = a4;
  if ( !a4 )
    return 0LL;
  *((_DWORD *)this + 101) = a5;
  v16 = 0LL;
  v8 = *(__int64 (__fastcall **)(CProcessSubmixProxy *, struct IStreamGroupProxy **))(*(_QWORD *)a4 + 80LL);
  if ( v8 == CProcessSubmixProxy::GetConnectedStreamGroup )
    CProcessSubmixProxy::GetConnectedStreamGroup(a4, &v16);
  else
    v8(a4, &v16);
  v9 = *((unsigned int *)this + 101);
  v10 = *(__int64 (__fastcall **)(__int64, unsigned int, unsigned int, unsigned int))(*(_QWORD *)v16 + 216LL);
  if ( v10 == CBaseStreamGroupProxy::UpdateStreamResourcePriority )
    updated = CBaseStreamGroupProxy::UpdateStreamResourcePriority((__int64)v16, 0, v9, 0xFFFFFFFF);
  else
    updated = v10((__int64)v16, 0, v9, 0xFFFFFFFF);
  v12 = updated;
  if ( updated >= 0 )
  {
    if ( v16 )
      (*(void (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)v16 + 16LL))(v16);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x19E,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
    (const char *)(unsigned int)updated,
    v14);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v16);
  return v12;
}
