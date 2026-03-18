/*
 * XREFs of PsIsProcessInAppSilo @ 0x14057FCA0
 * Callers:
 *     <none>
 * Callees:
 *     PsIsServerSilo @ 0x14008A910 (PsIsServerSilo.c)
 *     PsGetProcessSilo @ 0x1400CF620 (PsGetProcessSilo.c)
 */

bool __fastcall PsIsProcessInAppSilo(__int64 a1)
{
  __int64 ProcessSilo; // rax
  char v2; // dl

  ProcessSilo = PsGetProcessSilo(a1);
  v2 = 0;
  if ( ProcessSilo )
    return !PsIsServerSilo(ProcessSilo);
  return v2;
}
