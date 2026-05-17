/*
 * XREFs of TppTerminateProcess @ 0x18010AF70
 * Callers:
 *     TppWorkerpInnerExceptionFilter @ 0x18010B1B4 (TppWorkerpInnerExceptionFilter.c)
 *     TppWorkerpOuterExceptionFilter @ 0x18010B234 (TppWorkerpOuterExceptionFilter.c)
 * Callees:
 *     <none>
 */

__int64 TppTerminateProcess()
{
  return ZwTerminateProcess();
}
