/*
 * XREFs of NtUnlockVirtualMemory @ 0x1400EB680
 * Callers:
 *     <none>
 * Callees:
 *     MiRotatedToFrameBuffer @ 0x140008950 (MiRotatedToFrameBuffer.c)
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiFreeWsleList @ 0x140052390 (MiFreeWsleList.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400578A0 (MiUnlockWorkingSetExclusive.c)
 *     MiRelockWorkingSetExclusive @ 0x1400661C0 (MiRelockWorkingSetExclusive.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     MiInsertTbFlushEntry @ 0x14009C1B0 (MiInsertTbFlushEntry.c)
 *     MiDemoteCombinedPte @ 0x14009F660 (MiDemoteCombinedPte.c)
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     KiResetGlobalDpcWatchdogProfiler @ 0x1400E3424 (KiResetGlobalDpcWatchdogProfiler.c)
 *     MiLocateAddress @ 0x1400E9700 (MiLocateAddress.c)
 *     MiWorkingSetIsContended @ 0x1400EBDF0 (MiWorkingSetIsContended.c)
 *     KeShouldYieldProcessor @ 0x1401091E0 (KeShouldYieldProcessor.c)
 *     MiUnlockVa @ 0x14010C884 (MiUnlockVa.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14022A1F8 (MI_GET_PFN_FROM_PTE.c)
 *     EtwTraceShouldYieldProcessor @ 0x14027B8F8 (EtwTraceShouldYieldProcessor.c)
 *     MiUnlockVadRange @ 0x1405405F8 (MiUnlockVadRange.c)
 *     MiLockVadRange @ 0x140540730 (MiLockVadRange.c)
 *     MiLockUnlockCommon @ 0x140540A60 (MiLockUnlockCommon.c)
 */

