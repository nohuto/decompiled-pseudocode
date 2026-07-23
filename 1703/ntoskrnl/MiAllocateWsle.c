/*
 * XREFs of MiAllocateWsle @ 0x1400BCCF0
 * Callers:
 *     MiCreateForkWsle @ 0x14000176C (MiCreateForkWsle.c)
 *     MiMakeSystemCachePteValid @ 0x140026388 (MiMakeSystemCachePteValid.c)
 *     MiInitializeWorkingSetList @ 0x1400644D4 (MiInitializeWorkingSetList.c)
 *     MiIssueHardFault @ 0x140096E10 (MiIssueHardFault.c)
 *     MiMakeSystemCacheRangeValid @ 0x14009BBD0 (MiMakeSystemCacheRangeValid.c)
 *     MiCompleteProtoPteFault @ 0x1400B9890 (MiCompleteProtoPteFault.c)
 *     MiCompletePrivateZeroFault @ 0x1400BC2F0 (MiCompletePrivateZeroFault.c)
 *     MiDispatchFault @ 0x1400BF7D0 (MiDispatchFault.c)
 *     MiResolveTransitionFault @ 0x1400C2260 (MiResolveTransitionFault.c)
 *     MiResolveProtoCombine @ 0x140105DB0 (MiResolveProtoCombine.c)
 * Callees:
 *     MiMarkPfnVerified @ 0x140005D80 (MiMarkPfnVerified.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     MiLockPageAtDpcInline @ 0x14009C240 (MiLockPageAtDpcInline.c)
 *     MiGetPagePrivilege @ 0x1400A3660 (MiGetPagePrivilege.c)
 *     KxWaitForLockOwnerShip @ 0x1400AB2F0 (KxWaitForLockOwnerShip.c)
 *     KxWaitForLockChainValid @ 0x14012B5E0 (KxWaitForLockChainValid.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401FE8B0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1401FEA38 (KiReleaseQueuedSpinLockInstrumented.c)
 *     MiLogAllocateWsleEvent @ 0x14020E098 (MiLogAllocateWsleEvent.c)
 *     MiCompleteSecureProcessFault @ 0x14021BE20 (MiCompleteSecureProcessFault.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

__int64 __fastcall MiAllocateWsle(__int64 a1, __int64 *a2, __int64 a3, char a4, __int64 a5, __int64 a6)
{
  _QWORD *v10; // r8
  char v11; // al
  unsigned __int64 v12; // r15
  _DWORD *v13; // rcx
  unsigned __int8 v14; // bl
  __int64 v15; // r12
  __int64 v16; // r9
  int v17; // ecx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  char v20; // dl
  __int64 v21; // rcx
  __int64 v22; // rdx
  unsigned __int64 v23; // r8
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int8 v25; // r14
  unsigned int Queue; // ebp
  unsigned int v27; // ebp
  __int64 v28; // rdx
  unsigned int v29; // eax
  char v30; // cl
  char v31; // cl
  char v32; // dl
  __int64 v33; // rcx
  int v34; // ecx
  __int64 v35; // rax
  __int64 v36; // r14
  __int64 v37; // rbp
  __int64 *v38; // rbx
  __int64 *v39; // r14
  _QWORD *v40; // rdx
  __int64 *v41; // rcx
  __int64 **v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v46; // [rsp+20h] [rbp-58h] BYREF
  volatile signed __int64 *v47; // [rsp+28h] [rbp-50h]
  void *retaddr; // [rsp+78h] [rbp+0h]
  int v49; // [rsp+80h] [rbp+8h]
  int v50; // [rsp+88h] [rbp+10h] BYREF

  ++*(_DWORD *)(a1 + 4);
  v10 = &unk_14036D540;
  v11 = *(_BYTE *)(a1 + 192) & 7;
  v12 = (__int64)((_QWORD)a2 << 25) >> 16;
  v13 = &unk_14036D540;
  if ( v11 != 2 )
    v13 = 0LL;
  if ( v13 )
    ++*v13;
  __incgsdword(0x2E90u);
  v49 = 0;
  if ( v12 < 0xFFFFF68000000000uLL || v12 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v15 = 1LL;
    v14 = 0;
  }
  else
  {
    v14 = a5;
    v15 = 0LL;
  }
  v16 = 2LL;
  if ( (*(_BYTE *)(a1 + 192) & 7) != 0
    || (*(_QWORD *)(a3 + 40) & 0xFFFFFFFFFLL) != (a3 + 0x58000000000LL) / 48
    || (*(_DWORD *)(a1 - 508) & 0xC00) != 0x800 )
  {
    *(_QWORD *)a3 = 2LL;
  }
  ++*(_QWORD *)(a1 + 136);
  if ( v12 < 0xFFFFF68000000000uLL || v12 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    ++*(_QWORD *)(a1 + 120);
    v17 = 1;
  }
  else
  {
    v17 = 0;
  }
  v18 = *(_QWORD *)(a1 + 120);
  if ( v18 > *(_QWORD *)(a1 + 160) )
    *(_QWORD *)(a1 + 160) = v18;
  if ( (*(_BYTE *)(a1 + 192) & 7) != 2 )
    v10 = 0LL;
  if ( v10 )
  {
    ++v10[1];
    if ( v17 == 1 )
      ++v10[2];
    v19 = v10[2];
    if ( v19 > v10[3] )
      v10[3] = v19;
  }
  if ( (*(_QWORD *)(a3 + 40) & 0x200000000000000LL) == 0 )
  {
    ++*(_QWORD *)(a1 + 144);
    if ( v12 < 0xFFFFF68000000000uLL || v12 > 0xFFFFF6FFFFFFFFFFuLL )
      ++*(_QWORD *)(a1 + 128);
  }
  v20 = *(_BYTE *)(a1 + 192);
  if ( (v20 & 7u) >= 2 )
  {
    v21 = *(_QWORD *)(qword_14036C8F8 + 8LL * *(unsigned __int16 *)(a1 + 172));
    v22 = v21 + 8LL * ((v20 & 7u) - 2);
    v23 = *(_QWORD *)(v21 + 4096) + *(_QWORD *)(a1 + 136);
    if ( v23 > *(_QWORD *)(v22 + 4104) )
      *(_QWORD *)(v22 + 4104) = v23;
    if ( (*(_BYTE *)(a1 + 192) & 7) == 4 )
    {
      if ( PsNtosImageBase
        && (v12 >= (unsigned __int64)PsNtosImageBase && v12 < PsNtosImageEnd
         || v12 >= (unsigned __int64)PsHalImageBase && v12 < PsHalImageEnd) )
      {
        LODWORD(xmmword_14036C0E0) = xmmword_14036C0E0 + 1;
      }
      else if ( v12 >= 0xFFFF800000000000uLL && *((_BYTE *)&MiState + ((v12 >> 39) & 0x1FF) + 6400) == 12 )
      {
        ++DWORD1(xmmword_14036C0E0);
      }
    }
  }
  CurrentThread = KeGetCurrentThread();
  v25 = 0;
  Queue = (unsigned int)CurrentThread[1].Queue;
  if ( (Queue & 0x100) != 0 )
  {
    v27 = (Queue >> 9) & 7;
  }
  else
  {
    v27 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 2) >> 12) & 7;
    if ( (CurrentThread->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
    {
      if ( v27 < 2 )
        v16 = v27;
      v27 = v16;
    }
  }
  v28 = a5;
  v29 = 5;
  if ( v15 )
  {
    if ( v27 >= 5 )
    {
      if ( (a5 & 1) != 0 )
        v25 = (a5 & 0x20) == 0;
    }
    else
    {
      v25 = 7;
    }
    v14 = v25 | (16 * (a4 & 7));
  }
  else if ( v27 <= 5 )
  {
    v27 = 5;
  }
  v30 = *(_BYTE *)(a3 + 35);
  if ( (v30 & 8) == 0 )
    v29 = v30 & 7;
  if ( v29 < v27 )
  {
    v50 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a3 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v50);
      while ( *(__int64 *)(a3 + 24) < 0 );
    }
    *(_BYTE *)(a3 + 35) ^= (v27 ^ *(_BYTE *)(a3 + 35)) & 7;
    _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v28 = a5;
  }
  if ( (v28 & 1) != 0 )
  {
    v31 = *(_BYTE *)(a1 + 192) & 7;
    if ( v31 == 2 )
    {
      v28 |= 0x8000000000000000uLL;
      a5 = v28;
    }
    else if ( (MiFlags & 0x10000) != 0
           && (v12 < 0xFFFFF68000000000uLL || v12 > 0xFFFFF6FFFFFFFFFFuLL)
           && (v28 & 0x8000000000000000uLL) == 0
           && ((MiFlags & 0x40000) != 0 || v31) )
    {
      MiLockPageAtDpcInline(a3);
      if ( !(unsigned int)MiGetPagePrivilege(a3, 1, 0LL) )
      {
        v32 = 39;
        if ( (*(_BYTE *)(a1 + 192) & 7) == 0 )
          v32 = 7;
        MiMarkPfnVerified(a3, v32);
      }
      _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v28 = a5;
    }
    if ( v15 )
    {
      v49 = 1;
      v28 ^= (v28 ^ ((unsigned __int64)v14 << 56)) & 0x7F00000000000000LL;
      a5 = v28;
    }
    *a2 = v28;
    if ( (unsigned int)MiPteInShadowRange(a2) )
      MiWritePteShadow(v33);
    v16 = a6;
    if ( a6 && (!KeGetCurrentThread()->ApcState.Process->SecurePid || *(__int64 *)(a3 + 8) < 0) )
    {
      v34 = *(_DWORD *)(a6 + 48);
      if ( ((v34 & 1) == 0 || (a5 & 0x42) != 0) && ((v34 & 2) == 0 || (a5 & 0x8000000000000000uLL) == 0) )
      {
        v35 = MI_GET_PAGE_FRAME_FROM_PTE(&a5);
        *(_QWORD *)(v16 + 40) = v35;
        if ( KeGetCurrentThread()->ApcState.Process->SecurePid )
          MiCompleteSecureProcessFault(a3);
      }
    }
  }
  if ( v15 )
  {
    if ( !v49 )
      *(_BYTE *)v15 = v14;
  }
  else if ( (*(_BYTE *)(a1 + 192) & 7) != 0 )
  {
    goto LABEL_118;
  }
  ++*(_QWORD *)(a1 + 8LL * v25 + 40);
  if ( v25 == 7 )
  {
    v36 = *(_QWORD *)(qword_14036C8F8 + 8LL * *(unsigned __int16 *)(a1 + 172));
    v37 = *(_QWORD *)(v36 + 5544);
    if ( *(_QWORD *)(a1 + 96) >= *(_QWORD *)(v37 + 64) )
    {
      v38 = (__int64 *)(a1 + 24);
      if ( *(_QWORD *)(a1 + 24) )
      {
        v39 = (__int64 *)(v36 + 5552);
        if ( (__int64 *)*v39 != v38 )
        {
          v47 = (volatile signed __int64 *)&qword_14036CF80;
          v46 = 0LL;
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
          {
            KiAcquireQueuedSpinLockInstrumented(&v46, &qword_14036CF80);
          }
          else
          {
            v40 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)&qword_14036CF80, (__int64)&v46);
            if ( v40 )
              KxWaitForLockOwnerShip((__int64)&v46, v40);
          }
          if ( *(_BYTE *)(v37 + 53) || !*v38 )
          {
            *(_BYTE *)(v37 + 54) = 1;
          }
          else
          {
            v41 = (__int64 *)*v38;
            v42 = *(__int64 ***)(a1 + 32);
            if ( *(__int64 **)(*v38 + 8) != v38 || *v42 != v38 )
              __fastfail(3u);
            *v42 = v41;
            v41[1] = (__int64)v42;
            v43 = *v39;
            if ( *(__int64 **)(*v39 + 8) != v39 )
              __fastfail(3u);
            *v38 = v43;
            *(_QWORD *)(a1 + 32) = v39;
            *(_QWORD *)(v43 + 8) = v38;
            *v39 = (__int64)v38;
          }
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          {
            KiReleaseQueuedSpinLockInstrumented(&v46, retaddr);
            goto LABEL_118;
          }
          _m_prefetchw(&v46);
          v44 = v46;
          if ( !v46 )
          {
            if ( (__int64 *)_InterlockedCompareExchange64(v47, 0LL, (signed __int64)&v46) == &v46 )
              goto LABEL_118;
            v44 = KxWaitForLockChainValid(&v46);
          }
          v46 = 0LL;
          _InterlockedXor64((volatile signed __int64 *)(v44 + 8), 1uLL);
        }
      }
    }
  }
LABEL_118:
  if ( (DWORD1(PerfGlobalGroupMask) & 0x8000001) != 0 )
    MiLogAllocateWsleEvent(a3, *(_BYTE *)(a1 + 192) & 7, v12, v16);
  return 1LL;
}
