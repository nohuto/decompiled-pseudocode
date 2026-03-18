/*
 * XREFs of MiDrainControlAreaWrites @ 0x14004B30C
 * Callers:
 *     MiPrepareSegmentForDeletion @ 0x14004B270 (MiPrepareSegmentForDeletion.c)
 *     MiDestroySection @ 0x14015E144 (MiDestroySection.c)
 * Callees:
 *     KeWaitForGate @ 0x140086DE8 (KeWaitForGate.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

void __fastcall MiDrainControlAreaWrites(__int64 a1, KIRQL a2)
{
  __int64 v4; // [rsp+20h] [rbp-30h] BYREF
  int v5; // [rsp+28h] [rbp-28h]
  __int16 v6; // [rsp+30h] [rbp-20h] BYREF
  char v7; // [rsp+32h] [rbp-1Eh]
  int v8; // [rsp+34h] [rbp-1Ch]
  _QWORD v9[3]; // [rsp+38h] [rbp-18h] BYREF

  for ( ; *(_DWORD *)(a1 + 76); a2 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72)) )
  {
    v8 = 0;
    v9[1] = v9;
    v5 = 8;
    v9[0] = v9;
    v4 = *(_QWORD *)(a1 + 80);
    *(_QWORD *)(a1 + 80) = &v4;
    v6 = 263;
    v7 = 6;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
    __writecr8(a2);
    KeWaitForGate(&v6, 18LL);
  }
}
