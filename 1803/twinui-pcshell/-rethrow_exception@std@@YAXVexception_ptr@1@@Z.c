/*
 * XREFs of ?rethrow_exception@std@@YAXVexception_ptr@1@@Z @ 0x1801FBD34
 * Callers:
 *     std::call_once__lambda_9127ed4c7f0b883365da4a18d16712eb___ @ 0x1801FA230 (std--call_once__lambda_9127ed4c7f0b883365da4a18d16712eb___.c)
 *     std::call_once__lambda_e13c9660f56a8071ad8948355737f92d___ @ 0x1801FA2D0 (std--call_once__lambda_e13c9660f56a8071ad8948355737f92d___.c)
 *     std::call_once__lambda_e8a8a3830e8b700b3909ca267e5ddf52___ @ 0x18025C700 (std--call_once__lambda_e8a8a3830e8b700b3909ca267e5ddf52___.c)
 * Callees:
 *     <none>
 */

// Hidden C++ exception states: #wind=1
void __fastcall __noreturn std::rethrow_exception(const void *a1)
{
  __ExceptionPtrRethrow(a1);
  JUMPOUT(0x1801FBD4CLL);
}
