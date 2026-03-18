/*
 * XREFs of Controller_CheckForFrameOverlowEventFromIsr @ 0x1C000718C
 * Callers:
 *     Interrupter_WdfEvtInterruptIsr @ 0x1C0017EF0 (Interrupter_WdfEvtInterruptIsr.c)
 * Callees:
 *     Controller_AreFrameAndTimeDeltaValuesValid @ 0x1C000713C (Controller_AreFrameAndTimeDeltaValuesValid.c)
 *     Controller_GetFrameNumber @ 0x1C0007EBC (Controller_GetFrameNumber.c)
 */

void __fastcall Controller_CheckForFrameOverlowEventFromIsr(__int64 a1)
{
  __int64 v2; // rdi
  int FrameNumber; // esi
  __int64 v4; // r9
  int v5; // [rsp+30h] [rbp+8h] BYREF
  int v6; // [rsp+38h] [rbp+10h] BYREF

  if ( *(_BYTE *)(a1 + 552) )
  {
    v2 = MEMORY[0xFFFFF78000000008];
    if ( MEMORY[0xFFFFF78000000008] > (unsigned __int64)(*(_QWORD *)(a1 + 640) + 15000000LL) )
    {
      FrameNumber = Controller_GetFrameNumber(a1, 0LL, &v5, &v6);
      if ( !v5 )
      {
        if ( v6 )
        {
          ++*(_DWORD *)(a1 + 700);
        }
        else
        {
          KeQueryPerformanceCounter(0LL);
          if ( Controller_AreFrameAndTimeDeltaValuesValid(
                 FrameNumber - *(_DWORD *)(a1 + 664),
                 v2 - *(_QWORD *)(a1 + 648)) )
          {
            *(_QWORD *)(a1 + 680) = v4 - *(_QWORD *)(a1 + 616);
            *(_QWORD *)(a1 + 688) = (unsigned int)(8 * (FrameNumber - *(_DWORD *)(a1 + 624)) - *(_DWORD *)(a1 + 632));
          }
          else
          {
            ++*(_DWORD *)(a1 + 696);
          }
          *(_QWORD *)(a1 + 656) = v4;
          *(_QWORD *)(a1 + 648) = v2;
          *(_DWORD *)(a1 + 664) = FrameNumber;
        }
        *(_QWORD *)(a1 + 640) = v2;
      }
    }
  }
}
