/*
 * XREFs of ndisMiniportMessageIsr @ 0x1C00178D0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C0024CC8 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C0024D1C (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ndisMiniportMessageIsr(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rcx
  unsigned int Number; // r12d
  unsigned int CurrentCpu; // r15d
  unsigned __int64 v7; // r14
  unsigned int v8; // esi
  unsigned __int8 v9; // di
  __int64 v11; // rax
  unsigned __int64 v12; // rsi
  int v13; // r13d
  unsigned __int64 v14; // r15
  int v15; // r13d
  unsigned int v16; // edi
  ULONG ProcessorIndexFromNumber; // eax
  _PROCESSOR_NUMBER ProcNumber; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v19; // [rsp+34h] [rbp-2Ch] BYREF
  int v20; // [rsp+38h] [rbp-28h]
  __int64 v21; // [rsp+40h] [rbp-20h]
  struct NDIS_PCW_CONTEXT v22; // [rsp+48h] [rbp-18h] BYREF
  char v23; // [rsp+A8h] [rbp+48h] BYREF
  unsigned __int8 v24; // [rsp+B8h] [rbp+58h]

  v3 = *(_QWORD *)(a2 + 96);
  Number = 0;
  v19 = 0;
  CurrentCpu = -1;
  v23 = 0;
  v7 = a3;
  v8 = *(_DWORD *)(v3 + 80);
  v22.PcwBlock = *(_NDIS_PCW_DATA_BLOCK **)(v3 + 40);
  v22.DatapathEventsMask = *(_DWORD *)(v3 + 48);
  v22.DatapathCyclesMask = v8;
  v22.CurrentCpu = -1;
  if ( (v8 & 2) != 0 )
  {
    ndisPcwStartCycleCounter(&v22, 1u);
    CurrentCpu = v22.CurrentCpu;
    LOBYTE(v8) = v22.DatapathCyclesMask;
  }
  v24 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *, unsigned int *))(a2 + 176))(
          *(_QWORD *)(a2 + 8),
          (unsigned int)v7,
          &v23,
          &v19);
  v9 = v24;
  if ( (v8 & 2) != 0 )
  {
    ndisPcwEndCycleCounter(&v22, 1u, 0xEuLL);
    CurrentCpu = v22.CurrentCpu;
  }
  if ( v9 && (v22.DatapathEventsMask & 2) != 0 )
  {
    if ( CurrentCpu == -1 )
    {
      CurrentCpu = KeGetPcr()->Prcb.Number;
      v22.CurrentCpu = CurrentCpu;
    }
    ++*(_QWORD *)((char *)&v22.PcwBlock->DatapathEventReferences[2]
                + CurrentCpu * ndisPcwPerCpuDataStride
                + ndisPcwOffsetToPerCpuData);
  }
  if ( v23 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a2 + 104));
    if ( KeInsertQueueDpc(
           (PRKDPC)(*(_QWORD *)(a2 + 224)
                  + ((unsigned __int64)(ndisMaxNumberOfProcessors + (_DWORD)v7 * (ndisMaxNumberOfProcessors + 1)) << 6)),
           (PVOID)v7,
           0LL) )
    {
      if ( (v22.DatapathCyclesMask & 0x1000) != 0 )
        ndisPcwStartCycleCounter(&v22, 0xCu);
      return v9;
    }
    else
    {
      _InterlockedDecrement((volatile signed __int32 *)(a2 + 104));
      return v9;
    }
  }
  else
  {
    v11 = *(_QWORD *)(a2 + 96);
    v12 = v19;
    v20 = -1;
    v13 = *(_DWORD *)(v11 + 48);
    v21 = *(_QWORD *)(v11 + 40);
    if ( *(_BYTE *)(a2 + 193) )
      v14 = *(_QWORD *)(a2 + 224) + ((unsigned __int64)((unsigned int)v7 * (ndisMaxNumberOfProcessors + 1)) << 6);
    else
      v14 = *(_QWORD *)(a2 + 112);
    ProcNumber = 0;
    v15 = v13 & 0x1000000;
    if ( v15 )
      Number = KeGetPcr()->Prcb.Number;
    if ( v19 )
    {
      v16 = v20;
      do
      {
        if ( (v12 & 1) != 0 )
        {
          ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(&ProcNumber);
          if ( ProcessorIndexFromNumber != -1 )
          {
            if ( ProcessorIndexFromNumber != Number && v15 )
            {
              if ( v16 == -1 )
                v16 = KeGetPcr()->Prcb.Number;
              ++*(_QWORD *)(ndisPcwOffsetToPerCpuData + ndisPcwPerCpuDataStride * v16 + v21 + 96);
            }
            _InterlockedIncrement((volatile signed __int32 *)(a2 + 104));
            if ( !KeInsertQueueDpc((PRKDPC)(v14 + ((unsigned __int64)ProcessorIndexFromNumber << 6)), (PVOID)v7, 0LL) )
              _InterlockedDecrement((volatile signed __int32 *)(a2 + 104));
          }
        }
        ++ProcNumber.Number;
        v12 >>= 1;
      }
      while ( v12 );
      return v24;
    }
    else
    {
      return v9;
    }
  }
}
