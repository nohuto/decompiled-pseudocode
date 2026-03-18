/*
 * XREFs of EditionMouseMoveShellResilience @ 0x1C00F4740
 * Callers:
 *     zzzSetFMouseMovedWorker @ 0x1C01BD5C8 (zzzSetFMouseMovedWorker.c)
 * Callees:
 *     IsAdaptiveQueueDetachExempted @ 0x1C0002114 (IsAdaptiveQueueDetachExempted.c)
 */

LONG __fastcall EditionMouseMoveShellResilience(__int64 a1)
{
  LONG result; // eax
  __int64 v2; // rbx
  __int64 v3; // rdx

  result = gfShellFrameHangResilient;
  if ( gfShellFrameHangResilient )
  {
    v2 = *(_QWORD *)(a1 + 16);
    if ( *(_QWORD *)(v2 + 592) )
    {
      v3 = *(_QWORD *)(v2 + 592);
      if ( (*(_DWORD *)(v2 + 1096) & 0x40000) != 0 && (*(_DWORD *)(v3 + 180) & 0x100000) != 0 && *(_QWORD *)(v2 + 1256) )
      {
        if ( !*(_DWORD *)(v3 + 312) )
          *(_DWORD *)(v3 + 312) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        result = IsAdaptiveQueueDetachExempted(v2);
        if ( !result )
          return KeSetEvent(*(PRKEVENT *)(v2 + 1256), 1, 0);
      }
    }
  }
  return result;
}
