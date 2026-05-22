/*
 * XREFs of ?_RethrowException@exception_ptr@std@@QEBAXXZ @ 0x18000779C
 * Callers:
 *     ?rethrow_exception@std@@YAXVexception_ptr@1@@Z @ 0x1800077A8 (-rethrow_exception@std@@YAXVexception_ptr@1@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall __noreturn std::exception_ptr::_RethrowException(std::exception_ptr *this)
{
  __ExceptionPtrRethrow(this);
  JUMPOUT(0x1800077A6LL);
}
