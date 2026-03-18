/*
 * XREFs of KeSetCheckStackExtentsProcess @ 0x140741844
 * Callers:
 *     NtSetInformationProcess @ 0x1404E4550 (NtSetInformationProcess.c)
 *     PspApplyMitigationOptions @ 0x1404EF46C (PspApplyMitigationOptions.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeSetCheckStackExtentsProcess(__int64 a1, int a2)
{
  if ( a2 )
    return _interlockedbittestandset((volatile signed __int32 *)(a1 + 440), 5u);
  else
    return _interlockedbittestandreset((volatile signed __int32 *)(a1 + 440), 5u);
}
