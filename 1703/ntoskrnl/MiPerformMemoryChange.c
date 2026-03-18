/*
 * XREFs of MiPerformMemoryChange @ 0x14020DA70
 * Callers:
 *     MiAddPhysicalMemory @ 0x1406B34F8 (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x1406B410C (MiRemovePhysicalMemory.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiInitializeNonPagedPoolThresholds @ 0x140154930 (MiInitializeNonPagedPoolThresholds.c)
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

  v9 = ExAcquireSpinLockExclusive(&dword_1403802E8);
  v10 = 0LL;
  v11 = *a3;
  v12 = 0LL;
  v13 = v9;
  v14 = (*((_QWORD *)MmPhysicalMemoryBlock - 1))-- == 1LL;
  v15 = qword_140380240;
  if ( v14 )
    v12 = MmPhysicalMemoryBlock;
  MmPhysicalMemoryBlock = v11;
  *a3 = v12;
  v14 = (*(_QWORD *)(v15 - 8))-- == 1LL;
  v16 = *a4;
  if ( v14 )
    v10 = qword_140380240;
  v17 = a2 + a1 - 1;
  *a4 = v10;
  qword_140380240 = v16;
  if ( (a5 & 1) == 0 )
  {
    if ( v17 == BugCheckParameter3 )
      BugCheckParameter3 = a1 - 1;
    qword_1403817D0 -= a2;
    goto LABEL_13;
  }
  if ( v17 > BugCheckParameter3 )
    BugCheckParameter3 = a2 + a1 - 1;
  if ( (a5 & 4) == 0 )
  {
    qword_1403817D0 += a2;
LABEL_13:
    byte_14038020C = 1;
  }
  MiInitializeNonPagedPoolThresholds();
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_1403802E8);
  result = v13;
  __writecr8(v13);
  return result;
}
