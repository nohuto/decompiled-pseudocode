/*
 * XREFs of __scrt_set_unhandled_exception_filter @ 0x140003AC4
 * Callers:
 *     pre_cpp_initialization @ 0x140002E80 (pre_cpp_initialization.c)
 * Callees:
 *     <none>
 */

LPTOP_LEVEL_EXCEPTION_FILTER _scrt_set_unhandled_exception_filter()
{
  return SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)_scrt_unhandled_exception_filter);
}
