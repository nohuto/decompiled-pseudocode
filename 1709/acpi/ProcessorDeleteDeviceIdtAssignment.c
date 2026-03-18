/*
 * XREFs of ProcessorDeleteDeviceIdtAssignment @ 0x1C000EF94
 * Callers:
 *     IrqArbpUnreferenceArbitrationList @ 0x1C0088208 (IrqArbpUnreferenceArbitrationList.c)
 *     IrqArbAddAllocation @ 0x1C00889C0 (IrqArbAddAllocation.c)
 *     IrqLibAllocateMessageTarget @ 0x1C00A7C20 (IrqLibAllocateMessageTarget.c)
 *     IrqLibFreeMessageTarget @ 0x1C00A7EB0 (IrqLibFreeMessageTarget.c)
 *     IrqArbBacktrackAllocation @ 0x1C00A8500 (IrqArbBacktrackAllocation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ProcessorDeleteDeviceIdtAssignment(PVOID Owner, int a2, unsigned int a3, int a4)
{
  char v4; // bp
  char v5; // r14
  ULONGLONG v6; // r12
  __int64 v7; // rsi
  int v8; // r15d
  struct _RTL_RANGE_LIST *v10; // rdi
  _DWORD *UserData; // rbx
  unsigned int v12; // r15d
  __int64 v13; // rdx
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+20h] [rbp-68h] BYREF
  PRTL_RANGE Range; // [rsp+28h] [rbp-60h] BYREF
  _RANGE_LIST_ITERATOR Iterator; // [rsp+30h] [rbp-58h] BYREF
  int v19; // [rsp+A8h] [rbp+20h]

  v19 = a4;
  v4 = 0;
  v5 = 0;
  v6 = a3;
  v7 = 0LL;
  v8 = a2;
  if ( !ProcessorInstanceCount )
    return 3221226021LL;
  do
  {
    v10 = (struct _RTL_RANGE_LIST *)*((_QWORD *)ProcessorByNtNumber + v7);
    if ( v10 )
    {
      if ( a4 )
        ++v10;
      RtlGetFirstRange(v10, &Iterator, &Range);
      while ( Range )
      {
        if ( Range->Owner == Owner && LODWORD(Range->Start) == (_DWORD)v6 )
        {
          UserData = Range->UserData;
          if ( UserData )
          {
            if ( UserData[4] == v8 )
            {
              v12 = UserData[6] - 1 + UserData[5];
              KeGetProcessorNumberFromIndex(v7, &ProcNumber);
              v13 = *(_QWORD *)UserData & ~(1LL << ProcNumber.Number);
              *(_QWORD *)UserData = v13;
              if ( !v13 )
              {
                ExFreePoolWithTag(UserData, 0);
                v4 = 1;
              }
              v5 = 1;
              Range->UserData = 0LL;
              RtlDeleteRange(v10, v6, v12, Owner);
              v8 = a2;
              break;
            }
          }
        }
        RtlGetNextRange(&Iterator, &Range, 1u);
      }
      a4 = v19;
    }
    v7 = (unsigned int)(v7 + 1);
  }
  while ( (unsigned int)v7 < ProcessorInstanceCount );
  if ( v5 )
    return v4 == 0 ? 0xC0000001 : 0;
  else
    return 3221226021LL;
}
