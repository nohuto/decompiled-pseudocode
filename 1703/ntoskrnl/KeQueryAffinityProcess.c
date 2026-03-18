/*
 * XREFs of KeQueryAffinityProcess @ 0x140084ED0
 * Callers:
 *     PspAllocateProcess @ 0x14049E8B8 (PspAllocateProcess.c)
 *     NtQueryInformationProcess @ 0x1404EA100 (NtQueryInformationProcess.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14006CF50 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400A5D60 (ExReleaseSpinLockSharedFromDpcLevel.c)
 */

__int64 __fastcall KeQueryAffinityProcess(__int64 a1, __int64 a2, int *a3, __int64 a4)
{
  unsigned __int8 CurrentIrql; // bp
  unsigned int v9; // ebx
  __int64 result; // rax

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  *(_OWORD *)a2 = *(_OWORD *)(a1 + 80);
  *(_OWORD *)(a2 + 16) = *(_OWORD *)(a1 + 96);
  *(_OWORD *)(a2 + 32) = *(_OWORD *)(a1 + 112);
  *(_OWORD *)(a2 + 48) = *(_OWORD *)(a1 + 128);
  *(_OWORD *)(a2 + 64) = *(_OWORD *)(a1 + 144);
  *(_OWORD *)(a2 + 80) = *(_OWORD *)(a1 + 160);
  *(_OWORD *)(a2 + 96) = *(_OWORD *)(a1 + 176);
  *(_OWORD *)(a2 + 112) = *(_OWORD *)(a1 + 192);
  *(_OWORD *)(a2 + 128) = *(_OWORD *)(a1 + 208);
  *(_OWORD *)(a2 + 144) = *(_OWORD *)(a1 + 224);
  *(_QWORD *)(a2 + 160) = *(_QWORD *)(a1 + 240);
  v9 = *(_DWORD *)(a1 + 440);
  if ( a4 )
  {
    *(_OWORD *)a4 = *(_OWORD *)(a1 + 528);
    *(_OWORD *)(a4 + 16) = *(_OWORD *)(a1 + 544);
    *(_QWORD *)(a4 + 32) = *(_QWORD *)(a1 + 560);
  }
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  if ( a3 )
    *a3 = (v9 >> 8) & 0xFFFFF;
  return result;
}
