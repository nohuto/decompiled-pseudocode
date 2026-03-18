/*
 * XREFs of ProcessorAddInstance @ 0x1C008E0EC
 * Callers:
 *     ProcessorpAddInstanceCallback @ 0x1C00580B0 (ProcessorpAddInstanceCallback.c)
 *     IrqLibpParseMadt @ 0x1C009C8B8 (IrqLibpParseMadt.c)
 * Callees:
 *     memset @ 0x1C0004540 (memset.c)
 *     ProcessorpIndexInstance @ 0x1C008F040 (ProcessorpIndexInstance.c)
 *     ProcessorpReserveUnownedRanges @ 0x1C008F52C (ProcessorpReserveUnownedRanges.c)
 */

__int64 __fastcall ProcessorAddInstance(unsigned int a1, int a2)
{
  unsigned int v3; // r15d
  ULONG ProcessorIndexFromNumber; // eax
  ULONG v6; // edi
  __int64 v7; // r14
  char *PoolWithTag; // rax
  char *v9; // rbx
  int v10; // esi
  unsigned int v11; // edi
  bool v12; // cc
  void *v13; // rcx
  __int128 v14; // [rsp+20h] [rbp-20h] BYREF
  __int64 v15; // [rsp+30h] [rbp-10h]
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+70h] [rbp+30h] BYREF

  v3 = a1;
  v14 = 0uLL;
  v15 = 0LL;
  if ( IrqLibInterruptModel == 1 )
  {
    if ( (int)HalGetInterruptTargetInformation(0LL, a1, &v14) < 0 )
      return 0LL;
    ProcNumber = (struct _PROCESSOR_NUMBER)DWORD1(v14);
    ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(&ProcNumber);
    v6 = ProcessorIndexFromNumber;
    if ( a2 != -1 && ProcessorIndexFromNumber != a2 )
      return 3221225496LL;
  }
  else
  {
    v3 = 0;
    ProcNumber = 0;
    v6 = 0;
  }
  v7 = v6;
  if ( *((_QWORD *)ProcessorByNtNumber + v6) )
    return 0LL;
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x70uLL, 0x49706341u);
  v9 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0x70uLL);
  *((struct _PROCESSOR_NUMBER *)v9 + 26) = ProcNumber;
  RtlInitializeRangeList((PRTL_RANGE_LIST)v9);
  RtlInitializeRangeList((PRTL_RANGE_LIST)v9 + 1);
  v10 = ProcessorpReserveUnownedRanges((PRTL_RANGE_LIST)v9);
  if ( v10 < 0 )
    goto LABEL_18;
  if ( IrqLibInterruptModel == 1 )
  {
    *((_DWORD *)v9 + 16) = v3;
    *(_OWORD *)(v9 + 68) = v14;
    *(_QWORD *)(v9 + 84) = v15;
  }
  v10 = ProcessorpIndexInstance(v6, &v14);
  if ( v10 < 0 )
  {
LABEL_18:
    v13 = (void *)*((_QWORD *)ProcessorByNtNumber + v6);
    if ( v13 )
    {
      ExFreePoolWithTag(v13, 0);
      *((_QWORD *)ProcessorByNtNumber + v6) = 0LL;
    }
    ExFreePoolWithTag(v9, 0);
  }
  else
  {
    v11 = v6 + 1;
    v12 = ProcessorInstanceCount <= v11;
    *((_QWORD *)ProcessorByNtNumber + v7) = v9;
    if ( v12 )
      ProcessorInstanceCount = v11;
    return 0;
  }
  return (unsigned int)v10;
}
