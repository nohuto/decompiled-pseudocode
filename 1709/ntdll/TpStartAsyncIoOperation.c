/*
 * XREFs of TpStartAsyncIoOperation @ 0x18000F900
 * Callers:
 *     <none>
 * Callees:
 *     TppIopValidateIo @ 0x18000F958 (TppIopValidateIo.c)
 *     TppBarrierAdjust @ 0x180071CD8 (TppBarrierAdjust.c)
 */

void __cdecl TpStartAsyncIoOperation(PTP_IO Io)
{
  __int64 v2; // rcx

  if ( (unsigned int)TppIopValidateIo(Io, 0LL, 1LL) )
  {
    TppBarrierAdjust((char *)Io + 56, 1LL, 0LL);
    _InterlockedIncrement((volatile signed __int32 *)Io + 70);
    _InterlockedIncrement((volatile signed __int32 *)Io);
    v2 = *((_QWORD *)Io + 18);
    if ( *(_DWORD *)(v2 + 424) != MEMORY[0x7FFE03C0] )
      TppAdjustRunningThreadGoal(v2);
  }
}
