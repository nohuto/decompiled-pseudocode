/*
 * XREFs of ??1?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180095B00
 * Callers:
 *     _wil::com_agile_query_IApplicationViewChangeListener_____ptr64_&___ptr64__::_1_::dtor$0 @ 0x1800B6350 (_wil--com_agile_query_IApplicationViewChangeListener_____ptr64_-___ptr64__--_1_--dtor$0.c)
 *     _wil::com_agile_query_IUnknown_____ptr64_&___ptr64__::_1_::dtor$0 @ 0x1800B644B (_wil--com_agile_query_IUnknown_____ptr64_-___ptr64__--_1_--dtor$0.c)
 *     _AgileRegistrationList::Unregister_::_1_::dtor$0 @ 0x18010E768 (_AgileRegistrationList--Unregister_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::com_ptr_t<IAgileReference,wil::err_exception_policy>::~com_ptr_t<IAgileReference,wil::err_exception_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return result;
}
