/*
 * XREFs of PpmIdleEvaluateConstraints @ 0x14015BFD0
 * Callers:
 *     PpmIdleSelectStates @ 0x14015B9D0 (PpmIdleSelectStates.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x140044EC0 (RtlGetInterruptTimePrecise.c)
 *     PoAllProcessorsDeepIdle @ 0x140067DF8 (PoAllProcessorsDeepIdle.c)
 */

LARGE_INTEGER __fastcall PpmIdleEvaluateConstraints(__int64 a1, LARGE_INTEGER *a2)
{
  __int64 v2; // rsi
  LARGE_INTEGER InterruptTimePrecise; // rax
  LARGE_INTEGER v6; // r11
  LARGE_INTEGER PerformanceCounter; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 23936);
  InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
  v6 = PerformanceCounter;
  *(LARGE_INTEGER *)(v2 + 496) = PerformanceCounter;
  *a2 = InterruptTimePrecise;
  *(_QWORD *)(v2 + 504) = *(_QWORD *)(a1 + 23960) + *(_QWORD *)(a1 + 24136);
  *(_BYTE *)(v2 + 538) = *(_BYTE *)(a1 + 24354);
  *(_BYTE *)(v2 + 536) = *(_BYTE *)(a1 + 23992);
  *(_BYTE *)(v2 + 537) = *(_BYTE *)(a1 + 23993);
  *(_BYTE *)(v2 + 539) = 1;
  if ( *(_BYTE *)(a1 + 33) && PoAllProcessorsDeepIdle() )
  {
    *(_BYTE *)(v2 + 540) = 1;
    *(_WORD *)(v2 + 48) |= 0x80u;
  }
  else
  {
    *(_BYTE *)(v2 + 540) = 0;
  }
  if ( *(_BYTE *)(v2 + 1) )
  {
    *(_WORD *)(v2 + 48) |= 0x100u;
    *(_DWORD *)(v2 + 528) = *(_DWORD *)(v2 + 24);
  }
  else
  {
    *(_DWORD *)(v2 + 528) = -1;
  }
  return v6;
}
