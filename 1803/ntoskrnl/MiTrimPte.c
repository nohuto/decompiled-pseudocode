/*
 * XREFs of MiTrimPte @ 0x14012A7D0
 * Callers:
 *     <none>
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInsertTbFlushEntry @ 0x140026270 (MiInsertTbFlushEntry.c)
 *     MiShouldLockPteDirectly @ 0x14003E0E8 (MiShouldLockPteDirectly.c)
 *     MiDemoteCombinedPte @ 0x1400AD310 (MiDemoteCombinedPte.c)
 *     MiGetPageTableLockBuffer @ 0x1400B2278 (MiGetPageTableLockBuffer.c)
 *     MiTrimWorkingSetTail @ 0x1400B5E10 (MiTrimWorkingSetTail.c)
 *     MiTrimWorkingSetBuildup @ 0x1400B5E78 (MiTrimWorkingSetBuildup.c)
 *     MI_WSLE_LOG_ACCESS @ 0x14012A21C (MI_WSLE_LOG_ACCESS.c)
 *     MiTrimThisWsle @ 0x14012ABC0 (MiTrimThisWsle.c)
 *     MiComputeNextWalkPte @ 0x140259528 (MiComputeNextWalkPte.c)
 *     MiInsertVmAccessedEntry @ 0x1402598E8 (MiInsertVmAccessedEntry.c)
 */

