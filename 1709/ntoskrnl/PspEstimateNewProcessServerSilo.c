/*
 * XREFs of PspEstimateNewProcessServerSilo @ 0x14053A85C
 * Callers:
 *     NtCreateUserProcess @ 0x14053B4F4 (NtCreateUserProcess.c)
 * Callees:
 *     PsGetHostSilo @ 0x140004290 (PsGetHostSilo.c)
 *     PsIsHostSilo @ 0x1400859F0 (PsIsHostSilo.c)
 *     PsGetProcessServerSilo @ 0x1400893E0 (PsGetProcessServerSilo.c)
 *     PsGetEffectiveServerSilo @ 0x1400D4220 (PsGetEffectiveServerSilo.c)
 */

__int64 __fastcall PspEstimateNewProcessServerSilo(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 ProcessServerSilo; // rbx
  unsigned int v6; // ebx
  __int64 v8; // rax
  __int64 EffectiveServerSilo; // rsi

  if ( a1 )
  {
    ProcessServerSilo = PsGetProcessServerSilo(a1);
    if ( !PsIsHostSilo(ProcessServerSilo) )
      return ProcessServerSilo;
  }
  v6 = 0;
  if ( !a3 )
    return PsGetHostSilo();
  v8 = 0LL;
  while ( 1 )
  {
    EffectiveServerSilo = PsGetEffectiveServerSilo(*(_QWORD *)(a2 + 8 * v8));
    if ( !PsIsHostSilo(EffectiveServerSilo) )
      break;
    v8 = ++v6;
    if ( v6 >= a3 )
      return PsGetHostSilo();
  }
  return EffectiveServerSilo;
}
