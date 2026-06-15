/*
 * XREFs of std::_Func_impl__lambda_c7c1c81e1b12c5b6da40af71127e61d7__std::allocator_int__bool_ISaDeviceProxy_____ptr64_::_Delete_this @ 0x18002E260
 * Callers:
 *     ?FindFirstMatchingSaDevice@CDeviceGraphObjectsStore@@IEAAJV?$function@$$A6A_NPEAUISaDeviceProxy@@@Z@std@@PEAPEAUISaDeviceProxy@@@Z @ 0x18000B500 (-FindFirstMatchingSaDevice@CDeviceGraphObjectsStore@@IEAAJV-$function@$$A6A_NPEAUISaDeviceProxy@.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Func_impl__lambda_c7c1c81e1b12c5b6da40af71127e61d7__std::allocator_int__bool_ISaDeviceProxy_____ptr64_::_Delete_this(
        _QWORD *a1,
        char a2)
{
  *a1 = &std::_Func_base<bool,ISaDeviceProxy *>::`vftable';
  if ( a2 )
    std::_Deallocate(a1, 1uLL, 0x10uLL);
}