__int64 __fastcall MiTrimPte(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v5; // r13
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // r10
  unsigned __int64 v8; // rsi
  BOOL v9; // r9d
  __int64 v10; // rdi
  unsigned __int64 v11; // rax
  __int64 v12; // r8
  int v13; // ecx
  unsigned __int64 v14; // rcx
  __int64 v15; // r14
  __int64 v16; // r8
  unsigned __int64 v17; // r8
  __int64 v18; // rcx
  unsigned __int8 v19; // cl
  unsigned int v20; // r12d
  unsigned int v21; // ebp
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rcx
  unsigned __int64 v26; // rax
  __int64 v27; // r11
  __int64 v28; // r9
  unsigned __int64 v29; // rdx
  __int64 v30; // rax
  char v31; // dl
  __int64 WalkPte; // rax
  unsigned __int64 v33; // r8
  __int64 v34; // rax
  __int64 v35; // r8
  char v36; // cl
  __int64 *v37; // rax
  char *PageTableLockBuffer; // rax
  unsigned __int64 v39; // rax
  __int64 v40; // rax
  char v41; // r8^7
  int v43; // [rsp+78h] [rbp+10h] BYREF
  int v44; // [rsp+80h] [rbp+18h] BYREF

  v5 = *(_QWORD *)(a1 + 24);
  v6 = *(_QWORD *)a2;
  v7 = 0xFFFFF6FB7DBED000uLL;
  v8 = (__int64)(a2 << 25) >> 16;
  v9 = a3 == 0;
  if ( a2 >= 0xFFFFF6FB7DBED000uLL
    && a2 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0x1800000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v6 & 1) != 0
    && ((v6 & 0x20) == 0 || (v6 & 0x42) == 0) )
  {
    v29 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v29 )
    {
      v30 = *(_QWORD *)(v29 + 8 * ((a2 >> 3) & 0x1FF));
      v31 = v6 | 0x20;
      if ( (v30 & 0x20) == 0 )
        v31 = v6;
      LOBYTE(v6) = v31;
      if ( (v30 & 0x42) != 0 )
        LOBYTE(v6) = v31 | 0x42;
    }
  }
  v10 = *(_QWORD *)(a1 + 168);
  v11 = *(_QWORD *)(v10 + 16);
  v12 = *(_QWORD *)(v10 + 8);
  if ( v11 != v12 )
  {
    v13 = *(_DWORD *)v10;
    if ( (*(_DWORD *)v10 & 0x400) == 0
      || ((v13 & 0x800) == 0 || v11 < 0x100) && *(_QWORD *)(v5 + 136) > (unsigned __int64)(*(_QWORD *)(v10 + 48) - v12) )
    {
      if ( (v13 & 0x1000) == 0 )
      {
        WalkPte = MiComputeNextWalkPte(a2, v9);
        v7 = 0xFFFFF6FB7DBED000uLL;
        **(_QWORD **)(v5 + 16) = WalkPte;
      }
      v14 = *(_QWORD *)a2;
      if ( a2 >= 0xFFFFF6FB7DBED000uLL
        && a2 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0x1800000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v14 & 1) != 0
        && ((v14 & 0x20) == 0 || (v14 & 0x42) == 0) )
      {
        v33 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
        if ( v33 )
        {
          v34 = *(_QWORD *)(v33 + 8 * ((a2 >> 3) & 0x1FF));
          v35 = v14 | 0x20;
          if ( (v34 & 0x20) == 0 )
            v35 = *(_QWORD *)a2;
          v14 = v35;
          if ( (v34 & 0x42) != 0 )
            v14 = v35 | 0x42;
        }
      }
      v15 = 48 * ((v14 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      if ( a3 )
      {
        if ( (*(_QWORD *)(v15 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 )
          return 0LL;
        if ( a2 == 0xFFFFF6FB7DBEDF68uLL )
        {
          v36 = *(_BYTE *)(v5 + 184) & 7;
          if ( v36 )
          {
            if ( v36 == 7 )
            {
              v37 = (__int64 *)&unk_1403CBCE8;
            }
            else
            {
              v37 = &qword_1403CBCE0;
              if ( v36 != 5 )
                v37 = &qword_1403CBCF8;
            }
          }
          else
          {
            v37 = (__int64 *)(v5 + 176);
          }
          if ( *v37 )
            return 0LL;
        }
        else if ( MiShouldLockPteDirectly(v5, a2) )
        {
          if ( (MI_READ_PTE_LOCK_FREE(a2) & 0x1000000000000000LL) != 0 )
            return 0LL;
        }
        else
        {
          PageTableLockBuffer = MiGetPageTableLockBuffer(v25, v24, &v44);
          if ( ((*(_DWORD *)PageTableLockBuffer >> v44) & 1) != 0 )
            return 0LL;
        }
      }
      v16 = *(_QWORD *)(v15 + 8);
      if ( v16 >= 0 )
      {
        if ( (unsigned int)MiDemoteCombinedPte(v5, a2, v16 | 0x8000000000000000uLL) == 1 )
          LOBYTE(v6) = MI_READ_PTE_LOCK_FREE(a2);
        v7 = 0xFFFFF6FB7DBED000uLL;
      }
      if ( v8 < 0xFFFFF68000000000uLL || v8 > 0xFFFFF6FFFFFFFFFFuLL )
      {
        v17 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v18 = *(_QWORD *)v17;
        if ( v17 >= v7
          && v17 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0x1800000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v18 & 1) != 0
          && ((v18 & 0x20) == 0 || (v18 & 0x42) == 0) )
        {
          v39 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
          if ( v39 )
          {
            v40 = *(_QWORD *)(v39 + 8 * ((v17 >> 3) & 0x1FF));
            v41 = HIBYTE(*(_QWORD *)v17);
            if ( (v40 & 0x20) == 0 )
              v41 = HIBYTE(v18);
            HIBYTE(v18) = v41;
            if ( (v40 & 0x42) != 0 )
              HIBYTE(v18) = v41;
          }
        }
        v19 = HIBYTE(v18) & 0xF;
      }
      else
      {
        v26 = MI_READ_PTE_LOCK_FREE(((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        v19 = (*(_BYTE *)(v28 + 48 * (v27 & (v26 >> 12))) >> 1) & 7;
      }
      v20 = v19;
      v21 = *(_DWORD *)v10 & 0xF;
      if ( (unsigned int)MiTrimThisWsle(v5, v8, v15, v10, (v6 & 0x20) != 0, (__int64)&v43) )
      {
        MiInsertTbFlushEntry(v10 + 56, v8, 1LL, 0);
        if ( (*(_DWORD *)v10 & 0x10) != 0 )
          MI_WSLE_LOG_ACCESS(v5, (_BYTE *)a2, v23);
        if ( ++*(_QWORD *)(v10 + 16) == *(_QWORD *)(v10 + 8) || *(_DWORD *)(v10 + 68) == *(_DWORD *)(v10 + 64) )
        {
          MiTrimWorkingSetBuildup(v5, v10);
          if ( *(_QWORD *)(v10 + 16) == *(_QWORD *)(v10 + 8) )
            return 3LL;
        }
      }
      if ( v43 && (unsigned int)MiInsertVmAccessedEntry(*(_QWORD *)(v10 + 240), v8) )
      {
        MiTrimWorkingSetTail(a1);
      }
      else if ( v20 >= v21 && ++*(_QWORD *)(v10 + 32) >= *(_QWORD *)(v10 + 40) )
      {
        return 3LL;
      }
      return 0LL;
    }
  }
  return 3LL;
}
