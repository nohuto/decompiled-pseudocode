/*
 * XREFs of KiExpandKernelStackAndCalloutOnStackSegment @ 0x14010F680
 * Callers:
 *     KiExpandKernelStackAndCalloutSwitchStack @ 0x14010F550 (KiExpandKernelStackAndCalloutSwitchStack.c)
 * Callees:
 *     MiDeleteKernelStack @ 0x140023CD4 (MiDeleteKernelStack.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     KeReleaseMutant @ 0x1400E3270 (KeReleaseMutant.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     MmCreateKernelStack @ 0x14010FBC0 (MmCreateKernelStack.c)
 *     MiClearStackOwners @ 0x1401103F0 (MiClearStackOwners.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     KiSwitchKernelStackAndCallout @ 0x140184C50 (KiSwitchKernelStackAndCallout.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401894B0 (RtlpInterlockedPushEntrySList.c)
 *     MiLogKernelStackEvent @ 0x14021BA2C (MiLogKernelStackEvent.c)
 *     MI_GET_NODE_FROM_VALID_PTE @ 0x14021EDAC (MI_GET_NODE_FROM_VALID_PTE.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14021EE3C (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall KiExpandKernelStackAndCalloutOnStackSegment(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        char a4,
        __int64 a5)
{
  struct _KTHREAD *CurrentThread; // r8
  int v8; // ecx
  unsigned __int8 v9; // r13
  LARGE_INTEGER *Timeout; // r14
  unsigned int v13; // edi
  unsigned __int64 KernelStack; // rsi
  unsigned __int8 v16; // r8
  unsigned __int64 v17; // r8
  struct _KTHREAD *v18; // r14
  int MiscFlags; // eax
  unsigned int v20; // r15d
  __int64 v21; // rdx
  __int64 v22; // rsi
  __int64 v23; // r15
  unsigned int v24; // eax
  unsigned __int64 v25; // r9
  int v26; // esi
  __int64 v27; // rbp
  unsigned __int64 v28; // r10
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rbx
  unsigned __int8 v33; // di
  unsigned __int64 v34; // r10
  __int64 v35; // rax
  unsigned __int64 v36; // r9
  __int64 v37; // rcx
  __int64 v38; // rdi
  __int64 v39; // r14
  _SLIST_HEADER *v40; // rsi
  __int64 v41; // rbx
  unsigned __int8 v42; // bp
  bool v43; // zf
  unsigned __int8 v44; // al
  int v45; // [rsp+30h] [rbp-58h] BYREF
  struct _KTHREAD *v46; // [rsp+38h] [rbp-50h]
  __int64 v47; // [rsp+40h] [rbp-48h] BYREF
  __int64 v48; // [rsp+48h] [rbp-40h] BYREF
  __int64 v49; // [rsp+50h] [rbp-38h] BYREF
  __int64 CurrentIrql; // [rsp+58h] [rbp-30h]
  unsigned int v51; // [rsp+A0h] [rbp+18h]
  unsigned int v52; // [rsp+B0h] [rbp+28h]

  CurrentThread = KeGetCurrentThread();
  v8 = 0;
  v9 = 0;
  v51 = 0;
  Timeout = 0LL;
  v46 = CurrentThread;
  CurrentIrql = KeGetCurrentIrql();
  if ( (_BYTE)CurrentIrql == 2 )
  {
    v9 = 0;
    v48 = 0LL;
    if ( a5 )
      v9 = 16;
    Timeout = (LARGE_INTEGER *)&v48;
  }
  v13 = 0;
  if ( a3 <= (unsigned int)KeKernelStackSize )
  {
    a4 |= 4u;
    a3 = 0LL;
  }
  else
  {
    v9 |= 1u;
    v51 = 1;
    v13 = 1;
    v8 = 1;
    if ( a5 && *(_BYTE *)(a5 + 4) )
      v13 = 5;
  }
  if ( (v9 & 0x10) == 0 )
  {
    if ( (a4 & 2) == 0 )
      v13 |= 2u;
    if ( (a4 & 4) != 0 )
    {
      v13 |= 0x10u;
      v51 = v8 | 4;
    }
    KernelStack = MmCreateKernelStack(
                    v13,
                    *(unsigned __int8 *)(*(_QWORD *)(KiProcessorBlock[CurrentThread->IdealProcessor] + 192) + 146LL),
                    CurrentThread);
    if ( KernelStack )
      goto LABEL_30;
    CurrentThread = v46;
  }
  if ( !a5 || (v9 & 1) != 0 && !*(_BYTE *)(a5 + 4) )
    return 3221225495LL;
  if ( _bittestandset((signed __int32 *)&CurrentThread->116, 0xFu) )
    v9 |= 4u;
  if ( KeWaitForSingleObject((PVOID)(a5 + 8), WrCalloutStack, 0, 0, Timeout) == 258 )
  {
    v46->MiscFlags ^= (v46->MiscFlags ^ (v9 << 13)) & 0x8000;
    return 3221227272LL;
  }
  v16 = *(_BYTE *)(a5 + 6);
  if ( v16 >= *(_BYTE *)(a5 + 5) )
  {
    KeReleaseMutant((PRKMUTANT)(a5 + 8), 1, 0, 0);
    return 3221225495LL;
  }
  v9 |= 8u;
  KernelStack = *(_QWORD *)(a5 + 8LL * v16 + 64);
  *(_BYTE *)(a5 + 6) = v16 + 1;
  if ( (v9 & 1) == 0 && *(_BYTE *)(a5 + 4) )
  {
    LOBYTE(v13) = v13 | 5;
    a3 = 71680LL;
    v9 |= 1u;
  }
LABEL_30:
  *(_QWORD *)(KernelStack - 48) = KernelStack;
  v17 = KernelStack - 48;
  if ( (v9 & 1) != 0 )
    *(_QWORD *)(v17 + 8) = KernelStack - 73727;
  else
    *(_QWORD *)(v17 + 8) = KernelStack - (unsigned int)KeKernelStackSize + 1;
  v18 = v46;
  *(_QWORD *)(v17 + 16) = v46->StackBase;
  *(_QWORD *)(v17 + 40) = v18->InitialStack;
  if ( (v13 & 1) != 0 )
  {
    v17 |= 1uLL;
    if ( (v13 & 4) != 0 )
      v17 |= 2uLL;
  }
  MiscFlags = v18->MiscFlags;
  if ( (MiscFlags & 0x1000) != 0 )
    v9 |= 2u;
  else
    v18->MiscFlags = MiscFlags | 0x1000;
  v52 = KiSwitchKernelStackAndCallout(a2, a1, v17, a3);
  v20 = v52;
  if ( (v9 & 8) != 0 )
  {
    v43 = (*(_BYTE *)(a5 + 6))-- == 1;
    if ( v43 && (v9 & 4) == 0 )
      v18->MiscFlags &= ~0x8000u;
    KeReleaseMutant((PRKMUTANT)(a5 + 8), 1, 0, 0);
  }
  else
  {
    if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 && (v51 & 2) != 0 )
    {
      v21 = 18LL;
      if ( (v51 & 1) == 0 )
        v21 = (unsigned __int8)byte_14036CD9C;
      MiLogKernelStackEvent(KernelStack - (unsigned int)((_DWORD)v21 << 12), v21, 0LL);
    }
    v22 = (KernelStack >> 9) & 0x7FFFFFFFF8LL;
    v23 = v22 - 0x98000000008LL;
    v49 = MI_READ_PTE_LOCK_FREE(v22 - 0x98000000008LL);
    if ( *(ULONG_PTR **)(qword_14036C8F8
                       + 8 * ((*(_QWORD *)(48 * MI_GET_PAGE_FRAME_FROM_PTE(&v49) - 0x57FFFFFFFD8LL) >> 40) & 0x3FFLL)) == &MiSystemPartition
      && (v51 & 1) == 0 )
    {
      v24 = MI_GET_NODE_FROM_VALID_PTE(v22 - 0x98000000008LL);
      v26 = 0;
      v27 = v24;
      v28 = 2LL;
      if ( (v51 & 4) != 0 )
      {
        while ( 1 )
        {
          v47 = MI_READ_PTE_LOCK_FREE(v23);
          v32 = MI_GET_PFN_FROM_PTE(&v47, v29, v30, v31);
          v33 = KeGetCurrentIrql();
          __writecr8(v34);
          v45 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v32 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v45);
            while ( (*(_QWORD *)(v32 + 24) & 0x8000000000000000uLL) != 0 );
          }
          v35 = MI_READ_PTE_LOCK_FREE(v23);
          if ( v47 == v35 )
            break;
          _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), v36);
          __writecr8(v33);
        }
        v37 = *(_QWORD *)v32;
        _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), v36);
        __writecr8(v33);
        v25 = 0xFFFFF68000000000uLL;
        if ( v37 == -5 )
          v26 = 1;
      }
      v38 = v26;
      v39 = 25 * v27;
      while ( 1 )
      {
        v40 = &qword_14036C1C8[2 * v38 + v39];
        if ( LOWORD(v40[7].Alignment) < SLODWORD(v40[8].Alignment) )
        {
          v41 = (__int64)((v23 << 25) - (v25 << 25)) >> 16;
          *(_QWORD *)(v41 + 0xFE0) = qword_14036CFC0 ^ v41;
          if ( v38 == 1 )
          {
            RtlpInterlockedPushEntrySList(v40 + 7, (PSLIST_ENTRY)(v41 + 4080));
            v20 = v52;
            goto LABEL_69;
          }
          v42 = KeGetCurrentIrql();
          __writecr8(v28);
          if ( (unsigned int)MiClearStackOwners(v23, v51) == 1 )
          {
            RtlpInterlockedPushEntrySList(v40 + 7, (PSLIST_ENTRY)(v41 + 4080));
            __writecr8(v42);
            v20 = v52;
            goto LABEL_69;
          }
          __writecr8(v42);
        }
        if ( v38 != 1 )
          break;
        v38 = 0LL;
        v25 = 0xFFFFF68000000000uLL;
        v28 = 2LL;
      }
    }
    MiDeleteKernelStack(v23, v51);
    v20 = v52;
  }
LABEL_69:
  if ( (v9 & 2) == 0 )
    v46->MiscFlags &= ~0x1000u;
  v44 = KeGetCurrentIrql();
  if ( v44 != (_BYTE)CurrentIrql )
    KeBugCheckEx(0xC8u, (unsigned __int8)CurrentIrql, v44, 0LL, 0LL);
  return v20;
}