NTSTATUS __stdcall NtUnlockVirtualMemory(
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        PSIZE_T NumberOfBytesToUnlock,
        ULONG MapType)
{
  NTSTATUS result; // eax
  unsigned __int64 v6; // r14
  int v7; // ebx
  __int64 v8; // r12
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r13
  PVOID v11; // r15
  unsigned __int64 j; // rsi
  __int64 v13; // rax
  LONG *SharedVm; // rdi
  unsigned __int64 v15; // r11
  unsigned __int64 v16; // r10
  __int64 v17; // rdi
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned int DpcWatchdogCount; // r12d
  unsigned int DpcTimeCount; // r15d
  _BOOL8 v21; // rdx
  __int64 DpcRequestSummary; // r8
  int v23; // r9d
  unsigned int v24; // edi
  _KTHREAD *NextThread; // rax
  unsigned __int64 v26; // rcx
  _QWORD **v27; // rax
  _QWORD *i; // rax
  int v29; // ecx
  unsigned __int64 v30; // r12
  __int64 v31; // r9
  _QWORD *v32; // rcx
  __int64 v33; // rax
  unsigned __int64 v34; // rdx
  __int64 v35; // r15
  unsigned __int64 PteShadow; // rax
  char v37; // cl
  unsigned __int64 v38; // rsi
  unsigned __int64 m; // rdi
  unsigned __int64 v40; // r13
  unsigned __int64 v41; // rcx
  _QWORD **v42; // rax
  _QWORD *k; // rax
  void *v44; // rax
  KIRQL v45; // [rsp+40h] [rbp-1B8h]
  __int64 v46; // [rsp+48h] [rbp-1B0h]
  NTSTATUS v47; // [rsp+50h] [rbp-1A8h]
  unsigned __int64 v48; // [rsp+58h] [rbp-1A0h]
  PVOID Object; // [rsp+60h] [rbp-198h] BYREF
  __int64 v50; // [rsp+68h] [rbp-190h] BYREF
  unsigned __int64 v51; // [rsp+70h] [rbp-188h]
  __int64 v52; // [rsp+78h] [rbp-180h]
  unsigned __int64 v53; // [rsp+80h] [rbp-178h]
  __int64 v54; // [rsp+88h] [rbp-170h] BYREF
  PSIZE_T v55; // [rsp+90h] [rbp-168h]
  PVOID *v56; // [rsp+98h] [rbp-160h]
  int v57; // [rsp+A0h] [rbp-158h] BYREF
  __int16 v58; // [rsp+A4h] [rbp-154h]
  __int64 v59; // [rsp+A8h] [rbp-150h]
  __int64 v60; // [rsp+B0h] [rbp-148h]
  __int64 v61; // [rsp+B8h] [rbp-140h]
  $709EDFC2F9E0D4565D6AA3C4377BC643 v62; // [rsp+160h] [rbp-98h] BYREF
  unsigned __int64 v63; // [rsp+190h] [rbp-68h]
  unsigned __int64 v64; // [rsp+198h] [rbp-60h]
  unsigned __int64 v65; // [rsp+1A0h] [rbp-58h]
  __int64 v66; // [rsp+1A8h] [rbp-50h]

  v55 = NumberOfBytesToUnlock;
  v56 = BaseAddress;
  result = MiLockUnlockCommon((ULONG_PTR)ProcessHandle, (__int64)&v50, (__int64)&v54, (__int64)&Object);
  v47 = result;
  if ( result < 0 )
    return result;
  v6 = 0LL;
  v51 = 0LL;
  v7 = 0;
  v8 = v50;
  v9 = (v50 + v54 - 1) & 0xFFFFFFFFFFFFF000uLL;
  v48 = v9;
  v53 = v50 & 0xFFFFFFFFFFFFF000uLL;
  v10 = v50 & 0xFFFFFFFFFFFFF000uLL;
  v11 = Object;
  if ( ProcessHandle != (HANDLE)-1LL )
  {
    KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)&v62);
    v7 = 2;
    v9 = v48;
  }
  v59 = 20LL;
  v57 = 1;
  v58 = 4;
  v60 = 0LL;
  v61 = 0LL;
  j = 0LL;
  v13 = MiLockVadRange(v11, v10, v9);
  v52 = v13;
  if ( !v13 )
    goto LABEL_104;
  v46 = (__int64)v11 + 1280;
  SharedVm = MiGetSharedVm((__int64)v11 + 1280);
  v45 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  if ( v10 > v48 )
    goto LABEL_77;
  v15 = 0xFFFFF6FB7DBED000uLL;
  v16 = 0xFFFFF6FB7DBED7F8uLL;
  do
  {
    if ( (((unsigned __int8)(v10 >> 12) + 1) & 0xF) == 0 )
    {
      v17 = v46;
      if ( (unsigned int)MiWorkingSetIsContended(v46) )
        goto LABEL_31;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    DpcWatchdogCount = CurrentPrcb->DpcWatchdogCount;
    DpcTimeCount = CurrentPrcb->DpcTimeCount;
    v21 = DpcWatchdogCount > 7;
    DpcRequestSummary = (unsigned int)CurrentPrcb->DpcRequestSummary;
    if ( (DpcRequestSummary & 1) != 0 )
    {
      v23 = 1;
      if ( DpcTimeCount > 7 )
      {
        LODWORD(v21) = 1;
        if ( CurrentPrcb->QuantumEnd )
        {
          v24 = 1;
          goto LABEL_27;
        }
      }
    }
    else
    {
      v23 = 0;
      if ( (DpcRequestSummary & 0x1E) != 0 )
      {
        v24 = 2;
        goto LABEL_27;
      }
      if ( CurrentPrcb->QuantumEnd )
      {
        v24 = 3;
        goto LABEL_27;
      }
      NextThread = CurrentPrcb->NextThread;
      if ( NextThread && NextThread != CurrentPrcb->CurrentThread )
      {
        v24 = 4;
        goto LABEL_27;
      }
    }
    if ( v21 )
    {
      if ( !v23 )
        goto LABEL_26;
      if ( (DpcRequestSummary & 0x1E) != 0 )
      {
        v24 = 5;
        goto LABEL_27;
      }
      if ( CurrentPrcb->CurrentThread == CurrentPrcb->IdleThread )
      {
LABEL_26:
        _disable();
        CurrentPrcb->DpcWatchdogCount = 0;
        CurrentPrcb->DpcTimeCount = 0;
        KiResetGlobalDpcWatchdogProfiler((__int64)CurrentPrcb);
        _enable();
        v24 = 0;
      }
      else
      {
        v24 = 6;
      }
LABEL_27:
      if ( (DWORD1(PerfGlobalGroupMask) & 0x4000000) != 0 )
        EtwTraceShouldYieldProcessor(v24, DpcWatchdogCount, DpcTimeCount);
      if ( v24 )
      {
        v17 = v46;
LABEL_31:
        if ( HIDWORD(v59) )
        {
          MiFreeWsleList(v17, (__int64)&v57, 0);
          HIDWORD(v59) = 0;
        }
        MiRelockWorkingSetExclusive(v17, v45);
      }
      v15 = 0xFFFFF6FB7DBED000uLL;
      v16 = 0xFFFFF6FB7DBED7F8uLL;
    }
    if ( v10 > v51 || !j )
    {
      if ( j )
      {
        v26 = j;
        v27 = *(_QWORD ***)(j + 8);
        if ( v27 )
        {
          j = *(_QWORD *)(j + 8);
          for ( i = *v27; i; i = (_QWORD *)*i )
            j = (unsigned __int64)i;
        }
        else
        {
          for ( j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL; j; j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL )
          {
            if ( *(_QWORD *)j == v26 )
              break;
            v26 = j;
          }
        }
      }
      else
      {
        j = MiLocateAddress(v10);
      }
      v7 &= ~4u;
      v29 = *(_DWORD *)(j + 48) & 7;
      if ( v29 == 6 )
      {
        v7 |= 4u;
      }
      else if ( ((1 << v29) & 0x15) == 0 )
      {
        break;
      }
      v51 = (*(unsigned int *)(j + 28) | ((unsigned __int64)*(unsigned __int8 *)(j + 33) << 32)) << 12;
    }
    if ( (__int64)v10 >> 47 == -1 || (__int64)v10 >> 47 == 0 )
    {
      v30 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v63 = v30;
      v64 = ((v30 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v65 = ((v64 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v66 = ((v65 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      LODWORD(v31) = 4;
      while ( 1 )
      {
        v31 = (unsigned int)(v31 - 1);
        v32 = (_QWORD *)*(&v63 + v31);
        v33 = *v32;
        v34 = v15;
        if ( (unsigned __int64)v32 >= v15 )
        {
          v34 = v16;
          if ( (unsigned __int64)v32 <= v16 )
            LOBYTE(v33) = MiReadPteShadow(v32, *v32);
        }
        if ( (v33 & 1) == 0 )
          break;
        if ( (v33 & 0x80u) != 0LL )
        {
          if ( v10 >= 0xFFFFF68000000000uLL && v10 <= 0xFFFFF6FFFFFFFFFFuLL )
            break;
LABEL_61:
          v35 = *(_QWORD *)(MI_GET_PFN_FROM_PTE(
                              ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
                              v34,
                              DpcRequestSummary,
                              v31)
                          + 8);
          if ( (v7 & 4) == 0 || !MiRotatedToFrameBuffer((__int64 *)(((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL)) )
          {
            if ( v35 >= 0 )
              MiDemoteCombinedPte(v46, ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, v35 | 0x8000000000000000uLL);
            PteShadow = *(_QWORD *)v30;
            if ( v30 >= 0xFFFFF6FB7DBED000uLL && v30 <= 0xFFFFF6FB7DBED7F8uLL )
              PteShadow = MiReadPteShadow(((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, *(_QWORD *)v30);
            v37 = (PteShadow & 1) != 0 ? HIBYTE(PteShadow) & 0xF | (16 * ((PteShadow >> 60) & 7)) : 10;
            if ( (v37 & 0xF) != 8 )
            {
              MiInsertTbFlushEntry(&v57, v10, 1LL, 0);
              if ( HIDWORD(v59) == (_DWORD)v59 )
              {
                MiFreeWsleList(v46, (__int64)&v57, 0);
                HIDWORD(v59) = 0;
              }
              break;
            }
          }
          goto LABEL_75;
        }
        if ( !(_DWORD)v31 )
          goto LABEL_61;
      }
    }
    v47 = -1073741782;
LABEL_75:
    v10 += 4096LL;
    v16 = 0xFFFFF6FB7DBED7F8uLL;
    v15 = 0xFFFFF6FB7DBED000uLL;
  }
  while ( v10 <= v48 );
  v8 = v50;
  v11 = Object;
LABEL_77:
  if ( v47 == -1073741782 )
  {
    if ( HIDWORD(v59) )
      MiFreeWsleList(v46, (__int64)&v57, 0);
    MiUnlockWorkingSetExclusive(v46, v45);
    v13 = v52;
LABEL_104:
    MiUnlockVadRange(v11, v8, v13);
    if ( (v7 & 2) != 0 )
      KiUnstackDetachProcess(&v62, 0LL);
    ObfDereferenceObjectWithTag(v11, 0x6D566D4Du);
    return -1073741782;
  }
  v38 = v53;
  m = 0LL;
  v40 = v48;
  if ( v53 > v48 )
    goto LABEL_101;
  while ( 2 )
  {
    if ( v38 <= v6 && m )
    {
LABEL_95:
      MiUnlockVa(v46, v38);
      v38 += 4096LL;
      if ( (v38 & 0xF000) == 0 && (unsigned int)MiWorkingSetIsContended(v46) || KeShouldYieldProcessor() )
        MiRelockWorkingSetExclusive(v46, v45);
      if ( v38 > v48 )
        goto LABEL_100;
      continue;
    }
    break;
  }
  if ( m )
  {
    v41 = m;
    v42 = *(_QWORD ***)(m + 8);
    if ( v42 )
    {
      m = *(_QWORD *)(m + 8);
      for ( k = *v42; k; k = (_QWORD *)*k )
        m = (unsigned __int64)k;
    }
    else
    {
      for ( m = *(_QWORD *)(m + 16) & 0xFFFFFFFFFFFFFFFCuLL; m; m = *(_QWORD *)(m + 16) & 0xFFFFFFFFFFFFFFFCuLL )
      {
        if ( *(_QWORD *)m == v41 )
          break;
        v41 = m;
      }
    }
  }
  else
  {
    m = MiLocateAddress(v38);
  }
  if ( ((1 << (*(_BYTE *)(m + 48) & 7)) & 0x15) != 0 )
  {
    v6 = (*(unsigned int *)(m + 28) | ((unsigned __int64)*(unsigned __int8 *)(m + 33) << 32)) << 12;
    goto LABEL_95;
  }
LABEL_100:
  v40 = v48;
LABEL_101:
  MiUnlockWorkingSetExclusive(v46, v45);
  MiUnlockVadRange(v11, v8, v52);
  if ( (v7 & 2) != 0 )
    KiUnstackDetachProcess(&v62, 0LL);
  ObfDereferenceObjectWithTag(v11, 0x6D566D4Du);
  v44 = (void *)v53;
  *v55 = v40 - v53 + 4096;
  *v56 = v44;
  return 0;
}
