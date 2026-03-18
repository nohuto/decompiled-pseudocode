/*
 * XREFs of MiCountSharedPages @ 0x1400592B0
 * Callers:
 *     MiSetProtectionOnSection @ 0x14003B7E0 (MiSetProtectionOnSection.c)
 *     MiDeletePartialVad @ 0x1401123D4 (MiDeletePartialVad.c)
 * Callees:
 *     MiReduceWs @ 0x14000B908 (MiReduceWs.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14001BE10 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiGetNextPageTable @ 0x14003FDB0 (MiGetNextPageTable.c)
 *     MiGetProtoPteAddress @ 0x140040460 (MiGetProtoPteAddress.c)
 *     MiAgeWorkingSet @ 0x14009C900 (MiAgeWorkingSet.c)
 *     MiPteNeedsCommitCharge @ 0x14011570C (MiPteNeedsCommitCharge.c)
 *     HvlNotifyLongSpinWait @ 0x140153060 (HvlNotifyLongSpinWait.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiGetPrototypePteDirect @ 0x14017C6D0 (MiGetPrototypePteDirect.c)
 *     MiIsPrototypePteVadLookup @ 0x14017C740 (MiIsPrototypePteVadLookup.c)
 *     MiForcedTrim @ 0x14021D544 (MiForcedTrim.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14022A1F8 (MI_GET_PFN_FROM_PTE.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140285FCC (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140286144 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiCountSharedPages(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rsi
  LONG *v4; // rbx
  _KPROCESS *Process; // r15
  char Blink; // al
  __int64 v10; // r15
  unsigned __int8 CurrentIrql; // r12
  unsigned int v12; // ebp
  signed __int32 v13; // edx
  bool v14; // zf
  signed __int32 v15; // eax
  __int64 NextPageTable; // rax
  unsigned __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // ecx
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // rbp
  __int64 PteShadow; // rbx
  __int64 v24; // rbx
  __int64 ProtoPteAddress; // rax
  __int64 PrototypePteDirect; // rax
  struct _KTHREAD *CurrentThread; // rbx
  int v28; // eax
  unsigned __int64 v29; // r8
  unsigned __int64 v30; // r8
  char v31; // al
  char v32; // al
  LONG *v33; // rcx
  void *retaddr; // [rsp+78h] [rbp+0h]
  int v36; // [rsp+88h] [rbp+10h] BYREF
  __int64 v37; // [rsp+90h] [rbp+18h] BYREF
  __int64 v38; // [rsp+98h] [rbp+20h] BYREF

  v3 = 0LL;
  v4 = &dword_140389780;
  Process = KeGetCurrentThread()->ApcState.Process;
  Blink = (char)Process[2].Header.WaitListHead.Blink;
  v10 = (__int64)&Process[1].IdealNode[12];
  if ( (Blink & 7) != 2 )
    v4 = (LONG *)(v10 + 200);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v4, CurrentIrql);
  }
  else
  {
    v12 = 0;
    if ( _interlockedbittestandset(v4, 0x1Fu) )
      v12 = ExpWaitForSpinLockExclusiveAndAcquire(v4, CurrentIrql);
    v13 = *v4;
    while ( (v13 & 0xBFFFFFFF) != 0x80000000 )
    {
      if ( (v13 & 0x40000000) == 0 )
      {
        v15 = _InterlockedCompareExchange(v4, v13 | 0x40000000, v13);
        v14 = v13 == v15;
        v13 = v15;
        if ( !v14 )
          continue;
      }
      if ( (++v12 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v12);
      v13 = *v4;
    }
  }
  v4[1] = 0;
  while ( a2 <= a3 )
  {
    NextPageTable = MiGetNextPageTable(a2, a3, 0LL, CurrentIrql, 4u, &v36);
    v20 = *(_DWORD *)(a1 + 48);
    v21 = NextPageTable;
    if ( !NextPageTable )
      v21 = a3 + 8;
    if ( (v20 & 7) != 2 || (v20 & 0xF8) == 8 )
    {
      if ( (v20 & 0x28) != 0x28 )
        v3 += (__int64)(v21 - a2) >> 3;
      a2 = v21;
    }
    else
    {
      for ( ; a2 < v21; a2 += 8LL )
      {
        if ( (unsigned int)MiPteNeedsCommitCharge(a1, a2, v18, v19) == 1 )
          ++v3;
      }
    }
    if ( a2 == a3 + 8 )
      break;
    v22 = (__int64)(a2 << 25) >> 16;
    while ( 1 )
    {
      PteShadow = *(_QWORD *)a2;
      if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBED7F8uLL )
        PteShadow = MiReadPteShadow(a2, *(_QWORD *)a2);
      v37 = PteShadow;
      if ( !PteShadow )
      {
        if ( (unsigned int)MiPteNeedsCommitCharge(a1, a2, v18, v19) != 1 )
          goto LABEL_50;
LABEL_49:
        ++v3;
        goto LABEL_50;
      }
      if ( (PteShadow & 1) != 0 )
      {
        if ( (PteShadow & 0x200) == 0 )
        {
          v24 = MI_GET_PFN_FROM_PTE(&v37, v17, v18, v19);
          if ( (*(_QWORD *)(v24 + 40) & 0x200000000000000LL) != 0 )
          {
            ProtoPteAddress = MiGetProtoPteAddress(a1, v22 >> 12, 1u, &v38);
            v17 = 0x8000000000000000uLL;
            if ( (*(_QWORD *)(v24 + 8) | 0x8000000000000000uLL) == ProtoPteAddress )
              goto LABEL_49;
          }
        }
      }
      else
      {
        if ( (PteShadow & 0x400) == 0 )
          goto LABEL_50;
        if ( (unsigned int)MiIsPrototypePteVadLookup(PteShadow) )
        {
          if ( (PteShadow & 0xA0) == 0xA0 )
            goto LABEL_50;
          goto LABEL_49;
        }
        MiGetProtoPteAddress(a1, v22 >> 12, 1u, &v38);
        PrototypePteDirect = MiGetPrototypePteDirect(PteShadow);
        if ( PrototypePteDirect == v17
          && ((*(_DWORD *)(a1 + 48) & 7) != 2 || (unsigned int)MiPteNeedsCommitCharge(a1, a2, v18, v19) == 1) )
        {
          goto LABEL_49;
        }
      }
LABEL_50:
      a2 += 8LL;
      v22 += 4096LL;
      if ( (a2 & 0xFFF) == 0 )
        break;
      if ( a2 > a3 )
        goto LABEL_54;
    }
  }
LABEL_54:
  CurrentThread = KeGetCurrentThread();
  if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 0x400000) == 0 )
  {
    v28 = HIBYTE(*(_DWORD *)(v10 + 192));
    if ( (v28 & 8) != 0 )
    {
      *(_BYTE *)(v10 + 195) = v28 & 0xF7;
      _interlockedbittestandset((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0x16u);
      if ( !MiForcedTrim(v10, CurrentIrql) && (*(_BYTE *)(v10 + 192) & 0x40) != 0 )
      {
        v29 = *(_QWORD *)(v10 + 120);
        if ( v29 > *(_QWORD *)(v10 + 152) )
        {
          if ( (*(_DWORD *)(v10 + 4) & 0xF) != 0 )
            v30 = v29 - 1;
          else
            v30 = *(_QWORD *)(v10 + 152);
          MiReduceWs(v10, CurrentIrql, v30);
        }
      }
    }
    v31 = *(_BYTE *)(v10 + 195);
    if ( (v31 & 4) != 0 )
    {
      *(_BYTE *)(v10 + 195) = v31 & 0xFB;
      _interlockedbittestandset((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0x16u);
      MiAgeWorkingSet(
        v10,
        CurrentIrql,
        1LL,
        *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(qword_140388AF0 + 8LL * *(unsigned __int16 *)(v10 + 172)) + 5680LL)
                            + 2354LL));
    }
    v32 = *(_BYTE *)(v10 + 195);
    if ( (v32 & 0x10) != 0 )
    {
      *(_BYTE *)(v10 + 195) = v32 & 0xEF;
      _interlockedbittestandset((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0x16u);
      MiReduceWs(v10, CurrentIrql, *(_QWORD *)(v10 + 152));
    }
    if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 0x400000) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0x16u);
  }
  v33 = &dword_140389780;
  if ( (*(_BYTE *)(v10 + 192) & 7) != 2 )
    v33 = (LONG *)(v10 + 200);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v33, retaddr);
  else
    *v33 = 0;
  __writecr8(CurrentIrql);
  return v3;
}
