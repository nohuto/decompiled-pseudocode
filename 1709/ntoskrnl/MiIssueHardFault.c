/*
 * XREFs of MiIssueHardFault @ 0x14002C7B0
 * Callers:
 *     MmAccessFault @ 0x140040CF0 (MmAccessFault.c)
 *     MiResolvePageTablePage @ 0x1400422D0 (MiResolvePageTablePage.c)
 * Callees:
 *     PfHardFaultRecord @ 0x140003BD0 (PfHardFaultRecord.c)
 *     MiLogPageAccess @ 0x1400112C0 (MiLogPageAccess.c)
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiGetEffectivePagePriorityThread @ 0x140028114 (MiGetEffectivePagePriorityThread.c)
 *     MiMakeTransitionPteValid @ 0x14002C750 (MiMakeTransitionPteValid.c)
 *     MiGetSessionIdForVa @ 0x14002CD24 (MiGetSessionIdForVa.c)
 *     MiWaitForInPageComplete @ 0x14002D860 (MiWaitForInPageComplete.c)
 *     MiLockPageAndSetDirty @ 0x140032380 (MiLockPageAndSetDirty.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiCompleteProtoPteFault @ 0x140045530 (MiCompleteProtoPteFault.c)
 *     MiAllocateWsle @ 0x140047A60 (MiAllocateWsle.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x140057900 (MiPreUnlockWorkingSetExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiReferenceInPageFile @ 0x1400678E4 (MiReferenceInPageFile.c)
 *     MiZeroPhysicalPage @ 0x140075D00 (MiZeroPhysicalPage.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     MiLockAndDecrementShareCount @ 0x1400EACDC (MiLockAndDecrementShareCount.c)
 *     MiGetPagingFileOffset @ 0x14010C6B8 (MiGetPagingFileOffset.c)
 *     MiIssueHardFaultIo @ 0x140116084 (MiIssueHardFaultIo.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
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
  __int64 v15; // rdi
  volatile LONG *SharedVm; // rax
  int v17; // r8d
  char v18; // cl
  __int64 v19; // rdx
  __int64 v20; // r9
  _QWORD *v21; // r8
  char v22; // dl
  ULONG_PTR *v23; // rax
  _QWORD *v24; // r8
  ULONG_PTR *v25; // rcx
  __int64 v26; // rbx
  __int64 result; // rax
  __int64 v28; // r14
  unsigned __int64 v29; // rdi
  int v30; // esi
  __int64 v31; // r8
  __int64 v32; // r9
  unsigned __int64 v33; // r9
  __int64 PteShadow; // rax
  unsigned __int64 v35; // rax
  __int64 TransitionPteValid; // rax
  __int64 v37; // rbx
  unsigned __int64 v38; // r15
  __int64 v39; // [rsp+0h] [rbp-60h]
  _DWORD v40[16]; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int8 v41; // [rsp+60h] [rbp+0h]
  __int64 v42; // [rsp+68h] [rbp+8h] BYREF
  __int64 v43; // [rsp+70h] [rbp+10h] BYREF
  __int64 v44; // [rsp+78h] [rbp+18h]
  unsigned __int64 v45; // [rsp+80h] [rbp+20h]

  v7 = *(_QWORD *)(a4 + 152);
  v9 = *(_QWORD *)(a4 + 200);
  v41 = a2;
  v10 = 0;
  v45 = a3;
  *(_QWORD *)(a4 + 216) = a3;
  SessionIdForVa = MiGetSessionIdForVa(a3);
  v13 = MiReferenceInPageFile(a4, SessionIdForVa);
  LOBYTE(v14) = 1;
  v15 = v13;
  MiPreUnlockWorkingSetExclusive(a1, v14);
  SharedVm = (volatile LONG *)MiGetSharedVm(a1);
  ExReleaseSpinLockExclusiveFromDpcLevel(SharedVm);
  __writecr8(1uLL);
  if ( v15 )
  {
    *(_QWORD *)(a4 + 192) = v15;
    v10 = (*(_BYTE *)(v9 + 56) & 0x20) != 0;
  }
  v44 = a5 & 1;
  if ( (a5 & 1) == 0 || *(_BYTE *)(a5 & 0xFFFFFFFFFFFFFFFEuLL) != 1 )
    ++*(_BYTE *)(v7 + 1758);
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
  v42 = 0LL;
  if ( *(_DWORD *)(a4 + 36) )
  {
    v10 = 2;
  }
  else
  {
    v18 = *(_BYTE *)(a4 + 189);
    if ( (v18 & 4) == 0 || (*(_BYTE *)(a4 + 191) & 0x10) == 0 || v18 < 0 )
    {
      if ( ((PerfGlobalGroupMask & 0x2000) != 0 || (dword_14039E914 & 1) != 0) && v18 >= 0 && (v18 & 4) == 0 )
      {
        v19 = *(_QWORD *)(a4 + 96);
        v20 = *(_QWORD *)(a4 + 216);
        v39 = *(_QWORD *)(a4 + 192);
        v42 = (__int64)v40;
        PfHardFaultRecord((__int64)v40, v19, v17, v20, v39, v7);
      }
      if ( (*(_BYTE *)(a1 + 195) & 0x60) == 0x60 && !*(_QWORD *)(MiGetSharedVm(a1) + 32) )
        KiStackAttachProcess((ULONG_PTR)PsInitialSystemProcess);
      v10 |= 2u;
      MiIssueHardFaultIo(a4, v10 & 1, a5);
    }
  }
  if ( (a5 & 1) != 0 )
  {
    v21 = (_QWORD *)(a5 & 0xFFFFFFFFFFFFFFFEuLL);
    if ( *(_BYTE *)(a5 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
    {
      v22 = *(_BYTE *)(a1 + 192);
      if ( (v22 & 7u) >= 2 )
        *(_BYTE *)(a4 + 189) ^= (*(_BYTE *)(a4 + 189) ^ (v22 - 1)) & 3;
      if ( v10 < 2 )
      {
        v25 = (ULONG_PTR *)v21[8];
        if ( (_QWORD *)*v25 != v21 + 7 )
          __fastfail(3u);
        *(_QWORD *)a4 = v21 + 7;
        *(_QWORD *)(a4 + 8) = v25;
        *v25 = a4;
        v21[8] = a4;
        v21[9] += *(unsigned int *)(a4 + 180);
      }
      else
      {
        v23 = (ULONG_PTR *)v21[6];
        v24 = v21 + 5;
        if ( (_QWORD *)*v23 != v24 )
          __fastfail(3u);
        *(_QWORD *)a4 = v24;
        *(_QWORD *)(a4 + 8) = v23;
        *v23 = a4;
        v24[1] = a4;
      }
      KeGetCurrentIrql();
      __writecr8(1uLL);
      if ( (*(_BYTE *)(a1 + 192) & 7) != 0 )
        KiLeaveGuardedRegionUnsafe(v7);
      else
        KeLeaveCriticalRegionThread(v7);
      v26 = MiGetSharedVm(a1);
      ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v26);
      result = 0LL;
      *(_DWORD *)(v26 + 4) = 0;
      return result;
    }
  }
  v28 = *(_QWORD *)(a4 + 240);
  v29 = *(_QWORD *)(a4 + 224);
  if ( *(__int64 *)(v28 + 8) >= 0 )
    v28 = 0LL;
  result = MiWaitForInPageComplete(a4, a7, (__int64)&v42);
  --*(_BYTE *)(v7 + 1758);
  v30 = result;
  if ( !(_DWORD)result )
  {
    if ( !v28 )
      v28 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(&v43) - 0x58000000000LL;
    if ( (*(_QWORD *)(v28 + 40) & 0x200000000000000LL) != 0 )
    {
      v29 = ((v45 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v30 = MiCompleteProtoPteFault(a1, v41, v45, v43, a6, 0, a5);
      if ( v30 >= 0 )
        goto LABEL_47;
      return (unsigned int)v30;
    }
    v33 = 0xFFFFF6FB7DBED000uLL;
    if ( v44 && *(_BYTE *)(a5 & 0xFFFFFFFFFFFFFFFEuLL) == 4 )
    {
      PteShadow = *(_QWORD *)v29;
      if ( v29 >= 0xFFFFF6FB7DBED000uLL && v29 <= 0xFFFFF6FB7DBED7F8uLL )
        PteShadow = MiReadPteShadow(v29, *(_QWORD *)v29);
      v35 = PteShadow & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
      *(_QWORD *)v29 = v35;
      if ( v29 >= v33 && v29 <= 0xFFFFF6FB7DBED7F8uLL )
        MiWritePteShadow(v29, v35);
    }
    TransitionPteValid = MiMakeTransitionPteValid((__int64 *)v29);
    v37 = TransitionPteValid;
    if ( a6 )
    {
      if ( (TransitionPteValid & 0x800) != 0 )
      {
        v37 = TransitionPteValid | 0x42;
        if ( (*(_BYTE *)(v28 + 34) & 0x10) == 0 )
        {
          if ( (unsigned int)MiGetPagingFileOffset(v28 + 16) )
            MiLockPageAndSetDirty(v28, 1LL);
        }
      }
    }
    if ( !v44 )
      goto LABEL_75;
    v38 = a5 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( *(_BYTE *)(a5 & 0xFFFFFFFFFFFFFFFEuLL) == 4 )
    {
      *(_QWORD *)v29 = v37;
      if ( v29 >= 0xFFFFF6FB7DBED000uLL && v29 <= 0xFFFFF6FB7DBED7F8uLL )
        MiWritePteShadow(v29, v37);
      return 276LL;
    }
    if ( *(_BYTE *)(a5 & 0xFFFFFFFFFFFFFFFEuLL) != 5 )
LABEL_75:
      v38 = 0LL;
    if ( (unsigned int)MiAllocateWsle(a1, v29, v28, 0, v37, v38) )
    {
LABEL_47:
      if ( dword_140388C68 && (_DWORD)v42 != 2 && (unsigned int)MiGetEffectivePagePriorityThread(v7) >= dword_140388C6C )
        MiLogPageAccess(a1, v29 | 1, v31, v32);
      if ( !v30 )
        return 276;
      return (unsigned int)v30;
    }
    MiLockAndDecrementShareCount(v28, 0LL);
    return (unsigned int)-1073741801;
  }
  return result;
}
