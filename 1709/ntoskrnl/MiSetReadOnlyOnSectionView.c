/*
 * XREFs of MiSetReadOnlyOnSectionView @ 0x1400E9820
 * Callers:
 *     MmSecureVirtualMemoryAgainstWrites @ 0x1404625C8 (MmSecureVirtualMemoryAgainstWrites.c)
 * Callees:
 *     MiReduceWs @ 0x14000B908 (MiReduceWs.c)
 *     MiTrimWorkingSet @ 0x14000B9A4 (MiTrimWorkingSet.c)
 *     MiSimpleAging @ 0x14000BC74 (MiSimpleAging.c)
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiRevertValidPte @ 0x140036C60 (MiRevertValidPte.c)
 *     MiMakeSystemAddressValid @ 0x14003D1A0 (MiMakeSystemAddressValid.c)
 *     MiVadPureReserve @ 0x14003DDE0 (MiVadPureReserve.c)
 *     MiGetProtoPteAddress @ 0x140040460 (MiGetProtoPteAddress.c)
 *     MiFlushTbList @ 0x140056340 (MiFlushTbList.c)
 *     MiAgeWorkingSet @ 0x14009C900 (MiAgeWorkingSet.c)
 *     MiSetProtectionOnTransitionPte @ 0x1400E4CF4 (MiSetProtectionOnTransitionPte.c)
 *     MiGetWsleContents @ 0x1400E9E90 (MiGetWsleContents.c)
 *     MiGetWsleProtection @ 0x1400E9F0C (MiGetWsleProtection.c)
 *     MiWriteValidPteVolatile @ 0x1400E9F50 (MiWriteValidPteVolatile.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x14017C5DC (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 *     MiIsPrototypePteVadLookup @ 0x14017C740 (MiIsPrototypePteVadLookup.c)
 *     MiMakePrototypePteVadLookup @ 0x14017C7E0 (MiMakePrototypePteVadLookup.c)
 *     MiForcedTrim @ 0x14021D544 (MiForcedTrim.c)
 *     MiUpdatePfnProtection @ 0x1402293B4 (MiUpdatePfnProtection.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140286144 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiSetReadOnlyOnSectionView(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v7; // r8
  unsigned int updated; // r14d
  unsigned int v10; // r12d
  ULONG_PTR v11; // rbx
  __int64 v12; // rsi
  unsigned __int64 v13; // rbp
  LONG *SharedVm; // rdi
  KIRQL v15; // al
  KIRQL v16; // r15
  unsigned __int64 PteShadow; // rdx
  unsigned __int64 v18; // r9
  ULONG_PTR v19; // rsi
  __int64 v20; // r10
  __int64 v21; // r15
  __int64 v22; // r11
  __int64 v23; // rdi
  __int64 ProtoPteAddress; // rax
  unsigned __int64 v25; // rcx
  unsigned __int8 WsleContents; // al
  __int64 v27; // r8
  __int64 v28; // r9
  int WsleProtection; // eax
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 PrototypePteVadLookup; // rax
  ULONG_PTR v33; // r9
  int v34; // eax
  struct _KTHREAD *CurrentThread; // rbp
  int v36; // eax
  unsigned __int64 v37; // rdi
  unsigned __int64 v38; // r8
  unsigned __int64 v39; // rdx
  unsigned __int64 v40; // rdi
  unsigned int i; // ebx
  unsigned __int64 v42; // rdx
  unsigned __int64 v43; // rax
  bool v44; // cc
  char v45; // al
  char v46; // al
  LONG *v47; // rax
  KIRQL v48; // [rsp+30h] [rbp-138h]
  unsigned __int64 v49; // [rsp+38h] [rbp-130h] BYREF
  unsigned int v50; // [rsp+40h] [rbp-128h]
  ULONG_PTR v51; // [rsp+48h] [rbp-120h]
  __int64 v52; // [rsp+50h] [rbp-118h]
  __int64 v53; // [rsp+58h] [rbp-110h] BYREF
  int v54; // [rsp+60h] [rbp-108h] BYREF
  __int16 v55; // [rsp+64h] [rbp-104h]
  __int64 v56; // [rsp+68h] [rbp-100h]
  __int64 v57; // [rsp+70h] [rbp-F8h]
  __int64 v58; // [rsp+78h] [rbp-F0h]
  void *retaddr; // [rsp+168h] [rbp+0h]

  if ( (unsigned int)MiVadPureReserve(a2) )
    return 3221225541LL;
  updated = 1;
  v10 = 4;
  v54 = 1;
  v50 = 0;
  v56 = 20LL;
  v55 = 0;
  v57 = 0LL;
  v58 = 0LL;
  v11 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v12 = a1 + 1280;
  v13 = ((a4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v51 = v13;
  v52 = v12;
  SharedVm = MiGetSharedVm(v12);
  v15 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v48 = v15;
  v16 = v15;
  MiMakeSystemAddressValid(v11, 0LL, (*(_DWORD *)(a2 + 48) >> 8) & 0x3F, v15, 1);
  if ( v11 > v13 )
    goto LABEL_42;
  v18 = 0xFFFFF6FB7DBED7F8uLL;
  v19 = v11;
  do
  {
    if ( (v11 & 0xFFF) == 0 )
    {
      MiMakeSystemAddressValid(v11, (__int64)&v54, (*(_DWORD *)(a2 + 48) >> 8) & 0x3F, v16, 1);
      v18 = 0xFFFFF6FB7DBED7F8uLL;
    }
    PteShadow = *(_QWORD *)v11;
    if ( v11 >= 0xFFFFF6FB7DBED000uLL && v11 <= 0xFFFFF6FB7DBED7F8uLL )
      PteShadow = MiReadPteShadow(v11, PteShadow);
    v49 = PteShadow;
    if ( PteShadow )
    {
      if ( (PteShadow & 1) != 0 )
      {
        v21 = MI_GET_PAGE_FRAME_FROM_PTE(&v49);
        v23 = v22 + 48 * v21;
        if ( *(_WORD *)(v23 + 32) <= 1u || (updated & 7) == 4 )
        {
          if ( (v20 & *(_QWORD *)(v23 + 40)) != 0 )
          {
            ProtoPteAddress = MiGetProtoPteAddress(a2, (unsigned __int64)((__int64)(v11 << 25) >> 16) >> 12, 1u, &v53);
            PteShadow = 0x8000000000000000uLL;
            v25 = *(_QWORD *)(v23 + 8) | 0x8000000000000000uLL;
            if ( v25 == ProtoPteAddress )
            {
              WsleContents = MiGetWsleContents(v25, (__int64)(v11 << 25) >> 16);
              WsleProtection = MiGetWsleProtection((__int64)(v11 << 25) >> 16, WsleContents, v27, v28);
              if ( WsleProtection == v10
                || !WsleProtection && (unsigned int)MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(v23 + 16) == v10 )
              {
                MiGetWsleContents(v30, (__int64)(v11 << 25) >> 16);
                MiWriteValidPteVolatile(
                  (((unsigned __int64)((__int64)(v11 << 25) >> 16) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
                  0x80000000LL);
                v13 = v51;
LABEL_22:
                MiRevertValidPte(a2, v11, updated, v21, (__int64)&v54);
                v16 = v48;
                v11 += 8LL;
                goto LABEL_40;
              }
            }
          }
          else if ( ((*(_DWORD *)(v23 + 16) >> 5) & 0x1F) == (unsigned __int64)v10 )
          {
            updated = MiUpdatePfnProtection(a2, v23, updated);
            goto LABEL_22;
          }
        }
        v16 = v48;
      }
      else if ( (PteShadow & 0x400) != 0 )
      {
        if ( (updated & 7) == 4 )
        {
          if ( (unsigned int)MiIsPrototypePteVadLookup(PteShadow) )
            goto LABEL_34;
          PrototypePteVadLookup = MiMakePrototypePteVadLookup(updated, PteShadow, v31, v18);
          v49 = PrototypePteVadLookup;
          *(_QWORD *)v11 = PrototypePteVadLookup;
          if ( v11 >= 0xFFFFF6FB7DBED000uLL && v11 <= v33 )
            MiWritePteShadow(v11, PrototypePteVadLookup);
        }
      }
      else if ( (PteShadow & 0x800) != 0 )
      {
        v34 = MiSetProtectionOnTransitionPte(a2, (unsigned __int64 *)v11, updated, (updated & 7) == 4);
        if ( !v34 )
          goto LABEL_37;
        if ( v34 == 2 )
          goto LABEL_40;
      }
      else if ( ((PteShadow >> 5) & 0x1F) == v10 )
      {
LABEL_34:
        v49 = PteShadow ^ ((unsigned __int16)PteShadow ^ (unsigned __int16)(32 * updated)) & 0x3E0;
        *(_QWORD *)v11 = v49;
        if ( v11 >= 0xFFFFF6FB7DBED000uLL && v11 <= v18 )
          MiWritePteShadow(v11, PteShadow ^ ((unsigned __int16)PteShadow ^ (unsigned __int16)(32 * updated)) & 0x3E0);
LABEL_37:
        v11 += 8LL;
        goto LABEL_40;
      }
    }
    v13 = v11 - 8;
    v50 = -1073741755;
    v10 = 1;
    v51 = v11 - 8;
    v11 = v19;
    updated = 4;
LABEL_40:
    v18 = 0xFFFFF6FB7DBED7F8uLL;
  }
  while ( v11 <= v13 );
  v12 = v52;
LABEL_42:
  MiFlushTbList((__int64)&v54, (_KPROCESS *)PteShadow);
  CurrentThread = KeGetCurrentThread();
  if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 0x400000) == 0 )
  {
    v36 = HIBYTE(*(_DWORD *)(v12 + 192));
    if ( (v36 & 8) != 0 )
    {
      *(_BYTE *)(v12 + 195) = v36 & 0xF7;
      _interlockedbittestandset((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0x16u);
      if ( !MiForcedTrim(v12, v16) && (*(_BYTE *)(v12 + 192) & 0x40) != 0 )
      {
        v37 = *(_QWORD *)(v12 + 120);
        v38 = *(_QWORD *)(v12 + 152);
        if ( v37 > v38 )
        {
          if ( (*(_DWORD *)(v12 + 4) & 0xF) != 0 )
          {
            v39 = *(_QWORD *)(v12 + 136);
            v40 = v37 - 1;
            for ( i = 7; v39 > v40; --i )
            {
              v42 = v39 - v40;
              if ( i )
              {
                v43 = v42;
                v44 = *(_QWORD *)(v12 + 8LL * i + 40) <= v42;
                v42 = *(_QWORD *)(v12 + 8LL * i + 40);
                if ( !v44 )
                  v42 = v43;
              }
              if ( v42 )
              {
                MiTrimWorkingSet(v12, v42, v16, i, 16);
                if ( !i )
                  break;
              }
              v39 = *(_QWORD *)(v12 + 136);
            }
            MiSimpleAging(v12, v16);
          }
          else
          {
            MiReduceWs(v12, v16, v38);
          }
        }
      }
    }
    v45 = *(_BYTE *)(v12 + 195);
    if ( (v45 & 4) != 0 )
    {
      *(_BYTE *)(v12 + 195) = v45 & 0xFB;
      _interlockedbittestandset((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0x16u);
      MiAgeWorkingSet(
        v12,
        v16,
        1,
        *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(qword_140388AF0 + 8LL * *(unsigned __int16 *)(v12 + 172)) + 5680LL)
                            + 2354LL));
    }
    v46 = *(_BYTE *)(v12 + 195);
    if ( (v46 & 0x10) != 0 )
    {
      *(_BYTE *)(v12 + 195) = v46 & 0xEF;
      _interlockedbittestandset((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0x16u);
      MiReduceWs(v12, v16, *(_QWORD *)(v12 + 152));
    }
    if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 0x400000) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0x16u);
  }
  v47 = MiGetSharedVm(v12);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v47, retaddr);
  else
    *v47 = 0;
  __writecr8(v16);
  return v50;
}
