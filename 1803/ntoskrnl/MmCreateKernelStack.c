/*
 * XREFs of MmCreateKernelStack @ 0x14012FD20
 * Callers:
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x14012FA80 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     KeInitThread @ 0x140470370 (KeInitThread.c)
 *     KeUserModeCallback @ 0x1405B80E0 (KeUserModeCallback.c)
 *     KeAllocateCalloutStackEx @ 0x1406047B0 (KeAllocateCalloutStackEx.c)
 *     KiStartDynamicProcessor @ 0x140741260 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x1408AB748 (KeStartAllProcessors.c)
 * Callees:
 *     MiReturnCommit @ 0x14000A1A0 (MiReturnCommit.c)
 *     MiMarkPfnTradable @ 0x1400B3390 (MiMarkPfnTradable.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     MiReservePtes @ 0x14010E5B0 (MiReservePtes.c)
 *     MiReleasePtes @ 0x140110560 (MiReleasePtes.c)
 *     MiChargeCommit @ 0x140119760 (MiChargeCommit.c)
 *     MiAllocateKernelStackPages @ 0x1401278E0 (MiAllocateKernelStackPages.c)
 *     MiChargeResident @ 0x140131D0C (MiChargeResident.c)
 *     MiReturnResidentAvailable @ 0x14013511C (MiReturnResidentAvailable.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401B2BD0 (RtlpInterlockedPopEntrySList.c)
 *     MiLogKernelStackEvent @ 0x1402614BC (MiLogKernelStackEvent.c)
 */

