/*
 * XREFs of ProcessorpInsertAssignment @ 0x1C008F1C0
 * Callers:
 *     ProcessorCopyData @ 0x1C008E278 (ProcessorCopyData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ProcessorpInsertAssignment(PVOID a1, _DWORD *a2, int a3)
{
  __int64 result; // rax
  __int64 v5; // rbx
  unsigned __int8 v8; // di
  ULONG ProcessorIndexFromNumber; // eax
  struct _RTL_RANGE_LIST *v10; // rcx
  PRTL_RANGE Range; // [rsp+20h] [rbp-30h] BYREF
  struct _RANGE_LIST_ITERATOR Iterator; // [rsp+28h] [rbp-28h] BYREF
  struct _PROCESSOR_NUMBER v13; // [rsp+88h] [rbp+38h]
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+98h] [rbp+48h] BYREF

  result = *((unsigned __int16 *)a2 + 4);
  v5 = *(_QWORD *)a2;
  v13.Group = *((_WORD *)a2 + 4);
  v13.Reserved = 0;
  v8 = 0;
  while ( v5 )
  {
    if ( _bittest64(&v5, v8) )
    {
      v13.Number = v8;
      ProcNumber = v13;
      ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(&ProcNumber);
      if ( ProcessorIndexFromNumber == -1 || ProcessorIndexFromNumber >= ProcessorInstanceCount )
        v10 = 0LL;
      else
        v10 = (struct _RTL_RANGE_LIST *)*((_QWORD *)ProcessorByNtNumber + ProcessorIndexFromNumber);
      if ( a3 )
        ++v10;
      RtlGetFirstRange(v10, &Iterator, &Range);
      while ( Range )
      {
        if ( LODWORD(Range->Start) == a2[5] && Range->Owner == a1 )
        {
          Range->UserData = a2;
          break;
        }
        RtlGetNextRange(&Iterator, &Range, 1u);
      }
    }
    result = v8;
    v5 &= ~(1LL << v8++);
  }
  return result;
}
