/*
 * XREFs of ?UpdateStreamPriority@CAudioStream@@QEAAJXZ @ 0x18009635C
 * Callers:
 *     ?SetVolumeAllStreams@CAudioSession@@IEAAXW4AudioVolumeChangeType@@_NMIPEAM_J@Z @ 0x180004F90 (-SetVolumeAllStreams@CAudioSession@@IEAAXW4AudioVolumeChangeType@@_NMIPEAM_J@Z.c)
 *     ?StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180047130 (-StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18004A07C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioStream::UpdateStreamPriority(CAudioStream *this)
{
  unsigned int v2; // r14d
  BOOL v3; // edi
  __int64 v4; // rbx
  int v5; // eax
  int v6; // eax
  unsigned int v7; // ebx
  unsigned int v8; // eax
  __int64 v9; // rcx
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  unsigned int v13; // [rsp+80h] [rbp+30h] BYREF
  __int64 v14; // [rsp+88h] [rbp+38h] BYREF
  __int64 v15; // [rsp+90h] [rbp+40h] BYREF

  v15 = 0LL;
  v2 = *((_DWORD *)this + 105);
  v13 = -1;
  if ( !(*(unsigned int (__fastcall **)(struct IAudioPolicyManager *))(*(_QWORD *)g_PolicyManager + 136LL))(g_PolicyManager) )
  {
    v8 = 0;
    v13 = 0;
LABEL_6:
    if ( v8 != *((_DWORD *)this + 105) )
    {
      *((_DWORD *)this + 105) = v8;
      v9 = *((_QWORD *)this + 8);
      v14 = 0LL;
      (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v9 + 80LL))(v9, &v14);
      v10 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v14 + 216LL))(v14, 1LL, v13, v2);
      v7 = v10;
      if ( v10 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x4C5,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
          (const char *)(unsigned int)v10);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v14);
        goto LABEL_11;
      }
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v14);
    }
    v7 = 0;
    goto LABEL_11;
  }
  v3 = (*(unsigned __int8 (__fastcall **)(char *))(*((_QWORD *)this + 1) + 64LL))((char *)this + 8) != 0;
  v4 = *(_QWORD *)g_PolicyManager;
  v5 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 120LL))(*((_QWORD *)this + 10));
  v6 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, BOOL, _QWORD, _QWORD, int, unsigned int *))(v4 + 64))(
         g_PolicyManager,
         v3,
         *((unsigned int *)this + 138),
         *((unsigned __int8 *)this + 416),
         v5,
         &v13);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v8 = v13;
    goto LABEL_6;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x4B4,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
    (const char *)(unsigned int)v6);
LABEL_11:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v15);
  return v7;
}
