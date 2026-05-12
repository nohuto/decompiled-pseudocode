/*
 * XREFs of RaidAdapterDisConnectMSIInterrupt @ 0x1C0063E0C
 * Callers:
 *     RaidAdapterDeleteAsyncCallbacks @ 0x1C002BF04 (RaidAdapterDeleteAsyncCallbacks.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidAdapterDisConnectMSIInterrupt(__int64 a1)
{
  _IO_DISCONNECT_INTERRUPT_PARAMETERS Parameters; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)&Parameters.Version = 0LL;
  Parameters.Version = *(_DWORD *)(a1 + 676);
  Parameters.ConnectionContext.Generic = *(PVOID *)(a1 + 4432);
  IoDisconnectInterruptEx(&Parameters);
  *(_QWORD *)(a1 + 664) = 0LL;
}
