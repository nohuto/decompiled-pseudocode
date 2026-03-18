/*
 * XREFs of MiDemoteLocalLargePage @ 0x1400E6D90
 * Callers:
 *     MiGetFreeOrZeroPageAnyColor @ 0x1400E6CC0 (MiGetFreeOrZeroPageAnyColor.c)
 * Callees:
 *     MiInsertLargePageInFreeOrZeroList @ 0x140029290 (MiInsertLargePageInFreeOrZeroList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14002BD00 (MiInsertPageInFreeOrZeroedList.c)
 *     MiNodeLargeFreeZeroPages @ 0x1400D5740 (MiNodeLargeFreeZeroPages.c)
 *     MiUnlinkNodeLargePage @ 0x1400E7040 (MiUnlinkNodeLargePage.c)
 *     MiPageAvailableEx @ 0x1400E7708 (MiPageAvailableEx.c)
 *     MiLockPageAtDpcInline @ 0x140124DA0 (MiLockPageAtDpcInline.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

__int64 __fastcall MiDemoteLocalLargePage(__int64 a1, unsigned int a2, __int16 a3, __int64 a4)
{
  unsigned int v4; // r9d
  unsigned int v5; // r14d
  unsigned __int64 v6; // rsi
  int v7; // ebp
  __int64 v8; // rdx
  _QWORD *v9; // r10
  __int64 v10; // rdi
  int v11; // r15d
  _QWORD *v12; // rbx
  _QWORD *v13; // rax
  int v14; // r15d
  unsigned int v15; // ebp
  unsigned __int8 CurrentIrql; // r14
  int v17; // ebx
  _QWORD *v18; // rax
  __int64 v19; // rax
  __int64 inserted; // rdi
  int v21; // r15d
  __int16 v22; // si
  int v23; // ebx
  __int64 v24; // rdx
  __int64 v26; // rax
  unsigned int v27; // [rsp+40h] [rbp-88h]
  int v28; // [rsp+44h] [rbp-84h]
  unsigned int v30; // [rsp+4Ch] [rbp-7Ch]
  _QWORD *v32; // [rsp+58h] [rbp-70h]
  __int64 v33; // [rsp+60h] [rbp-68h]
  _QWORD v34[2]; // [rsp+68h] [rbp-60h] BYREF

  v34[0] = a4;
  if ( (a3 & 1) != 0 )
    return 0LL;
  v4 = 0;
  v5 = MmNumberOfChannels;
  v27 = 0;
  if ( (unsigned int)MmNumberOfChannels > 1 )
  {
    v4 = (unsigned __int8)(MiChannelMaximumPowerOf2Mask & (a2 >> byte_1403CB69A));
    v27 = v4;
  }
  v6 = 0LL;
  v7 = 0;
  v30 = a2 >> byte_1403CB699;
  v8 = 1984LL * (a2 >> byte_1403CB699);
  v9 = (_QWORD *)(v8 + *(_QWORD *)(a1 + 16));
  v33 = v8;
  v32 = v9;
  v28 = a3 & 2;
  v10 = 0LL;
  v11 = a3 & 0x1000;
  v12 = v9 + 220;
  do
  {
    if ( v5 > 1 )
      v13 = &v9[2 * v4 + 228 + v10];
    else
      v13 = v12;
    v6 += *v13;
    if ( v11 )
    {
      v26 = MiNodeLargeFreeZeroPages(v9, v4, v7);
      v4 = v27;
      v6 += v26;
      v9 = v32;
    }
    ++v7;
    ++v10;
    ++v12;
  }
  while ( v10 <= (v28 == 0) );
  v14 = v34[0];
  if ( v6 >= v34[0] )
    return 0LL;
  v15 = 3;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v17 = 14;
  if ( !v28 )
    v17 = 10;
  while ( 1 )
  {
    if ( --v15 == 2 )
    {
      v34[0] = 0LL;
      v18 = v34;
      v34[1] = a2;
    }
    else
    {
      v18 = (_QWORD *)(v33 + 1936 + *(_QWORD *)(a1 + 16));
    }
    v19 = MiUnlinkNodeLargePage(a1, v15, v30, v4, (__int64)v18, v17, 0LL);
    inserted = v19;
    if ( v19 )
      break;
    v4 = v27;
    if ( !v15 )
      goto LABEL_20;
  }
  v21 = v14 - v6;
  v22 = 1;
  v23 = *(_BYTE *)(v19 + 34) & 7;
  inserted = MiInsertLargePageInFreeOrZeroList(v19, v15, 1, a2, v21);
  if ( inserted )
  {
    v24 = *(_QWORD *)(a1 + 7040);
    if ( v24 )
      --v24;
    if ( !(unsigned int)MiPageAvailableEx(a1, v24, 0LL) )
    {
      if ( v23 )
        v22 = 2;
      MiLockPageAtDpcInline(inserted);
      MiInsertPageInFreeOrZeroedList((inserted + 0x58000000000LL) / 48, v22);
      _InterlockedAnd64((volatile signed __int64 *)(inserted + 24), 0x7FFFFFFFFFFFFFFFuLL);
      inserted = 0LL;
    }
  }
LABEL_20:
  __writecr8(CurrentIrql);
  return inserted;
}
