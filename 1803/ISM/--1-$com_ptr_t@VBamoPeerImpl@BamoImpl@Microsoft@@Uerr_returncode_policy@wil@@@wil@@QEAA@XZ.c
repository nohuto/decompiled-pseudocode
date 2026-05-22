/*
 * XREFs of ??1?$com_ptr_t@VBamoPeerImpl@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000C6E8
 * Callers:
 *     _Microsoft::BamoImpl::BamoConnectionImpl::OnPeerConnected_::_1_::dtor$0 @ 0x1800E417F (_Microsoft--BamoImpl--BamoConnectionImpl--OnPeerConnected_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::com_ptr_t<Microsoft::BamoImpl::BamoPeerImpl,wil::err_returncode_policy>::~com_ptr_t<Microsoft::BamoImpl::BamoPeerImpl,wil::err_returncode_policy>(
        __int64 (__fastcall ****a1)(_QWORD))
{
  __int64 (__fastcall ***v1)(_QWORD); // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (**v1)(v1);
  return result;
}
