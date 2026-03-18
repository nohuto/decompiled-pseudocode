/*
 * XREFs of ProcessorGetDeviceIdtAssignment @ 0x1C008E4A0
 * Callers:
 *     IrqLibFreeMessageTarget @ 0x1C008D070 (IrqLibFreeMessageTarget.c)
 *     IrqTransGetInterruptVector @ 0x1C008D6B0 (IrqTransGetInterruptVector.c)
 *     IrqTranslateResources @ 0x1C008D7D0 (IrqTranslateResources.c)
 *     ProcessorpFindIdtEntriesApic @ 0x1C008ED20 (ProcessorpFindIdtEntriesApic.c)
 *     IrqArbBacktrackAllocation @ 0x1C0090240 (IrqArbBacktrackAllocation.c)
 *     IrqArbGetDeviceIrql @ 0x1C00906A0 (IrqArbGetDeviceIrql.c)
 *     IrqArbpSetDeviceProperties @ 0x1C00918EC (IrqArbpSetDeviceProperties.c)
 *     IrqArbpUnreferenceArbitrationList @ 0x1C0091B50 (IrqArbpUnreferenceArbitrationList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ProcessorGetDeviceIdtAssignment(PVOID a1, int a2, int a3, _OWORD *a4)
{
  __int64 i; // rbx
  struct _RTL_RANGE_LIST *v9; // rcx
  _OWORD *UserData; // rax
  __int64 result; // rax
  __int128 v12; // xmm1
  PRTL_RANGE Range; // [rsp+20h] [rbp-38h] BYREF
  struct _RANGE_LIST_ITERATOR Iterator; // [rsp+28h] [rbp-30h] BYREF

  for ( i = 0LL; (unsigned int)i < ProcessorInstanceCount; i = (unsigned int)(i + 1) )
  {
    v9 = (struct _RTL_RANGE_LIST *)*((_QWORD *)ProcessorByNtNumber + i);
    if ( v9 )
    {
      if ( a3 )
        ++v9;
      RtlGetFirstRange(v9, &Iterator, &Range);
      while ( Range )
      {
        UserData = Range->UserData;
        if ( UserData && *((_DWORD *)UserData + 4) == a2 && (!a1 || Range->Owner == a1) )
        {
          *a4 = *UserData;
          v12 = UserData[1];
          result = 0LL;
          a4[1] = v12;
          return result;
        }
        RtlGetNextRange(&Iterator, &Range, 1u);
      }
    }
  }
  return 3221226021LL;
}
