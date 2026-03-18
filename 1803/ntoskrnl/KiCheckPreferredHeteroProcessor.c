/*
 * XREFs of KiCheckPreferredHeteroProcessor @ 0x1400ECA74
 * Callers:
 *     KiQuantumEnd @ 0x1400EBA30 (KiQuantumEnd.c)
 *     KiUpdateRunTime @ 0x1401099B0 (KiUpdateRunTime.c)
 *     KiSendHeteroRescheduleIntRequestHelper @ 0x1402488A8 (KiSendHeteroRescheduleIntRequestHelper.c)
 * Callees:
 *     KiConvertDynamicHeteroPolicy @ 0x140248000 (KiConvertDynamicHeteroPolicy.c)
 *     KiGenerateHeteroSets @ 0x14024826C (KiGenerateHeteroSets.c)
 */

__int64 __fastcall KiCheckPreferredHeteroProcessor(__int64 a1, __int64 a2, int a3)
{
  int v3; // eax
  unsigned int v4; // edi
  __int64 *v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rax
  __int64 v14; // rax
  _QWORD v15[5]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v16; // [rsp+60h] [rbp+8h] BYREF
  __int64 v17; // [rsp+78h] [rbp+20h] BYREF

  LOBYTE(v3) = *(_BYTE *)(a1 + 125);
  v4 = 0;
  if ( !(_BYTE)v3 )
    return 0LL;
  v3 = (unsigned __int8)v3;
  if ( (unsigned __int8)v3 >= 5u )
    v3 = KiConvertDynamicHeteroPolicy(a1, a2, a2);
  v9 = *(__int64 **)(a2 + 192);
  KiGenerateHeteroSets((_DWORD)v9, *(_QWORD *)(a1 + 576), v3, (unsigned int)&v16, (__int64)v15, (__int64)&v17);
  v10 = *(_QWORD *)(a2 + 200);
  if ( (v10 & v17) == 0 )
    return 1LL;
  if ( (v10 & v16) != 0 )
    return 0LL;
  if ( !a3 )
  {
    LOBYTE(v4) = (KeGetCurrentPrcb()->GroupSetMember & v16) != 0;
    return v4;
  }
  v11 = *v9;
  if ( *(_QWORD *)(a2 + 200) != *(_QWORD *)(a2 + 24920) && (v11 & v9[1]) != 0 )
    v11 &= v9[1];
  if ( (v11 & v16) == 0 )
  {
    v12 = v15[0] & v11 & ~v16;
    if ( v12 )
    {
      while ( 1 )
      {
        _BitScanReverse64(&v13, v12);
        v14 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64 * *((unsigned __int16 *)v9 + 72) + (int)v13]];
        if ( *(_BYTE *)(v14 + 23859) > *(_BYTE *)(a2 + 23859) )
          break;
        v12 &= ~*(_QWORD *)(v14 + 200);
        if ( !v12 )
          return 0LL;
      }
      return 1LL;
    }
    return 0LL;
  }
  return 1LL;
}
