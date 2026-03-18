/*
 * XREFs of MiInsertCachedPte @ 0x1401109A0
 * Callers:
 *     MiReleasePtes @ 0x140110560 (MiReleasePtes.c)
 *     MmUnmapIoSpace @ 0x14013D150 (MmUnmapIoSpace.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     KeFlushTb @ 0x1400349E0 (KeFlushTb.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiReplenishBitMap @ 0x14009E090 (MiReplenishBitMap.c)
 *     MiEmptyPteBins @ 0x1400DAC70 (MiEmptyPteBins.c)
 *     MiMakePageFilePte @ 0x1401A65FC (MiMakePageFilePte.c)
 *     MiUpdatePageFileHighInPte @ 0x1401A6710 (MiUpdatePageFileHighInPte.c)
 *     MiReleaseLargePteMappings @ 0x140267410 (MiReleaseLargePteMappings.c)
 */

__int64 __fastcall MiInsertCachedPte(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 v3; // r14
  __int64 v7; // r10
  unsigned __int64 v8; // r13
  int v9; // r11d
  unsigned __int64 v10; // rcx
  __int64 PageFilePte; // rax
  __int64 *v12; // r8
  unsigned __int64 v13; // r9
  unsigned __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // r12
  int v17; // ebp
  volatile signed __int64 *v18; // r15
  unsigned __int64 v19; // rcx
  unsigned __int64 updated; // rbx
  int v21; // r11d
  signed __int64 v22; // r10
  unsigned __int8 CurrentIrql; // r14
  int v24; // ecx
  ULONG_PTR v25; // rax
  __int64 v26; // r8
  signed __int64 v27; // r10
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  unsigned int v31; // r10d
  int v32; // r11d
  unsigned int v33; // ecx
  ULONG_PTR v34; // rax
  signed __int32 v35[8]; // [rsp+0h] [rbp-78h] BYREF
  signed __int64 v36; // [rsp+20h] [rbp-58h]
  signed __int64 v37; // [rsp+28h] [rbp-50h] BYREF
  __int64 v38; // [rsp+30h] [rbp-48h]
  signed __int64 v39; // [rsp+38h] [rbp-40h] BYREF
  int v41; // [rsp+98h] [rbp+20h]

  v3 = a3;
  if ( a3 > 0x40 )
    return 0LL;
  LODWORD(v7) = 0;
  v8 = *(_QWORD *)(a1 + 16);
  v9 = 0;
  v41 = 0;
  v10 = (__int64)(a2 << 25) >> 16;
  v38 = 4096LL;
  if ( v10 >= 0xFFFFF68000000000uLL && v10 <= 0xFFFFF6FFFFFFFFFFuLL )
  {
    v9 = 1;
    v41 = 1;
    v8 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    if ( a3 > (4096 - (a2 & 0xFFF)) >> 3 )
      return 0LL;
  }
  if ( a2 == v8 )
    return 0LL;
  if ( a3 != 1 )
  {
    PageFilePte = MiMakePageFilePte(a3);
    *v12 = PageFilePte;
    if ( (unsigned __int64)v12 >= v14 && (unsigned __int64)v12 <= v13 )
      MiWritePteShadow((__int64)v12, PageFilePte, (__int64)v12);
    v38 = v7;
  }
  v15 = *(_QWORD *)(a1 + 80);
  if ( v9 )
    v15 += 72LL * (unsigned __int16)KeNumberNodes;
  v16 = v15 + 72LL * KeGetCurrentPrcb()->ParentNode->Affinity.Reserved[0];
  _InterlockedOr(v35, v7);
  v17 = KiTbFlushTimeStamp;
  if ( !KiTbFlushTimeStamp )
  {
    do
    {
      KeFlushTb(0, 1u);
      _InterlockedOr(v35, 0);
      v17 = KiTbFlushTimeStamp;
    }
    while ( !KiTbFlushTimeStamp );
    v9 = v41;
  }
  v18 = (volatile signed __int64 *)(v16 + 8LL * (v17 & 7));
  if ( v9 )
  {
    v19 = v3 + *(int *)(v16 + 64);
    if ( v19 >= 0x80 )
    {
      MiEmptyPteBins(a1, 1);
      return 0LL;
    }
    if ( v19 >= 0x40 )
      MiEmptyPteBins(a1, 0);
  }
  updated = v38 | MiMakePageFilePte(0LL) & 0xFFFFFFFFFFFF0FFFuLL;
LABEL_24:
  v22 = *v18;
  v36 = *v18;
  while ( 1 )
  {
    while ( 1 )
    {
      v37 = v22;
      if ( (_DWORD)v22 != v17 )
      {
        if ( HIDWORD(v22) )
          break;
      }
      updated = MiUpdatePageFileHighInPte(updated, HIDWORD(v36));
      *(_QWORD *)a2 = updated;
      if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBED7F8uLL )
        MiWritePteShadow(a2, updated, v26);
      LODWORD(v39) = v17;
      HIDWORD(v39) = (__int64)(a2 - v8) >> 3;
      v22 = _InterlockedCompareExchange64(v18, v39, v27);
      v36 = v22;
      if ( v22 == v37 )
      {
        v33 = a3;
        goto LABEL_48;
      }
    }
    if ( !(_DWORD)v22 )
      goto LABEL_24;
    _InterlockedOr(v35, 0);
    if ( (unsigned int)(KiTbFlushTimeStamp - v22) <= 2
      && ((v22 & 1) != 0 || (unsigned int)(KiTbFlushTimeStamp - v22) < 2) )
    {
      break;
    }
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v22 = _InterlockedCompareExchange64(v18, 0LL, v22);
    v36 = v22;
    if ( v22 == v37 )
    {
      if ( v21 )
      {
        v24 = MiReleaseLargePteMappings(a1, &v37, 0LL);
      }
      else
      {
        v25 = MiReplenishBitMap((unsigned __int64 *)a1, HIDWORD(v37), 0);
        v24 = v25;
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 88), v25);
      }
      _InterlockedExchangeAdd((volatile signed __int32 *)(v16 + 64), -v24);
      v22 = 0LL;
      v36 = 0LL;
    }
    __writecr8(CurrentIrql);
    v21 = v41;
  }
  HIDWORD(v39) = (__int64)(a2 - v8) >> 3;
  *(_QWORD *)a2 = v38 | MiMakePageFilePte(0LL) & 0xFFFFFFFFFFFF0FFFuLL;
  if ( MiPteInShadowRange(a2) )
    MiWritePteShadow(v29, v28, v30);
  if ( v32 )
  {
    v33 = -(int)MiReleaseLargePteMappings(a1, &v39, 0LL);
  }
  else
  {
    v34 = MiReplenishBitMap((unsigned __int64 *)a1, v31, 0);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 88), v34);
    v33 = -(int)v34;
  }
LABEL_48:
  _InterlockedExchangeAdd((volatile signed __int32 *)(v16 + 64), v33);
  return 1LL;
}
