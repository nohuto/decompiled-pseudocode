/*
 * XREFs of std::_Func_impl__lambda_50b3f89cea81ac99891e676c02ace6a0__std::allocator_int__void_bool_::_Delete_this @ 0x18008D200
 * Callers:
 *     <none>
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800250A4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 */

void __fastcall std::_Func_impl__lambda_50b3f89cea81ac99891e676c02ace6a0__std::allocator_int__void_bool_::_Delete_this(
        char *a1,
        char a2)
{
  *(_QWORD *)a1 = &IThumbnailDeviceInternal::`vftable';
  if ( a2 )
    std::_Deallocate(a1, 1uLL, 0x10uLL);
}
