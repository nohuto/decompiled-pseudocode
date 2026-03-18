/*
 * XREFs of ProcessorpClearData @ 0x1C008ACF0
 * Callers:
 *     IrqArbCommitAllocation @ 0x1C0089410 (IrqArbCommitAllocation.c)
 *     IrqArbpPrepareForTestOrConflict @ 0x1C008A3E0 (IrqArbpPrepareForTestOrConflict.c)
 *     ProcessorCopyData @ 0x1C008A9C0 (ProcessorCopyData.c)
 *     IrqArbBootAllocation @ 0x1C0091650 (IrqArbBootAllocation.c)
 *     IrqArbpQueryConflictIsa @ 0x1C00A8A5C (IrqArbpQueryConflictIsa.c)
 * Callees:
 *     <none>
 */

void __fastcall ProcessorpClearData(int a1)
{
  ULONG i; // edi
  struct _RTL_RANGE_LIST *v3; // rsi
  PRTL_RANGE j; // rax
  _QWORD *UserData; // rbx
  __int64 v6; // rcx
  struct _RANGE_LIST_ITERATOR Iterator; // [rsp+20h] [rbp-38h] BYREF
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+68h] [rbp+10h] BYREF
  PRTL_RANGE Range; // [rsp+70h] [rbp+18h] BYREF

  for ( i = 0; i < ProcessorInstanceCount; ++i )
  {
    v3 = (struct _RTL_RANGE_LIST *)*((_QWORD *)ProcessorByNtNumber + i);
    if ( v3 )
    {
      if ( a1 )
        ++v3;
      RtlGetFirstRange(v3, &Iterator, &Range);
      for ( j = Range; Range; j = Range )
      {
        UserData = j->UserData;
        if ( UserData )
        {
          KeGetProcessorNumberFromIndex(i, &ProcNumber);
          v6 = *UserData & ~(1LL << ProcNumber.Number);
          *UserData = v6;
          if ( !v6 )
            ExFreePoolWithTag(UserData, 0);
          Range->UserData = 0LL;
        }
        RtlGetNextRange(&Iterator, &Range, 1u);
      }
      RtlFreeRangeList(v3);
    }
  }
}
