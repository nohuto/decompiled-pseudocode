/*
 * XREFs of MiCommitRequestFailed @ 0x1406B6A28
 * Callers:
 *     MiChargeFullProcessCommitment @ 0x14051D550 (MiChargeFullProcessCommitment.c)
 * Callees:
 *     KeIsAttachedProcess @ 0x1400FCB20 (KeIsAttachedProcess.c)
 *     KeRequestTerminationThread @ 0x14012008C (KeRequestTerminationThread.c)
 *     MiLogCommitRequestFailed @ 0x1406B6AB0 (MiLogCommitRequestFailed.c)
 */

void __fastcall MiCommitRequestFailed(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  struct _KTHREAD *CurrentThread; // r8
  signed __int32 v6; // edx
  signed __int32 v7; // eax

  MiLogCommitRequestFailed(a1, a3, a4);
  if ( !KeIsAttachedProcess() && (KeGetCurrentThread()->MiscFlags & 0x400) == 0 && (*(_DWORD *)(a1 + 772) & 0x100) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v6 = *(&CurrentThread->MiscFlags + 1);
    if ( (v6 & 0x60000) == 0 )
    {
      while ( 1 )
      {
        v7 = _InterlockedCompareExchange((volatile signed __int32 *)&CurrentThread->116 + 1, v6 | 0x20000, v6);
        if ( v6 == v7 )
          break;
        v6 = v7;
        if ( (v7 & 0x60000) != 0 )
          return;
      }
      KeRequestTerminationThread((__int64)CurrentThread);
    }
  }
}
