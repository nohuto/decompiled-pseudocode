/*
 * XREFs of EditionMouseMoveShellResilience @ 0x1C0109BA0
 * Callers:
 *     <none>
 * Callees:
 *     IsAdaptiveQueueDetachExempted @ 0x1C0006BF8 (IsAdaptiveQueueDetachExempted.c)
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
    if ( *(_QWORD *)(v2 + 648) )
    {
      if ( (*(_DWORD *)(v2 + 1184) & 0x40000) != 0 )
      {
        v3 = *(_QWORD *)(v2 + 648);
        if ( (*(_DWORD *)(v3 + 196) & 0x100000) != 0 )
        {
          if ( *(_QWORD *)(v2 + 1344) )
          {
            if ( !*(_DWORD *)(v3 + 328) )
              *(_DWORD *)(v3 + 328) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
            result = IsAdaptiveQueueDetachExempted(v2);
            if ( !result )
              return KeSetEvent(*(PRKEVENT *)(v2 + 1344), 1, 0);
          }
        }
      }
    }
  }
  return result;
}
