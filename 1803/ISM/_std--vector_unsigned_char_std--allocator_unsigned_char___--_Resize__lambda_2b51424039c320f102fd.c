/*
 * XREFs of _std::vector_unsigned_char_std::allocator_unsigned_char___::_Resize__lambda_2b51424039c320f102fd798e073c89b2____::_1_::catch$102 @ 0x1800E9E45
 * Callers:
 *     <none>
 * Callees:
 *     ?deallocate@?$allocator@E@std@@QEAAXQEAE_K@Z @ 0x18009C9E8 (-deallocate@-$allocator@E@std@@QEAAXQEAE_K@Z.c)
 *     _CxxThrowException_0 @ 0x1800E22F0 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_unsigned_char_std::allocator_unsigned_char___::_Resize__lambda_2b51424039c320f102fd798e073c89b2____::_1_::catch_102(
        __int64 a1,
        __int64 a2)
{
  std::allocator<unsigned char>::deallocate(a1, *(_QWORD *)(a2 + 96), *(_QWORD *)(a2 + 80));
  throw;
}
