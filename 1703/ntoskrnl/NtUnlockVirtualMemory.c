/*
 * XREFs of NtUnlockVirtualMemory @ 0x1400FA8B0
 * Callers:
 *     <none>
 * Callees:
 *     KeShouldYieldProcessor @ 0x14000D660 (KeShouldYieldProcessor.c)
 *     KiResetGlobalDpcWatchdogProfiler @ 0x14000D778 (KiResetGlobalDpcWatchdogProfiler.c)
 *     MiRelockWorkingSetExclusive @ 0x1400406A4 (MiRelockWorkingSetExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     MiWorkingSetIsContended @ 0x14007A1C0 (MiWorkingSetIsContended.c)
 *     MiRotatedToFrameBuffer @ 0x14007C2AC (MiRotatedToFrameBuffer.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     MiLocateAddress @ 0x1400C2010 (MiLocateAddress.c)
 *     MiFreeWsleList @ 0x1400D6F10 (MiFreeWsleList.c)
 *     MiDemoteCombinedPte @ 0x1400D7830 (MiDemoteCombinedPte.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400D8DB0 (MiUnlockWorkingSetExclusive.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     MiInsertTbFlushEntry @ 0x1400FA110 (MiInsertTbFlushEntry.c)
 *     MiUnlockVa @ 0x140134DC8 (MiUnlockVa.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14021EE3C (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     EtwTraceShouldYieldProcessor @ 0x140253C08 (EtwTraceShouldYieldProcessor.c)
 *     MiLockUnlockCommon @ 0x1404C84A0 (MiLockUnlockCommon.c)
 *     MiUnlockVadRange @ 0x14054B6D0 (MiUnlockVadRange.c)
 *     MiLockVadRange @ 0x14054B808 (MiLockVadRange.c)
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
  __int64 v8; // r13
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r12
  PVOID v11; // r15
  unsigned __int64 j; // rsi
  __int64 v13; // rax
  LONG *SharedVm; // rdi
  unsigned __int64 v15; // r11
  __int64 v16; // rdi
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned int DpcWatchdogCount; // r13d
  unsigned int DpcTimeCount; // r15d
  int v20; // r10d
  BOOL v21; // edx
  volatile int DpcRequestSummary; // r8d
  __int64 v23; // r9
  unsigned int v24; // edi
  _KTHREAD *NextThread; // rax
  unsigned __int64 v26; // rcx
  _QWORD **v27; // rax
  _QWORD *i; // rax
  int v29; // ecx
  unsigned __int64 v30; // r13
  __int64 v31; // r9
  char v32; // al
  __int64 v33; // rdx
  __int64 v34; // r8
  unsigned __int64 v35; // r11
  __int64 v36; // r15
  unsigned __int64 v37; // rax
  char v38; // al
  unsigned __int64 v39; // rsi
  unsigned __int64 m; // rdi
  unsigned __int64 v41; // r12
  unsigned __int64 v42; // rcx
  _QWORD **v43; // rax
  _QWORD *k; // rax
  void *v45; // rax
  KIRQL v46; // [rsp+40h] [rbp-1B8h]
  __int64 v47; // [rsp+48h] [rbp-1B0h]
  NTSTATUS v48; // [rsp+50h] [rbp-1A8h]
  unsigned __int64 v49; // [rsp+58h] [rbp-1A0h]
  PVOID Object; // [rsp+60h] [rbp-198h] BYREF
  __int64 v51; // [rsp+68h] [rbp-190h] BYREF
  unsigned __int64 v52; // [rsp+70h] [rbp-188h]
  __int64 v53; // [rsp+78h] [rbp-180h]
  unsigned __int64 v54; // [rsp+80h] [rbp-178h]
  __int64 v55; // [rsp+88h] [rbp-170h] BYREF
  PSIZE_T v56; // [rsp+90h] [rbp-168h]
  PVOID *v57; // [rsp+98h] [rbp-160h]
  int v58; // [rsp+A0h] [rbp-158h] BYREF
  __int16 v59; // [rsp+A4h] [rbp-154h]
  __int64 v60; // [rsp+A8h] [rbp-150h]
  __int64 v61; // [rsp+B0h] [rbp-148h]
  __int64 v62; // [rsp+B8h] [rbp-140h]
  $5BC46E0569261879018906DEC3127961 v63; // [rsp+160h] [rbp-98h] BYREF
  unsigned __int64 v64; // [rsp+190h] [rbp-68h]
  unsigned __int64 v65; // [rsp+198h] [rbp-60h]
  unsigned __int64 v66; // [rsp+1A0h] [rbp-58h]
  unsigned __int64 v67; // [rsp+1A8h] [rbp-50h]

  v56 = NumberOfBytesToUnlock;
  v57 = BaseAddress;
  result = MiLockUnlockCommon((ULONG_PTR)ProcessHandle, (__int64)&v51, (__int64)&v55, (__int64)&Object);
  v48 = result;
  if ( result < 0 )
    return result;
  v6 = 0LL;
  v52 = 0LL;
  v7 = 0;
  v8 = v51;
  v9 = (v51 + v55 - 1) & 0xFFFFFFFFFFFFF000uLL;
  v49 = v9;
  v54 = v51 & 0xFFFFFFFFFFFFF000uLL;
  v10 = v51 & 0xFFFFFFFFFFFFF000uLL;
  v11 = Object;
  if ( ProcessHandle != (HANDLE)-1LL )
  {
    KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)&v63);
    v7 = 2;
    v9 = v49;
  }
  v60 = 20LL;
  v58 = 1;
  v59 = 4;
  v61 = 0LL;
  v62 = 0LL;
  j = 0LL;
  v13 = MiLockVadRange(v11, v10, v9);
  v53 = v13;
  if ( !v13 )
    goto LABEL_100;
  v47 = (__int64)v11 + 1280;
  SharedVm = MiGetSharedVm((__int64)v11 + 1280);
  v46 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  if ( v10 <= v49 )
  {
    v15 = 0xFFFFF68000000000uLL;
    while ( 1 )
    {
      if ( (((unsigned __int8)(v10 >> 12) + 1) & 0xF) == 0 )
      {
        v16 = v47;
        if ( (unsigned int)MiWorkingSetIsContended(v47) )
          goto LABEL_31;
      }
      CurrentPrcb = KeGetCurrentPrcb();
      DpcWatchdogCount = CurrentPrcb->DpcWatchdogCount;
      DpcTimeCount = CurrentPrcb->DpcTimeCount;
      v20 = 1;
      v21 = DpcWatchdogCount > 7;
      DpcRequestSummary = CurrentPrcb->DpcRequestSummary;
      if ( (DpcRequestSummary & 1) != 0 )
      {
        v23 = 1LL;
        if ( DpcTimeCount > 7 )
        {
          v21 = 1;
          if ( CurrentPrcb->QuantumEnd )
          {
            v24 = 1;
            goto LABEL_27;
          }
        }
      }
      else
      {
        v23 = 0LL;
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
        break;
LABEL_35:
      if ( v10 > v52 || !j )
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
        else if ( ((v20 << v29) & 0x15) == 0 )
        {
          v11 = Object;
          v8 = v51;
          goto LABEL_73;
        }
        v52 = (*(unsigned int *)(j + 28) | ((unsigned __int64)*(unsigned __int8 *)(j + 33) << 32)) << 12;
      }
      if ( (__int64)v10 >> 47 == -1 || (__int64)v10 >> 47 == 0 )
      {
        v30 = v15 + ((v10 >> 9) & 0x7FFFFFFFF8LL);
        v64 = v30;
        v65 = v15 + ((v30 >> 9) & 0x7FFFFFFFF8LL);
        v66 = v15 + ((v65 >> 9) & 0x7FFFFFFFF8LL);
        v67 = v15 + ((v66 >> 9) & 0x7FFFFFFFF8LL);
        LODWORD(v31) = 4;
        while ( 1 )
        {
          v32 = MI_READ_PTE_LOCK_FREE(*(&v64 + (unsigned int)(v31 - 1)));
          if ( (v32 & 1) == 0 )
            break;
          if ( v32 < 0 )
          {
            if ( v10 >= v35 && v10 <= 0xFFFFF6FFFFFFFFFFuLL )
              break;
LABEL_58:
            v36 = *(_QWORD *)(MI_GET_PFN_FROM_PTE(v30, v33, v34, v31) + 8);
            if ( (v7 & 4) == 0 || !MiRotatedToFrameBuffer(v30) )
            {
              if ( (v36 & 0x8000000000000000uLL) == 0 )
                MiDemoteCombinedPte(v47, v30, v36 | 0x8000000000000000uLL);
              v37 = MI_READ_PTE_LOCK_FREE(v30);
              v38 = (v37 & 1) != 0 ? HIBYTE(v37) & 0xF ^ (HIBYTE(v37) & 0xF ^ (16 * (v37 >> 60))) & 0x70 : 10;
              if ( (v38 & 0xF) != 8 )
              {
                MiInsertTbFlushEntry((__int64)&v58, v10, 1LL, 0);
                if ( HIDWORD(v60) == (_DWORD)v60 )
                {
                  MiFreeWsleList(v47, (__int64)&v58, 0);
                  HIDWORD(v60) = 0;
                }
                break;
              }
            }
            goto LABEL_69;
          }
          if ( !(_DWORD)v31 )
            goto LABEL_58;
        }
      }
      v48 = -1073741782;
LABEL_69:
      v10 += 4096LL;
      v15 = 0xFFFFF68000000000uLL;
      if ( v10 > v49 )
      {
        v11 = Object;
        v8 = v51;
        goto LABEL_72;
      }
    }
    if ( !(_DWORD)v23 )
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
      EtwTraceShouldYieldProcessor(v24, DpcWatchdogCount, DpcTimeCount, v23);
    if ( v24 )
    {
      v16 = v47;
LABEL_31:
      if ( HIDWORD(v60) )
      {
        MiFreeWsleList(v16, (__int64)&v58, 0);
        HIDWORD(v60) = 0;
      }
      MiRelockWorkingSetExclusive(v16, v46);
    }
    v15 = 0xFFFFF68000000000uLL;
    v20 = 1;
    goto LABEL_35;
  }
LABEL_72:
  v20 = 1;
LABEL_73:
  if ( v48 == -1073741782 )
  {
    if ( HIDWORD(v60) )
      MiFreeWsleList(v47, (__int64)&v58, 0);
    MiUnlockWorkingSetExclusive(v47, v46);
    v13 = v53;
LABEL_100:
    MiUnlockVadRange(v11, v8, v13);
    if ( (v7 & 2) != 0 )
      KiUnstackDetachProcess(&v63, 0LL);
    ObfDereferenceObjectWithTag(v11, 0x6D566D4Du);
    return -1073741782;
  }
  v39 = v54;
  m = 0LL;
  v41 = v49;
  if ( v54 > v49 )
    goto LABEL_97;
  while ( v39 <= v6 && m )
  {
LABEL_91:
    MiUnlockVa(v47, v39);
    v39 += 4096LL;
    if ( (v39 & 0xF000) == 0 && (unsigned int)MiWorkingSetIsContended(v47) || KeShouldYieldProcessor() )
      MiRelockWorkingSetExclusive(v47, v46);
    v20 = 1;
    if ( v39 > v49 )
      goto LABEL_96;
  }
  if ( m )
  {
    v42 = m;
    v43 = *(_QWORD ***)(m + 8);
    if ( v43 )
    {
      m = *(_QWORD *)(m + 8);
      for ( k = *v43; k; k = (_QWORD *)*k )
        m = (unsigned __int64)k;
    }
    else
    {
      for ( m = *(_QWORD *)(m + 16) & 0xFFFFFFFFFFFFFFFCuLL; m; m = *(_QWORD *)(m + 16) & 0xFFFFFFFFFFFFFFFCuLL )
      {
        if ( *(_QWORD *)m == v42 )
          break;
        v42 = m;
      }
    }
  }
  else
  {
    m = MiLocateAddress(v39);
  }
  if ( ((v20 << (*(_BYTE *)(m + 48) & 7)) & 0x15) != 0 )
  {
    v6 = (*(unsigned int *)(m + 28) | ((unsigned __int64)*(unsigned __int8 *)(m + 33) << 32)) << 12;
    goto LABEL_91;
  }
LABEL_96:
  v11 = Object;
  v41 = v49;
LABEL_97:
  MiUnlockWorkingSetExclusive(v47, v46);
  MiUnlockVadRange(v11, v8, v53);
  if ( (v7 & 2) != 0 )
    KiUnstackDetachProcess(&v63, 0LL);
  ObfDereferenceObjectWithTag(v11, 0x6D566D4Du);
  v45 = (void *)v54;
  *v56 = v41 - v54 + 4096;
  *v57 = v45;
  return 0;
}
