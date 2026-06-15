/*
 * XREFs of ?PumpPaused@CSystemAudioDeviceSharedBase@@UEAAJXZ @ 0x140012880
 * Callers:
 *     <none>
 * Callees:
 *     ?ResetAPOs@CSystemAudioDeviceSharedBase@@UEAAJXZ @ 0x140012920 (-ResetAPOs@CSystemAudioDeviceSharedBase@@UEAAJXZ.c)
 *     __security_check_cookie @ 0x14001BC70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140032528 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::PumpPaused(CSystemAudioDeviceSharedBase *this)
{
  CSystemAudioDeviceSharedBase *v2; // rcx
  __int64 (__fastcall *v3)(CSystemAudioDeviceSharedBase *__hidden); // rax
  int v4; // eax
  unsigned int v5; // ebx
  int v7[4]; // [rsp+20h] [rbp-38h]
  __int128 v8; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  *(_OWORD *)v7 = *((_OWORD *)this - 3);
  v8 = *(_OWORD *)v7;
  EtwEventActivityIdControl(4LL, &v8);
  if ( *((_DWORD *)this + 14) == 1
    || ((v2 = (CSystemAudioDeviceSharedBase *)((char *)this - 296),
         v3 = *(__int64 (__fastcall **)(CSystemAudioDeviceSharedBase *__hidden))(*((_QWORD *)this - 37) + 152LL),
         v3 != CSystemAudioDeviceSharedBase::ResetAPOs)
      ? (v4 = ((__int64 (__fastcall *)(CSystemAudioDeviceSharedBase *, __int64 (__fastcall *)(CSystemAudioDeviceSharedBase *__hidden)))v3)(
                v2,
                CSystemAudioDeviceSharedBase::ResetAPOs))
      : (v4 = CSystemAudioDeviceSharedBase::ResetAPOs(v2)),
        v5 = v4,
        v4 >= 0) )
  {
    v5 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2A1,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\systemaudiodevicesharedbase.cpp",
      (const char *)(unsigned int)v4,
      v7[0]);
  }
  EtwEventActivityIdControl(4LL, &v8);
  return v5;
}
