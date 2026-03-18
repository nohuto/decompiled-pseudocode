/*
 * XREFs of PsIsProcessInAppSilo @ 0x14045AE30
 * Callers:
 *     <none>
 * Callees:
 *     PsGetProcessSilo @ 0x14003A228 (PsGetProcessSilo.c)
 *     PspIsServerSilo @ 0x14011E800 (PspIsServerSilo.c)
 */

bool __fastcall PsIsProcessInAppSilo(__int64 a1)
{
  __int64 ProcessSilo; // rax
  char v2; // dl

  ProcessSilo = PsGetProcessSilo(a1);
  v2 = 0;
  if ( ProcessSilo )
    return !PspIsServerSilo(ProcessSilo);
  return v2;
}
