/*
 * XREFs of std::_Func_impl__lambda_50b3f89cea81ac99891e676c02ace6a0__std::allocator_int__void_bool_::_Delete_this @ 0x18008F8D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1801E2C84 (--3@YAXPEAX@Z.c)
 */

void __fastcall std::_Func_impl__lambda_50b3f89cea81ac99891e676c02ace6a0__std::allocator_int__void_bool_::_Delete_this(
        _QWORD *a1,
        char a2)
{
  *a1 = &std::_Func_base<void,Windows::Internal::OneCore::ViewEventHandlers::tagHostIdentifier const &>::`vftable';
  if ( a2 )
    operator delete(a1);
}
