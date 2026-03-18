/*
 * XREFs of MiCreateKernelStackNode @ 0x1402196D0
 * Callers:
 *     MiOutPageSingleKernelStack @ 0x1400EAD50 (MiOutPageSingleKernelStack.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlAvlInsertNodeEx @ 0x1400A2A10 (RtlAvlInsertNodeEx.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

_QWORD *__fastcall MiCreateKernelStackNode(_WORD *a1, _QWORD *a2)
{
  _QWORD *result; // rax
  bool v5; // bl
  unsigned __int64 v6; // rdi
  KIRQL v7; // al
  _QWORD *v8; // rdx
  KIRQL v9; // si
  unsigned __int64 v10; // rcx
  _QWORD *v11; // rax

  result = ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x734B694Du);
  v5 = 0;
  v6 = (unsigned __int64)result;
  if ( !result )
    return result;
  result[3] = *a2 - 1LL;
  result[4] = a2[1];
  *((_WORD *)result + 20) = *a1;
  v7 = ExAcquireSpinLockExclusive(&dword_140389030);
  v8 = (_QWORD *)qword_140389028;
  v9 = v7;
  if ( !qword_140389028 )
    goto LABEL_11;
  v10 = *(_QWORD *)(v6 + 24);
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
  RtlAvlInsertNodeEx((unsigned __int64 *)&qword_140389028, (unsigned __int64)v8, v5, v6);
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140389030);
  __writecr8(v9);
  return (_QWORD *)v6;
}
