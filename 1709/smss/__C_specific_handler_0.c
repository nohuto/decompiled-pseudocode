/*
 * XREFs of __C_specific_handler_0 @ 0x14000C724
 * Callers:
 *     __GSHandlerCheck_SEH @ 0x14000C7DC (__GSHandlerCheck_SEH.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
EXCEPTION_DISPOSITION __cdecl _C_specific_handler_0(
        struct _EXCEPTION_RECORD *ExceptionRecord,
        void *EstablisherFrame,
        struct _CONTEXT *ContextRecord,
        struct _DISPATCHER_CONTEXT *DispatcherContext)
{
  return __C_specific_handler(ExceptionRecord, EstablisherFrame, ContextRecord, DispatcherContext);
}
