/*
 * XREFs of ??1?$com_ptr_t@VMPCManagerClientPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001EB48
 * Callers:
 *     _Microsoft::BamoImpl::BamoConnectionImpl::OnPeerConnected_::_1_::dtor$1 @ 0x1800E418B (_Microsoft--BamoImpl--BamoConnectionImpl--OnPeerConnected_--_1_--dtor$1.c)
 *     _MPCManagerClient::MPCManagerClient_::_1_::dtor$2 @ 0x1800E465D (_MPCManagerClient--MPCManagerClient_--_1_--dtor$2.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::com_ptr_t<MPCManagerClientPrincipal,wil::err_exception_policy>::~com_ptr_t<MPCManagerClientPrincipal,wil::err_exception_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 8LL))(v1);
  return result;
}
