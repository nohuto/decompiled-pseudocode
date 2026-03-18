/*
 * XREFs of MiLockPageLeafPageTable @ 0x140021570
 * Callers:
 *     MiProbeAndLockPages @ 0x140020610 (MiProbeAndLockPages.c)
 *     MiProbeLeafFrame @ 0x140136DB0 (MiProbeLeafFrame.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiFastLockLeafPageTable @ 0x140021880 (MiFastLockLeafPageTable.c)
 *     MiFaultInProbeAddress @ 0x1400BA738 (MiFaultInProbeAddress.c)
 *     MiLockProbePacketWorkingSet @ 0x1400BBD14 (MiLockProbePacketWorkingSet.c)
 *     MiLockPageTableInternal @ 0x140120C90 (MiLockPageTableInternal.c)
 *     MiUnlockPageTableInternal @ 0x140123AD0 (MiUnlockPageTableInternal.c)
 *     MiUnlockProbePacketWorkingSet @ 0x140138D9C (MiUnlockProbePacketWorkingSet.c)
 */

__int64 __fastcall MiLockPageLeafPageTable(unsigned __int64 *a1)
{
  unsigned __int64 v1; // rbp
  unsigned __int64 v2; // rsi
  __int64 v4; // rdx
  int v5; // ebx
  unsigned __int64 v6; // rdx
  int v7; // eax
  __int64 v8; // rcx
  unsigned __int64 v10; // r14
  __int64 v11; // rdx
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r9
  unsigned __int64 v15; // rbp
  __int16 v16; // cx
  __int64 v17; // rcx
  int v18; // ebx
  unsigned __int64 v19; // r9
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // rdx
  unsigned __int64 v23; // r9
  __int64 v24; // rax
  unsigned __int64 v25; // [rsp+20h] [rbp-48h]
  unsigned __int64 v26; // [rsp+28h] [rbp-40h]
  unsigned __int64 v27; // [rsp+30h] [rbp-38h]
  __int64 v28; // [rsp+38h] [rbp-30h]
  __int64 v29; // [rsp+70h] [rbp+8h] BYREF

  v1 = *a1;
  v2 = a1[12];
  v4 = (*a1 >> 9) & 0x7FFFFFFFF8LL;
  a1[5] = ZeroPte;
  v25 = v4 - 0x98000000000LL;
  v26 = (((unsigned __int64)(v4 - 0x98000000000LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v27 = ((v26 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v28 = ((v27 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v5 = 3;
  v6 = a1[4];
  if ( v6 )
  {
    if ( v6 == ((a1[2] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
      goto LABEL_6;
    MiUnlockPageTableInternal(v2, v6);
    a1[4] = 0LL;
  }
  if ( !v2 || (a1[8] & 2) != 0 )
    goto LABEL_15;
  v7 = MiFastLockLeafPageTable(v2, v1);
  if ( !v7 )
  {
    v5 = 3;
    a1[4] = 0xFFFFF6FB7DBEDF68uLL;
    MiLockPageTableInternal(v2, 0xFFFFF6FB7DBEDF68uLL, 0LL);
    goto LABEL_15;
  }
  a1[4] = *(&v25 + v7);
  if ( v7 != 1 )
  {
    v5 = v7 - 1;
    goto LABEL_15;
  }
  while ( 1 )
  {
LABEL_6:
    v8 = *(_QWORD *)v25;
    if ( v25 >= 0xFFFFF6FB7DBED000uLL && v25 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      if ( (MiFlags & 0x1800000) == 0 || KeGetCurrentThread()->ApcState.Process->AddressPolicy == 1 )
      {
        v22 = *(_QWORD *)v25;
      }
      else
      {
        v22 = *(_QWORD *)v25;
        if ( (v8 & 1) != 0 && ((v8 & 0x20) == 0 || (v8 & 0x42) == 0) )
        {
          v23 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
          if ( !v23 )
            goto LABEL_7;
          v22 = v8 | 0x20;
          v24 = *(_QWORD *)(v23 + 8 * ((v25 >> 3) & 0x1FF));
          if ( (v24 & 0x20) == 0 )
            v22 = *(_QWORD *)v25;
          if ( (v24 & 0x42) != 0 )
            v22 |= 0x42uLL;
        }
      }
      v8 = v22;
    }
LABEL_7:
    if ( (v8 & 1) != 0 )
      break;
LABEL_28:
    MiUnlockProbePacketWorkingSet(a1);
    v18 = MiFaultInProbeAddress(a1);
    MiLockProbePacketWorkingSet(a1);
    if ( v18 < 0 )
    {
      ++dword_1403CBE5C;
      return (unsigned int)v18;
    }
    if ( v2 && (a1[8] & 2) == 0 )
    {
      a1[4] = 0xFFFFF6FB7DBEDF68uLL;
      MiLockPageTableInternal(v2, 0xFFFFF6FB7DBEDF68uLL, 0LL);
    }
    v5 = 4;
    while ( 1 )
    {
      --v5;
LABEL_15:
      if ( !v5 )
        break;
      v10 = *(&v25 + v5);
      if ( MiPteInShadowRange(v10)
        && (MiFlags & 0x1800000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v11 & 1) != 0
        && ((v11 & 0x20) == 0 || (v11 & 0x42) == 0) )
      {
        v19 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
        if ( v19 )
        {
          v20 = v11 | 0x20;
          v21 = *(_QWORD *)(v19 + 8 * ((v10 >> 3) & 0x1FF));
          if ( (v21 & 0x20) == 0 )
            v20 = v11;
          v11 = v20;
          if ( (v21 & 0x42) != 0 )
            v11 = v20 | 0x42;
        }
      }
      v29 = v11;
      if ( (v11 & 1) == 0 )
        goto LABEL_28;
      if ( (v11 & 0x80u) != 0LL )
      {
        if ( *((_DWORD *)a1 + 22) == 1 && (v11 & 0x800) == 0 )
        {
          ++dword_1403CBE64;
          return 3221225477LL;
        }
        v12 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v29);
        v13 = 1LL;
        v14 = (v12 >> 12) & 0xFFFFFFFFFLL;
        v15 = v1 >> 12;
        do
        {
          v16 = v15;
          v15 >>= 9;
          v17 = v13 * (v16 & 0x1FF);
          v13 <<= 9;
          v14 += v17;
          --v5;
        }
        while ( v5 );
        a1[16] = v14;
        *((_DWORD *)a1 + 16) |= 4u;
        a1[18] = v13 - (v14 & (v13 - 1)) - 1;
        return 0LL;
      }
      if ( v2 )
      {
        if ( (a1[8] & 2) == 0 )
        {
          MiLockPageTableInternal(v2, v10, 0LL);
          MiUnlockPageTableInternal(v2, a1[4]);
          a1[4] = v10;
        }
      }
    }
  }
  a1[5] = v8;
  return 0LL;
}
