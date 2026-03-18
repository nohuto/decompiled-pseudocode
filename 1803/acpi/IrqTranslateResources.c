/*
 * XREFs of IrqTranslateResources @ 0x1C008D7D0
 * Callers:
 *     <none>
 * Callees:
 *     IrqLibAcquireArbiterLock @ 0x1C0056D90 (IrqLibAcquireArbiterLock.c)
 *     IrqLibReleaseArbiterLock @ 0x1C0056E18 (IrqLibReleaseArbiterLock.c)
 *     WPP_RECORDER_SF_dDDq @ 0x1C0057E40 (WPP_RECORDER_SF_dDDq.c)
 *     IrqTranslatepQueryDeviceIrql @ 0x1C008D95C (IrqTranslatepQueryDeviceIrql.c)
 *     ProcessorGetDeviceIdtAssignment @ 0x1C008E4A0 (ProcessorGetDeviceIdtAssignment.c)
 *     IrqArbGsivFromIrq @ 0x1C0090A20 (IrqArbGsivFromIrq.c)
 */

__int64 __fastcall IrqTranslateResources(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        int a5,
        PVOID a6,
        PRTL_RANGE Range)
{
  PRTL_RANGE v7; // rbx
  int DeviceIdtAssignment; // edi
  unsigned int v12; // eax
  __int64 v13; // rdx
  char v14; // si
  PRTL_RANGE v15; // rax
  int v16; // edx
  int v17; // r8d
  int v18; // r9d
  ULONGLONG v19; // [rsp+50h] [rbp-58h] BYREF
  __int16 v20; // [rsp+58h] [rbp-50h]
  unsigned int v21; // [rsp+64h] [rbp-44h]
  struct _RANGE_LIST_ITERATOR Iterator; // [rsp+70h] [rbp-38h] BYREF

  v7 = Range;
  DeviceIdtAssignment = 0;
  *(_OWORD *)&Range->Start = *(_OWORD *)a2;
  LODWORD(v7->UserData) = *(_DWORD *)(a2 + 16);
  if ( a6 == *(PVOID *)(RootDeviceExtension + 736) )
    return 0LL;
  IrqLibAcquireArbiterLock(0);
  if ( a3 )
  {
    if ( a3 == 1 )
      DeviceIdtAssignment = -1073741637;
  }
  else
  {
    v12 = IrqArbGsivFromIrq(*(unsigned int *)(a2 + 8));
    DeviceIdtAssignment = ProcessorGetDeviceIdtAssignment(0LL, v12, 0LL, &v19);
    if ( DeviceIdtAssignment < 0 )
    {
      v14 = 0;
      RtlGetFirstRange(RangeList, &Iterator, &Range);
      v15 = Range;
      if ( !Range )
        goto LABEL_13;
      do
      {
        if ( v15->Owner == a6 )
          v14 = 1;
        RtlGetNextRange(&Iterator, &Range, 1u);
        v15 = Range;
      }
      while ( Range );
      if ( !v14 )
      {
LABEL_13:
        DeviceIdtAssignment = 0;
        *(_OWORD *)&v7->Start = *(_OWORD *)a2;
        LODWORD(v7->UserData) = *(_DWORD *)(a2 + 16);
      }
    }
    else
    {
      v13 = v21;
      HIWORD(v7->Start) = v20;
      *(ULONGLONG *)((char *)&v7->End + 4) = v19;
      LODWORD(v7->End) = v13;
      DeviceIdtAssignment = 288;
      WORD2(v7->Start) = (unsigned __int8)IrqTranslatepQueryDeviceIrql(*(unsigned int *)(a2 + 8), v13);
    }
  }
  IrqLibReleaseArbiterLock();
  WPP_RECORDER_SF_dDDq(WPP_GLOBAL_Control->DeviceExtension, v16, v17, v18);
  return (unsigned int)DeviceIdtAssignment;
}
