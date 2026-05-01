/*
 * XREFs of _wil::com_agile_query_IApplicationViewChangeListener_____ptr64_&___ptr64__::_1_::dtor$0 @ 0x180198EAF
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDCompositionVisual2@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180025000 (--1-$com_ptr_t@UIDCompositionVisual2@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

__int64 __fastcall wil::com_agile_query_IApplicationViewChangeListener_____ptr64_____ptr64__::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return wil::com_ptr_t<IDCompositionVisual2,wil::err_exception_policy>::~com_ptr_t<IDCompositionVisual2,wil::err_exception_policy>(*(__int64 **)(a2 + 64));
  }
  return result;
}
