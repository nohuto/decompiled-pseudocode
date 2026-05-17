/*
 * XREFs of __GSHandlerCheck_SEH @ 0x1800A4EBC
 * Callers:
 *     <none>
 * Callees:
 *     __C_specific_handler @ 0x180096300 (__C_specific_handler.c)
 *     __GSHandlerCheckCommon @ 0x18009C0A0 (__GSHandlerCheckCommon.c)
 */

EXCEPTION_DISPOSITION __fastcall _GSHandlerCheck_SEH(
        struct _EXCEPTION_RECORD *ExceptionRecord,
        void *EstablisherFrame,
        struct _CONTEXT *ContextRecord,
        struct _DISPATCHER_CONTEXT *DispatcherContext)
{
  char *v8; // rbx
  EXCEPTION_DISPOSITION result; // eax

  v8 = (char *)DispatcherContext->HandlerData + 16 * *(unsigned int *)DispatcherContext->HandlerData;
  _GSHandlerCheckCommon((unsigned __int64)EstablisherFrame, (__int64)DispatcherContext, (__int64)(v8 + 4));
  result = ExceptionContinueSearch;
  if ( ((((ExceptionRecord->ExceptionFlags & 0x66) != 0) + 1) & *((_DWORD *)v8 + 1)) != 0 )
    return _C_specific_handler(ExceptionRecord, EstablisherFrame, ContextRecord, DispatcherContext);
  return result;
}
