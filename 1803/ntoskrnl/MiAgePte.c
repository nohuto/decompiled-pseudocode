/*
 * XREFs of MiAgePte @ 0x140012B60
 * Callers:
 *     <none>
 * Callees:
 *     MiAgeWorkingSetTail @ 0x14000EAF0 (MiAgeWorkingSetTail.c)
 *     MiAgePteWorker @ 0x140013050 (MiAgePteWorker.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiShouldLockPteDirectly @ 0x14003E0E8 (MiShouldLockPteDirectly.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x140089F80 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiDemoteCombinedPte @ 0x1400AD310 (MiDemoteCombinedPte.c)
 *     MiGetPageTableLockBuffer @ 0x1400B2278 (MiGetPageTableLockBuffer.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 *     MiInsertVmAccessedEntry @ 0x1402598E8 (MiInsertVmAccessedEntry.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1402BA6B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1402BA844 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiAgePte(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rbx
  __int64 v5; // rbp
  __int64 v6; // rsi
  __int64 v8; // r12
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v17; // rcx
  unsigned __int64 v18; // rdi
  unsigned __int64 v19; // rax
  unsigned int v20; // r11d
  unsigned __int64 v21; // rdi
  LONG *v22; // r8
  volatile signed __int32 *v23; // r14
  __int64 v24; // r9
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // rcx
  signed __int32 v27; // edx
  unsigned __int64 v28; // r14
  unsigned __int64 v29; // rdx
  struct _KPRCB *v30; // rcx
  _DWORD *v31; // rdx
  unsigned __int64 v32; // rcx
  unsigned __int64 i; // rdx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rdx
  int v37; // eax
  unsigned __int128 v38; // rax
  int v39; // eax
  bool v40; // zf
  signed __int32 v41; // eax
  int v42; // eax
  unsigned __int64 v43; // r8
  __int64 v44; // rax
  __int64 v45; // r8
  unsigned __int64 v46; // r8
  __int64 v47; // rax
  __int64 v48; // r8
  char v49; // cl
  _QWORD *v50; // rax
  _DWORD *PageTableLockBuffer; // rax
  int v52; // [rsp+30h] [rbp-58h]
  __int64 v53; // [rsp+30h] [rbp-58h]
  int v54; // [rsp+38h] [rbp-50h] BYREF
  _QWORD v55[9]; // [rsp+40h] [rbp-48h] BYREF
  void *retaddr; // [rsp+88h] [rbp+0h]
  unsigned int v57; // [rsp+90h] [rbp+8h]
  int v58; // [rsp+A8h] [rbp+20h] BYREF

  v3 = *(_QWORD *)(a1 + 168);
  v5 = *(_QWORD *)(a1 + 24);
  v6 = a2;
  v8 = *(_QWORD *)(v5 + 16);
  if ( *(_BYTE *)(v3 + 6) != 1 )
    goto LABEL_2;
  *(_BYTE *)(v3 + 6) = 0;
  v8 = *(_QWORD *)(v5 + 16);
  v18 = *(_QWORD *)(v5 + 136);
  v19 = *(_QWORD *)(v8 + 32);
  if ( v18 <= v19 )
    return 3LL;
  v20 = *(_DWORD *)(v3 + 12);
  v21 = v18 - v19;
  v57 = v20;
  v52 = *(_DWORD *)v3;
  if ( (*(_DWORD *)v3 & 4) != 0 )
  {
    v24 = 0LL;
    goto LABEL_41;
  }
  v22 = &dword_1403CCD68;
  if ( (*(_BYTE *)(v5 + 184) & 7) == 2 )
    v23 = &dword_1403CCD68;
  else
    v23 = (volatile signed __int32 *)(v5 + 232);
  v24 = 0LL;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    LOBYTE(a2) = -1;
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v23, a2);
  }
  else
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v58 = 0;
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v39 = SchedulerAssist[5];
        SchedulerAssist[5] = v39 + 1;
        if ( v39 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
        {
          KiPerformUnboostKick(CurrentPrcb);
          v22 = &dword_1403CCD68;
          v24 = 0LL;
        }
      }
    }
    if ( _interlockedbittestandset(v23, 0x1Fu) )
    {
      KiSetVpThreadSpinLockCount(CurrentPrcb, 0LL);
      LOBYTE(v36) = -1;
      v37 = ExpWaitForSpinLockExclusiveAndAcquire(v23, v36);
      v20 = v57;
      v22 = &dword_1403CCD68;
      v58 = v37;
      v24 = 0LL;
    }
    v27 = *v23;
    if ( (*v23 & 0xBFFFFFFF) == 0x80000000 )
      goto LABEL_30;
    do
    {
      if ( (v27 & 0x40000000) == 0 )
      {
        v41 = _InterlockedCompareExchange(v23, v27 | 0x40000000, v27);
        v40 = v27 == v41;
        v27 = v41;
        if ( !v40 )
          continue;
      }
      KeYieldProcessorEx(&v58);
      v27 = *v23;
    }
    while ( (v27 & 0xBFFFFFFF) != 0x80000000 );
  }
  v20 = v57;
  v22 = &dword_1403CCD68;
  v24 = 0LL;
LABEL_30:
  if ( (v52 & 2) != 0 )
  {
    v53 = *(unsigned int *)(v8 + 24);
    v28 = v53 + v21;
    if ( v20 == 10LL )
      v29 = v28 % 0xA;
    else
      v29 = v28 % v20;
    *(_DWORD *)(v8 + 24) = v29;
  }
  else
  {
    v53 = *(unsigned int *)(v8 + 28);
    v28 = v53 + v21;
    *(_DWORD *)(v8 + 28) = (v53 + v21) % v20;
  }
  if ( (*(_BYTE *)(v5 + 184) & 7) != 2 )
    v22 = (LONG *)(v5 + 232);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v22, retaddr);
    v20 = v57;
    v24 = 0LL;
  }
  else
  {
    *v22 = 0;
  }
  v30 = KeGetCurrentPrcb();
  v31 = v30->SchedulerAssist;
  if ( v31 )
  {
    if ( v30->NestingLevel <= 1u )
    {
      v42 = v31[5] - 1;
      v31[5] = v42;
      if ( !v42 && !*((_BYTE *)v31 + 25) && !*((_BYTE *)v31 + 27) )
      {
        KiPerformUnboostKick(v30);
        v24 = 0LL;
      }
    }
  }
  if ( v28 >= v21 )
    v24 = v53;
LABEL_41:
  v32 = v20 * (v24 + v21) / 0x3E8;
  if ( v32 > v21 )
  {
    v38 = v21 * v20 * (unsigned __int128)0x624DD2F1A9FBE77uLL;
    v32 = (*((_QWORD *)&v38 + 1) + ((v21 * v20 - *((_QWORD *)&v38 + 1)) >> 1)) >> 9;
  }
  *(_QWORD *)(v3 + 48) = v32;
  if ( *(_QWORD *)(v3 + 40) >= v32 )
    return 3LL;
LABEL_2:
  v9 = v6 << 25 >> 16;
  v10 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v11 = *(_QWORD *)v10;
  if ( v10 >= 0xFFFFF6FB7DBED000uLL
    && v10 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0x1800000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v11 & 1) != 0
    && ((v11 & 0x20) == 0 || (v11 & 0x42) == 0) )
  {
    v43 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v43 )
    {
      v44 = *(_QWORD *)(v43 + 8 * ((v10 >> 3) & 0x1FF));
      v45 = v11 | 0x20;
      if ( (v44 & 0x20) == 0 )
        v45 = *(_QWORD *)v10;
      v11 = v45;
      if ( (v44 & 0x42) != 0 )
        v11 = v45 | 0x42;
    }
  }
  v55[0] = v11;
  if ( (unsigned __int64)v55 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)v55 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0x1800000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v11 & 1) != 0
    && ((v11 & 0x20) == 0 || (v11 & 0x42) == 0) )
  {
    v46 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v46 )
    {
      v47 = *(_QWORD *)(v46 + 8 * (((unsigned __int64)v55 >> 3) & 0x1FF));
      v48 = v11 | 0x20;
      if ( (v47 & 0x20) == 0 )
        v48 = v11;
      v11 = v48;
      if ( (v47 & 0x42) != 0 )
        v11 = v48 | 0x42;
    }
  }
  v12 = 48 * ((v11 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  if ( a3 )
  {
    v13 = (__int64)((v10 << 25) + 0x10000000) >> 16;
    for ( i = v13 << 25 >> 16; i >= 0xFFFFF68000000000uLL; i = (__int64)(i << 25) >> 16 )
    {
      if ( i > 0xFFFFF6FFFFFFFFFFuLL )
        break;
      v13 = i;
    }
  }
  else
  {
    v13 = v10 + 8;
  }
  if ( (*(_DWORD *)v3 & 2) != 0 )
  {
    *(_QWORD *)(v8 + 16) = v13;
  }
  else if ( (*(_DWORD *)v3 & 4) == 0 )
  {
    *(_QWORD *)(v8 + 8) = v13;
  }
  if ( a3 )
  {
    if ( (*(_QWORD *)(v12 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 )
      return 0LL;
    if ( ((v9 >> 9) & 0x7FFFFFFFF8LL) == 0x7B7DBEDF68LL )
    {
      v49 = *(_BYTE *)(v5 + 184) & 7;
      if ( v49 )
      {
        if ( v49 == 7 )
        {
          v50 = &unk_1403CBCE8;
        }
        else
        {
          v50 = &unk_1403CBCE0;
          if ( v49 != 5 )
            v50 = &unk_1403CBCF8;
        }
      }
      else
      {
        v50 = (_QWORD *)(v5 + 176);
      }
      if ( *v50 )
        return 0LL;
    }
    else if ( (unsigned int)MiShouldLockPteDirectly(v5, ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) )
    {
      if ( (MI_READ_PTE_LOCK_FREE(((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) & 0x1000000000000000LL) != 0 )
        return 0LL;
    }
    else
    {
      PageTableLockBuffer = (_DWORD *)MiGetPageTableLockBuffer(v35, v34, &v54);
      if ( ((*PageTableLockBuffer >> v54) & 1) != 0 )
        return 0LL;
    }
  }
  v14 = *(_QWORD *)(v12 + 8);
  if ( v14 >= 0
    && (unsigned int)MiDemoteCombinedPte(
                       v5,
                       ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
                       v14 | 0x8000000000000000uLL) == 1 )
  {
    v55[0] = MI_READ_PTE_LOCK_FREE(((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  }
  v15 = (v55[0] >> 5) & 1LL;
  if ( ((v55[0] >> 5) & 1) == 0 || (v17 = *(_QWORD *)(v3 + 248)) == 0 || v9 > 0x7FFFFFFEFFFFLL )
  {
    if ( (*(_DWORD *)v3 & 3) != 0 )
      LODWORD(v15) = v15 | 2;
    MiAgePteWorker(v5, (v9 >> 9) & 0xFFFFFFF8, v9, v12, v3, v15);
LABEL_15:
    if ( ++*(_QWORD *)(v3 + 40) < *(_QWORD *)(v3 + 48) )
      return 0LL;
    return 3LL;
  }
  if ( !(unsigned int)MiInsertVmAccessedEntry(v17, v9) )
    goto LABEL_15;
  return MiAgeWorkingSetTail(a1);
}
