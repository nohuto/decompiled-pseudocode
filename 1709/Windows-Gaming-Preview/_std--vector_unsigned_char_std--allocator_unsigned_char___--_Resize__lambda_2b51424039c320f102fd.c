/*
 * XREFs of _std::vector_unsigned_char_std::allocator_unsigned_char___::_Resize__lambda_2b51424039c320f102fd798e073c89b2____::_1_::catch$105 @ 0x1800431B3
 * Callers:
 *     <none>
 * Callees:
 *     ?deallocate@?$_Wrap_alloc@V?$allocator@E@std@@@std@@QEAAXPEAE_K@Z @ 0x1800166E0 (-deallocate@-$_Wrap_alloc@V-$allocator@E@std@@@std@@QEAAXPEAE_K@Z.c)
 *     _CxxThrowException_0 @ 0x180042090 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_unsigned_char_std::allocator_unsigned_char___::_Resize__lambda_2b51424039c320f102fd798e073c89b2____::_1_::catch_105(
        __int64 a1,
        __int64 a2)
{
  std::_Wrap_alloc<std::allocator<unsigned char>>::deallocate(a1, *(_QWORD *)(a2 + 96), *(_QWORD *)(a2 + 80));
  throw;
}
