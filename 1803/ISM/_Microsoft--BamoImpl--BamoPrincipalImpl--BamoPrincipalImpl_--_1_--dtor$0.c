/*
 * XREFs of _Microsoft::BamoImpl::BamoPrincipalImpl::BamoPrincipalImpl_::_1_::dtor$0 @ 0x1800E3A21
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::BamoImpl::BamoPrincipalImpl::BamoPrincipalImpl_::_1_::dtor_0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>::~com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>(
    (volatile signed __int32 **)(*(_QWORD *)(a2 + 80) + 16LL),
    a2,
    a3,
    a4);
}
