/*
 * XREFs of MiWaitForPageWriteCompletion @ 0x140084528
 * Callers:
 *     MmPurgeSection @ 0x1400542A0 (MmPurgeSection.c)
 *     MiFlushSectionInternal @ 0x1401187E0 (MiFlushSectionInternal.c)
 * Callees:
 *     MiUnlockProtoPoolPage @ 0x140030A70 (MiUnlockProtoPoolPage.c)
 *     KeWaitForGate @ 0x140086DE8 (KeWaitForGate.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1400E4380 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

__int64 __fastcall MiWaitForPageWriteCompletion(__int64 a1, __int64 a2, ULONG_PTR a3, char a4)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v12; // [rsp+20h] [rbp-30h] BYREF
  int v13; // [rsp+28h] [rbp-28h]
  __int16 v14; // [rsp+30h] [rbp-20h] BYREF
  char v15; // [rsp+32h] [rbp-1Eh]
  int v16; // [rsp+34h] [rbp-1Ch]
  _QWORD v17[3]; // [rsp+38h] [rbp-18h] BYREF

  v16 = 0;
  v17[1] = v17;
  v13 = 8;
  v17[0] = v17;
  v14 = 263;
  v15 = 6;
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a2 + 72));
  v12 = *(_QWORD *)(a2 + 80);
  *(_QWORD *)(a2 + 80) = &v12;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a2 + 72));
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  LOBYTE(v8) = a4;
  MiUnlockProtoPoolPage(a3, v8, v9, v10);
  return KeWaitForGate(&v14, 18LL);
}
