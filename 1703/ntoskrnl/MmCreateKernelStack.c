/*
 * XREFs of MmCreateKernelStack @ 0x14010FBC0
 * Callers:
 *     MiAdjustCachedStacks @ 0x140084230 (MiAdjustCachedStacks.c)
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x14010F680 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     KeInitThread @ 0x140404A30 (KeInitThread.c)
 *     KeUserModeCallback @ 0x14053FD20 (KeUserModeCallback.c)
 *     KeAllocateCalloutStackEx @ 0x1405C1E00 (KeAllocateCalloutStackEx.c)
 *     KiStartDynamicProcessor @ 0x1406AC0A4 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140808F4C (KeStartAllProcessors.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     MiReleasePtes @ 0x1400A23A0 (MiReleasePtes.c)
 *     MiReturnResidentAvailable @ 0x1400CCD70 (MiReturnResidentAvailable.c)
 *     MiReturnCommit @ 0x1400CE240 (MiReturnCommit.c)
 *     MiChargeCommit @ 0x1400D0C60 (MiChargeCommit.c)
 *     MiReservePtes @ 0x1400F7CA0 (MiReservePtes.c)
 *     MiAllocateKernelStackPages @ 0x1401059E0 (MiAllocateKernelStackPages.c)
 *     MiChargeResident @ 0x14010EE5C (MiChargeResident.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x140189470 (RtlpInterlockedPopEntrySList.c)
 *     MiLogKernelStackEvent @ 0x14021BA2C (MiLogKernelStackEvent.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MmCreateKernelStack(unsigned int a1, unsigned __int16 a2, __int64 a3)
{
  unsigned int v4; // r10d
  ULONG_PTR *v5; // rsi
  int v6; // r9d
  unsigned int v7; // edi
  unsigned __int64 v8; // r13
  BOOL v9; // r14d
  __int64 v10; // r15
  _BOOL8 i; // rbx
  _SLIST_HEADER *v12; // rdi
  __int16 Alignment; // bp
  unsigned __int8 CurrentIrql; // r13
  PSLIST_ENTRY v15; // rax
  ULONG_PTR Next; // r9
  ULONG_PTR v17; // rdi
  ULONG_PTR BugCheckParameter4; // rax
  unsigned __int64 v19; // rdi
  __int64 v20; // r15
  __int64 v21; // r14
  unsigned __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v24; // r9
  __int64 v25; // rbx
  __int64 v26; // rax
  unsigned __int64 v28; // r13
  unsigned __int64 v29; // rbx
  unsigned __int64 v30; // r8
  unsigned int v31; // ebp
  ULONG_PTR v32; // rax
  _QWORD *v33; // rdi
  ULONG_PTR v34; // r14
  __int64 v35; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v36; // [rsp+38h] [rbp-50h]
  __int64 v37; // [rsp+40h] [rbp-48h] BYREF
  int v39; // [rsp+A8h] [rbp+20h]

  v4 = a1;
  v5 = &MiSystemPartition;
  if ( (a1 & 0x10) != 0 )
  {
    v35 = -5LL;
    if ( a3 )
      v5 = *(ULONG_PTR **)(qword_14036C8F8 + 8LL * *(unsigned __int16 *)(*(_QWORD *)(a3 + 544) + 1452LL));
  }
  else if ( a3 )
  {
    v5 = *(ULONG_PTR **)(qword_14036C8F8 + 8LL * *(unsigned __int16 *)(*(_QWORD *)(a3 + 544) + 1452LL));
    v35 = a3 | 1;
  }
  else
  {
    v35 = -3LL;
  }
  if ( (a1 & 1) != 0 )
  {
    v28 = 73728LL;
    v7 = 18;
    if ( (a1 & 4) == 0 )
      v28 = 24576LL;
    v39 = 18;
    v8 = v28 >> 12;
  }
  else
  {
    v7 = (unsigned __int8)byte_14036CD9C;
    v39 = (unsigned __int8)byte_14036CD9C;
    v8 = (unsigned __int8)byte_14036CD9C;
    v36 = (unsigned __int8)byte_14036CD9C;
    v6 = a1 & 0x10;
    v9 = v6 != 0;
    if ( v5 == &MiSystemPartition )
    {
      v10 = 25LL * a2;
      for ( i = v6 != 0; ; i = 0LL )
      {
        v12 = &qword_14036C1C8[2 * i + v10];
        Alignment = v12[7].Alignment;
        if ( Alignment )
        {
          if ( i )
          {
            CurrentIrql = 17;
          }
          else
          {
            CurrentIrql = KeGetCurrentIrql();
            __writecr8(2uLL);
          }
          v15 = RtlpInterlockedPopEntrySList(v12 + 7);
          if ( v15 )
          {
            if ( Alignment == 1 && !*((_DWORD *)&v12[8].HeaderX64 + 3) )
              *((_DWORD *)&v12[8].HeaderX64 + 3) = 1;
            Next = (ULONG_PTR)v15[-1].Next;
            v17 = (ULONG_PTR)&v15[-255];
            BugCheckParameter4 = (unsigned __int64)&v15[-255] ^ qword_14036CFC0;
            if ( Next != BugCheckParameter4 )
              KeBugCheckEx(0x1Au, 0x3470uLL, v17, Next, BugCheckParameter4);
            v19 = ((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v20 = (__int64)((v19 << 25) + 0x10000000) >> 16;
            if ( !v9 )
            {
              v21 = v35;
              v22 = v19 - 8LL * (unsigned __int8)byte_14036CD9C + 8;
              do
              {
                v37 = MI_READ_PTE_LOCK_FREE(v19);
                v23 = MI_GET_PAGE_FRAME_FROM_PTE(&v37);
                v25 = v24 + 48 * v23;
                LODWORD(v35) = 0;
                while ( _interlockedbittestandset64((volatile signed __int32 *)(v25 + 24), 0x3FuLL) )
                {
                  do
                    KeYieldProcessorEx(&v35);
                  while ( *(__int64 *)(v25 + 24) < 0 );
                }
                v26 = MI_READ_PTE_LOCK_FREE(v19);
                if ( v37 == v26 )
                {
                  *(_QWORD *)v25 = v21;
                  v19 -= 8LL;
                }
                _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              }
              while ( v19 >= v22 );
              __writecr8(CurrentIrql);
            }
            LODWORD(v8) = v36;
LABEL_33:
            if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 && (a1 & 8) != 0 )
              MiLogKernelStackEvent(v20 - (unsigned int)(v39 << 12), (unsigned int)v8, 1LL);
            return v20;
          }
          if ( !i )
            __writecr8(CurrentIrql);
        }
        ++*((_DWORD *)&v12[8].HeaderX64 + 1);
        if ( !i )
        {
          v8 = v36;
          v7 = v39;
          v4 = a1;
          break;
        }
        v9 = 0;
      }
    }
  }
  v29 = v7;
  if ( (unsigned int)MiChargeCommit((unsigned __int64)v5, v7, (v4 >> 1) & 1) )
  {
    v31 = v7 + 1;
    v32 = MiReservePtes((__int64)&qword_14036D0A0, v7 + 1, v30);
    v33 = (_QWORD *)v32;
    if ( v32 )
    {
      v34 = v32;
      v20 = (__int64)((v32 << 25) + ((v29 + 1) << 28)) >> 16;
      if ( (a1 & 5) == 1 )
        v34 = v32 + 96;
      if ( (unsigned int)MiChargeResident(v5, v8, 0LL) )
      {
        if ( (unsigned int)MiAllocateKernelStackPages((__int64)v5, (unsigned __int64 *)(v34 + 8), v8, v35, a2, a1) )
        {
          if ( v5 == &MiSystemPartition )
            _InterlockedExchangeAdd64(&qword_14036D138, v29);
          goto LABEL_33;
        }
        if ( v5 == &MiSystemPartition )
          MiReturnResidentAvailable(v8);
        else
          _InterlockedExchangeAdd64((volatile signed __int64 *)v5 + 728, v8);
      }
      MiReleasePtes((__int64)&qword_14036D0A0, v33, v31);
    }
    MiReturnCommit((__int64)v5, v29);
  }
  return 0LL;
}
