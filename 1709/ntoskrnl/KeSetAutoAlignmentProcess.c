/*
 * XREFs of KeSetAutoAlignmentProcess @ 0x1404D932C
 * Callers:
 *     NtSetInformationProcess @ 0x1404D7080 (NtSetInformationProcess.c)
 *     PspSetProcessDefaultHardErrorMode @ 0x1404D9270 (PspSetProcessDefaultHardErrorMode.c)
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
