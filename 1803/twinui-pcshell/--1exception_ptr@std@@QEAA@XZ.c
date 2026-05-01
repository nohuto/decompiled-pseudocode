/*
 * XREFs of ??1exception_ptr@std@@QEAA@XZ @ 0x1801FA5E0
 * Callers:
 *     _std::call_once__lambda_9127ed4c7f0b883365da4a18d16712eb____::_1_::dtor$0 @ 0x1801FA2C4 (_std--call_once__lambda_9127ed4c7f0b883365da4a18d16712eb____--_1_--dtor$0.c)
 *     _std::call_once__lambda_e13c9660f56a8071ad8948355737f92d____::_1_::dtor$0 @ 0x1801FA364 (_std--call_once__lambda_e13c9660f56a8071ad8948355737f92d____--_1_--dtor$0.c)
 *     _std::rethrow_exception_::_1_::dtor$0 @ 0x1801FBD4D (_std--rethrow_exception_--_1_--dtor$0.c)
 *     _std::call_once__lambda_e8a8a3830e8b700b3909ca267e5ddf52____::_1_::dtor$0 @ 0x18025C794 (_std--call_once__lambda_e8a8a3830e8b700b3909ca267e5ddf52____--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall std::exception_ptr::~exception_ptr(std::exception_ptr *this)
{
  __ExceptionPtrDestroy(this);
}
