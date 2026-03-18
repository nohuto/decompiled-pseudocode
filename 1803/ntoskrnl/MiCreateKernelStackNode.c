/*
 * XREFs of MiCreateKernelStackNode @ 0x1402562D0
 * Callers:
 *     MiOutPageSingleKernelStack @ 0x1400520A0 (MiOutPageSingleKernelStack.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     RtlAvlInsertNodeEx @ 0x1400E7830 (RtlAvlInsertNodeEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

_QWORD *__fastcall MiCreateKernelStackNode(_WORD *a1, _QWORD *a2)
{
  _QWORD *result; // rax
  bool v5; // bl
  _QWORD *v6; // rdi
  KIRQL v7; // al
  _QWORD *v8; // rdx
  KIRQL v9; // si
  unsigned __int64 v10; // rcx
  _QWORD *v11; // rax

  result = ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x734B694Du);
  v5 = 0;
  v6 = result;
  if ( !result )
    return result;
  result[3] = *a2 - 1LL;
  result[4] = a2[1];
  *((_WORD *)result + 20) = *a1;
  v7 = ExAcquireSpinLockExclusive(&dword_1403CC2E0);
  v8 = (_QWORD *)qword_1403CC2D8;
  v9 = v7;
  if ( !qword_1403CC2D8 )
    goto LABEL_11;
  v10 = v6[3];
  while ( v10 <= v8[3] && v10 < v8[4] )
  {
    v11 = (_QWORD *)*v8;
    if ( !*v8 )
      goto LABEL_11;
LABEL_9:
    v8 = v11;
  }
  v11 = (_QWORD *)v8[1];
  if ( v11 )
    goto LABEL_9;
  v5 = 1;
LABEL_11:
  RtlAvlInsertNodeEx((unsigned __int64 *)&qword_1403CC2D8, (unsigned __int64)v8, v5, v6);
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_1403CC2E0);
  __writecr8(v9);
  return v6;
}
