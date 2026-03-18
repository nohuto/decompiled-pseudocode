/*
 * XREFs of ProcessorpClearData @ 0x1C008E834
 * Callers:
 *     ProcessorCopyData @ 0x1C008E278 (ProcessorCopyData.c)
 *     IrqArbBootAllocation @ 0x1C0090380 (IrqArbBootAllocation.c)
 *     IrqArbCommitAllocation @ 0x1C0090430 (IrqArbCommitAllocation.c)
 *     IrqArbpPrepareForTestOrConflict @ 0x1C00917CC (IrqArbpPrepareForTestOrConflict.c)
 *     IrqArbpQueryConflictIsa @ 0x1C009183C (IrqArbpQueryConflictIsa.c)
 * Callees:
 *     <none>
 */

void __fastcall ProcessorpClearData(int a1)
{
  __int64 i; // rbx
  struct _RTL_RANGE_LIST *v3; // rsi
  _QWORD *UserData; // rdi
  __int64 v5; // rdx
  struct _RANGE_LIST_ITERATOR Iterator; // [rsp+20h] [rbp-38h] BYREF
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+68h] [rbp+10h] BYREF
  PRTL_RANGE Range; // [rsp+70h] [rbp+18h] BYREF

  for ( i = 0LL; (unsigned int)i < ProcessorInstanceCount; i = (unsigned int)(i + 1) )
  {
    v3 = (struct _RTL_RANGE_LIST *)*((_QWORD *)ProcessorByNtNumber + i);
    if ( v3 )
    {
      if ( a1 )
        ++v3;
      RtlGetFirstRange(v3, &Iterator, &Range);
      while ( Range )
      {
        UserData = Range->UserData;
        if ( UserData )
        {
          KeGetProcessorNumberFromIndex(i, &ProcNumber);
          v5 = *UserData & ~(1LL << ProcNumber.Number);
          *UserData = v5;
          if ( !v5 )
            ExFreePoolWithTag(UserData, 0);
          Range->UserData = 0LL;
        }
        RtlGetNextRange(&Iterator, &Range, 1u);
      }
      RtlFreeRangeList(v3);
    }
  }
}
