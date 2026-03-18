/*
 * XREFs of MiIssueHardFault @ 0x140096E10
 * Callers:
 *     MmAccessFault @ 0x1400BDCD0 (MmAccessFault.c)
 *     MiResolvePageTablePage @ 0x1400BF190 (MiResolvePageTablePage.c)
 * Callees:
 *     PfHardFaultRecord @ 0x140010C3C (PfHardFaultRecord.c)
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     MiGetPagingFileOffset @ 0x14007720C (MiGetPagingFileOffset.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiReferenceInPageFile @ 0x140097390 (MiReferenceInPageFile.c)
 *     MiGetSessionIdForVa @ 0x1400974CC (MiGetSessionIdForVa.c)
 *     MiWaitForInPageComplete @ 0x140097510 (MiWaitForInPageComplete.c)
 *     MiIssueHardFaultIo @ 0x140097C48 (MiIssueHardFaultIo.c)
 *     MiMakeValidPte @ 0x1400A12B0 (MiMakeValidPte.c)
 *     MiZeroPhysicalPage @ 0x1400A59A0 (MiZeroPhysicalPage.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     MiCompleteProtoPteFault @ 0x1400B9890 (MiCompleteProtoPteFault.c)
 *     MiAllocateWsle @ 0x1400BCCF0 (MiAllocateWsle.c)
 *     MiLogPageAccess @ 0x1400D6220 (MiLogPageAccess.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x1400D6900 (MiPreUnlockWorkingSetExclusive.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EFC10 (KeLeaveCriticalRegionThread.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     MiGetEffectivePagePriorityThread @ 0x1400FE040 (MiGetEffectivePagePriorityThread.c)
 *     MiLockPageAndSetDirty @ 0x140100B80 (MiLockPageAndSetDirty.c)
 *     MiLockAndDecrementShareCount @ 0x140102090 (MiLockAndDecrementShareCount.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x14021EE14 (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiIssueHardFault(
        __int64 a1,
        unsigned __int8 a2,
        unsigned __int64 a3,
        ULONG_PTR a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  __int64 v7; // r12
  __int64 v9; // r14
  unsigned int v10; // ebx
  unsigned int SessionIdForVa; // eax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rsi
  volatile LONG *v16; // rcx
  int v17; // r8d
  unsigned __int8 v18; // cl
  __int64 v19; // rdx
  _QWORD *v20; // r8
  char v21; // dl
  ULONG_PTR *v22; // rax
  _QWORD *v23; // r8
  ULONG_PTR *v24; // rcx
  __int64 SharedVm; // rbx
  __int64 result; // rax
  unsigned __int64 v27; // r14
  __int64 v28; // rsi
  int v29; // edi
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rcx
  __int64 v34; // rax
  unsigned int v35; // r9d
  __int64 ValidPte; // rax
  __int64 v37; // rbx
  unsigned __int64 v38; // r15
  __int64 v39; // rcx
  _DWORD v40[16]; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int8 v41; // [rsp+60h] [rbp+0h]
  unsigned __int64 v42; // [rsp+68h] [rbp+8h] BYREF
  __int64 v43; // [rsp+70h] [rbp+10h] BYREF
  __int64 v44; // [rsp+78h] [rbp+18h] BYREF
  __int64 v45; // [rsp+80h] [rbp+20h]

  v7 = *(_QWORD *)(a4 + 152);
  v9 = *(_QWORD *)(a4 + 200);
  v41 = a2;
  v10 = 0;
  v42 = a3;
  *(_QWORD *)(a4 + 216) = a3;
  SessionIdForVa = MiGetSessionIdForVa(a3);
  v13 = MiReferenceInPageFile(a4, SessionIdForVa);
  LOBYTE(v14) = 1;
  v15 = v13;
  MiPreUnlockWorkingSetExclusive(a1, v14);
  v16 = &dword_14036D4C0;
  if ( (*(_BYTE *)(a1 + 192) & 7) != 2 )
    v16 = (volatile LONG *)(a1 + 200);
  ExReleaseSpinLockExclusiveFromDpcLevel(v16);
  __writecr8(1uLL);
  if ( v15 )
  {
    *(_QWORD *)(a4 + 192) = v15;
    if ( (*(_BYTE *)(v9 + 56) & 0x20) != 0 )
      v10 = 1;
  }
  v45 = a5 & 1;
  if ( (a5 & 1) == 0 || *(_BYTE *)(a5 & 0xFFFFFFFFFFFFFFFEuLL) != 1 )
    ++*(_BYTE *)(v7 + 1750);
  if ( (*(_BYTE *)(a1 + 192) & 7) != 0 )
    --*(_WORD *)(v7 + 486);
  else
    --*(_WORD *)(v7 + 484);
  __writecr8(v41);
  if ( (*(_BYTE *)(a4 + 191) & 1) != 0 )
    MiZeroPhysicalPage(*(_QWORD *)(a4
                                 + 8LL
                                 * ((*(_DWORD *)(a4 + 296) >> 12) + (unsigned int)((*(_DWORD *)(a4 + 296) & 0xFFF) != 0))
                                 + 296));
  v17 = *(_DWORD *)(a4 + 296);
  *(_DWORD *)(a4 + 180) = v17;
  v43 = 0LL;
  if ( *(_DWORD *)(a4 + 36) )
  {
    v10 |= 2u;
  }
  else
  {
    v18 = *(_BYTE *)(a4 + 189);
    if ( (v18 & 4) == 0 || (*(_BYTE *)(a4 + 191) & 0x10) == 0 || v18 >= 0x80u )
    {
      if ( ((PerfGlobalGroupMask & 0x2000) != 0 || (dword_140382C14 & 1) != 0) && v18 < 0x80u && (v18 & 4) == 0 )
      {
        v19 = *(_QWORD *)(a4 + 96);
        v43 = (__int64)v40;
        PfHardFaultRecord((__int64)v40, v19, v17, *(_QWORD *)(a4 + 216), *(_QWORD *)(a4 + 192), v7);
      }
      if ( (*(_BYTE *)(a1 + 195) & 0xC0) == 0xC0 && !*(_QWORD *)(MiGetSharedVm(a1) + 32) )
        KiStackAttachProcess((ULONG_PTR)PsInitialSystemProcess);
      v10 |= 2u;
      MiIssueHardFaultIo(a4, v10 & 1, a5);
    }
  }
  if ( (a5 & 1) != 0 )
  {
    v20 = (_QWORD *)(a5 & 0xFFFFFFFFFFFFFFFEuLL);
    if ( *(_BYTE *)(a5 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
    {
      v21 = *(_BYTE *)(a1 + 192);
      if ( (v21 & 7u) >= 2 )
        *(_BYTE *)(a4 + 189) ^= (*(_BYTE *)(a4 + 189) ^ (v21 - 1)) & 3;
      if ( v10 < 2 )
      {
        v24 = (ULONG_PTR *)v20[8];
        if ( (_QWORD *)*v24 != v20 + 7 )
          __fastfail(3u);
        *(_QWORD *)a4 = v20 + 7;
        *(_QWORD *)(a4 + 8) = v24;
        *v24 = a4;
        v20[8] = a4;
        v20[9] += *(unsigned int *)(a4 + 180);
      }
      else
      {
        v22 = (ULONG_PTR *)v20[6];
        v23 = v20 + 5;
        if ( (_QWORD *)*v22 != v23 )
          __fastfail(3u);
        *(_QWORD *)a4 = v23;
        *(_QWORD *)(a4 + 8) = v22;
        *v22 = a4;
        v23[1] = a4;
      }
      KeGetCurrentIrql();
      __writecr8(1uLL);
      if ( (*(_BYTE *)(a1 + 192) & 7) != 0 )
        KiLeaveGuardedRegionUnsafe(v7);
      else
        KeLeaveCriticalRegionThread(v7);
      SharedVm = MiGetSharedVm(a1);
      ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
      result = 0LL;
      *(_DWORD *)(SharedVm + 4) = 0;
      return result;
    }
  }
  v27 = *(_QWORD *)(a4 + 240);
  v28 = *(_QWORD *)(a4 + 224);
  if ( *(__int64 *)(v27 + 8) >= 0 )
    v27 = 0LL;
  result = MiWaitForInPageComplete(a4, a7, (__int64)&v43);
  --*(_BYTE *)(v7 + 1750);
  v29 = result;
  if ( !(_DWORD)result )
  {
    if ( !v27 )
      v27 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v44) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    if ( (*(_QWORD *)(v27 + 40) & 0x200000000000000LL) != 0 )
    {
      v28 = ((v42 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v29 = MiCompleteProtoPteFault(a1, v41, v42, v44, a6, 0, a5);
      if ( v29 >= 0 )
        goto LABEL_50;
      return (unsigned int)v29;
    }
    if ( v45 )
    {
      if ( *(_BYTE *)(a5 & 0xFFFFFFFFFFFFFFFEuLL) == 4 )
      {
        *(_QWORD *)v28 = MI_READ_PTE_LOCK_FREE(v28) & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
        if ( (unsigned int)MiPteInShadowRange(v28) )
          MiWritePteShadow(v33);
      }
    }
    v42 = MI_READ_PTE_LOCK_FREE(v28);
    v34 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v42);
    ValidPte = MiMakeValidPte(v28, v34, v35);
    v37 = ValidPte;
    v42 = ValidPte;
    if ( a6 )
    {
      if ( (ValidPte & 0x800) != 0 )
      {
        v37 = ValidPte | 0x42;
        if ( (*(_BYTE *)(v27 + 34) & 0x10) == 0 )
        {
          if ( (unsigned int)MiGetPagingFileOffset(v27 + 16) )
            MiLockPageAndSetDirty(v27, 1LL);
        }
      }
    }
    if ( !v45 )
      goto LABEL_73;
    v38 = a5 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( *(_BYTE *)(a5 & 0xFFFFFFFFFFFFFFFEuLL) == 4 )
    {
      *(_QWORD *)v28 = v37;
      if ( (unsigned int)MiPteInShadowRange(v28) )
        MiWritePteShadow(v39);
      *(_QWORD *)v27 = 0LL;
      return 276LL;
    }
    if ( *(_BYTE *)(a5 & 0xFFFFFFFFFFFFFFFEuLL) != 5 )
LABEL_73:
      v38 = 0LL;
    if ( (unsigned int)MiAllocateWsle(a1, v28, v27, 0, v37, v38) )
    {
LABEL_50:
      if ( dword_14036CA68
        && (_DWORD)v43 != 2
        && (unsigned int)MiGetEffectivePagePriorityThread(v7, v30, v31, v32) >= dword_14036CA6C )
      {
        MiLogPageAccess(a1, v28 | 1);
      }
      if ( !v29 )
        return 276;
      return (unsigned int)v29;
    }
    MiLockAndDecrementShareCount(v27, 0LL);
    return (unsigned int)-1073741801;
  }
  return result;
}
