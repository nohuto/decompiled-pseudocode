/*
 * XREFs of MiProbeLeafPteAccess @ 0x140021D80
 * Callers:
 *     MiProbeAndLockPages @ 0x140020610 (MiProbeAndLockPages.c)
 *     MiProbeLeafFrame @ 0x140136DB0 (MiProbeLeafFrame.c)
 * Callees:
 *     MiCanPageMove @ 0x14000318C (MiCanPageMove.c)
 *     MmAccessFault @ 0x14001B320 (MmAccessFault.c)
 *     MiLocateCloneAddress @ 0x140050C4C (MiLocateCloneAddress.c)
 *     MiClearPfnImageVerified @ 0x140054A44 (MiClearPfnImageVerified.c)
 *     MiLockProbePacketWorkingSet @ 0x1400BBD14 (MiLockProbePacketWorkingSet.c)
 *     MiIsPfnFileOnly @ 0x140121930 (MiIsPfnFileOnly.c)
 *     MiCopyOnWrite @ 0x140126BA0 (MiCopyOnWrite.c)
 *     MiUnlockProbePacketWorkingSet @ 0x140138D9C (MiUnlockProbePacketWorkingSet.c)
 *     MiMakeDriverPagesPrivate @ 0x14013F254 (MiMakeDriverPagesPrivate.c)
 *     MiLookupDataTableEntry @ 0x14013F6A8 (MiLookupDataTableEntry.c)
 *     MiSplitReducedCommitClonePage @ 0x140253E00 (MiSplitReducedCommitClonePage.c)
 *     MiCopyOnWriteCheckConditions @ 0x14026B6DC (MiCopyOnWriteCheckConditions.c)
 */

