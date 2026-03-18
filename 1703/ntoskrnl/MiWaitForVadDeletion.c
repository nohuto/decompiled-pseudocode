/*
 * XREFs of MiWaitForVadDeletion @ 0x1402238D8
 * Callers:
 *     MiObtainReferencedSecureVad @ 0x140099160 (MiObtainReferencedSecureVad.c)
 *     MiObtainReferencedVad @ 0x1400BDAC0 (MiObtainReferencedVad.c)
 *     MiCleanVad @ 0x14047AE9C (MiCleanVad.c)
 *     MmQueryVirtualMemory @ 0x14051B090 (MmQueryVirtualMemory.c)
 *     MiLockVadRange @ 0x14054B808 (MiLockVadRange.c)
 * Callees:
 *     KeWaitForGate @ 0x140017A68 (KeWaitForGate.c)
 *     MiUnlockVad @ 0x1400403D0 (MiUnlockVad.c)
 *     MiInsertVadEvent @ 0x140099800 (MiInsertVadEvent.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
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
