/*
 * XREFs of MiWaitForVadDeletion @ 0x14026B614
 * Callers:
 *     MiObtainReferencedVadEx @ 0x14001B0F0 (MiObtainReferencedVadEx.c)
 *     MiObtainReferencedSecureVad @ 0x1400E45B0 (MiObtainReferencedSecureVad.c)
 *     MiLockVadRange @ 0x1404C010C (MiLockVadRange.c)
 *     MiCleanVad @ 0x140595BD8 (MiCleanVad.c)
 *     MmQueryVirtualMemory @ 0x1405B5C20 (MmQueryVirtualMemory.c)
 * Callees:
 *     KeWaitForGate @ 0x140086DE8 (KeWaitForGate.c)
 *     MiInsertVadEvent @ 0x1400E4C88 (MiInsertVadEvent.c)
 *     MiUnlockVad @ 0x1400E6930 (MiUnlockVad.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall MiWaitForVadDeletion(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // [rsp+20h] [rbp-58h] BYREF
  __int16 v6; // [rsp+28h] [rbp-50h] BYREF
  char v7; // [rsp+2Ah] [rbp-4Eh]
  int v8; // [rsp+2Ch] [rbp-4Ch]
  _QWORD v9[6]; // [rsp+30h] [rbp-48h] BYREF
  int v10; // [rsp+60h] [rbp-18h]

  if ( *(_QWORD *)(a1 + 16) != -1LL )
  {
    CurrentThread = KeGetCurrentThread();
    v10 = 1;
    v8 = 0;
    v6 = 263;
    v7 = 6;
    v9[1] = v9;
    v9[0] = v9;
    MiInsertVadEvent(a1, &v5, 1);
    MiUnlockVad((__int64)CurrentThread, a1, v3, v4);
    KeWaitForGate((__int64)&v6, 0x12u);
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(a1 + 40, 0LL);
    LOBYTE(CurrentThread[1].Queue) |= 0x80u;
  }
}
