/*
 * XREFs of MicrosoftTelemetryAssertTriggeredNoArgs @ 0x1801CE634
 * Callers:
 *     PubSebRegisterRpc @ 0x1801CCDD0 (PubSebRegisterRpc.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x1801CE648 (MicrosoftTelemetryAssertTriggeredWorker.c)
 */

__int64 MicrosoftTelemetryAssertTriggeredNoArgs()
{
  void *retaddr; // [rsp+38h] [rbp+0h]

  return MicrosoftTelemetryAssertTriggeredWorker(retaddr);
}
