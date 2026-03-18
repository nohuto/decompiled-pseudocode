/*
 * XREFs of MiDemoteLocalLargePage @ 0x1400C62F0
 * Callers:
 *     MiGetFreeOrZeroPageAnyColor @ 0x1400C6214 (MiGetFreeOrZeroPageAnyColor.c)
 * Callees:
 *     MiLockPageAtDpcInline @ 0x140031780 (MiLockPageAtDpcInline.c)
 *     MiInsertLargePageInFreeOrZeroList @ 0x14004DAD0 (MiInsertLargePageInFreeOrZeroList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14004F970 (MiInsertPageInFreeOrZeroedList.c)
 *     MiNodeLargeFreeZeroPages @ 0x1400C5910 (MiNodeLargeFreeZeroPages.c)
 *     MiUnlinkNodeLargePage @ 0x1400C6570 (MiUnlinkNodeLargePage.c)
 *     MiPageAvailableEx @ 0x1400C729C (MiPageAvailableEx.c)
 */

_QWORD *__fastcall MiDemoteLocalLargePage(__int64 a1, unsigned int a2, __int16 a3, unsigned __int64 a4)
{
  unsigned int v5; // ebp
  unsigned __int64 v6; // rsi
  int v7; // r8d
  _QWORD *v8; // r13
  __int64 v9; // rdi
  int v10; // edx
  _QWORD *v11; // rbx
  _QWORD *v12; // rax
  unsigned int v13; // edi
  unsigned __int8 CurrentIrql; // r15
  int v15; // eax
  __int64 v16; // rax
  _QWORD *inserted; // rbx
  int v18; // r12d
  __int16 v19; // si
  int v20; // ebp
  __int64 v21; // rdx
  __int64 v23; // rax
  unsigned int v24; // [rsp+40h] [rbp-68h]
  unsigned int v25; // [rsp+4Ch] [rbp-5Ch]

  if ( (a3 & 1) != 0 )
    return 0LL;
  v5 = MmNumberOfChannels;
  v24 = 0;
  if ( (unsigned int)MmNumberOfChannels > 1 )
    v24 = (unsigned __int8)(MiChannelMaximumPowerOf2Mask & (a2 >> byte_140388502));
  v6 = 0LL;
  v7 = 0;
  v25 = a2 >> byte_140388501;
  v8 = (_QWORD *)(*(_QWORD *)(a1 + 16) + 8256LL * (a2 >> byte_140388501));
  v9 = 0LL;
  v10 = a3 & 0x400;
  v11 = v8 + 1004;
  do
  {
    if ( v5 > 1 )
      v12 = &v8[2 * v24 + 1012 + v9];
    else
      v12 = v11;
    v6 += *v12;
    if ( v10 )
    {
      v23 = MiNodeLargeFreeZeroPages(v8, v24, v7);
      v10 = a3 & 0x400;
      v6 += v23;
    }
    ++v7;
    ++v9;
    ++v11;
  }
  while ( v9 <= ((a3 & 2) == 0) );
  if ( v6 >= a4 )
    return 0LL;
  v13 = 3;
  CurrentIrql = KeGetCurrentIrql();
  v15 = 2;
  __writecr8(2uLL);
  while ( 1 )
  {
    --v13;
    if ( a3 < 0 )
      v15 = 3;
    v16 = MiUnlinkNodeLargePage(a1, v13, v25, v24, (a3 & 2) == 0, a2, v15 | 4u, 0LL);
    inserted = (_QWORD *)v16;
    if ( v16 )
      break;
    v15 = 2;
    if ( !v13 )
      goto LABEL_19;
  }
  v18 = a4 - v6;
  v19 = 1;
  v20 = *(_BYTE *)(v16 + 34) & 7;
  inserted = MiInsertLargePageInFreeOrZeroList(v16, v13, 1, a2, v18);
  if ( inserted )
  {
    v21 = *(_QWORD *)(a1 + 5952);
    if ( v21 )
      --v21;
    if ( !(unsigned int)MiPageAvailableEx(a1, v21, 0LL) )
    {
      if ( v20 )
        v19 = 2;
      MiLockPageAtDpcInline((__int64)inserted);
      MiInsertPageInFreeOrZeroedList((__int64)(inserted + 0xB000000000LL) / 48, v19);
      _InterlockedAnd64(inserted + 3, 0x7FFFFFFFFFFFFFFFuLL);
      inserted = 0LL;
    }
  }
LABEL_19:
  __writecr8(CurrentIrql);
  return inserted;
}
