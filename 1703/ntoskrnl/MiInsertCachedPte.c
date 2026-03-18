/*
 * XREFs of MiInsertCachedPte @ 0x1400A2790
 * Callers:
 *     MiInsertInSystemSpace @ 0x140060AA0 (MiInsertInSystemSpace.c)
 *     MiCombinePte @ 0x14008AB80 (MiCombinePte.c)
 *     MmCopyToCachedPage @ 0x14009F980 (MmCopyToCachedPage.c)
 *     MiReleasePtes @ 0x1400A23A0 (MiReleasePtes.c)
 *     MiSharePages @ 0x1400A3D30 (MiSharePages.c)
 *     MmUnmapIoSpace @ 0x1401238F0 (MmUnmapIoSpace.c)
 * Callees:
 *     KeFlushTb @ 0x140063C74 (KeFlushTb.c)
 *     MiEmptyPteBins @ 0x1400844C4 (MiEmptyPteBins.c)
 *     MiReplenishBitMap @ 0x140084610 (MiReplenishBitMap.c)
 *     MiReleaseLargePteMappings @ 0x14013D2CC (MiReleaseLargePteMappings.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiMakePageFilePte @ 0x14017CF3C (MiMakePageFilePte.c)
 *     MiUpdatePageFileHighInPte @ 0x14017D06C (MiUpdatePageFileHighInPte.c)
 */

__int64 __fastcall MiInsertCachedPte(__int64 a1, _QWORD *a2, unsigned int a3)
{
  __int64 v3; // rbp
  unsigned __int64 v7; // r13
  int v8; // r11d
  unsigned __int64 v9; // rcx
  char v10; // bl
  __int64 v11; // rdx
  __int64 v12; // r15
  int v13; // esi
  volatile signed __int64 *v14; // r12
  unsigned __int64 v15; // rcx
  __int64 PageFilePte; // rax
  int v17; // r11d
  __int64 v18; // r8
  unsigned __int64 v19; // rbx
  signed __int64 v20; // r10
  unsigned __int8 CurrentIrql; // bp
  int v22; // ecx
  unsigned __int64 v23; // rax
  __int64 updated; // rax
  __int64 v25; // rcx
  signed __int64 v26; // r10
  __int64 v27; // rcx
  unsigned int v28; // r10d
  int v29; // r11d
  unsigned __int64 v30; // rax
  signed __int32 v31[8]; // [rsp+0h] [rbp-78h] BYREF
  signed __int64 v32; // [rsp+20h] [rbp-58h]
  signed __int64 v33; // [rsp+28h] [rbp-50h] BYREF
  signed __int64 v34; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v35; // [rsp+38h] [rbp-40h]
  int v37; // [rsp+98h] [rbp+20h]

  v3 = a3;
  if ( a3 > 0x40 )
    return 0LL;
  v7 = *(_QWORD *)(a1 + 16);
  v8 = 0;
  v37 = 0;
  v9 = (__int64)((_QWORD)a2 << 25) >> 16;
  if ( v9 >= 0xFFFFF68000000000uLL && v9 <= 0xFFFFF6FFFFFFFFFFuLL )
  {
    v8 = 1;
    v37 = 1;
    v7 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  }
  if ( a2 == (_QWORD *)v7 )
    return 0LL;
  if ( a3 == 1 )
  {
    v10 = 1;
  }
  else
  {
    v10 = 0;
    a2[1] = MiMakePageFilePte(a3);
    if ( (unsigned int)MiPteInShadowRange(a2 + 1) )
      MiWritePteShadow(a2 + 1);
  }
  v11 = *(_QWORD *)(a1 + 88);
  if ( v8 )
    v11 += 72LL * (unsigned __int16)KeNumberNodes;
  v12 = v11 + 72LL * KeGetCurrentPrcb()->ParentNode->Affinity.Reserved[0];
  _InterlockedOr(v31, 0);
  v13 = KiTbFlushTimeStamp;
  if ( !KiTbFlushTimeStamp )
  {
    do
    {
      KeFlushTb(0, 1u);
      _InterlockedOr(v31, 0);
      v13 = KiTbFlushTimeStamp;
    }
    while ( !KiTbFlushTimeStamp );
    v8 = v37;
  }
  v14 = (volatile signed __int64 *)(v12 + 8LL * (v13 & 7));
  if ( v8 == 1 )
  {
    v15 = v3 + *(int *)(v12 + 64);
    if ( v15 >= 0x80 )
    {
      MiEmptyPteBins(a1, 1);
      return 0LL;
    }
    if ( v15 >= 0x40 )
      MiEmptyPteBins(a1, 0);
  }
  v35 = (unsigned __int64)(v10 & 0xF) << 12;
  PageFilePte = MiMakePageFilePte(0LL);
  v19 = v18 | PageFilePte & 0xFFFFFFFFFFFF0FFFuLL;
LABEL_23:
  v20 = *v14;
  v32 = *v14;
  while ( 1 )
  {
    while ( 1 )
    {
      v33 = v20;
      if ( (_DWORD)v20 != v13 )
      {
        if ( HIDWORD(v20) )
          break;
      }
      updated = MiUpdatePageFileHighInPte(v19, HIDWORD(v32));
      *a2 = updated;
      v19 = updated;
      if ( (unsigned int)MiPteInShadowRange(a2) )
        MiWritePteShadow(v25);
      LODWORD(v34) = v13;
      HIDWORD(v34) = (__int64)((__int64)a2 - v7) >> 3;
      v20 = _InterlockedCompareExchange64(v14, v34, v26);
      v32 = v20;
      if ( v20 == v33 )
      {
        _InterlockedExchangeAdd((volatile signed __int32 *)(v12 + 64), a3);
        return 1LL;
      }
    }
    if ( !(_DWORD)v20 )
      goto LABEL_23;
    _InterlockedOr(v31, 0);
    if ( (unsigned int)(KiTbFlushTimeStamp - v20) <= 2
      && ((v20 & 1) != 0 || (unsigned int)(KiTbFlushTimeStamp - v20) < 2) )
    {
      break;
    }
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v20 = _InterlockedCompareExchange64(v14, 0LL, v20);
    v32 = v20;
    if ( v20 == v33 )
    {
      if ( v17 )
      {
        v22 = MiReleaseLargePteMappings(a1, &v33, 0LL);
      }
      else
      {
        v23 = MiReplenishBitMap(a1, HIDWORD(v33), 0);
        v22 = v23;
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 96), v23);
      }
      _InterlockedExchangeAdd((volatile signed __int32 *)(v12 + 64), -v22);
      v20 = 0LL;
      v32 = 0LL;
    }
    __writecr8(CurrentIrql);
    v17 = v37;
  }
  HIDWORD(v34) = (__int64)((__int64)a2 - v7) >> 3;
  *a2 = v35 | MiMakePageFilePte(0LL) & 0xFFFFFFFFFFFF0FFFuLL;
  if ( (unsigned int)MiPteInShadowRange(a2) )
    MiWritePteShadow(v27);
  if ( v29 )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)(v12 + 64), -(int)MiReleaseLargePteMappings(a1, &v34, 0LL));
  }
  else
  {
    v30 = MiReplenishBitMap(a1, v28, 0);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 96), v30);
    _InterlockedExchangeAdd((volatile signed __int32 *)(v12 + 64), -(int)v30);
  }
  return 1LL;
}
