/*
 * XREFs of KeCancelTimerInternal @ 0x1400D3430
 * Callers:
 *     ExpTimerPause @ 0x1400D3370 (ExpTimerPause.c)
 *     ExpTimerAdjust @ 0x140286A1C (ExpTimerAdjust.c)
 * Callees:
 *     KiCancelTimer @ 0x1400E22F0 (KiCancelTimer.c)
 */

char __fastcall KeCancelTimerInternal(__int64 a1, _QWORD *a2, int *a3, unsigned int *a4)
{
  char v8; // r8
  char v9; // cl
  int v10; // eax

  v8 = KiCancelTimer(a1, 0LL);
  if ( v8 )
  {
    v9 = *(_BYTE *)(a1 + 1);
    *a2 = *(_QWORD *)(a1 + 24);
    *a3 = 2;
    if ( (v9 & 1) != 0 )
    {
      *a3 = 1;
    }
    else
    {
      v10 = *a3;
      if ( (v9 & 2) != 0 )
        v10 = 3;
      *a3 = v10;
    }
    *a4 = ((unsigned __int8)(v9 & 0xFC) << 16) / 0x2710u;
  }
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  return v8;
}
