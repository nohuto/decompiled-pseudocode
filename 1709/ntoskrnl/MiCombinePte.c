/*
 * XREFs of MiCombinePte @ 0x14009F2D0
 * Callers:
 *     <none>
 * Callees:
 *     MiMapArbitraryPage @ 0x140008F00 (MiMapArbitraryPage.c)
 *     MiPerformCombineScan @ 0x1400097B4 (MiPerformCombineScan.c)
 *     MiReleaseArbitraryPage @ 0x14000A0A0 (MiReleaseArbitraryPage.c)
 *     MiCombineCandidate @ 0x14005BD10 (MiCombineCandidate.c)
 *     MiGetUltraMapping @ 0x1400CD380 (MiGetUltraMapping.c)
 *     MiLocateAddress @ 0x1400E9700 (MiLocateAddress.c)
 *     MiComputeHash64 @ 0x140107500 (MiComputeHash64.c)
 *     MiCombineWorkingSetTail @ 0x140123C30 (MiCombineWorkingSetTail.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MiHashIsCommon @ 0x14023192C (MiHashIsCommon.c)
 */

__int64 __fastcall MiCombinePte(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // rdx
  __int64 v6; // r14
  __int64 *v7; // rbp
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r9
  unsigned __int64 v11; // rsi
  __int64 PteShadow; // rdi
  __int64 *v13; // r9
  __int64 v14; // r10
  __int64 v15; // r13
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 Address; // rax
  _QWORD *v20; // r15
  unsigned __int64 UltraMapping; // rax
  _QWORD *v22; // rdi
  _QWORD *v23; // rsi
  int v24; // r13d
  __int64 v25; // [rsp+70h] [rbp+8h]
  __int64 v26; // [rsp+80h] [rbp+18h] BYREF
  __int64 v27; // [rsp+88h] [rbp+20h]

  v4 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)(v4 + 104) )
    return 3LL;
  v6 = *(_QWORD *)(a1 + 144);
  v7 = *(__int64 **)(v6 + 24);
  v25 = *v7;
  if ( (*(_BYTE *)(v4 + 192) & 7) == 0 )
  {
    v8 = *(_DWORD *)(v4 - 508);
    v9 = v4 - 1280;
    if ( (v8 & 0xC00u) < 0xC00 )
      return 3LL;
    v10 = *(_QWORD *)(qword_140388AF0 + 8LL * *(unsigned __int16 *)(v9 + 1452));
    if ( *(_DWORD *)(v10 + 1144) )
    {
      if ( *(_QWORD *)(v10 + 1264) == v9 )
        return 3LL;
    }
  }
  v11 = (__int64)(a2 << 25) >> 16;
  if ( v11 >= 0xFFFFF68000000000uLL && v11 <= 0xFFFFF6FFFFFFFFFFuLL )
    return 0LL;
  PteShadow = *(_QWORD *)a2;
  if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBED7F8uLL )
    PteShadow = MiReadPteShadow(a2, PteShadow);
  v26 = PteShadow;
  v27 = MI_GET_PAGE_FRAME_FROM_PTE(&v26);
  v15 = 48 * v27 - 0x58000000000LL;
  if ( (*(_QWORD *)(v15 + 40) & 0x200000000000000LL) != 0 )
    return 0LL;
  v16 = v7[1];
  if ( v16 && *(_DWORD *)(v16 + 4) || (*(_DWORD *)(v14 + 1744) & 1) != 0 )
    return 2LL;
  if ( !(unsigned int)MiCombineCandidate(v13, 0, v15) )
    return 0LL;
  if ( (*(_DWORD *)v6 & 8) != 0 )
  {
    Address = MiLocateAddress(v11);
    if ( !Address || (*(_DWORD *)(Address + 48) & 7) != 2 )
      return 0LL;
  }
  ++*(_QWORD *)(v7[3] + 16);
  v20 = (_QWORD *)(*(_QWORD *)(v6 + 32) + 32LL * *(_QWORD *)(v6 + 8));
  if ( (PteShadow & 0x20) != 0 )
  {
    if ( (*(_DWORD *)v6 & 4) == 0
      || (unsigned __int64)(*(_QWORD *)(v11 & 0xFFFFFFFFFFFFF000uLL) - 1LL) > 0xFFFFFFFFFFFFFFFDuLL )
    {
      *v20 = MiComputeHash64(v11 & 0xFFFFFFFFFFFFF000uLL, v17, v18);
      goto LABEL_38;
    }
    return 0LL;
  }
  UltraMapping = MiGetUltraMapping(v7 + 19, 3LL, 1LL);
  v22 = (_QWORD *)(((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  if ( ((UltraMapping >> 9) & 0x7FFFFFFFF8LL) == 0x98000000000LL )
    return 0LL;
  v23 = (_QWORD *)v7[2];
  v23[9] = v22;
  v23[8] = v15;
  if ( !(unsigned int)MiMapArbitraryPage(v25, v23, 0, 0, 0) )
  {
    *v22 = 0LL;
    if ( (unsigned __int64)v22 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v22 <= 0xFFFFF6FB7DBED7F8uLL )
      MiWritePteShadow(v22, 0LL);
    return 0LL;
  }
  v24 = MiPerformCombineScan((__int64)v7, (__int64)v23);
  MiReleaseArbitraryPage((__int64)v23);
  *v22 = 0LL;
  if ( (unsigned __int64)v22 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v22 <= 0xFFFFF6FB7DBED7F8uLL )
    MiWritePteShadow(v22, 0LL);
  if ( v24 != 1 )
    return 0LL;
LABEL_38:
  if ( (*(_DWORD *)v6 & 4) != 0 && !(unsigned int)MiHashIsCommon(v7, *v20) )
    return 0LL;
  v20[1] = v27;
  v20[2] = 0LL;
  v20[3] = 0LL;
  if ( ++*(_QWORD *)(v6 + 8) != *(_QWORD *)(v6 + 16) )
    return 0LL;
  MiCombineWorkingSetTail(a1);
  return 1LL;
}
