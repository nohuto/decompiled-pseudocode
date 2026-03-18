/*
 * XREFs of PopPepGetDeviceVetoMasks @ 0x14022E55C
 * Callers:
 *     PopFxTraceDeviceRegistration @ 0x140453DB0 (PopFxTraceDeviceRegistration.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400A5D60 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1400A6AB0 (ExAcquireSpinLockShared.c)
 */

char __fastcall PopPepGetDeviceVetoMasks(__int64 a1, __int64 a2)
{
  char v4; // r14
  KIRQL v5; // al
  int v6; // esi
  unsigned __int64 v7; // rbx

  v4 = 0;
  v5 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 64));
  v6 = *(_DWORD *)(a1 + 160);
  v7 = v5;
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  __writecr8(v7);
  if ( v6 == 2 )
  {
    v4 = 1;
    *(_QWORD *)a2 = *(_QWORD *)(a1 + 144);
    *(_DWORD *)(a2 + 8) = *(_DWORD *)(a1 + 152);
  }
  return v4;
}
