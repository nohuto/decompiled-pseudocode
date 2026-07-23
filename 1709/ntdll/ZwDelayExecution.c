/*
 * XREFs of ZwDelayExecution @ 0x1800A0740
 * Callers:
 *     RtlpInitMuiCriticalSection @ 0x1800061E0 (RtlpInitMuiCriticalSection.c)
 *     LdrpInitializeThread @ 0x18002EC08 (LdrpInitializeThread.c)
 *     LdrpInitMuiCrits @ 0x180049210 (LdrpInitMuiCrits.c)
 *     EtwpFreeLoggerContext @ 0x180060EAC (EtwpFreeLoggerContext.c)
 *     EtwpWaitForBufferReferenceCount @ 0x180062FB8 (EtwpWaitForBufferReferenceCount.c)
 *     _LdrpInitialize @ 0x180078E70 (_LdrpInitialize.c)
 *     GetShipAssertBuffer @ 0x18008FC0C (GetShipAssertBuffer.c)
 *     InitSecurityCookie @ 0x1800D2800 (InitSecurityCookie.c)
 *     RtlLockHeapManagerForCloning @ 0x1800EF138 (RtlLockHeapManagerForCloning.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwDelayExecution(BOOLEAN Alertable, PLARGE_INTEGER DelayInterval)
{
  NTSTATUS result; // eax

  result = 52;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