__int64 __fastcall MiProbeLeafPteAccess(__int64 a1, _DWORD *a2)
{
  unsigned __int64 v2; // rbx
  int v3; // r14d
  ULONG_PTR v5; // r15
  int v7; // ebp
  int v8; // r8d
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  _QWORD *v12; // r9
  ULONG_PTR v13; // rdi
  unsigned __int64 v14; // rcx
  int v15; // ecx
  int v16; // eax
  char v17; // al
  __int64 result; // rax
  __int64 v19; // rcx
  __int64 v20; // r11
  __int64 v21; // rax
  unsigned __int64 v22; // rcx
  int v23; // ebx
  unsigned __int64 v24; // r9
  __int64 v25; // rax
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rcx
  char v28; // cl
  int v29; // ebx
  __int64 CloneAddress; // rax
  __int64 v31; // rcx
  __int64 v32; // rcx
  unsigned __int64 v33; // [rsp+60h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 40);
  v3 = 0;
  v5 = *(_QWORD *)a1;
  v7 = *(_DWORD *)(a1 + 88);
  v8 = (*(_DWORD *)(a1 + 64) >> 4) & 0xF;
  *a2 = 0;
  v33 = v2;
  if ( (v2 & 4) == 0 && v8 == 1 )
  {
    ++dword_1403CBE68;
    return 3221225477LL;
  }
  if ( (unsigned __int64)&v33 < 0xFFFFF6FB7DBED000uLL || (unsigned __int64)&v33 > 0xFFFFF6FB7DBED7F8uLL )
  {
    v9 = v2;
  }
  else
  {
    v9 = v2;
    if ( (MiFlags & 0x1800000) != 0 )
    {
      if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v2 & 1) != 0
        && ((v2 & 0x20) == 0 || (v2 & 0x42) == 0) )
      {
        v24 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
        if ( v24 )
        {
          v9 = v2 | 0x20;
          v25 = *(_QWORD *)(v24 + 8 * (((unsigned __int64)&v33 >> 3) & 0x1FF));
          if ( (v25 & 0x20) == 0 )
            v9 = v2;
          if ( (v25 & 0x42) != 0 )
            v9 |= 0x42uLL;
        }
      }
      v2 = v33;
    }
  }
  v10 = (v9 >> 12) & 0xFFFFFFFFFLL;
  if ( v10 > qword_1403CB780
    || (v11 = 48 * v10, MmPhysicalMemoryBlock) && (*(_QWORD *)(v11 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) == 0 )
  {
    v13 = 0LL;
  }
  else
  {
    v12 = (_QWORD *)qword_1403CB788;
    v13 = v11 - 0x58000000000LL;
    if ( qword_1403CB788 )
    {
      if ( ((*(_QWORD *)(v13 + 40) >> 54) & 7) == 1 )
      {
        v26 = v11 / 0x30;
        if ( qword_1403CB788 )
        {
          do
          {
            v27 = v12[3];
            if ( v26 < v27 )
            {
              v12 = (_QWORD *)*v12;
            }
            else
            {
              if ( v26 - v27 < v12[4] )
              {
                ++dword_1403CBE98;
                return 3221225477LL;
              }
              v12 = (_QWORD *)v12[1];
            }
          }
          while ( v12 );
        }
      }
    }
    if ( (*(_QWORD *)(v13 + 40) & 0x200000000000000LL) == 0 )
    {
      v14 = (__int64)(*(_QWORD *)(v13 + 8) << 25) >> 16;
      if ( v14 >= 0xFFFFF68000000000uLL && v14 <= 0xFFFFF6FFFFFFFFFFuLL )
      {
        v28 = *(_BYTE *)(v13 + 34);
        if ( ((v28 & 0x20) == 0 || (*(_QWORD *)(v13 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 0 || !*(_WORD *)(v13 + 32))
          && (v28 & 8) == 0
          && ((*(_QWORD *)v13 >> 13) & 0x7FFFFFFFFFF0LL | 0xFFFF800000000000uLL) != 0xFFFF800000000030uLL )
        {
          ++dword_1403CBE94;
          return 3221225477LL;
        }
      }
    }
  }
  v15 = 0;
  if ( v5 >= 0xFFFF800000000000uLL )
    v16 = (unsigned __int8)byte_1403CCF90[((v5 >> 39) & 0x1FF) - 256];
  else
    v16 = 0;
  if ( v8 == 6 && v16 == 12 )
    v15 = 1;
  if ( v7 == 3 )
  {
    if ( v5 > 0x7FFFFFFEFFFFLL )
      return 3221225477LL;
    if ( (v2 & 0x8000000000000000uLL) != 0 && (v2 & 0x800) != 0 )
      return 3221225496LL;
  }
  else if ( !v7 )
  {
    if ( !v15 )
      goto LABEL_17;
    if ( v13 )
    {
      if ( (*(_QWORD *)(v13 + 40) & 0x200000000000000LL) != 0
        && ((unsigned int)MiCanPageMove(v13) == 1 || (unsigned int)MiIsPfnFileOnly(v13) == 1) )
      {
        v21 = MiLookupDataTableEntry(((*(_QWORD *)(a1 + 16) << 25) - (v20 << 25)) >> 16, 2LL);
        if ( v21 )
        {
          if ( (*(_DWORD *)(a1 + 64) & 2) == 0 )
          {
            MiUnlockProbePacketWorkingSet(a1);
            *(_DWORD *)(a1 + 64) |= 2u;
LABEL_99:
            MiLockProbePacketWorkingSet(a1);
            goto LABEL_60;
          }
          result = MiMakeDriverPagesPrivate(
                     v21,
                     *(_QWORD *)(a1 + 16),
                     *(_QWORD *)(a1 + 16),
                     *(unsigned __int8 *)(a1 + 68),
                     0);
          if ( (int)result >= 0 )
            goto LABEL_60;
          goto LABEL_120;
        }
      }
      goto LABEL_17;
    }
    return 0LL;
  }
  if ( (v2 & 0x800) != 0 )
  {
    if ( (v2 & 0x42) == 0
      && v8 == 1
      && ((*(_DWORD *)(*(_QWORD *)(a1 + 80) + 772LL) & 0x8000) != 0 || (v2 & 0x8000000000000000uLL) == 0) )
    {
      MiUnlockProbePacketWorkingSet(a1);
      v29 = MmAccessFault(2uLL, v5, 0, 0LL);
      MiLockProbePacketWorkingSet(a1);
      if ( v29 < 0 )
      {
        ++dword_1403CBE60;
        return (unsigned int)v29;
      }
      goto LABEL_60;
    }
LABEL_17:
    if ( !v13 )
      return 0LL;
    v17 = *(_BYTE *)(v13 + 34);
    if ( (v17 & 0x20) != 0 && (v17 & 8) == 0 && (*(_QWORD *)(v13 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 0 )
      return 0LL;
    if ( ((*(_QWORD *)(v13 + 40) >> 54) & 7) == 1 || *(__int64 *)(v13 + 8) < 0 )
    {
      if ( v7 )
        return 0LL;
      if ( (*(_QWORD *)(v13 + 40) & 0x200000000000000LL) == 0 )
        return 0LL;
      v19 = *(_QWORD *)(a1 + 80);
      if ( !v19 )
        return 0LL;
      if ( (*(_DWORD *)(a1 + 64) & 1) == 0 )
        return 0LL;
      CloneAddress = MiLocateCloneAddress(v19, *(_QWORD *)(v13 + 8) | 0x8000000000000000uLL);
      if ( !CloneAddress )
        return 0LL;
      if ( *(_QWORD *)(*(_QWORD *)(v31 + 1296) + 328LL) > *(_QWORD *)(CloneAddress + 96) )
      {
        result = MiSplitReducedCommitClonePage(a1);
        if ( (int)result < 0 )
        {
          ++dword_1403CBE8C;
          return result;
        }
LABEL_60:
        *a2 = 1;
        return 0LL;
      }
    }
    goto LABEL_58;
  }
  if ( v7 != 3 && (v8 != 6 || !v15) )
  {
    *a2 = 2;
    return 0LL;
  }
  if ( v13 )
  {
    v22 = *(_QWORD *)(v13 + 40);
    if ( (v22 & 0x200000000000000LL) == 0 )
    {
      if ( (MiFlags & 0x8000) != 0 && ((v22 >> 54) & 7) == 3 )
        MiClearPfnImageVerified(v13);
      return 0LL;
    }
  }
LABEL_58:
  if ( v7 == 3 )
  {
    if ( (v2 & 0x8000000000000000uLL) != 0 )
      return 3221225541LL;
    if ( (*(_QWORD *)(v13 + 40) & 0x200000000000000LL) != 0 && (v2 & 0x200) == 0 )
    {
      ++*(_QWORD *)(a1 + 104);
      v3 = 1;
    }
  }
  v23 = MiCopyOnWrite(v5);
  if ( v23 >= 0 )
    goto LABEL_60;
  if ( v3 )
    --*(_QWORD *)(a1 + 104);
  if ( *(_BYTE *)(a1 + 68) != 2 && (*(_DWORD *)(*(_QWORD *)(a1 + 72) + 1748LL) & 0xC) == 0 )
  {
    MiUnlockProbePacketWorkingSet(a1);
    v32 = *(_QWORD *)(a1 + 96);
    if ( v32 )
      MiCopyOnWriteCheckConditions(v32, (unsigned int)v23);
    goto LABEL_99;
  }
  result = 3221225495LL;
LABEL_120:
  ++dword_1403CBE90;
  return result;
}
