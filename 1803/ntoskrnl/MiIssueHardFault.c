/*
 * XREFs of MiIssueHardFault @ 0x140059D80
 * Callers:
 *     MmAccessFault @ 0x14001B320 (MmAccessFault.c)
 *     MiInPagePageTable @ 0x14003D3E0 (MiInPagePageTable.c)
 * Callees:
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiAllocateWsle @ 0x1400161C0 (MiAllocateWsle.c)
 *     MiCompleteProtoPteFault @ 0x140019F00 (MiCompleteProtoPteFault.c)
 *     MiUnlockWorkingSetShared @ 0x14001CF10 (MiUnlockWorkingSetShared.c)
 *     MiMakeValidPte @ 0x14002EB00 (MiMakeValidPte.c)
 *     MiGetEffectivePagePriorityThread @ 0x14005605C (MiGetEffectivePagePriorityThread.c)
 *     MiIssueHardFaultIo @ 0x140057CF4 (MiIssueHardFaultIo.c)
 *     MiWaitForInPageComplete @ 0x1400583A0 (MiWaitForInPageComplete.c)
 *     MiFinishHardFault @ 0x140058B10 (MiFinishHardFault.c)
 *     MiRelockFaultState @ 0x140059A7C (MiRelockFaultState.c)
 *     MiUnlockFaultPageTable @ 0x140059D10 (MiUnlockFaultPageTable.c)
 *     MiGetSessionIdForVa @ 0x140059D3C (MiGetSessionIdForVa.c)
 *     MiReferenceInPageFile @ 0x14005A494 (MiReferenceInPageFile.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiLockAndDecrementShareCount @ 0x1400AD83C (MiLockAndDecrementShareCount.c)
 *     PfHardFaultRecord @ 0x1400B797C (PfHardFaultRecord.c)
 *     MiGetSharedVm @ 0x1400E47F8 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400E6200 (MiUnlockWorkingSetExclusive.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiZeroPhysicalPage @ 0x14010F800 (MiZeroPhysicalPage.c)
 *     MiLockPageAndSetDirty @ 0x1401248B8 (MiLockPageAndSetDirty.c)
 *     MiLogPageAccess @ 0x140129AB0 (MiLogPageAccess.c)
 *     MiGetPagingFileOffset @ 0x14013C69C (MiGetPagingFileOffset.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x140264B7C (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 */

