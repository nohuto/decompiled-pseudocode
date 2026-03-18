/*
 * XREFs of MiWaitForPageWriteCompletion @ 0x1400179B0
 * Callers:
 *     MiFlushSectionInternal @ 0x140094CA0 (MiFlushSectionInternal.c)
 *     MmPurgeSection @ 0x14010B4A0 (MmPurgeSection.c)
 * Callees:
 *     KeWaitForGate @ 0x140017A68 (KeWaitForGate.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140096D40 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiUnlockProtoPoolPage @ 0x1400A3920 (MiUnlockProtoPoolPage.c)
 */

__int64 __fastcall MiWaitForPageWriteCompletion(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v8; // rdx
  __int64 v10; // [rsp+20h] [rbp-30h] BYREF
  int v11; // [rsp+28h] [rbp-28h]
  __int16 v12; // [rsp+30h] [rbp-20h] BYREF
  char v13; // [rsp+32h] [rbp-1Eh]
  int v14; // [rsp+34h] [rbp-1Ch]
  _QWORD v15[3]; // [rsp+38h] [rbp-18h] BYREF

  v14 = 0;
  v15[1] = v15;
  v11 = 8;
  v15[0] = v15;
  v12 = 263;
  v13 = 6;
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a2 + 72));
  v10 = *(_QWORD *)(a2 + 80);
  *(_QWORD *)(a2 + 80) = &v10;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a2 + 72));
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  LOBYTE(v8) = a4;
  MiUnlockProtoPoolPage(a3, v8);
  return KeWaitForGate(&v12, 18LL);
}
