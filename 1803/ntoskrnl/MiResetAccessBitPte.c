/*
 * XREFs of MiResetAccessBitPte @ 0x140164490
 * Callers:
 *     <none>
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiShouldLockPteDirectly @ 0x14003E0E8 (MiShouldLockPteDirectly.c)
 *     MiDemoteCombinedPte @ 0x1400AD310 (MiDemoteCombinedPte.c)
 *     MiGetPageTableLockBuffer @ 0x1400B2278 (MiGetPageTableLockBuffer.c)
 *     MiFlushTbList @ 0x140116C90 (MiFlushTbList.c)
 *     MiGetPfnPriority @ 0x14011B8F0 (MiGetPfnPriority.c)
 *     MiSetVaAge @ 0x140125600 (MiSetVaAge.c)
 *     MiClearPteAccessed @ 0x140128A30 (MiClearPteAccessed.c)
 *     MiLogPageAccess @ 0x140129AB0 (MiLogPageAccess.c)
 *     MiResetAccessBitsTail @ 0x140165B90 (MiResetAccessBitsTail.c)
 *     MiInsertVmAccessedEntry @ 0x1402598E8 (MiInsertVmAccessedEntry.c)
 */

__int64 __fastcall MiResetAccessBitPte(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v3; // rsi
  __int64 v5; // r14
  unsigned __int64 v7; // r9
  __int64 v9; // rbp
  __int64 v10; // r8
  __int64 v11; // rcx
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // r8
  __int64 v14; // rcx
  unsigned __int8 v15; // cl
  int v16; // edx
  int v17; // r15d
  __int64 v18; // rbx
  __int64 v19; // r8
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rax
  __int64 v22; // r10
  __int64 v23; // rdx
  __int64 v24; // rcx
  unsigned __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rdx
  unsigned __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rdx
  char v31; // cl
  __int64 *v32; // rax
  char *PageTableLockBuffer; // rax
  unsigned __int64 v34; // rax
  __int64 v35; // rax
  char v36; // r8^7
  int v37; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 v38; // [rsp+78h] [rbp+10h] BYREF

  v3 = *(_QWORD *)(a1 + 168);
  v5 = *(_QWORD *)(a1 + 24);
  v7 = *(_QWORD *)a2;
  if ( a2 >= 0xFFFFF6FB7DBED000uLL
    && a2 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0x1800000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v7 & 1) != 0
    && ((v7 & 0x20) == 0 || (v7 & 0x42) == 0) )
  {
    v25 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v25 )
    {
      v26 = *(_QWORD *)(v25 + 8 * ((a2 >> 3) & 0x1FF));
      v27 = v7 | 0x20;
      if ( (v26 & 0x20) == 0 )
        v27 = v7;
      v7 = v27;
      if ( (v26 & 0x42) != 0 )
        v7 = v27 | 0x42;
    }
  }
  v38 = v7;
  if ( (v7 & 0x20) == 0 )
    return 0LL;
  if ( (unsigned __int64)&v38 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)&v38 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0x1800000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v7 & 1) != 0
    && (v7 & 0x42) == 0 )
  {
    v28 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v28 )
    {
      v29 = *(_QWORD *)(v28 + 8 * (((unsigned __int64)&v38 >> 3) & 0x1FF));
      v30 = v7 | 0x20;
      if ( (v29 & 0x20) == 0 )
        v30 = v7;
      v7 = v30;
      if ( (v29 & 0x42) != 0 )
        v7 = v30 | 0x42;
    }
  }
  v9 = 48 * ((v7 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  if ( a3 )
  {
    if ( (*(_QWORD *)(v9 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 )
      return 0LL;
    if ( a2 == 0xFFFFF6FB7DBEDF68uLL )
    {
      v31 = *(_BYTE *)(v5 + 184) & 7;
      if ( v31 )
      {
        if ( v31 == 7 )
        {
          v32 = (__int64 *)&unk_1403CBCE8;
        }
        else
        {
          v32 = &qword_1403CBCE0;
          if ( v31 != 5 )
            v32 = &qword_1403CBCF8;
        }
      }
      else
      {
        v32 = (__int64 *)(v5 + 176);
      }
      if ( *v32 )
        return 0LL;
    }
    else if ( MiShouldLockPteDirectly(v5, a2) )
    {
      if ( (MI_READ_PTE_LOCK_FREE(a2) & 0x1000000000000000LL) != 0 )
        return 0LL;
    }
    else
    {
      PageTableLockBuffer = MiGetPageTableLockBuffer(v24, v23, &v37);
      if ( ((*(_DWORD *)PageTableLockBuffer >> v37) & 1) != 0 )
        return 0LL;
    }
  }
  v10 = *(_QWORD *)(v9 + 8);
  if ( v10 >= 0 )
    MiDemoteCombinedPte(v5, a2, v10 | 0x8000000000000000uLL);
  v11 = *(_QWORD *)(v3 + 16);
  v12 = (__int64)(a2 << 25) >> 16;
  if ( !v11 || v12 > 0x7FFFFFFEFFFFLL )
  {
    if ( v12 < 0xFFFFF68000000000uLL || v12 > 0xFFFFF6FFFFFFFFFFuLL )
    {
      v13 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v14 = *(_QWORD *)v13;
      if ( v13 >= 0xFFFFF6FB7DBED000uLL
        && v13 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0x1800000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v14 & 1) != 0
        && ((v14 & 0x20) == 0 || (v14 & 0x42) == 0) )
      {
        v34 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
        if ( v34 )
        {
          v35 = *(_QWORD *)(v34 + 8 * ((v13 >> 3) & 0x1FF));
          v36 = HIBYTE(*(_QWORD *)v13);
          if ( (v35 & 0x20) == 0 )
            v36 = HIBYTE(v14);
          HIBYTE(v14) = v36;
          if ( (v35 & 0x42) != 0 )
            HIBYTE(v14) = v36;
        }
      }
      v15 = HIBYTE(v14) & 0xF;
    }
    else
    {
      v21 = MI_READ_PTE_LOCK_FREE(((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      v15 = (*(_BYTE *)(48 * (v22 & (v21 >> 12)) - 0x58000000000LL) >> 1) & 7;
    }
    v16 = v15;
    if ( v15 == 7 && (unsigned int)MiGetPfnPriority(v9) < dword_1403CBF2C )
    {
      v17 = 0;
    }
    else
    {
      v17 = 1;
      if ( (unsigned int)(v16 - 1) <= 5 )
        MiSetVaAge(v5, v12, 0);
    }
    v18 = *(_QWORD *)(v3 + 8);
    if ( !(unsigned int)MiClearPteAccessed(v5, v9, a2, v18, *(_DWORD *)v3, 0) )
      return 0LL;
    if ( v17 == 1 && *(_DWORD *)v3 )
    {
      if ( !v18 )
      {
        MiLogPageAccess(v5, a2);
        return 0LL;
      }
      goto LABEL_20;
    }
    if ( v18 )
    {
LABEL_20:
      v20 = qword_1403CB708;
      if ( (*(_BYTE *)(v18 + 4) & 2) == 0
        && *(_DWORD *)v18 == 1
        && KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[16] )
      {
        v20 = -1LL;
      }
      if ( (*(_DWORD *)(v18 + 12) >= *(_DWORD *)(v18 + 8) || *(_BYTE *)(v18 + 5) || *(_QWORD *)(v18 + 16) > v20)
        && v20 >= 0x400
        && !*(_BYTE *)(v18 + 5) )
      {
        MiFlushTbList(v18, v20, v19);
      }
    }
    return 0LL;
  }
  if ( !(unsigned int)MiInsertVmAccessedEntry(v11, (__int64)(a2 << 25) >> 16) )
    return 0LL;
  return MiResetAccessBitsTail(a1);
}