__int64 __fastcall MiIssueHardFault(__int64 a1, ULONG_PTR a2)
{
  _BYTE *v2; // rax
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // r14
  __int64 v6; // r15
  unsigned int v8; // ebx
  unsigned int SessionIdForVa; // eax
  __int64 v10; // rax
  __int64 v11; // r12
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // r12
  __int64 v15; // rax
  unsigned int v16; // r8d
  unsigned int v17; // edx
  char v18; // dl
  __int64 v19; // rdx
  __int64 v20; // r9
  __int64 v21; // rcx
  __int64 v22; // rdx
  unsigned __int64 v23; // rdx
  char v24; // r8
  ULONG_PTR *v25; // rax
  unsigned __int64 v26; // rdx
  ULONG_PTR *v27; // rcx
  __int64 result; // rax
  unsigned __int64 v29; // rsi
  int v30; // edi
  unsigned int v31; // ecx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // r9
  unsigned __int64 ValidPte; // rax
  unsigned __int64 v37; // rbx
  _BYTE *v38; // r12
  __int64 v39; // rcx
  __int64 v40; // rdx
  char v41; // cl
  __int64 v42; // [rsp+0h] [rbp-70h]
  _BYTE v43[16]; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int8 v44; // [rsp+70h] [rbp+0h]
  unsigned __int8 v45; // [rsp+71h] [rbp+1h]
  _BYTE *v46; // [rsp+78h] [rbp+8h] BYREF
  __int64 v47; // [rsp+80h] [rbp+10h] BYREF
  unsigned __int64 v48; // [rsp+88h] [rbp+18h] BYREF
  __int64 v49; // [rsp+90h] [rbp+20h]
  __int64 v50; // [rsp+98h] [rbp+28h]

  v2 = *(_BYTE **)(a2 + 200);
  v4 = *(_QWORD *)a1;
  v5 = 0LL;
  v6 = *(_QWORD *)(a2 + 152);
  *(_QWORD *)(a2 + 216) = v4;
  v8 = 0;
  v46 = v2;
  SessionIdForVa = MiGetSessionIdForVa(v4);
  v10 = MiReferenceInPageFile(a2, SessionIdForVa);
  v11 = *(_QWORD *)(a1 + 56);
  v48 = v10;
  v47 = *(_QWORD *)(a1 + 72);
  MiUnlockFaultPageTable((_QWORD *)(a1 + 56));
  LOBYTE(v13) = 1;
  v44 = *(_BYTE *)(a1 + 64);
  v45 = v44;
  if ( *(_BYTE *)(a1 + 65) )
    MiUnlockWorkingSetExclusive(v11, v13);
  else
    MiUnlockWorkingSetShared(v11, 1u, v12);
  v14 = *(_QWORD *)(a1 + 16);
  if ( v48 )
  {
    *(_QWORD *)(a2 + 192) = v48;
    if ( (v46[56] & 0x20) != 0 )
      v8 = 1;
  }
  v15 = *(_QWORD *)(a1 + 16);
  if ( (v15 & 1) == 0 || *(_BYTE *)(v15 & 0xFFFFFFFFFFFFFFFEuLL) != 1 )
    ++*(_BYTE *)(v6 + 1758);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 56) + 184LL) & 7) != 0 )
    --*(_WORD *)(v6 + 486);
  else
    --*(_WORD *)(v6 + 484);
  __writecr8(v44);
  v16 = *(_DWORD *)(a2 + 304);
  v17 = v16;
  if ( (*(_BYTE *)(a2 + 191) & 1) != 0 )
  {
    MiZeroPhysicalPage(*(_QWORD *)(a2 + 8LL * ((v16 >> 12) + ((*(_DWORD *)(a2 + 304) & 0xFFF) != 0)) + 304));
    v16 = *(_DWORD *)(a2 + 304);
    v17 = v16;
  }
  *(_DWORD *)(a2 + 180) = v17;
  v46 = 0LL;
  if ( *(_DWORD *)(a2 + 36) )
  {
    v8 = 2;
  }
  else
  {
    v18 = *(_BYTE *)(a2 + 189);
    if ( (v18 & 4) == 0 || (*(_BYTE *)(a2 + 191) & 0x10) == 0 || v18 < 0 )
    {
      if ( ((PerfGlobalGroupMask & 0x2000) != 0 || (dword_1403E27D4 & 1) != 0) && v18 >= 0 && (v18 & 4) == 0 )
      {
        v19 = *(_QWORD *)(a2 + 96);
        v20 = *(_QWORD *)(a2 + 216);
        v42 = *(_QWORD *)(a2 + 192);
        v46 = v43;
        PfHardFaultRecord((unsigned int)v43, v19, v16, v20, v42, v6);
      }
      v21 = *(_QWORD *)(a1 + 56);
      if ( (*(_BYTE *)(v21 + 187) & 0x60) == 0x60 && !*(_QWORD *)(MiGetSharedVm(v21) + 32) )
        KiStackAttachProcess(PsInitialSystemProcess, 0, a2 + 104);
      v8 |= 2u;
      MiIssueHardFaultIo(a2, v8 & 1, *(_QWORD *)(a1 + 16));
    }
  }
  v22 = *(_QWORD *)(a1 + 16);
  if ( (v22 & 1) != 0 )
  {
    v23 = v22 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( *(_BYTE *)v23 == 1 )
    {
      v24 = *(_BYTE *)(*(_QWORD *)(a1 + 56) + 184LL);
      if ( (v24 & 7u) >= 2 )
        *(_BYTE *)(a2 + 189) ^= (*(_BYTE *)(a2 + 189) ^ (v24 - 1)) & 3;
      if ( v8 < 2 )
      {
        v27 = *(ULONG_PTR **)(v23 + 64);
        if ( *v27 != v23 + 56 )
          __fastfail(3u);
        *(_QWORD *)a2 = v23 + 56;
        *(_QWORD *)(a2 + 8) = v27;
        *v27 = a2;
        *(_QWORD *)(v23 + 64) = a2;
        *(_QWORD *)(v23 + 72) += *(unsigned int *)(a2 + 180);
      }
      else
      {
        v25 = *(ULONG_PTR **)(v23 + 48);
        v26 = v23 + 40;
        if ( *v25 != v26 )
          __fastfail(3u);
        *(_QWORD *)a2 = v26;
        *(_QWORD *)(a2 + 8) = v25;
        *v25 = a2;
        *(_QWORD *)(v26 + 8) = a2;
      }
      KeGetCurrentIrql();
      __writecr8(1uLL);
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 56) + 184LL) & 7) != 0 )
        KiLeaveGuardedRegionUnsafe(v6);
      else
        KeLeaveCriticalRegionThread(v6);
      MiRelockFaultState(a1 + 56, v47);
      return 0LL;
    }
  }
  v29 = *(_QWORD *)(a2 + 224);
  if ( *(__int64 *)(*(_QWORD *)(a2 + 240) + 8LL) < 0 )
    v5 = *(_QWORD *)(a2 + 240);
  MiWaitForInPageComplete(a1, a2, (unsigned int *)&v46);
  result = MiFinishHardFault(a1, v47, a2, &v48);
  --*(_BYTE *)(v6 + 1758);
  v30 = result;
  if ( !(_DWORD)result )
  {
    if ( !v5 )
      v5 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v48) >> 12) & 0xFFFFFFFFFLL)
         - 0x58000000000LL;
    v31 = *(_DWORD *)(a1 + 8) & 2;
    v49 = v31;
    if ( (*(_QWORD *)(v5 + 40) & 0x200000000000000LL) != 0 )
    {
      v29 = ((*(_QWORD *)a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v30 = MiCompleteProtoPteFault((ULONG_PTR *)a1, v48, v31, 0, v14);
      if ( v30 >= 0 )
      {
LABEL_51:
        if ( dword_1403CBF28
          && (_DWORD)v46 != 2
          && (unsigned int)MiGetEffectivePagePriorityThread(v6) >= dword_1403CBF2C )
        {
          MiLogPageAccess(*(_QWORD *)(a1 + 56), v29 | 1);
        }
        if ( !v30 )
          return 276;
      }
      return (unsigned int)v30;
    }
    v50 = v14 & 1;
    if ( (v14 & 1) != 0 && *(_BYTE *)(v14 & 0xFFFFFFFFFFFFFFFEuLL) == 4 )
    {
      *(_QWORD *)v29 = MI_READ_PTE_LOCK_FREE(v29) & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
      if ( MiPteInShadowRange(v29) )
        MiWritePteShadow(v33, v32);
    }
    v47 = MI_READ_PTE_LOCK_FREE(v29);
    v34 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v47);
    ValidPte = MiMakeValidPte(v29, v34, (unsigned int)v35, v35);
    v37 = ValidPte;
    v47 = ValidPte;
    if ( v49 )
    {
      if ( (ValidPte & 0x800) != 0 )
      {
        v37 = ValidPte | 0x42;
        if ( (*(_BYTE *)(v5 + 34) & 0x10) == 0 )
        {
          if ( (unsigned int)MiGetPagingFileOffset(v5 + 16) )
            MiLockPageAndSetDirty(v5, 1LL);
        }
      }
    }
    v38 = (_BYTE *)(v14 & 0xFFFFFFFFFFFFFFFEuLL);
    if ( !v50 )
      goto LABEL_75;
    if ( *v38 == 4 )
    {
      *(_QWORD *)v29 = v37;
      if ( MiPteInShadowRange(v29) )
        MiWritePteShadow(v39, v37);
      return 276LL;
    }
    if ( *v38 == 5 )
    {
      v40 = (__int64)v38;
      v41 = 0;
    }
    else
    {
LABEL_75:
      v41 = 0;
      v40 = 0LL;
    }
    if ( v50 && *v38 == 3 )
      v41 = 1;
    if ( (unsigned int)MiAllocateWsle(*(_QWORD *)(a1 + 56), (unsigned __int64 *)v29, (_QWORD *)v5, 0, v37, v41, v40) )
      goto LABEL_51;
    MiLockAndDecrementShareCount(v5, 0LL);
    return (unsigned int)-1073741801;
  }
  return result;
}
