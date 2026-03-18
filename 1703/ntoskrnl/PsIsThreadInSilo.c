/*
 * XREFs of PsIsThreadInSilo @ 0x140094994
 * Callers:
 *     PsLookupThreadByThreadId @ 0x14050EEE0 (PsLookupThreadByThreadId.c)
 * Callees:
 *     PspIsSiloInSilo @ 0x14045A7A8 (PspIsSiloInSilo.c)
 */

char __fastcall PsIsThreadInSilo(__int64 a1, __int64 a2)
{
  if ( !a2 )
    return 1;
  if ( *(_QWORD *)(a1 + 1992) == -3LL )
    return PsIsProcessInSilo(*(struct _KPROCESS **)(a1 + 544), a2);
  return (unsigned __int8)PspIsSiloInSilo(*(_QWORD *)(a1 + 1992)) != 0;
}
