/*
 * XREFs of MiForcedTrim @ 0x14021D544
 * Callers:
 *     MiTrimSharedPageFromViews @ 0x14002B250 (MiTrimSharedPageFromViews.c)
 *     MmSetAddressRangeModifiedEx @ 0x14002F6E0 (MmSetAddressRangeModifiedEx.c)
 *     MiSystemFault @ 0x140032BA0 (MiSystemFault.c)
 *     MiCopyToUserVa @ 0x140034630 (MiCopyToUserVa.c)
 *     MiGetVadWakeList @ 0x140038190 (MiGetVadWakeList.c)
 *     MiQueryAddressState @ 0x14003F110 (MiQueryAddressState.c)
 *     MiDeleteSystemPagableVm @ 0x140056870 (MiDeleteSystemPagableVm.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x140057900 (MiPreUnlockWorkingSetExclusive.c)
 *     MiCountSharedPages @ 0x1400592B0 (MiCountSharedPages.c)
 *     MiSharePages @ 0x1400E83E0 (MiSharePages.c)
 *     MiSetReadOnlyOnSectionView @ 0x1400E9820 (MiSetReadOnlyOnSectionView.c)
 * Callees:
 *     MiTrimWorkingSet @ 0x14000B9A4 (MiTrimWorkingSet.c)
 *     MiGetAvailablePagesBelowPriority @ 0x1400F5010 (MiGetAvailablePagesBelowPriority.c)
 *     MiForceAgeWorkingSet @ 0x14021D508 (MiForceAgeWorkingSet.c)
 */

__int64 __fastcall MiForcedTrim(__int64 a1, char a2)
{
  __int64 v3; // rdi
  _QWORD *v5; // rcx
  __int64 v6; // r13
  __int64 AvailablePagesBelowPriority; // rax
  __int64 v8; // r11
  unsigned __int64 v9; // r10
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rcx
  unsigned __int64 v14; // r10
  unsigned __int64 v15; // rbp
  unsigned int v16; // ecx
  __int64 v17; // rdx
  _QWORD *v18; // rax
  unsigned __int64 v19; // rsi
  unsigned int v20; // r9d
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // r8
  unsigned __int64 v25; // rdx
  __int64 v26; // rax
  unsigned __int64 v27; // [rsp+60h] [rbp+8h]

  v3 = 0LL;
  v5 = *(_QWORD **)(qword_140388AF0 + 8LL * *(unsigned __int16 *)(a1 + 172));
  v6 = v5[710];
  AvailablePagesBelowPriority = MiGetAvailablePagesBelowPriority(v5, 6u);
  v9 = *(_QWORD *)(a1 + 136);
  v10 = AvailablePagesBelowPriority;
  v11 = *(_QWORD *)(v6 + 2408);
  v12 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL);
  if ( v9 <= v12 )
    return 0LL;
  v14 = v9 - v12;
  v27 = *(_QWORD *)(v8 + 5776);
  v15 = 0LL;
  v16 = 1;
  v17 = (15 * v14 * (unsigned __int128)0x47AE147AE147AE15uLL) >> 64;
  v18 = (_QWORD *)(a1 + 48);
  v19 = (v17 + ((15 * v14 - v17) >> 1)) >> 6;
  do
  {
    v15 += *v18;
    if ( v15 >= v19 )
      break;
    ++v16;
    ++v18;
  }
  while ( v16 < 8 );
  v20 = 7;
  if ( (*(_BYTE *)(a1 + 192) & 7) != 0 )
  {
    v21 = 16 * v11;
    v22 = v14;
    v23 = v27 / 0xA;
    if ( v21 <= v27 / 0xA )
      v23 = v21;
    if ( v14 >= v27 )
      v22 = *(_QWORD *)(v8 + 5776);
    v11 = v23 * (100 * v22 / v27) / 0x64;
    if ( v11 > v14 / 0xA )
      v11 = v14 / 0xA;
  }
  if ( v10 < v11 )
  {
    v24 = v11 - v10;
    v25 = 0LL;
    if ( v24 < 0x10 )
      v24 = 16LL;
    while ( 1 )
    {
      v25 += *(_QWORD *)(a1 + 8LL * v20 + 40);
      if ( v25 >= v24 )
        break;
      if ( --v20 == 1 )
        goto LABEL_20;
    }
    v25 = v24;
LABEL_20:
    if ( v25 )
    {
      if ( (*(_BYTE *)(a1 + 192) & 7) == 0 )
        v25 &= -(__int64)(v10 < *(_QWORD *)(v8 + 4968) >> 1);
      if ( v25 )
      {
        v26 = MiTrimWorkingSet(a1, v25, a2, v20, 57);
        *(_QWORD *)(v6 + 2488) += v26;
        v3 = v26;
      }
    }
  }
  if ( v15 < v19 || (*(_DWORD *)(a1 + 4) & 0x3FFF) == 0 )
    MiForceAgeWorkingSet(a1, a2);
  return v3;
}
