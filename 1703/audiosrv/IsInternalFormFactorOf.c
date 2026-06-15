/*
 * XREFs of IsInternalFormFactorOf @ 0x1800C07DC
 * Callers:
 *     DisableSpatialOnInternalSpeakers @ 0x1800C06B4 (DisableSpatialOnInternalSpeakers.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800393B0 (--1-$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     GetEndpointFormFactor @ 0x18003C538 (GetEndpointFormFactor.c)
 *     GetContainerId @ 0x18003C818 (GetContainerId.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800AD6F4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall IsInternalFormFactorOf(__int64 a1, int a2)
{
  char v3; // bl
  int v4; // eax
  int v5; // edi
  int EndpointFormFactor; // esi
  __int64 v7; // rcx
  int ContainerId; // eax
  int v9; // edi
  __int64 v10; // rax
  __int64 v12[2]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v13; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v12[1] = -2LL;
  v3 = 0;
  v12[0] = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)a1 + 32LL))(a1, 0LL, v12);
  v5 = v4;
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x119,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp",
      (const char *)(unsigned int)v4);
  if ( !v5 )
  {
    EndpointFormFactor = GetEndpointFormFactor(v12[0]);
    ContainerId = GetContainerId(v7, v12[0], &v13);
    v9 = ContainerId;
    if ( ContainerId < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x11E,
        (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp",
        (const char *)(unsigned int)ContainerId);
    if ( !v9 && a2 == EndpointFormFactor )
    {
      v10 = v13;
      if ( !(_QWORD)v13 )
        v10 = *((_QWORD *)&v13 + 1) + 1LL;
      if ( !v10 )
        v3 = 1;
    }
  }
  wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>(v12);
  return v3;
}
