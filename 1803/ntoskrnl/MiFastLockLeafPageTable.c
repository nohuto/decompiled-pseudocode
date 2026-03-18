/*
 * XREFs of MiFastLockLeafPageTable @ 0x140021880
 * Callers:
 *     MiDecommitPages @ 0x14000C050 (MiDecommitPages.c)
 *     MiQueryAddressState @ 0x14001F780 (MiQueryAddressState.c)
 *     MiLockPageLeafPageTable @ 0x140021570 (MiLockPageLeafPageTable.c)
 *     MiSystemFault @ 0x140022C40 (MiSystemFault.c)
 *     MiMoveDirtyBitsToPfns @ 0x140023A70 (MiMoveDirtyBitsToPfns.c)
 *     NtGetWriteWatch @ 0x140024440 (NtGetWriteWatch.c)
 *     MiCommitPoolMemory @ 0x1400250E0 (MiCommitPoolMemory.c)
 *     MiGetNextPageTable @ 0x14003DA90 (MiGetNextPageTable.c)
 *     MiIsCfgBitMapPageShared @ 0x14003DC60 (MiIsCfgBitMapPageShared.c)
 *     MiSynchronizeSystemVa @ 0x14003F344 (MiSynchronizeSystemVa.c)
 *     MiCountSharedPages @ 0x1400A6330 (MiCountSharedPages.c)
 *     MiLockStealUserVm @ 0x1400D5854 (MiLockStealUserVm.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteHasShadow @ 0x140062834 (MiPteHasShadow.c)
 *     MiUnlockPageTableInternal @ 0x140123AD0 (MiUnlockPageTableInternal.c)
 *     HvlNotifyLongSpinWait @ 0x14015AFE0 (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall MiFastLockLeafPageTable(__int64 Process, unsigned __int64 a2)
{
  __int64 v2; // r13
  unsigned __int64 v3; // r9
  char v4; // r8
  _DWORD *MmInternal; // r14
  __int64 v7; // r8
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rbx
  __int64 v10; // rdx
  unsigned __int64 v11; // r11
  unsigned __int64 v12; // r10
  __int64 v13; // rax
  __int64 v14; // rax
  volatile signed __int64 v15; // rdx
  __int64 v16; // rax
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // r8
  __int64 v19; // rax
  int i; // ecx
  __int64 v21; // rcx
  bool v22; // zf
  signed __int64 v23; // rax
  int v24; // [rsp+24h] [rbp-94h]
  int v25; // [rsp+28h] [rbp-90h]
  unsigned __int64 v26; // [rsp+D0h] [rbp+18h]

  v2 = Process;
  v3 = 0LL;
  v4 = *(_BYTE *)(Process + 184) & 7;
  if ( v4 != 7 && (unsigned __int8)(v4 - 1) > 2u )
  {
    if ( v4 == 5 )
    {
      if ( a2 >= qword_1403CD0D0 )
      {
        Process = 0x100000000000LL;
        if ( a2 < qword_1403CD0D0 + 0x100000000000LL )
          return 0LL;
      }
    }
    else
    {
      v3 = v4 == 0;
    }
  }
  MmInternal = KeGetCurrentPrcb()->MmInternal;
  if ( (MiFlags & 0x2000000) == 0 || !MmInternal || MmInternal[3120] )
    return 0LL;
  MmInternal[3120] = 1;
  v24 = 0;
  v7 = 0LL;
  v8 = ((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v9 = v8;
  v26 = v8;
  if ( !(_DWORD)v3 )
  {
    v11 = 0xFFFFF6FB7DBED000uLL;
    v12 = 0xFFFFF6FB7DBED7F8uLL;
    goto LABEL_28;
  }
  v3 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v10 = *(_QWORD *)v3;
  v11 = 0xFFFFF6FB7DBED000uLL;
  v12 = 0xFFFFF6FB7DBED7F8uLL;
  if ( v3 >= 0xFFFFF6FB7DBED000uLL
    && v3 <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)MiPteHasShadow(Process, v10, 0LL, v3)
    && (v10 & 1) != 0
    && ((v10 & 0x20) == 0 || (v10 & 0x42) == 0) )
  {
    Process = (__int64)KeGetCurrentThread()->ApcState.Process;
    v13 = *(_QWORD *)(Process + 1544);
    if ( v13 )
    {
      v3 = (v3 >> 3) & 0x1FF;
      v14 = *(_QWORD *)(v13 + 8 * v3);
      if ( (v14 & 0x20) != 0 )
        LOBYTE(v10) = v10 | 0x20;
      if ( (v14 & 0x42) != 0 )
        LOBYTE(v10) = v10 | 0x42;
    }
    v7 = 0LL;
    v9 = v8;
  }
  if ( (v10 & 1) != 0 )
  {
    if ( (v10 & 0x80u) != 0LL )
    {
      v24 = 3;
      v9 = ((v9 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
      v26 = v9;
    }
    while ( 1 )
    {
LABEL_28:
      v15 = *(_QWORD *)v9;
      if ( v9 >= v11
        && v9 <= v12
        && (unsigned int)MiPteHasShadow(Process, v15, v7, v3)
        && (v15 & 1) != 0
        && ((v15 & 0x20) == 0 || (v15 & 0x42) == 0) )
      {
        Process = (__int64)KeGetCurrentThread()->ApcState.Process;
        v7 = *(_QWORD *)(Process + 1544);
        v9 = v26;
        if ( v7 )
        {
          v16 = *(_QWORD *)(v7 + 8 * ((v26 >> 3) & 0x1FF));
          if ( (v16 & 0x20) != 0 )
            LOBYTE(v15) = v15 | 0x20;
          if ( (v16 & 0x42) != 0 )
            LOBYTE(v15) = v15 | 0x42;
        }
      }
      if ( (v15 & 1) == 0 )
        break;
      if ( (v15 & 0x80u) == 0LL )
      {
        v17 = *(_QWORD *)v9;
        if ( v9 >= v11
          && v9 <= v12
          && (unsigned int)MiPteHasShadow(Process, v17, v7, v3)
          && (v17 & 1) != 0
          && ((v17 & 0x20) == 0 || (v17 & 0x42) == 0) )
        {
          v18 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
          v9 = v26;
          if ( v18 )
          {
            v19 = *(_QWORD *)(v18 + 8 * ((v26 >> 3) & 0x1FF));
            if ( (v19 & 0x20) != 0 )
              v17 |= 0x20uLL;
            if ( (v19 & 0x42) != 0 )
              v17 |= 0x42uLL;
          }
        }
        while ( 1 )
        {
          if ( (v17 & 1) == 0 )
          {
            LODWORD(v7) = 0;
            goto LABEL_69;
          }
          if ( (v17 & 0x1000000000000000LL) == 0 )
            break;
          if ( ((v17 >> 60) & 2) == 0 )
          {
            v17 = _InterlockedCompareExchange64((volatile signed __int64 *)v9, v17 | 0x2000000000000000LL, v17);
LABEL_58:
            v9 = v26;
            continue;
          }
          for ( i = 0; ; i = v25 )
          {
            v21 = (unsigned int)(i + 1);
            v25 = v21;
            if ( ((unsigned int)v21 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v21);
            v17 = *(_QWORD *)v9;
            v9 = v26;
            if ( (v17 & 0x1000000000000000LL) == 0 )
              break;
          }
        }
        v23 = _InterlockedCompareExchange64(
                (volatile signed __int64 *)v9,
                v17 & 0xCFFFFFFFFFFFFFDFuLL | 0x1000000000000020LL,
                v17);
        v22 = v17 == v23;
        v17 = v23;
        if ( v22 )
        {
          LODWORD(v7) = 1;
          v9 = v26;
          goto LABEL_69;
        }
        goto LABEL_58;
      }
      v24 = 2;
      v9 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v26 = v9;
    }
    LODWORD(v7) = 0;
  }
LABEL_69:
  --MmInternal[3120];
  if ( (_DWORD)v7 && v24 )
  {
    if ( v24 == 3 )
      v8 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    if ( (MI_READ_PTE_LOCK_FREE(v8) & 0x81) == 0x81 )
      return (unsigned int)(v24 == 3) + 2;
    MiUnlockPageTableInternal(v2, v9);
    LODWORD(v7) = 0;
  }
  return (unsigned int)v7;
}
