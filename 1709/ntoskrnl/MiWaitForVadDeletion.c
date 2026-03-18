/*
 * XREFs of MiWaitForVadDeletion @ 0x14023032C
 * Callers:
 *     MiObtainReferencedVad @ 0x140040AF0 (MiObtainReferencedVad.c)
 *     MiObtainReferencedSecureVad @ 0x1400E9550 (MiObtainReferencedSecureVad.c)
 *     MmQueryVirtualMemory @ 0x140497DA0 (MmQueryVirtualMemory.c)
 *     MiCleanVad @ 0x1404D3230 (MiCleanVad.c)
 *     MiLockVadRange @ 0x140540730 (MiLockVadRange.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     MiUnlockVad @ 0x1400A5788 (MiUnlockVad.c)
 *     MiInsertVadEvent @ 0x1400A59A0 (MiInsertVadEvent.c)
 *     KeWaitForGate @ 0x1400E3F18 (KeWaitForGate.c)
 */

void __fastcall MiWaitForVadDeletion(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v3; // [rsp+20h] [rbp-58h] BYREF
  __int16 v4; // [rsp+28h] [rbp-50h] BYREF
  char v5; // [rsp+2Ah] [rbp-4Eh]
  int v6; // [rsp+2Ch] [rbp-4Ch]
  _QWORD v7[6]; // [rsp+30h] [rbp-48h] BYREF
  int v8; // [rsp+60h] [rbp-18h]

  if ( *(_QWORD *)(a1 + 16) != -1LL )
  {
    CurrentThread = KeGetCurrentThread();
    v8 = 1;
    v6 = 0;
    v4 = 263;
    v5 = 6;
    v7[1] = v7;
    v7[0] = v7;
    MiInsertVadEvent(a1, &v3, 1);
    MiUnlockVad((__int64)CurrentThread, a1);
    KeWaitForGate((__int64)&v4, 0x12u);
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(a1 + 40, 0LL);
    LOBYTE(CurrentThread[1].Queue) |= 0x80u;
  }
}
