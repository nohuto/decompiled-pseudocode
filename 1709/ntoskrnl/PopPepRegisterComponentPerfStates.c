/*
 * XREFs of PopPepRegisterComponentPerfStates @ 0x14024306C
 * Callers:
 *     PopFxRegisterComponentPerfStates @ 0x1406F8F24 (PopFxRegisterComponentPerfStates.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140065040 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140066590 (ExAcquireSpinLockShared.c)
 */

__int64 __fastcall PopPepRegisterComponentPerfStates(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v5; // rbx
  KIRQL v6; // al
  KIRQL v7; // r14
  __int64 result; // rax

  v5 = 200LL * a2;
  v6 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 64));
  *(_BYTE *)(v5 + a1 + 368) = 1;
  v7 = v6;
  *(_QWORD *)(v5 + a1 + 208) = a3;
  if ( (a3 & 2) != 0 )
    *(_BYTE *)(a1 + 176) = 1;
  if ( (a3 & 4) != 0 )
    *(_BYTE *)(a1 + 177) = 1;
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  result = v7;
  __writecr8(v7);
  return result;
}