__int64 __fastcall MmCreateKernelStack(unsigned int a1, unsigned __int16 a2, unsigned __int64 a3)
{
  unsigned int v4; // r14d
  ULONG_PTR *v5; // rbx
  unsigned __int64 v6; // rsi
  unsigned int v7; // r15d
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned int v9; // r12d
  __int64 v10; // rbp
  ULONG_PTR v11; // rbp
  ULONG_PTR v12; // r9
  __int64 v13; // rbp
  __int64 v15; // rax
  __int64 v16; // r13
  char *v17; // rsi
  __int16 v18; // bp
  PSLIST_ENTRY v19; // rax
  ULONG_PTR Next; // r9
  ULONG_PTR v21; // rcx
  ULONG_PTR BugCheckParameter4; // rax
  unsigned __int64 v23; // rsi
  unsigned __int64 v24; // r12
  __int64 v25; // rbx
  unsigned __int64 v26; // rcx
  __int64 v27; // rdi
  __int64 v28; // rcx
  ULONG_PTR v29; // rax
  unsigned __int64 v30; // r12
  __int64 v31; // rdx
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rdx
  unsigned __int64 v36; // rdx
  __int64 v37; // rax
  unsigned __int64 v38; // r8
  __int64 v39; // rax
  __int64 v40; // r8
  unsigned int v41; // [rsp+30h] [rbp-68h]
  unsigned __int64 v42; // [rsp+38h] [rbp-60h]
  unsigned __int64 v43; // [rsp+40h] [rbp-58h]
  __int64 v44; // [rsp+48h] [rbp-50h] BYREF
  ULONG_PTR CurrentIrql; // [rsp+50h] [rbp-48h]
  __int64 v46; // [rsp+58h] [rbp-40h]
  char v47; // [rsp+A0h] [rbp+8h]
  int v48; // [rsp+B8h] [rbp+20h] BYREF

  v47 = a1;
  v4 = a1;
  v5 = &MiSystemPartition;
  if ( (a1 & 0x10) != 0 )
  {
    v6 = -32LL;
    v42 = -32LL;
    if ( a3 )
      v5 = *(ULONG_PTR **)(qword_1403CBD88 + 8LL * *(unsigned __int16 *)(*(_QWORD *)(a3 + 544) + 1454LL));
  }
  else if ( a3 )
  {
    v6 = a3;
    v42 = a3;
    v5 = *(ULONG_PTR **)(qword_1403CBD88 + 8LL * *(unsigned __int16 *)(*(_QWORD *)(a3 + 544) + 1454LL));
  }
  else
  {
    v6 = -16LL;
    v42 = -16LL;
  }
  if ( (a1 & 1) != 0 )
  {
    v32 = 73728LL;
    v7 = 18;
    if ( (a1 & 4) == 0 )
      v32 = 24576LL;
    v43 = v32 >> 12;
  }
  else
  {
    v7 = (unsigned __int8)byte_1403CC2BC;
    v41 = (unsigned __int8)byte_1403CC2BC;
    v43 = (unsigned __int8)byte_1403CC2BC;
    if ( (a1 & 0x10) != 0 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v9 = 1;
      if ( CurrentPrcb->ParentNode->Affinity.Reserved[0] == a2 )
      {
        if ( CurrentPrcb->CachedStack )
        {
          v10 = _InterlockedExchange64((volatile __int64 *)&CurrentPrcb->CachedStack, 0LL);
          if ( v10 )
          {
            v11 = v10 - 4080;
            v12 = *(_QWORD *)(v11 + 4064);
            if ( v12 != (v11 ^ qword_1403CC500) )
              KeBugCheckEx(0x1Au, 0x3470uLL, v11, v12, v11 ^ qword_1403CC500);
            v13 = (__int64)(((v11 & 0xFFFFFFFFFFFFF000uLL) << 16) + 0x10000000) >> 16;
            goto LABEL_11;
          }
        }
      }
    }
    else
    {
      v9 = 0;
    }
    if ( v5 == &MiSystemPartition )
    {
      v15 = 400LL * a2;
      v16 = v9;
      v46 = v15;
      while ( 1 )
      {
        v17 = (char *)&qword_1403CB6A8[2 * v16] + v15;
        v18 = *((_WORD *)v17 + 56);
        if ( v18 )
        {
          if ( v16 == 1 )
          {
            LOBYTE(CurrentIrql) = 17;
          }
          else
          {
            CurrentIrql = KeGetCurrentIrql();
            __writecr8(2uLL);
          }
          v19 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)v17 + 7);
          if ( v19 )
          {
            if ( v18 == 1 && !*((_DWORD *)v17 + 35) )
              *((_DWORD *)v17 + 35) = 1;
            Next = (ULONG_PTR)v19[-1].Next;
            v21 = (ULONG_PTR)&v19[-255];
            BugCheckParameter4 = (unsigned __int64)&v19[-255] ^ qword_1403CC500;
            if ( Next != BugCheckParameter4 )
              KeBugCheckEx(0x1Au, 0x3470uLL, v21, Next, BugCheckParameter4);
            v23 = ((v21 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v13 = (__int64)((v23 << 25) + 0x10000000) >> 16;
            v46 = v13;
            if ( v9 != 1 )
            {
              v24 = v23 - 8LL * (unsigned __int8)byte_1403CC2BC + 8;
              do
              {
                v25 = *(_QWORD *)v23;
                if ( v23 >= 0xFFFFF6FB7DBED000uLL
                  && v23 <= 0xFFFFF6FB7DBED7F8uLL
                  && (MiFlags & 0x1800000) != 0
                  && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
                  && (v25 & 1) != 0
                  && ((v25 & 0x20) == 0 || (v25 & 0x42) == 0) )
                {
                  v33 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
                  if ( v33 )
                  {
                    v34 = *(_QWORD *)(v33 + 8 * ((v23 >> 3) & 0x1FF));
                    v35 = v25 | 0x20;
                    if ( (v34 & 0x20) == 0 )
                      v35 = *(_QWORD *)v23;
                    v25 = v35;
                    if ( (v34 & 0x42) != 0 )
                      v25 = v35 | 0x42;
                  }
                }
                v44 = v25;
                v26 = v25;
                if ( (unsigned __int64)&v44 >= 0xFFFFF6FB7DBED000uLL
                  && (unsigned __int64)&v44 <= 0xFFFFF6FB7DBED7F8uLL
                  && (MiFlags & 0x1800000) != 0
                  && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
                  && (v25 & 1) != 0
                  && ((v25 & 0x20) == 0 || (v25 & 0x42) == 0) )
                {
                  v36 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
                  v26 = v25;
                  if ( v36 )
                  {
                    v26 = v25 | 0x20;
                    v37 = *(_QWORD *)(v36 + 8 * (((unsigned __int64)&v44 >> 3) & 0x1FF));
                    if ( (v37 & 0x20) == 0 )
                      v26 = v25;
                    if ( (v37 & 0x42) != 0 )
                      v26 |= 0x42uLL;
                  }
                }
                v27 = 48 * ((v26 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
                v48 = 0;
                while ( _interlockedbittestandset64((volatile signed __int32 *)(v27 + 24), 0x3FuLL) )
                {
                  do
                    KeYieldProcessorEx(&v48);
                  while ( *(__int64 *)(v27 + 24) < 0 );
                }
                v28 = *(_QWORD *)v23;
                if ( v23 >= 0xFFFFF6FB7DBED000uLL
                  && v23 <= 0xFFFFF6FB7DBED7F8uLL
                  && (MiFlags & 0x1800000) != 0
                  && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
                  && (v28 & 1) != 0
                  && ((v28 & 0x20) == 0 || (v28 & 0x42) == 0) )
                {
                  v38 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
                  if ( v38 )
                  {
                    v39 = *(_QWORD *)(v38 + 8 * ((v23 >> 3) & 0x1FF));
                    v40 = v28 | 0x20;
                    if ( (v39 & 0x20) == 0 )
                      v40 = *(_QWORD *)v23;
                    v28 = v40;
                    if ( (v39 & 0x42) != 0 )
                      v28 = v40 | 0x42;
                  }
                }
                if ( v25 == v28 )
                {
                  *(_QWORD *)v27 ^= (*(_QWORD *)v27 ^ (v42 >> 3)) & 0xFFFFFFFFFFELL;
                  if ( (*(_BYTE *)v27 & 1) == 0 )
                    MiMarkPfnTradable(v27, 1);
                  v23 -= 8LL;
                }
                _InterlockedAnd64((volatile signed __int64 *)(v27 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              }
              while ( v23 >= v24 );
              __writecr8((unsigned __int8)CurrentIrql);
              v13 = v46;
              LOBYTE(v4) = v47;
              v7 = v41;
            }
            goto LABEL_11;
          }
          if ( v16 != 1 )
            __writecr8((unsigned __int8)CurrentIrql);
        }
        ++*((_DWORD *)v17 + 33);
        if ( v16 != 1 )
        {
          v6 = v42;
          break;
        }
        v15 = v46;
        v9 = 0;
        v16 = 0LL;
      }
    }
  }
  if ( !(unsigned int)MiChargeCommit((__int64)v5, v7, (v4 >> 1) & 1) )
    return 0LL;
  v29 = MiReservePtes((__int64)&unk_1403CC258, v7 + 1);
  v30 = v29;
  if ( !v29 )
  {
LABEL_99:
    MiReturnCommit((__int64)v5, v7);
    return 0LL;
  }
  CurrentIrql = v29;
  v13 = (__int64)((v29 << 25) + ((v7 + 1LL) << 28)) >> 16;
  if ( (v4 & 5) == 1 )
    CurrentIrql = v29 + 96;
  if ( !(unsigned int)MiChargeResident(v5, v43, 0LL) )
  {
LABEL_98:
    MiReleasePtes((__int64)&unk_1403CC258, v30, v7 + 1);
    goto LABEL_99;
  }
  if ( !(unsigned int)MiAllocateKernelStackPages((__int64)v5, CurrentIrql + 8, v43, v6, a2, v4) )
  {
    if ( v5 == &MiSystemPartition )
      MiReturnResidentAvailable(v43, v31);
    else
      _InterlockedExchangeAdd64((volatile signed __int64 *)v5 + 888, v43);
    goto LABEL_98;
  }
  if ( v5 == &MiSystemPartition )
    _InterlockedExchangeAdd64(&qword_1403CC670, v7);
LABEL_11:
  if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 && (v4 & 8) != 0 )
    MiLogKernelStackEvent(v13 - (v7 << 12), (unsigned int)v43, 1LL);
  return v13;
}
