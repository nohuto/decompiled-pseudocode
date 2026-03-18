/*
 * XREFs of KeQueryCpuSetsProcess @ 0x140246800
 * Callers:
 *     NtQueryInformationProcess @ 0x1404F9480 (NtQueryInformationProcess.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140122D80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140122DC0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     KiGetProcessCpuSetMaskPointer @ 0x14018174C (KiGetProcessCpuSetMaskPointer.c)
 */

__int64 __fastcall KeQueryCpuSetsProcess(__int64 a1, _QWORD *a2, unsigned int a3, int a4)
{
  unsigned int v5; // edi
  __int64 ProcessCpuSetMaskPointer; // rsi
  unsigned __int8 CurrentIrql; // r15
  __int64 v8; // rcx
  volatile LONG *v9; // r14
  __int64 v10; // rsi
  __int64 v11; // r8
  unsigned int v13; // [rsp+50h] [rbp+18h] BYREF

  v13 = a3;
  v5 = 20;
  ProcessCpuSetMaskPointer = KiGetProcessCpuSetMaskPointer(a1, a4, &v13);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v9 = (volatile LONG *)(v8 + 64);
  ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v8 + 64));
  if ( v13 > 0x14 || (v5 = v13) != 0 )
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
