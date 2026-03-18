/*
 * XREFs of MiCombinePte @ 0x140040950
 * Callers:
 *     <none>
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiCombineCandidate @ 0x140030060 (MiCombineCandidate.c)
 *     MiMapArbitraryPage @ 0x1400323B0 (MiMapArbitraryPage.c)
 *     MiLocateAddress @ 0x140033EE0 (MiLocateAddress.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiPerformCombineScan @ 0x14009EED0 (MiPerformCombineScan.c)
 *     MiComputeHash64 @ 0x14009EF60 (MiComputeHash64.c)
 *     MiReleaseArbitraryPage @ 0x1400AE620 (MiReleaseArbitraryPage.c)
 *     MiCombineWorkingSetTail @ 0x1400B5CC0 (MiCombineWorkingSetTail.c)
 *     MiGetUltraMapping @ 0x1401389F0 (MiGetUltraMapping.c)
 *     MiHashIsCommon @ 0x14026BD98 (MiHashIsCommon.c)
 */

__int64 __fastcall MiCombinePte(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v3; // rax
  __int64 v7; // r14
  __int64 v8; // r12
  __int64 *v9; // r13
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rbx
  __int64 v13; // r10
  unsigned __int64 v14; // r15
  __int64 v15; // rbp
  __int64 v17; // rax
  unsigned __int64 v18; // rdi
  unsigned __int64 Address; // rax
  __int64 v20; // rax
  __int64 v21; // r8
  _QWORD *v22; // r11
  unsigned __int64 v23; // rax
  _QWORD *v24; // rdi
  _QWORD *v25; // rbx
  int v26; // ebp
  __int64 v27; // rdx
  __int64 v28; // rcx
  unsigned __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // [rsp+70h] [rbp+8h]
  __int64 v35; // [rsp+88h] [rbp+20h] BYREF

  v3 = *(_QWORD *)(a1 + 24);
  if ( *(_QWORD *)(v3 + 104) )
    return 3LL;
  v7 = *(_QWORD *)(a1 + 168);
  v8 = *(_QWORD *)(v7 + 24);
  v9 = *(__int64 **)v8;
  if ( (*(_BYTE *)(v3 + 184) & 7) == 0 )
  {
    v10 = v3 - 1280;
    if ( (*(_DWORD *)(v3 - 508) & 0xC00u) < 0xC00 )
      return 3LL;
    v11 = *(_QWORD *)(qword_1403CBD88 + 8LL * *(unsigned __int16 *)(v10 + 1454));
    if ( *(_DWORD *)(v11 + 1144) )
    {
      if ( *(_QWORD *)(v11 + 1264) == v10 )
        return 3LL;
    }
  }
  if ( a3 >= 1 )
    return 0LL;
  v12 = *(_QWORD *)a2;
  if ( MiPteInShadowRange(a2)
    && (MiFlags & 0x1800000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v12 & 1) != 0
    && ((v12 & 0x20) == 0 || (v12 & 0x42) == 0) )
  {
    v29 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v29 )
    {
      v30 = *(_QWORD *)(v29 + 8 * ((a2 >> 3) & 0x1FF));
      v31 = v12 | 0x20;
      if ( (v30 & 0x20) == 0 )
        v31 = v12;
      v12 = v31;
      if ( (v30 & 0x42) != 0 )
        v12 = v31 | 0x42;
    }
  }
  v35 = v12;
  v14 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v35) >> 12) & 0xFFFFFFFFFLL;
  v15 = 48 * v14 - 0x58000000000LL;
  if ( (*(_QWORD *)(v15 + 40) & 0x200000000000000LL) != 0 )
    return 0LL;
  v17 = *(_QWORD *)(v8 + 8);
  if ( (!v17 || !*(_DWORD *)(v17 + 4)) && (*(_DWORD *)(v13 + 1744) & 1) == 0 )
  {
    if ( !(unsigned int)MiCombineCandidate(v9, 0, 48 * v14 - 0x58000000000LL) )
      return 0LL;
    v18 = (__int64)(a2 << 25) >> 16;
    if ( (*(_DWORD *)v7 & 8) != 0 )
    {
      Address = MiLocateAddress(v18);
      if ( !Address || (*(_DWORD *)(Address + 48) & 7) != 2 )
        return 0LL;
    }
    ++*(_QWORD *)(*(_QWORD *)(v8 + 24) + 16LL);
    v34 = *(_QWORD *)(v7 + 32) + 32LL * *(_QWORD *)(v7 + 8);
    if ( (v12 & 0x20) != 0 )
    {
      if ( (*(_DWORD *)v7 & 4) != 0
        && (unsigned __int64)(*(_QWORD *)(v18 & 0xFFFFFFFFFFFFF000uLL) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
      {
        return 0LL;
      }
      v20 = MiComputeHash64(v18 & 0xFFFFFFFFFFFFF000uLL);
      *v22 = v20;
    }
    else
    {
      v23 = (unsigned __int64)MiGetUltraMapping(v8 + 200, 3LL, 1LL) >> 9;
      v24 = (_QWORD *)((v23 & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      if ( (v23 & 0x7FFFFFFFF8LL) == 0x98000000000LL )
        return 0LL;
      v25 = *(_QWORD **)(v8 + 16);
      v25[9] = v24;
      v25[8] = v15;
      if ( !(unsigned int)MiMapArbitraryPage(v9, v25, 0, 0, 0) )
      {
        *v24 = ZeroPte;
        if ( MiPteInShadowRange((unsigned __int64)v24) )
          MiWritePteShadow(v33, v32);
        return 0LL;
      }
      v26 = MiPerformCombineScan(v8, v25, v34);
      MiReleaseArbitraryPage(v25);
      *v24 = ZeroPte;
      if ( MiPteInShadowRange((unsigned __int64)v24) )
        MiWritePteShadow(v28, v27);
      if ( v26 != 1 )
        return 0LL;
      v22 = (_QWORD *)v34;
      v21 = 0LL;
    }
    if ( (*(_DWORD *)v7 & 4) != 0 )
    {
      if ( !(unsigned int)MiHashIsCommon(v8, *v22) )
        return 0LL;
      v21 = 0LL;
    }
    v22[1] = v14;
    v22[2] = v21;
    v22[3] = v21;
    if ( ++*(_QWORD *)(v7 + 8) == *(_QWORD *)(v7 + 16) )
      return MiCombineWorkingSetTail(a1);
    return 0LL;
  }
  return 4LL;
}
