/*
 * XREFs of ?reset@?$com_ptr_t@UIAudioStreamPreStartContext@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005B740
 * Callers:
 *     ?AbortStartStream@CVADServer@@UEAAJXZ @ 0x18008A7A0 (-AbortStartStream@CVADServer@@UEAAJXZ.c)
 *     ?PreStartStream@CVADServer@@UEAAJW4VadStreamStateChangeReason@@@Z @ 0x18008C490 (-PreStartStream@CVADServer@@UEAAJW4VadStreamStateChangeReason@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::com_ptr_t<IAudioStreamPreStartContext,wil::err_returncode_policy>::reset(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return result;
}
