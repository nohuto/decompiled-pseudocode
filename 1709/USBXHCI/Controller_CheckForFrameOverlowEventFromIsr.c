/*
 * XREFs of Controller_CheckForFrameOverlowEventFromIsr @ 0x1C001013C
 * Callers:
 *     Interrupter_WdfEvtInterruptIsr @ 0x1C001EC50 (Interrupter_WdfEvtInterruptIsr.c)
 * Callees:
 *     Controller_AreFrameAndTimeDeltaValuesValid @ 0x1C00100EC (Controller_AreFrameAndTimeDeltaValuesValid.c)
 *     Controller_GetFrameNumber @ 0x1C0010C5C (Controller_GetFrameNumber.c)
 */

void __fastcall Controller_CheckForFrameOverlowEventFromIsr(__int64 a1)
{
  __int64 v2; // rdi
  int FrameNumber; // esi
  __int64 v4; // r9
  int v5; // [rsp+30h] [rbp+8h] BYREF
  int v6; // [rsp+38h] [rbp+10h] BYREF

  if ( *(_BYTE *)(a1 + 536) )
  {
    v2 = MEMORY[0xFFFFF78000000008];
    if ( MEMORY[0xFFFFF78000000008] > (unsigned __int64)(*(_QWORD *)(a1 + 624) + 15000000LL) )
    {
      FrameNumber = Controller_GetFrameNumber(a1, 0LL, &v5, &v6);
      if ( !v5 )
      {
        if ( v6 )
        {
          ++*(_DWORD *)(a1 + 684);
        }
        else
        {
          KeQueryPerformanceCounter(0LL);
          if ( Controller_AreFrameAndTimeDeltaValuesValid(
                 FrameNumber - *(_DWORD *)(a1 + 648),
                 v2 - *(_QWORD *)(a1 + 632)) )
          {
            *(_QWORD *)(a1 + 664) = v4 - *(_QWORD *)(a1 + 600);
            *(_QWORD *)(a1 + 672) = (unsigned int)(8 * (FrameNumber - *(_DWORD *)(a1 + 608)) - *(_DWORD *)(a1 + 616));
          }
          else
          {
            ++*(_DWORD *)(a1 + 680);
          }
          *(_QWORD *)(a1 + 640) = v4;
          *(_QWORD *)(a1 + 632) = v2;
          *(_DWORD *)(a1 + 648) = FrameNumber;
        }
        *(_QWORD *)(a1 + 624) = v2;
      }
    }
  }
}
