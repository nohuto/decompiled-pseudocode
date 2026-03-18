/*
 * XREFs of MiCommitRequestFailed @ 0x140753D4C
 * Callers:
 *     MiChargeFullProcessCommitment @ 0x1405B6870 (MiChargeFullProcessCommitment.c)
 * Callees:
 *     KeRequestTerminationProcess @ 0x1407417F8 (KeRequestTerminationProcess.c)
 *     MiLogCommitRequestFailed @ 0x140753DB0 (MiLogCommitRequestFailed.c)
 */

void __fastcall MiCommitRequestFailed(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  MiLogCommitRequestFailed(a1, a3, a4);
  if ( KeGetCurrentThread()->ApcStateIndex != 1
    && (KeGetCurrentThread()->MiscFlags & 0x400) == 0
    && (*(_DWORD *)(a1 + 772) & 0x100) != 0 )
  {
    KeRequestTerminationProcess((__int64)KeGetCurrentThread(), 1);
  }
}
