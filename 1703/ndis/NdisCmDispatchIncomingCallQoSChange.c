/*
 * XREFs of NdisCmDispatchIncomingCallQoSChange @ 0x1C0106C70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall NdisCmDispatchIncomingCallQoSChange(NDIS_HANDLE NdisVcHandle, PCO_CALL_PARAMETERS CallParameters)
{
  (*((void (__fastcall **)(_QWORD, PCO_CALL_PARAMETERS))NdisVcHandle + 15))(
    *((_QWORD *)NdisVcHandle + 3),
    CallParameters);
}
