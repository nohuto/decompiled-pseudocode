/*
 * XREFs of std::_Func_impl__lambda_f762a111a87cc3672fab2d2d37f8e7d5__std::allocator_int__void_Windows::Internal::OneCore::ViewEventHandlers::tagHostIdentifier_const_&___ptr64_::_Delete_this @ 0x180101070
 * Callers:
 *     <none>
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800250A4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 */

void __fastcall std::_Func_impl__lambda_f762a111a87cc3672fab2d2d37f8e7d5__std::allocator_int__void_Windows::Internal::OneCore::ViewEventHandlers::tagHostIdentifier_const_____ptr64_::_Delete_this(
        char *a1,
        char a2)
{
  *(_QWORD *)a1 = &IThumbnailDeviceInternal::`vftable';
  if ( a2 )
    std::_Deallocate(a1, 1uLL, 0x18uLL);
}
