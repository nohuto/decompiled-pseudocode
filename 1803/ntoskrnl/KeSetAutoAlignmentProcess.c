/*
 * XREFs of KeSetAutoAlignmentProcess @ 0x1404E89D4
 * Callers:
 *     NtSetInformationProcess @ 0x1404E4550 (NtSetInformationProcess.c)
 *     PspSetProcessDefaultHardErrorMode @ 0x1404E8250 (PspSetProcessDefaultHardErrorMode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeSetAutoAlignmentProcess(__int64 a1, int a2)
{
  if ( a2 )
    return _interlockedbittestandset((volatile signed __int32 *)(a1 + 440), 0);
  else
    return _interlockedbittestandreset((volatile signed __int32 *)(a1 + 440), 0);
}
