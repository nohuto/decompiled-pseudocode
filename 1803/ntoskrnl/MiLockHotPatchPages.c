/*
 * XREFs of MiLockHotPatchPages @ 0x140255CEC
 * Callers:
 *     MiPrepareImageForHotPatch @ 0x14074CC30 (MiPrepareImageForHotPatch.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MmAccessFault @ 0x14001B320 (MmAccessFault.c)
 *     MiGetAnyMultiplexedVm @ 0x1400493AC (MiGetAnyMultiplexedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x1400E47F8 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400E6200 (MiUnlockWorkingSetExclusive.c)
 *     MiLockPageAtDpcInline @ 0x140124DA0 (MiLockPageAtDpcInline.c)
 *     MiCopyOnWrite @ 0x140126BA0 (MiCopyOnWrite.c)
 *     MiMakeDriverPagesPrivate @ 0x14013F254 (MiMakeDriverPagesPrivate.c)
 *     KeSetPagePrivilege @ 0x14023FCB0 (KeSetPagePrivilege.c)
 *     MiReferenceDriverPage @ 0x140252558 (MiReferenceDriverPage.c)
 *     MiCopyOnWriteCheckConditions @ 0x14026B6DC (MiCopyOnWriteCheckConditions.c)
 *     RtlDetermineHotPatchExtent @ 0x14078B0A0 (RtlDetermineHotPatchExtent.c)
 */

__int64 __fastcall MiLockHotPatchPages(signed __int64 **a1, __int64 a2, int a3, unsigned int a4, unsigned int a5)
{
  int v5; // r12d
  __int64 v6; // r15
  __int64 v7; // rdx
  char *AnyMultiplexedVm; // rbp
  unsigned int v9; // r11d
  int v10; // r8d
  unsigned int *v11; // rax
  unsigned int v12; // edi
  __int64 v13; // r10
  ULONG_PTR v14; // rsi
  unsigned __int64 v15; // r14
  LONG *SharedVm; // rbx
  KIRQL v17; // al
  unsigned __int8 v18; // r13
  LONG *v19; // rbx
  unsigned int v20; // r9d
  bool v21; // zf
  unsigned __int64 v22; // r12
  __int64 v23; // rbx
  int v24; // ebx
  unsigned int v26; // [rsp+30h] [rbp-68h] BYREF
  unsigned int v27; // [rsp+34h] [rbp-64h] BYREF
  unsigned int *v28; // [rsp+38h] [rbp-60h]
  unsigned __int64 v29; // [rsp+40h] [rbp-58h]
  unsigned __int64 v30; // [rsp+48h] [rbp-50h]
  __int128 v31; // [rsp+50h] [rbp-48h] BYREF
  int v33; // [rsp+B0h] [rbp+18h]

  v33 = a3;
  *((_QWORD *)&v31 + 1) = 0LL;
  v5 = a3;
  v30 = (*a1)[6];
  v6 = ((v30 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  if ( v10 )
  {
    v11 = (unsigned int *)(v7 + 4LL * a5);
    v28 = v11;
    while ( 1 )
    {
      RtlDetermineHotPatchExtent(v9, *v11, &v27, &v26);
      v12 = v27;
      v14 = v13 + ((unsigned __int64)v27 << 12);
      v15 = v6 + 8LL * v27;
      SharedVm = MiGetSharedVm((__int64)AnyMultiplexedVm);
      v17 = ExAcquireSpinLockExclusive(SharedVm);
      SharedVm[1] = 0;
      v18 = v17;
      if ( v12 <= v26 )
        break;
LABEL_10:
      MiUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, v18);
      v11 = v28 + 2;
      v21 = v5-- == 1;
      v28 += 2;
      v33 = v5;
      if ( v21 )
        return 0LL;
      v9 = a4;
    }
    while ( (MI_READ_PTE_LOCK_FREE(v15) & 1) != 0 )
    {
      v22 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(v15) >> 12) & 0xFFFFFFFFFLL;
      v23 = 48 * v22 - 0x58000000000LL;
      if ( (*(_QWORD *)(v23 + 40) & 0x200000000000000LL) == 0 )
      {
        v29 = v12;
        if ( !_bittest64(a1[3], v12) )
        {
          MiLockPageAtDpcInline(48 * v22 - 0x58000000000LL);
          MiReferenceDriverPage(48 * v22 - 0x58000000000LL);
          if ( ((*(_QWORD *)(v23 + 40) >> 54) & 7) != 3 )
          {
            *(_QWORD *)&v31 = v14;
            KeSetPagePrivilege(v22, &v31, 256);
          }
          _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v12 = v27;
          v20 = v26;
          _bittestandset64(a1[3], v29);
        }
        ++v12;
        v15 += 8LL;
        v27 = v12;
        v14 += 4096LL;
        goto LABEL_8;
      }
      if ( *(__int64 *)(v23 + 8) < 0 )
      {
        MiMakeDriverPagesPrivate((__int64)*a1, v15, v15 + 8LL * (v20 - v12), v18, 0);
        goto LABEL_7;
      }
      v24 = MiCopyOnWrite(v14, v15, 0xFFFFFFFFFFFFFFFFuLL, 0);
      if ( v24 < 0 )
      {
        MiUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, v18);
        MiCopyOnWriteCheckConditions(AnyMultiplexedVm, (unsigned int)v24);
LABEL_6:
        v19 = MiGetSharedVm((__int64)AnyMultiplexedVm);
        ExAcquireSpinLockExclusive(v19);
        v19[1] = 0;
      }
LABEL_7:
      v20 = v26;
LABEL_8:
      if ( v12 > v20 )
      {
        v5 = v33;
        goto LABEL_10;
      }
    }
    MiUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, v18);
    if ( (int)MmAccessFault(0LL, v14, 0, 0LL) < 0 )
      return 3221225595LL;
    goto LABEL_6;
  }
  return 0LL;
}
