/*
 * XREFs of KeQueryCpuSetsProcess @ 0x140208D28
 * Callers:
 *     NtQueryInformationProcess @ 0x1404C7870 (NtQueryInformationProcess.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140065040 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1400D56B0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     KiGetProcessCpuSetMaskPointer @ 0x14015406C (KiGetProcessCpuSetMaskPointer.c)
 */

__int64 __fastcall KeQueryCpuSetsProcess(__int64 a1, _QWORD *a2, unsigned int a3, int a4)
{
  unsigned int v5; // esi
  __int64 ProcessCpuSetMaskPointer; // rdi
  unsigned __int8 CurrentIrql; // r15
  __int64 v8; // rcx
  volatile LONG *v9; // r14
  __int64 v10; // rdi
  __int64 v11; // r8
  unsigned int v13; // [rsp+50h] [rbp+18h] BYREF

  v13 = a3;
  v5 = 20;
  ProcessCpuSetMaskPointer = KiGetProcessCpuSetMaskPointer(a1, a4, &v13);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v9 = (volatile LONG *)(v8 + 64);
  ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v8 + 64));
  if ( v13 <= 0x14 )
    v5 = v13;
  if ( v5 )
  {
    v10 = ProcessCpuSetMaskPointer - (_QWORD)a2;
    v11 = v5;
    do
    {
      *a2 = *(_QWORD *)((char *)a2 + v10);
      ++a2;
      --v11;
    }
    while ( v11 );
  }
  ExReleaseSpinLockSharedFromDpcLevel(v9);
  __writecr8(CurrentIrql);
  return v13;
}
