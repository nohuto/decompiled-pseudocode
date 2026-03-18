/*
 * XREFs of KeTryToInsertQueueApc @ 0x140201740
 * Callers:
 *     EtwpQueueStackWalkApc @ 0x140256B58 (EtwpQueueStackWalkApc.c)
 * Callees:
 *     KiSignalThreadForApc @ 0x14003FFA4 (KiSignalThreadForApc.c)
 *     KiInsertQueueApc @ 0x140040128 (KiInsertQueueApc.c)
 *     KeGetEffectiveIrql @ 0x1400E2B60 (KeGetEffectiveIrql.c)
 *     KeIsThreadRunning @ 0x1401FCAFC (KeIsThreadRunning.c)
 */

char __fastcall KeTryToInsertQueueApc(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  char v7; // bl
  char v8; // r10
  __int64 v9; // r8
  __int64 v10; // r11

  v3 = *(_QWORD *)(a1 + 8);
  if ( !KeIsThreadRunning(v3) )
    return 0;
  KeGetEffectiveIrql();
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 64), 0LL) )
    return 0;
  v7 = 1;
  if ( (*(_DWORD *)(v3 + 116) & 0x4000) == 0 || *(_BYTE *)(a1 + 82) )
  {
    v7 = 0;
  }
  else
  {
    *(_BYTE *)(a1 + 82) = 1;
    *(_QWORD *)(a1 + 64) = a2;
    *(_QWORD *)(a1 + 72) = a3;
    KiInsertQueueApc(a1);
    LOBYTE(v9) = v8;
    KiSignalThreadForApc(v10, a1, v9);
  }
  *(_QWORD *)(v3 + 64) = 0LL;
  return v7;
}
