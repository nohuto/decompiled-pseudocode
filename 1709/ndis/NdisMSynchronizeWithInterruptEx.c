/*
 * XREFs of NdisMSynchronizeWithInterruptEx @ 0x1C001ECB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall NdisMSynchronizeWithInterruptEx(
        NDIS_HANDLE NdisInterruptHandle,
        ULONG MessageId,
        MINIPORT_SYNCHRONIZE_INTERRUPT_HANDLER SynchronizeFunction,
        PVOID SynchronizeContext)
{
  __int64 v4; // r10
  struct _KINTERRUPT *v5; // rcx

  if ( *((_BYTE *)NdisInterruptHandle + 193) != 1 )
  {
    v5 = (struct _KINTERRUPT *)*((_QWORD *)NdisInterruptHandle + 15);
    return KeSynchronizeExecution(v5, SynchronizeFunction, SynchronizeContext);
  }
  v4 = *((_QWORD *)NdisInterruptHandle + 15);
  if ( v4 && *(_DWORD *)(v4 + 4) > MessageId )
  {
    v5 = *(struct _KINTERRUPT **)(v4 + 48LL * MessageId + 24);
    return KeSynchronizeExecution(v5, SynchronizeFunction, SynchronizeContext);
  }
  return 0;
}
