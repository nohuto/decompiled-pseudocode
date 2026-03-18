/*
 * XREFs of ProcessorIdtEntryToGsiv @ 0x1C008E574
 * Callers:
 *     IrqLibpGetVectorInput @ 0x1C0056E40 (IrqLibpGetVectorInput.c)
 *     IrqLibFreeMessageTarget @ 0x1C008D070 (IrqLibFreeMessageTarget.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ProcessorIdtEntryToGsiv(int a1, __int64 a2, struct _PROCESSOR_NUMBER a3, _DWORD *a4)
{
  __int64 v5; // r8
  unsigned __int8 v8; // bl
  ULONG ProcessorIndexFromNumber; // eax
  struct _RTL_RANGE_LIST *v10; // rcx
  __int64 result; // rax
  PRTL_RANGE Range; // [rsp+20h] [rbp-30h] BYREF
  struct _RANGE_LIST_ITERATOR Iterator; // [rsp+28h] [rbp-28h] BYREF
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+78h] [rbp+28h] BYREF
  struct _PROCESSOR_NUMBER v15; // [rsp+80h] [rbp+30h]

  v15 = a3;
  v5 = *(_QWORD *)a2;
  v15.Group = *(_WORD *)(a2 + 8);
  v15.Reserved = 0;
  v8 = 0;
  while ( v5 )
  {
    if ( _bittest64(&v5, v8) )
    {
      v15.Number = v8;
      ProcNumber = v15;
      ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(&ProcNumber);
      if ( ProcessorIndexFromNumber == -1 || ProcessorIndexFromNumber >= ProcessorInstanceCount )
        v10 = 0LL;
      else
        v10 = (struct _RTL_RANGE_LIST *)*((_QWORD *)ProcessorByNtNumber + ProcessorIndexFromNumber);
      if ( v10 )
      {
        RtlGetFirstRange(v10, &Iterator, &Range);
        while ( Range )
        {
          if ( LODWORD(Range->Start) == a1 )
          {
            result = 0LL;
            *a4 = *((_DWORD *)Range->UserData + 4);
            return result;
          }
          RtlGetNextRange(&Iterator, &Range, 1u);
        }
      }
    }
    v5 = *(_QWORD *)a2 & ~(1LL << v8);
    *(_QWORD *)a2 = v5;
    ++v8;
  }
  return 3221226021LL;
}
