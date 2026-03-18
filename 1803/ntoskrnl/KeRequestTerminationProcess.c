/*
 * XREFs of KeRequestTerminationProcess @ 0x1407417F8
 * Callers:
 *     MiForceCrashForInvalidAccess @ 0x1407499E8 (MiForceCrashForInvalidAccess.c)
 *     MiCommitRequestFailed @ 0x140753D4C (MiCommitRequestFailed.c)
 * Callees:
 *     KeRequestTerminationThread @ 0x140043C6C (KeRequestTerminationThread.c)
 */

void __fastcall KeRequestTerminationProcess(__int64 a1, int a2)
{
  signed __int32 v2; // r8d
  __int64 v3; // rdx
  signed __int32 v4; // eax

  v2 = *(_DWORD *)(a1 + 120);
  v3 = (unsigned int)(a2 << 18);
  if ( (v2 & 0xC0000) == 0 )
  {
    while ( 1 )
    {
      v4 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 120), v3 | v2, v2);
      if ( v2 == v4 )
        break;
      v2 = v4;
      if ( (v4 & 0xC0000) != 0 )
        return;
    }
    KeRequestTerminationThread(a1, v3);
  }
}
