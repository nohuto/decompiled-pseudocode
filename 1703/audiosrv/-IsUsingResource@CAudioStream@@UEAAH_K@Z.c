/*
 * XREFs of ?IsUsingResource@CAudioStream@@UEAAH_K@Z @ 0x180096400
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800393B0 (--1-$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

_BOOL8 __fastcall CAudioStream::IsUsingResource(CAudioStream *this, __int64 a2)
{
  __int64 v2; // rcx
  BOOL v3; // ebx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 7);
  v3 = 0;
  if ( v2 )
  {
    v6 = 0LL;
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 80LL))(v2, &v6);
    if ( v6 )
      v3 = (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 216LL))(v6, a2) != 0;
    wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>(&v6);
  }
  return v3;
}
