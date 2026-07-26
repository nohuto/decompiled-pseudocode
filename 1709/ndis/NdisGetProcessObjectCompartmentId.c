/*
 * XREFs of NdisGetProcessObjectCompartmentId @ 0x1C0067D90
 * Callers:
 *     ?ndisCmValidateCompartmentChange@@YAPEAXII@Z @ 0x1C0067C08 (-ndisCmValidateCompartmentChange@@YAPEAXII@Z.c)
 * Callees:
 *     NdisGetSessionCompartmentId @ 0x1C001B2B0 (NdisGetSessionCompartmentId.c)
 *     NdisGetJobObjectCompartmentId @ 0x1C0067D40 (NdisGetJobObjectCompartmentId.c)
 */

__int64 __fastcall NdisGetProcessObjectCompartmentId(__int64 a1)
{
  __int64 ProcessJob; // rax
  unsigned int ProcessSessionId; // eax

  ProcessJob = PsGetProcessJob();
  if ( ProcessJob )
    return NdisGetJobObjectCompartmentId(ProcessJob);
  ProcessSessionId = PsGetProcessSessionId(a1);
  return NdisGetSessionCompartmentId(ProcessSessionId);
}
