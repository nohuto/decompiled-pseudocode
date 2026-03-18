/*
 * XREFs of MiPerformMemoryChange @ 0x140214B28
 * Callers:
 *     MiAddPhysicalMemory @ 0x1406DF4C8 (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x1406E00F8 (MiRemovePhysicalMemory.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiInitializeNonPagedPoolThresholds @ 0x14013985C (MiInitializeNonPagedPoolThresholds.c)
 */

__int64 __fastcall MiPerformMemoryChange(__int64 a1, __int64 a2, void **a3, __int64 *a4, char a5)
{
  KIRQL v9; // al
  __int64 v10; // r8
  void *v11; // r9
  void *v12; // rdx
  KIRQL v13; // r14
  bool v14; // zf
  __int64 v15; // rcx
  __int64 v16; // rcx
  ULONG_PTR v17; // rax
  __int64 result; // rax

  v9 = ExAcquireSpinLockExclusive(&dword_14038A180);
  v10 = 0LL;
  v11 = *a3;
  v12 = 0LL;
  v13 = v9;
  v14 = (*((_QWORD *)MmPhysicalMemoryBlock - 1))-- == 1LL;
  v15 = qword_14038A0E0;
  if ( v14 )
    v12 = MmPhysicalMemoryBlock;
  MmPhysicalMemoryBlock = v11;
  *a3 = v12;
  v14 = (*(_QWORD *)(v15 - 8))-- == 1LL;
  v16 = *a4;
  if ( v14 )
    v10 = qword_14038A0E0;
  v17 = a2 + a1 - 1;
  *a4 = v10;
  qword_14038A0E0 = v16;
  if ( (a5 & 1) == 0 )
  {
    if ( v17 == BugCheckParameter3 )
      BugCheckParameter3 = a1 - 1;
    qword_14038B750 -= a2;
    goto LABEL_13;
  }
  if ( v17 > BugCheckParameter3 )
    BugCheckParameter3 = a2 + a1 - 1;
  if ( (a5 & 4) == 0 )
  {
    qword_14038B750 += a2;
LABEL_13:
    byte_14038A0CC = 1;
  }
  MiInitializeNonPagedPoolThresholds();
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_14038A180);
  result = v13;
  __writecr8(v13);
  return result;
}
