/*
 * XREFs of NdisMQueueDpcEx @ 0x1C0011460
 * Callers:
 *     NdisMQueueDpc @ 0x1C0011430 (NdisMQueueDpc.c)
 *     ndisMiniportIsr @ 0x1C0027E50 (ndisMiniportIsr.c)
 * Callees:
 *     <none>
 */

KAFFINITY __stdcall NdisMQueueDpcEx(
        NDIS_HANDLE NdisInterruptHandle,
        ULONG MessageId,
        PGROUP_AFFINITY TargetProcessors,
        PVOID MiniportDpcContext)
{
  __int64 v4; // rax
  unsigned int v6; // r15d
  unsigned int Number; // r13d
  __int64 v8; // r14
  int v9; // r12d
  unsigned __int64 v10; // rsi
  unsigned __int16 Group; // ax
  KAFFINITY v12; // rbp
  unsigned __int64 Mask; // rdi
  int v14; // r12d
  ULONG ProcessorIndexFromNumber; // eax
  _PROCESSOR_NUMBER ProcNumber; // [rsp+70h] [rbp+8h] BYREF
  PVOID SystemArgument1; // [rsp+78h] [rbp+10h]
  __int64 v19; // [rsp+80h] [rbp+18h]
  PVOID SystemArgument2; // [rsp+88h] [rbp+20h]

  SystemArgument2 = MiniportDpcContext;
  LODWORD(SystemArgument1) = MessageId;
  v4 = *((_QWORD *)NdisInterruptHandle + 12);
  v6 = -1;
  Number = 0;
  v8 = 1LL;
  v9 = *(_DWORD *)(v4 + 48);
  v19 = *(_QWORD *)(v4 + 40);
  if ( *((_BYTE *)NdisInterruptHandle + 193) )
    v10 = *((_QWORD *)NdisInterruptHandle + 28) + ((unsigned __int64)(MessageId * (ndisMaxNumberOfProcessors + 1)) << 6);
  else
    v10 = *((_QWORD *)NdisInterruptHandle + 14);
  Group = TargetProcessors->Group;
  v12 = 0LL;
  *(_WORD *)&ProcNumber.Number = 0;
  Mask = TargetProcessors->Mask;
  ProcNumber.Group = Group;
  v14 = v9 & 0x1000000;
  if ( v14 )
    Number = KeGetPcr()->Prcb.Number;
  for ( ; Mask; Mask >>= 1 )
  {
    if ( (Mask & 1) != 0 )
    {
      ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(&ProcNumber);
      if ( ProcessorIndexFromNumber != -1 )
      {
        if ( ProcessorIndexFromNumber != Number && v14 )
        {
          if ( v6 == -1 )
            v6 = KeGetPcr()->Prcb.Number;
          ++*(_QWORD *)(ndisPcwOffsetToPerCpuData + v6 * ndisPcwPerCpuDataStride + v19 + 96);
        }
        _InterlockedIncrement((volatile signed __int32 *)NdisInterruptHandle + 26);
        if ( KeInsertQueueDpc(
               (PRKDPC)(v10 + ((unsigned __int64)ProcessorIndexFromNumber << 6)),
               (PVOID)(unsigned int)SystemArgument1,
               SystemArgument2) )
        {
          v12 |= v8;
        }
        else
        {
          _InterlockedDecrement((volatile signed __int32 *)NdisInterruptHandle + 26);
        }
      }
    }
    ++ProcNumber.Number;
    v8 *= 2LL;
  }
  return v12;
}
