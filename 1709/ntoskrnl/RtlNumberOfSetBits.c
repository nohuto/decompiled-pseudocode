/*
 * XREFs of RtlNumberOfSetBits @ 0x1400D4B40
 * Callers:
 *     ?StStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_CREATE_PARAMS@@@Z @ 0x1400051F8 (-StStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_CREATE_PARAMS@@@Z.c)
 *     ?StDmCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x1400068A4 (-StDmCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StGetStatsWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@W4_ST_STATS_LEVEL@@PEAU_ST_STATS@@PEAK@Z @ 0x1400094A4 (-StGetStatsWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@W4_ST_STATS_LEVEL@@PEAU_ST_STATS@@PEAK@Z.c)
 *     RtlNumberOfClearBits @ 0x1400D4B20 (RtlNumberOfClearBits.c)
 *     SepAddLuidToIndexEntry @ 0x14048CF8C (SepAddLuidToIndexEntry.c)
 *     HvWriteHivePrimaryFile @ 0x1404E4520 (HvWriteHivePrimaryFile.c)
 *     HvpAddBin @ 0x1404E4EF8 (HvpAddBin.c)
 *     PspQueryRateControlHistory @ 0x14051041C (PspQueryRateControlHistory.c)
 *     HvpGenerateLogEntry @ 0x140513CAC (HvpGenerateLogEntry.c)
 *     MiReleaseDriverPtes @ 0x1405413F0 (MiReleaseDriverPtes.c)
 *     SepGetLowBoxNumberEntry @ 0x14056403C (SepGetLowBoxNumberEntry.c)
 *     HvFreeHivePartial @ 0x140565630 (HvFreeHivePartial.c)
 *     HvUpdateUnreconciledVector @ 0x14056FAF4 (HvUpdateUnreconciledVector.c)
 *     PopEvaluateGlobalUserStatus @ 0x1405A000C (PopEvaluateGlobalUserStatus.c)
 *     CmpLoadHiveThread @ 0x1405BE770 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x1405C2F10 (CmpMountPreloadedHives.c)
 *     HvFoldBackUnreconciledData @ 0x140696D80 (HvFoldBackUnreconciledData.c)
 *     HvpRecoverData @ 0x1406A1A10 (HvpRecoverData.c)
 *     HvApplyLegacyLogFile @ 0x1406A257C (HvApplyLegacyLogFile.c)
 *     EtwQueryPerformanceTraceInformation @ 0x140747E84 (EtwQueryPerformanceTraceInformation.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlNumberOfSetBits(PRTL_BITMAP BitMapHeader)
{
  ULONG v1; // r9d
  unsigned int *Buffer; // rax
  unsigned int v3; // r10d
  unsigned int SizeOfBitMap; // r14d
  unsigned int v5; // ebp
  int v6; // r11d
  unsigned int v7; // edi
  unsigned int v8; // r8d
  int v9; // r10d
  int v10; // esi
  unsigned int v11; // r11d
  int i; // ebx
  char v13; // dl
  unsigned int v14; // ecx
  __int64 v15; // r10
  unsigned __int64 v16; // r8
  char v18; // dl

  v1 = 0;
  Buffer = BitMapHeader->Buffer;
  v3 = BitMapHeader->SizeOfBitMap >> 3;
  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  v5 = BitMapHeader->SizeOfBitMap & 7;
  v6 = (unsigned __int8)Buffer & 7;
  v7 = v3 + (v5 != 0);
  if ( 8 - (unsigned __int64)((__int64)BitMapHeader->Buffer & 7) > (unsigned __int64)BitMapHeader->SizeOfBitMap >> 3 )
  {
    v8 = v3 + ((BitMapHeader->SizeOfBitMap & 7) != 0);
    v10 = 0;
    v11 = 0;
  }
  else
  {
    v8 = 8 - v6;
    v9 = ((_BYTE)v3 - (8 - (_BYTE)v6)) & 7;
    v10 = v9 + 1;
    if ( !v5 )
      v10 = v9;
    v11 = v7 - v10 - v8;
  }
  for ( i = 0; v8; --v8 )
  {
    v13 = *(_BYTE *)Buffer;
    Buffer = (unsigned int *)((char *)Buffer + 1);
    if ( i == v7 - 1 && v5 )
      v13 &= byte_1402C7730[SizeOfBitMap & 7];
    ++i;
    v1 += RtlpBitsClearTotal[(unsigned __int8)~v13];
  }
  if ( v11 )
  {
    v14 = ((v11 - 1) >> 3) + 1;
    v15 = v14;
    i += 8 * v14;
    do
    {
      v16 = *(_QWORD *)Buffer;
      Buffer += 2;
      v1 += (unsigned int)((0x101010101010101LL
                          * ((((v16 - ((v16 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                            + (((v16 - ((v16 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                            + ((((v16 - ((v16 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                              + (((v16 - ((v16 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
      --v15;
    }
    while ( v15 );
  }
  for ( ; v10; --v10 )
  {
    v18 = *(_BYTE *)Buffer;
    Buffer = (unsigned int *)((char *)Buffer + 1);
    if ( i == v7 - 1 && v5 )
      v18 &= byte_1402C7730[SizeOfBitMap & 7];
    ++i;
    v1 += RtlpBitsClearTotal[(unsigned __int8)~v18];
  }
  return v1;
}
