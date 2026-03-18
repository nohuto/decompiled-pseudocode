/*
 * XREFs of MiCountSharedPages @ 0x14009AE40
 * Callers:
 *     MiDeletePartialVad @ 0x140016CB0 (MiDeletePartialVad.c)
 *     MiSetProtectionOnSection @ 0x1400CEFC0 (MiSetProtectionOnSection.c)
 * Callees:
 *     MiPteNeedsCommitCharge @ 0x14001DF70 (MiPteNeedsCommitCharge.c)
 *     MiSimpleAging @ 0x14007EAB8 (MiSimpleAging.c)
 *     MiReduceWs @ 0x14007F54C (MiReduceWs.c)
 *     MiTrimWorkingSet @ 0x14007F5E8 (MiTrimWorkingSet.c)
 *     ExpAcquireSpinLockExclusive @ 0x14009B290 (ExpAcquireSpinLockExclusive.c)
 *     MiGetProtoPteAddress @ 0x1400BD630 (MiGetProtoPteAddress.c)
 *     MiGetNextPageTable @ 0x1400D2560 (MiGetNextPageTable.c)
 *     MiAgeWorkingSet @ 0x1400D81E0 (MiAgeWorkingSet.c)
 *     MiGetPrototypePteDirect @ 0x14017CE98 (MiGetPrototypePteDirect.c)
 *     MiIsPrototypePteVadLookup @ 0x14017CEE4 (MiIsPrototypePteVadLookup.c)
 *     MiForcedTrim @ 0x140214F8C (MiForcedTrim.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14021EE3C (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14025C6B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14025C828 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiCountSharedPages(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  LONG *v3; // rbp
  __int64 v4; // rdi
  LONG *v8; // rbx
  _KPROCESS *Process; // r15
  char Blink; // al
  __int64 v11; // r15
  unsigned __int8 CurrentIrql; // r12
  __int64 NextPageTable; // rax
  int v14; // ecx
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rbp
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rbx
  __int64 v22; // rbx
  __int64 ProtoPteAddress; // rax
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 PrototypePteDirect; // rax
  __int64 v27; // rdx
  char v28; // al
  unsigned __int64 v29; // rsi
  unsigned __int64 v30; // r8
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // rsi
  unsigned int i; // ebx
  unsigned __int64 v34; // rdx
  unsigned __int64 v35; // rax
  bool v36; // cc
  char v37; // al
  char v38; // al
  char v39; // al
  void *retaddr; // [rsp+78h] [rbp+0h]
  char v42; // [rsp+88h] [rbp+10h] BYREF
  __int64 v43; // [rsp+90h] [rbp+18h] BYREF
  char v44; // [rsp+98h] [rbp+20h] BYREF

  v3 = &dword_14036D4C0;
  v4 = 0LL;
  v8 = &dword_14036D4C0;
  Process = KeGetCurrentThread()->ApcState.Process;
  Blink = (char)Process[2].Header.WaitListHead.Blink;
  v11 = (__int64)&Process[1].IdealNode[12];
  if ( (Blink & 7) != 2 )
    v8 = (LONG *)(v11 + 200);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v8, CurrentIrql);
  else
    ExpAcquireSpinLockExclusive(v8, CurrentIrql);
  v8[1] = 0;
  if ( a2 <= a3 )
  {
    while ( 1 )
    {
      NextPageTable = MiGetNextPageTable(a2, a3, 0, CurrentIrql, 4, (__int64)&v42);
      v14 = *(_DWORD *)(a1 + 48);
      v15 = NextPageTable;
      if ( !NextPageTable )
        v15 = a3 + 8;
      if ( (v14 & 7) != 2 || (v14 & 0xF8) == 8 )
      {
        if ( (v14 & 0x28) != 0x28 )
          v4 += (__int64)(v15 - a2) >> 3;
        a2 = v15;
      }
      else
      {
        for ( ; a2 < v15; a2 += 8LL )
        {
          if ( (unsigned int)MiPteNeedsCommitCharge(a1, a2) == 1 )
            ++v4;
        }
      }
      if ( a2 == a3 + 8 )
      {
LABEL_41:
        v3 = &dword_14036D4C0;
        break;
      }
      v16 = (__int64)(a2 << 25) >> 16;
      while ( 1 )
      {
        v17 = MI_READ_PTE_LOCK_FREE(a2);
        v43 = v17;
        v21 = v17;
        if ( !v17 )
        {
          if ( (unsigned int)MiPteNeedsCommitCharge(a1, a2) != 1 )
            goto LABEL_37;
LABEL_36:
          ++v4;
          goto LABEL_37;
        }
        if ( (v17 & 1) != 0 )
        {
          if ( (v17 & 0x200) == 0 )
          {
            v22 = MI_GET_PFN_FROM_PTE(&v43, v18, v19, v20);
            if ( (*(_QWORD *)(v22 + 40) & 0x200000000000000LL) != 0
              && (*(_QWORD *)(v22 + 8) | 0x8000000000000000uLL) == MiGetProtoPteAddress(a1, v16 >> 12, 1LL, &v44) )
            {
              goto LABEL_36;
            }
          }
        }
        else
        {
          if ( (v17 & 0x400) == 0 )
            goto LABEL_37;
          if ( (unsigned int)MiIsPrototypePteVadLookup(v17) )
          {
            if ( (v21 & 0xA0) == 0xA0 )
              goto LABEL_37;
            goto LABEL_36;
          }
          ProtoPteAddress = MiGetProtoPteAddress(a1, v16 >> 12, 1LL, &v44);
          PrototypePteDirect = MiGetPrototypePteDirect(v21, ProtoPteAddress, v24, v25);
          if ( PrototypePteDirect == v27
            && ((*(_DWORD *)(a1 + 48) & 7) != 2 || (unsigned int)MiPteNeedsCommitCharge(a1, a2) == 1) )
          {
            goto LABEL_36;
          }
        }
LABEL_37:
        a2 += 8LL;
        v16 += 4096LL;
        if ( (a2 & 0xFFF) == 0 )
          break;
        if ( a2 > a3 )
          goto LABEL_41;
      }
      if ( a2 > a3 )
        goto LABEL_41;
    }
  }
  v28 = *(_BYTE *)(v11 + 195);
  if ( (v28 & 0x10) == 0 )
  {
    if ( (v28 & 8) != 0 )
    {
      *(_BYTE *)(v11 + 195) = v28 & 0xE7 | 0x10;
      if ( ((MiForcedTrim(v11, CurrentIrql) + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 && (*(_BYTE *)(v11 + 192) & 0x40) != 0 )
      {
        v29 = *(_QWORD *)(v11 + 120);
        v30 = *(_QWORD *)(v11 + 152);
        if ( v29 > v30 )
        {
          if ( (*(_DWORD *)(v11 + 4) & 0xF) != 0 )
          {
            v31 = *(_QWORD *)(v11 + 136);
            v32 = v29 - 1;
            for ( i = 7; v31 > v32; --i )
            {
              v34 = v31 - v32;
              if ( i )
              {
                v35 = v34;
                v36 = *(_QWORD *)(v11 + 8LL * i + 40) <= v34;
                v34 = *(_QWORD *)(v11 + 8LL * i + 40);
                if ( !v36 )
                  v34 = v35;
              }
              if ( v34 )
              {
                MiTrimWorkingSet(v11, v34, CurrentIrql, i, 0);
                if ( !i )
                  break;
              }
              v31 = *(_QWORD *)(v11 + 136);
            }
            MiSimpleAging(v11, CurrentIrql);
          }
          else
          {
            MiReduceWs(v11, CurrentIrql, v30);
          }
        }
      }
    }
    v37 = *(_BYTE *)(v11 + 195);
    if ( (v37 & 4) != 0 )
    {
      *(_BYTE *)(v11 + 195) = v37 & 0xEB | 0x10;
      MiAgeWorkingSet(
        v11,
        CurrentIrql,
        1LL,
        *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(qword_14036C8F8 + 8LL * *(unsigned __int16 *)(v11 + 172)) + 5544LL)
                            + 2354LL));
    }
    v38 = *(_BYTE *)(v11 + 195);
    if ( (v38 & 0x20) != 0 )
    {
      *(_BYTE *)(v11 + 195) = v38 & 0xCF | 0x10;
      MiReduceWs(v11, CurrentIrql, *(_QWORD *)(v11 + 152));
    }
    v39 = *(_BYTE *)(v11 + 195);
    if ( (v39 & 0x10) != 0 )
      *(_BYTE *)(v11 + 195) = v39 & 0xEF;
  }
  if ( (*(_BYTE *)(v11 + 192) & 7) != 2 )
    v3 = (LONG *)(v11 + 200);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v3, retaddr);
  else
    *v3 = 0;
  __writecr8(CurrentIrql);
  return v4;
}
