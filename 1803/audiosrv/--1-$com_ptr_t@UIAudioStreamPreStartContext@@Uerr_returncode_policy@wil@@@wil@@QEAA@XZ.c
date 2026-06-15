/*
 * XREFs of ??1?$com_ptr_t@UIAudioStreamPreStartContext@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180047D88
 * Callers:
 *     _ATL::CComObject_CVADServer_::CreateInstance_::_1_::dtor$11 @ 0x18006A4E5 (_ATL--CComObject_CVADServer_--CreateInstance_--_1_--dtor$11.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::com_ptr_t<IAudioStreamPreStartContext,wil::err_returncode_policy>::~com_ptr_t<IAudioStreamPreStartContext,wil::err_returncode_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return result;
}
