/*
 * XREFs of PsCaptureUserProcessParameters @ 0x14059CC00
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSilo @ 0x140089070 (PsGetCurrentServerSilo.c)
 *     PspCaptureUserProcessParameters @ 0x140538864 (PspCaptureUserProcessParameters.c)
 */

__int64 __fastcall PsCaptureUserProcessParameters(_QWORD *a1, __int64 a2)
{
  __int64 CurrentServerSilo; // rax

  CurrentServerSilo = PsGetCurrentServerSilo();
  return PspCaptureUserProcessParameters(a1, a2, 3, CurrentServerSilo);
}
