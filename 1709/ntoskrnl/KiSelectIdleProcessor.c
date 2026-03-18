/*
 * XREFs of KiSelectIdleProcessor @ 0x14014377C
 * Callers:
 *     KiChooseTargetProcessor @ 0x140073900 (KiChooseTargetProcessor.c)
 * Callees:
 *     KiReduceByEffectiveIdleSmtSet @ 0x14011AE24 (KiReduceByEffectiveIdleSmtSet.c)
 *     KiFindRankBiasedIdleSmtSet @ 0x14020A48C (KiFindRankBiasedIdleSmtSet.c)
 */

__int64 __fastcall KiSelectIdleProcessor(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v6; // rbx
  __int64 v10; // r8
  char v12; // cl
  unsigned __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // rax
  char v16; // cl
  int v17; // edx
  __int64 v18; // [rsp+58h] [rbp+20h] BYREF

  v6 = 0LL;
  if ( a4 )
  {
LABEL_2:
    v10 = a1 & *(_QWORD *)a3;
    v18 = v10;
    if ( !v10 )
      return v6;
    if ( *(_QWORD *)(a4 + 200) != *(_QWORD *)(a4 + 24920) )
    {
      if ( a5 && (unsigned __int8)KiFindRankBiasedIdleSmtSet(a4, &v18, v10, a1) )
        goto LABEL_10;
      v10 = v18;
      if ( (v18 & *(_QWORD *)(a3 + 8)) != 0 )
      {
        v10 = v18 & *(_QWORD *)(a3 + 8);
      }
      else
      {
        if ( a5 )
          return v6;
        if ( *(_QWORD *)(a2 + 192) == a3 )
        {
          KiReduceByEffectiveIdleSmtSet(a2, &v18);
LABEL_10:
          v10 = v18;
        }
      }
    }
    if ( (v10 & *(_QWORD *)(a4 + 200)) != 0 )
      return a4;
    v12 = *(_BYTE *)(a4 + 209);
    if ( (v10 & *(_QWORD *)(a4 + 24920)) != 0 )
      v10 &= *(_QWORD *)(a4 + 24920);
    _BitScanForward64(&v13, __ROR8__(v10, v12));
    return KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64 * *(unsigned __int8 *)(a4 + 208)
                                                               + (((unsigned __int8)v13 + v12) & 0x3F)]];
  }
  v14 = a1 & *(_QWORD *)(a3 + 136);
  if ( v14 )
  {
    v15 = KiProcessorBlock[*(unsigned int *)(a3 + 92)];
    v16 = *(_BYTE *)(v15 + 209);
    v17 = *(unsigned __int8 *)(v15 + 208);
    _BitScanForward64((unsigned __int64 *)&v15, __ROR8__(v14, v16));
    a4 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64 * v17 + (((_BYTE)v15 + v16) & 0x3F)]];
    goto LABEL_2;
  }
  return 0LL;
}
