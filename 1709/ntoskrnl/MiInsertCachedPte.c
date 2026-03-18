/*
 * XREFs of MiInsertCachedPte @ 0x1400753D0
 * Callers:
 *     MmCopyToCachedPage @ 0x14001CF90 (MmCopyToCachedPage.c)
 *     MiReleasePtes @ 0x140074F70 (MiReleasePtes.c)
 *     MmUnmapIoSpace @ 0x1401186A0 (MmUnmapIoSpace.c)
 * Callees:
 *     KeFlushTb @ 0x140059170 (KeFlushTb.c)
 *     MiEmptyPteBins @ 0x1400A4EA0 (MiEmptyPteBins.c)
 *     MiReplenishBitMap @ 0x1400E6290 (MiReplenishBitMap.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MiMakePageFilePte @ 0x14017C7A8 (MiMakePageFilePte.c)
 *     MiUpdatePageFileHighInPte @ 0x14017C90C (MiUpdatePageFileHighInPte.c)
 *     MiReleaseLargePteMappings @ 0x14022BEB8 (MiReleaseLargePteMappings.c)
 */

__int64 __fastcall MiInsertCachedPte(__int64 a1, unsigned __int64 a2, __int64 *a3)
{
  __int64 v3; // r14
  __int64 v7; // r10
  unsigned __int64 v8; // r13
  int v9; // r11d
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // r9
  __int64 PageFilePte; // rax
  unsigned __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // r15
  int v16; // ebp
  volatile signed __int64 *v17; // r12
  unsigned __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // r11d
  unsigned __int64 updated; // rbx
  signed __int64 v25; // r10
  unsigned __int8 CurrentIrql; // r14
  int v27; // ecx
  unsigned __int64 v28; // rax
  signed __int64 v29; // r10
  __int64 v30; // rax
  unsigned int v31; // r10d
  int v32; // r11d
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rax
  signed __int32 v35[8]; // [rsp+0h] [rbp-78h] BYREF
  signed __int64 v36; // [rsp+20h] [rbp-58h]
  signed __int64 v37; // [rsp+28h] [rbp-50h] BYREF
  __int64 v38; // [rsp+30h] [rbp-48h]
  signed __int64 v39; // [rsp+38h] [rbp-40h] BYREF
  unsigned int v40; // [rsp+90h] [rbp+18h]
  int v41; // [rsp+98h] [rbp+20h]

  v40 = (unsigned int)a3;
  v3 = (unsigned int)a3;
  if ( (unsigned int)a3 > 0x40 )
    return 0LL;
  LODWORD(v7) = 0;
  v8 = *(_QWORD *)(a1 + 16);
  v9 = 0;
  v41 = 0;
  v10 = (__int64)(a2 << 25) >> 16;
  if ( v10 >= 0xFFFFF68000000000uLL && v10 <= 0xFFFFF6FFFFFFFFFFuLL )
  {
    v9 = 1;
    v41 = 1;
    v8 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  }
  if ( a2 == v8 )
    return 0LL;
  v11 = 0xFFFFF6FB7DBED7F8uLL;
  if ( (_DWORD)a3 == 1 )
  {
    v38 = 4096LL;
  }
  else
  {
    PageFilePte = MiMakePageFilePte((unsigned int)a3, 0xFFFFF6FB7DBED000uLL, a2 + 8, 0xFFFFF6FB7DBED7F8uLL);
    *a3 = PageFilePte;
    if ( (unsigned __int64)a3 >= v13 && (unsigned __int64)a3 <= v11 )
      MiWritePteShadow(a3, PageFilePte);
    v38 = v7;
  }
  v14 = *(_QWORD *)(a1 + 88);
  if ( v9 )
    v14 += 72LL * (unsigned __int16)KeNumberNodes;
  v15 = v14 + 72LL * KeGetCurrentPrcb()->ParentNode->Affinity.Reserved[0];
  _InterlockedOr(v35, v7);
  v16 = KiTbFlushTimeStamp;
  if ( !KiTbFlushTimeStamp )
  {
    do
    {
      KeFlushTb(0LL, 1LL, (__int64)a3);
      _InterlockedOr(v35, 0);
      v16 = KiTbFlushTimeStamp;
    }
    while ( !KiTbFlushTimeStamp );
    v9 = v41;
  }
  v17 = (volatile signed __int64 *)(v15 + 8LL * (v16 & 7));
  if ( v9 == 1 )
  {
    v18 = v3 + *(int *)(v15 + 64);
    if ( v18 >= 0x80 )
    {
      MiEmptyPteBins(a1, 1LL, a3, v11);
      return 0LL;
    }
    if ( v18 >= 0x40 )
      MiEmptyPteBins(a1, 0LL, a3, v11);
  }
  v19 = MiMakePageFilePte(0LL, v14, a3, v11);
  updated = v38 | v19 & 0xFFFFFFFFFFFF0FFFuLL;
LABEL_25:
  v25 = *v17;
  v36 = *v17;
  while ( 1 )
  {
    while ( 1 )
    {
      v37 = v25;
      if ( (_DWORD)v25 != v16 )
      {
        if ( HIDWORD(v25) )
          break;
      }
      updated = MiUpdatePageFileHighInPte(updated, HIDWORD(v36));
      *(_QWORD *)a2 = updated;
      if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBED7F8uLL )
        MiWritePteShadow(a2, updated);
      LODWORD(v39) = v16;
      HIDWORD(v39) = (__int64)(a2 - v8) >> 3;
      v25 = _InterlockedCompareExchange64(v17, v39, v29);
      v36 = v25;
      if ( v25 == v37 )
      {
        _InterlockedExchangeAdd((volatile signed __int32 *)(v15 + 64), v40);
        return 1LL;
      }
    }
    if ( !(_DWORD)v25 )
      goto LABEL_25;
    _InterlockedOr(v35, 0);
    if ( (unsigned int)(KiTbFlushTimeStamp - v25) <= 2
      && ((v25 & 1) != 0 || (unsigned int)(KiTbFlushTimeStamp - v25) < 2) )
    {
      break;
    }
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v25 = _InterlockedCompareExchange64(v17, 0LL, v25);
    v36 = v25;
    if ( v25 == v37 )
    {
      if ( v23 )
      {
        v27 = MiReleaseLargePteMappings(a1, &v37, 0LL);
      }
      else
      {
        v28 = MiReplenishBitMap(a1, HIDWORD(v37), 0LL);
        v27 = v28;
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 96), v28);
      }
      _InterlockedExchangeAdd((volatile signed __int32 *)(v15 + 64), -v27);
      v25 = 0LL;
      v36 = 0LL;
    }
    __writecr8(CurrentIrql);
    v23 = v41;
  }
  HIDWORD(v39) = (__int64)(a2 - v8) >> 3;
  v30 = MiMakePageFilePte(0LL, v20, v21, v22);
  v33 = v38 | v30 & 0xFFFFFFFFFFFF0FFFuLL;
  *(_QWORD *)a2 = v33;
  if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBED7F8uLL )
    MiWritePteShadow(a2, v33);
  if ( v32 )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)(v15 + 64), -(int)MiReleaseLargePteMappings(a1, &v39, 0LL));
  }
  else
  {
    v34 = MiReplenishBitMap(a1, v31, 0LL);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 96), v34);
    _InterlockedExchangeAdd((volatile signed __int32 *)(v15 + 64), -(int)v34);
  }
  return 1LL;
}
