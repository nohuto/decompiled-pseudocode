/*
 * XREFs of ??0exception_ptr@std@@QEAA@AEBV01@@Z @ 0x1801FA57C
 * Callers:
 *     std::call_once__lambda_9127ed4c7f0b883365da4a18d16712eb___ @ 0x1801FA230 (std--call_once__lambda_9127ed4c7f0b883365da4a18d16712eb___.c)
 *     std::call_once__lambda_e13c9660f56a8071ad8948355737f92d___ @ 0x1801FA2D0 (std--call_once__lambda_e13c9660f56a8071ad8948355737f92d___.c)
 *     std::call_once__lambda_e8a8a3830e8b700b3909ca267e5ddf52___ @ 0x18025C700 (std--call_once__lambda_e8a8a3830e8b700b3909ca267e5ddf52___.c)
 * Callees:
 *     <none>
 */

std::exception_ptr *__fastcall std::exception_ptr::exception_ptr(
        std::exception_ptr *this,
        const struct std::exception_ptr *a2)
{
  __ExceptionPtrCopy(this, a2);
  return this;
}
