/*
 * XREFs of MmManageFaultRange @ 0x140262270
 * Callers:
 *     RtlpEnvRegisterFaultRange @ 0x14029F208 (RtlpEnvRegisterFaultRange.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x14002A570 (RtlAvlRemoveNode.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     RtlAvlInsertNodeEx @ 0x1400E7830 (RtlAvlInsertNodeEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall MmManageFaultRange(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4, char a3, char a4)
{
  ULONG_PTR v4; // rbp
  int v8; // r15d
  unsigned int v9; // ecx
  volatile signed __int64 *v10; // r9
  volatile signed __int64 *v11; // rdi
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // rcx
  unsigned __int64 *v15; // r14
  KIRQL v16; // al
  ULONG_PTR v17; // rbx
  KIRQL v18; // r13
  bool v19; // r8
  ULONG_PTR v20; // rax
  __int64 v21; // rdx
  char v22; // [rsp+30h] [rbp-58h] BYREF
  ULONG_PTR v23; // [rsp+48h] [rbp-40h]
  ULONG_PTR v24; // [rsp+50h] [rbp-38h]

  v4 = BugCheckParameter4 + BugCheckParameter3 - 1;
  v8 = a4 & 1;
  if ( (a4 & 1) != 0 )
  {
    v9 = 0;
    v10 = (volatile signed __int64 *)&unk_1403CB200;
    while ( 1 )
    {
      v11 = v10 - 3;
      if ( !*v10 && !_InterlockedCompareExchange64(v10, BugCheckParameter3, 0LL) )
        break;
      ++v9;
      v10 += 5;
      if ( v9 >= 2 )
        goto LABEL_8;
    }
    *((_QWORD *)v11 + 4) = v4;
LABEL_8:
    if ( v9 == 2 )
    {
      result = (__int64)ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x7641694Du);
      v11 = (volatile signed __int64 *)result;
      if ( !result )
        return result;
      *(_QWORD *)(result + 24) = BugCheckParameter3;
      *(_QWORD *)(result + 32) = v4;
    }
  }
  else
  {
    v23 = BugCheckParameter3;
    v11 = (volatile signed __int64 *)&v22;
    v24 = BugCheckParameter4 + BugCheckParameter3 - 1;
  }
  if ( (a3 & 0x20) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    Process = CurrentThread->ApcState.Process;
    if ( (Process[1].DirectoryTableBase & 0x1000000000000LL) == 0 )
      KeBugCheckEx(0x1Au, 0x5230uLL, (ULONG_PTR)CurrentThread->ApcState.Process, BugCheckParameter3, BugCheckParameter4);
    v15 = (unsigned __int64 *)(Process[1].ActiveProcessors.Bitmap[2] + 8264);
  }
  else
  {
    v15 = (unsigned __int64 *)&unk_1403CB1E0;
  }
  v16 = ExAcquireSpinLockExclusive(&dword_1403CB1D8);
  v17 = *v15;
  v18 = v16;
  if ( !v8 )
  {
    while ( v17 )
    {
      if ( *((_QWORD *)v11 + 3) > *(_QWORD *)(v17 + 32) )
      {
        v17 = *(_QWORD *)(v17 + 8);
      }
      else
      {
        if ( *((_QWORD *)v11 + 4) >= *(_QWORD *)(v17 + 24) )
          break;
        v17 = *(_QWORD *)v17;
      }
    }
    if ( *(_QWORD *)(v17 + 24) != BugCheckParameter3 || *(_QWORD *)(v17 + 32) != v4 )
      KeBugCheckEx(0x1Au, 0x5231uLL, v17, BugCheckParameter3, BugCheckParameter4);
    RtlAvlRemoveNode(v15, v17);
    goto LABEL_36;
  }
  v19 = 0;
  if ( !v17 )
    goto LABEL_26;
  while ( *((_QWORD *)v11 + 3) <= *(_QWORD *)(v17 + 32) && *((_QWORD *)v11 + 4) < *(_QWORD *)(v17 + 24) )
  {
    v20 = *(_QWORD *)v17;
    if ( !*(_QWORD *)v17 )
    {
      v19 = 0;
      goto LABEL_26;
    }
LABEL_24:
    v17 = v20;
  }
  v20 = *(_QWORD *)(v17 + 8);
  if ( v20 )
    goto LABEL_24;
  v19 = 1;
LABEL_26:
  RtlAvlInsertNodeEx(v15, v17, v19, v11);
  v17 = 0LL;
LABEL_36:
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_1403CB1D8);
  __writecr8(v18);
  if ( v17 )
  {
    v21 = 0LL;
    while ( (_UNKNOWN *)v17 != (_UNKNOWN *)((char *)&unk_1403CB1E8 + 40 * v21) )
    {
      v21 = (unsigned int)(v21 + 1);
      if ( (unsigned int)v21 >= 2 )
        goto LABEL_42;
    }
    v17 = 0LL;
LABEL_42:
    if ( v17 )
      ExFreePoolWithTag((PVOID)v17, 0);
  }
  return 1LL;
}
