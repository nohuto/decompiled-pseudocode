/*
 * XREFs of _std::_Uninit_move_wil::com_ptr_t_Windows::Data::Xml::Dom::IXmlNode_wil::err_exception_policy______ptr64_wil::com_ptr_t_Windows::Data::Xml::Dom::IXmlNode_wil::err_exception_policy______ptr64_std::allocator_wil::com_ptr_t_Windows::Data::Xml::Dom::IXmlNode_wil::err_exception_policy____wil::com_ptr_t_Windows::Data::Xml::Dom::IXmlNode_wil::err_exception_policy____::_1_::catch$0 @ 0x1800C45A3
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x1800C10B3 (_CxxThrowException_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall __noreturn std::_Uninit_move_wil::com_ptr_t_Windows::Data::Xml::Dom::IXmlNode_wil::err_exception_policy______ptr64_wil::com_ptr_t_Windows::Data::Xml::Dom::IXmlNode_wil::err_exception_policy______ptr64_std::allocator_wil::com_ptr_t_Windows::Data::Xml::Dom::IXmlNode_wil::err_exception_policy____wil::com_ptr_t_Windows::Data::Xml::Dom::IXmlNode_wil::err_exception_policy____::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  _QWORD *i; // rbx

  for ( i = *(_QWORD **)(a2 + 88); i != *(_QWORD **)(a2 + 80); ++i )
  {
    if ( *i )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*i + 16LL))(*i);
  }
  throw;
}
