/*
 * XREFs of ProcessorCopyData @ 0x1C008E278
 * Callers:
 *     AcpiIrqLibSetupSciInterrupt @ 0x1C008CBC8 (AcpiIrqLibSetupSciInterrupt.c)
 *     IrqArbBootAllocation @ 0x1C0090380 (IrqArbBootAllocation.c)
 *     IrqArbCommitAllocation @ 0x1C0090430 (IrqArbCommitAllocation.c)
 *     IrqArbpPrepareForTestOrConflict @ 0x1C00917CC (IrqArbpPrepareForTestOrConflict.c)
 * Callees:
 *     ProcessorpClearData @ 0x1C008E834 (ProcessorpClearData.c)
 *     ProcessorpInsertAssignment @ 0x1C008F1C0 (ProcessorpInsertAssignment.c)
 */

__int64 __fastcall ProcessorCopyData(unsigned int a1)
{
  int v2; // eax
  __int64 v3; // rbx
  struct _RTL_RANGE_LIST *v4; // rcx
  struct _RTL_RANGE_LIST *v5; // rdx
  NTSTATUS v6; // edi
  __int64 v7; // rbx
  struct _RTL_RANGE_LIST *v8; // rcx
  __int64 v9; // rdi
  struct _RTL_RANGE_LIST *v10; // r14
  struct _RTL_RANGE_LIST *v11; // rcx
  _WORD *UserData; // rbx
  __int64 v13; // r14
  _OWORD *PoolWithTag; // rax
  _OWORD *v15; // rdx
  struct _RANGE_LIST_ITERATOR Iterator; // [rsp+20h] [rbp-40h] BYREF
  struct _RANGE_LIST_ITERATOR v18; // [rsp+40h] [rbp-20h] BYREF
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+98h] [rbp+38h] BYREF
  PRTL_RANGE Range; // [rsp+A0h] [rbp+40h] BYREF
  PRTL_RANGE v21; // [rsp+A8h] [rbp+48h] BYREF

  ((void (*)(void))ProcessorpClearData)();
  v2 = ProcessorInstanceCount;
  v3 = 0LL;
  if ( ProcessorInstanceCount )
  {
    while ( 1 )
    {
      v4 = (struct _RTL_RANGE_LIST *)*((_QWORD *)ProcessorByNtNumber + v3);
      if ( v4 )
      {
        v5 = v4 + 1;
        if ( a1 )
        {
          v5 = (struct _RTL_RANGE_LIST *)*((_QWORD *)ProcessorByNtNumber + v3);
          ++v4;
        }
        v6 = RtlCopyRangeList(v4, v5);
        if ( v6 < 0 )
          break;
      }
      v2 = ProcessorInstanceCount;
      v3 = (unsigned int)(v3 + 1);
      if ( (unsigned int)v3 >= ProcessorInstanceCount )
        goto LABEL_7;
    }
LABEL_33:
    ProcessorpClearData(a1);
  }
  else
  {
LABEL_7:
    v7 = 0LL;
    if ( v2 )
    {
      do
      {
        v8 = (struct _RTL_RANGE_LIST *)*((_QWORD *)ProcessorByNtNumber + v7);
        if ( v8 )
        {
          if ( a1 )
            ++v8;
          RtlGetFirstRange(v8, &Iterator, &Range);
          while ( Range )
          {
            Range->UserData = 0LL;
            RtlGetNextRange(&Iterator, &Range, 1u);
          }
        }
        v2 = ProcessorInstanceCount;
        v7 = (unsigned int)(v7 + 1);
      }
      while ( (unsigned int)v7 < ProcessorInstanceCount );
    }
    v9 = 0LL;
    if ( v2 )
    {
      do
      {
        v10 = (struct _RTL_RANGE_LIST *)*((_QWORD *)ProcessorByNtNumber + v9);
        if ( v10 )
        {
          v11 = v10 + 1;
          if ( a1 )
            v11 = (struct _RTL_RANGE_LIST *)*((_QWORD *)ProcessorByNtNumber + v9);
          RtlGetFirstRange(v11, &v18, &v21);
          if ( a1 )
            ++v10;
          RtlGetFirstRange(v10, &Iterator, &Range);
          while ( v21 )
          {
            UserData = v21->UserData;
            if ( UserData )
            {
              v13 = *(_QWORD *)UserData;
              KeGetProcessorNumberFromIndex(v9, &ProcNumber);
              if ( UserData[4] == ProcNumber.Group && ((1LL << ProcNumber.Number) & (v13 ^ (v13 - 1)) & v13) != 0 )
              {
                PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x49706341u);
                if ( !PoolWithTag )
                {
                  v6 = -1073741670;
                  goto LABEL_33;
                }
                v15 = v21->UserData;
                *PoolWithTag = *v15;
                PoolWithTag[1] = v15[1];
                ProcessorpInsertAssignment(v21->Owner, PoolWithTag, a1);
              }
            }
            RtlGetNextRange(&v18, &v21, 1u);
            RtlGetNextRange(&Iterator, &Range, 1u);
          }
        }
        v9 = (unsigned int)(v9 + 1);
      }
      while ( (unsigned int)v9 < ProcessorInstanceCount );
    }
    return 0;
  }
  return (unsigned int)v6;
}
