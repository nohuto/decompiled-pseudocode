/*
 * XREFs of ndisMiniportMessageIsr @ 0x1C0006090
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C0011764 (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C001177C (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
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
  __int64 v12; // rcx
  int v13; // r13d
  unsigned __int64 v14; // r15
  unsigned __int64 v15; // rsi
  int v16; // r13d
  unsigned int v17; // edi
  ULONG ProcessorIndexFromNumber; // eax
  _PROCESSOR_NUMBER ProcNumber; // [rsp+30h] [rbp-40h] BYREF
  unsigned int v20; // [rsp+34h] [rbp-3Ch] BYREF
  int v21; // [rsp+38h] [rbp-38h]
  __int64 v22; // [rsp+40h] [rbp-30h]
  __int64 v23; // [rsp+48h] [rbp-28h]
  struct NDIS_PCW_CONTEXT v24; // [rsp+58h] [rbp-18h] BYREF
  char v25; // [rsp+B8h] [rbp+48h] BYREF
  unsigned __int8 v26; // [rsp+C8h] [rbp+58h]

  v3 = *(_QWORD *)(a2 + 96);
  Number = 0;
  v20 = 0;
  CurrentCpu = -1;
  v25 = 0;
  v7 = a3;
  v8 = *(_DWORD *)(v3 + 80);
  v24.PcwBlock = *(_NDIS_PCW_DATA_BLOCK **)(v3 + 40);
  v24.DatapathEventsMask = *(_DWORD *)(v3 + 48);
  v24.DatapathCyclesMask = v8;
  v24.CurrentCpu = -1;
  if ( (v8 & 2) != 0 )
  {
    ndisPcwStartCycleCounter(&v24, 1u);
    CurrentCpu = v24.CurrentCpu;
    LOBYTE(v8) = v24.DatapathCyclesMask;
  }
  v26 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *, unsigned int *))(a2 + 176))(
          *(_QWORD *)(a2 + 8),
          (unsigned int)v7,
          &v25,
          &v20);
  v9 = v26;
  if ( (v8 & 2) != 0 )
  {
    ndisPcwEndCycleCounter(&v24, 1u, 0xEuLL);
    CurrentCpu = v24.CurrentCpu;
  }
  if ( v9 && (v24.DatapathEventsMask & 2) != 0 )
  {
    if ( CurrentCpu == -1 )
    {
      CurrentCpu = KeGetPcr()->Prcb.Number;
      v24.CurrentCpu = CurrentCpu;
    }
    ++*(_QWORD *)((char *)&v24.PcwBlock->DatapathEventReferences[2]
                + CurrentCpu * ndisPcwPerCpuDataStride
                + ndisPcwOffsetToPerCpuData);
  }
  if ( v25 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a2 + 104));
    if ( KeInsertQueueDpc(
           (PRKDPC)(*(_QWORD *)(a2 + 224)
                  + ((unsigned __int64)(ndisMaxNumberOfProcessors + (_DWORD)v7 * (ndisMaxNumberOfProcessors + 1)) << 6)),
           (PVOID)v7,
           0LL) )
    {
      if ( (v24.DatapathCyclesMask & 0x1000) != 0 )
        ndisPcwStartCycleCounter(&v24, 0xCu);
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
    v12 = v20;
    v23 = v20;
    v13 = *(_DWORD *)(v11 + 48);
    v22 = *(_QWORD *)(v11 + 40);
    v21 = -1;
    if ( *(_BYTE *)(a2 + 193) )
      v14 = *(_QWORD *)(a2 + 224) + ((unsigned __int64)((unsigned int)v7 * (ndisMaxNumberOfProcessors + 1)) << 6);
    else
      v14 = *(_QWORD *)(a2 + 112);
    ProcNumber = 0;
    v15 = v20;
    v16 = v13 & 0x1000000;
    if ( v16 )
    {
      Number = KeGetPcr()->Prcb.Number;
      v12 = v23;
    }
    if ( v12 )
    {
      v17 = v21;
      do
      {
        if ( (v15 & 1) != 0 )
        {
          ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(&ProcNumber);
          if ( ProcessorIndexFromNumber != -1 )
          {
            if ( ProcessorIndexFromNumber != Number && v16 )
            {
              if ( v17 == -1 )
                v17 = KeGetPcr()->Prcb.Number;
              ++*(_QWORD *)(ndisPcwOffsetToPerCpuData + v17 * ndisPcwPerCpuDataStride + v22 + 96);
            }
            _InterlockedIncrement((volatile signed __int32 *)(a2 + 104));
            if ( !KeInsertQueueDpc((PRKDPC)(v14 + ((unsigned __int64)ProcessorIndexFromNumber << 6)), (PVOID)v7, 0LL) )
              _InterlockedDecrement((volatile signed __int32 *)(a2 + 104));
          }
        }
        ++ProcNumber.Number;
        v15 >>= 1;
      }
      while ( v15 );
      return v26;
    }
    else
    {
      return v9;
    }
  }
}
