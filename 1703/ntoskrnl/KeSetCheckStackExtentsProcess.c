/*
 * XREFs of KeSetCheckStackExtentsProcess @ 0x1406AC660
 * Callers:
 *     NtSetInformationProcess @ 0x1404A2550 (NtSetInformationProcess.c)
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
