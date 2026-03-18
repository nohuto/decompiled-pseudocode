/*
 * XREFs of KeGetTimer2DueTime @ 0x1402063F4
 * Callers:
 *     ExGetTimerDueTime @ 0x14025CBD4 (ExGetTimerDueTime.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x140051920 (KiAcquireKobjectLockSafe.c)
 */

char __fastcall KeGetTimer2DueTime(__int64 a1, _QWORD *a2)
{
  char v4; // r9
  __int64 v5; // r8

  KiAcquireKobjectLockSafe((volatile signed __int32 *)a1);
  v4 = 0;
  if ( (*(_BYTE *)(a1 + 3) & 0x40) != 0 )
  {
    v5 = *(_QWORD *)(a1 + 80);
    v4 = 1;
    *a2 = v5;
    if ( v5 == -1 )
      *a2 = *(_QWORD *)(a1 + 72);
  }
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  return v4;
}
