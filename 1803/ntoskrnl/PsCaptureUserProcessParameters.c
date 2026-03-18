/*
 * XREFs of PsCaptureUserProcessParameters @ 0x140550780
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSilo @ 0x1400F17B0 (PsGetCurrentServerSilo.c)
 *     PspCaptureUserProcessParameters @ 0x140550820 (PspCaptureUserProcessParameters.c)
 */

__int64 __fastcall PsCaptureUserProcessParameters(__int64 a1, __int64 a2)
{
  __int64 CurrentServerSilo; // rax

  CurrentServerSilo = PsGetCurrentServerSilo();
  return PspCaptureUserProcessParameters(a1, a2, 3LL, CurrentServerSilo);
}
