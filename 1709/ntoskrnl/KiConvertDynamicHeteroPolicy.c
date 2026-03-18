/*
 * XREFs of KiConvertDynamicHeteroPolicy @ 0x14020A308
 * Callers:
 *     KiFindReadyThread @ 0x140006FD4 (KiFindReadyThread.c)
 *     KiSearchForNewThreadOnProcessor @ 0x14006EE10 (KiSearchForNewThreadOnProcessor.c)
 *     KiSelectReadyThread @ 0x14006F300 (KiSelectReadyThread.c)
 *     KiCheckPreferredHeteroProcessor @ 0x140092B80 (KiCheckPreferredHeteroProcessor.c)
 *     KeClockInterruptNotify @ 0x140095E30 (KeClockInterruptNotify.c)
 *     KiSetHeteroPolicyThread @ 0x140150BC8 (KiSetHeteroPolicyThread.c)
 *     KiHeteroChooseTargetProcessor @ 0x14020A5B8 (KiHeteroChooseTargetProcessor.c)
 * Callees:
 *     KiIsThreadRankBiased @ 0x14020C860 (KiIsThreadRankBiased.c)
 */

__int64 __fastcall KiConvertDynamicHeteroPolicy(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r9
  unsigned __int64 v4; // r10
  int v5; // ecx
  unsigned int v6; // ebx
  __int64 v8; // rax
  unsigned int v9; // edx
  unsigned int v10; // ecx
  __int64 v11; // rcx
  int v12; // ecx
  signed __int32 v13; // ett

  v3 = a1;
  v4 = 0x140000000uLL;
  v5 = *(_DWORD *)(a1 + 120);
  v6 = 1;
  if ( (v5 & 0x400000) != 0 )
    return (unsigned int)dword_1404002E4[2 * (v5 & 3)];
  v8 = *(_QWORD *)(v3 + 1920);
  if ( !v8 )
  {
    if ( (*(_DWORD *)(v3 + 1508) & 3) != 0 )
    {
      if ( (*(_DWORD *)(v3 + 1508) & 3) != 1 )
      {
        if ( (*(_DWORD *)(v3 + 1508) & 3) == 2 )
        {
          v9 = 1;
          goto LABEL_30;
        }
LABEL_24:
        v9 = 0;
        goto LABEL_30;
      }
    }
    else
    {
      v9 = KiProcessPolicyToQosMappingTable[(*(_DWORD *)(*(_QWORD *)(v3 + 544) + 440LL) >> 6) & 7];
      if ( (KiDynamicHeteroCpuPolicyMask & 4) == 0 || ((*(_DWORD *)(*(_QWORD *)(v3 + 544) + 440LL) >> 6) & 7) == 3 )
        goto LABEL_34;
      v10 = *(_DWORD *)(v3 + 84);
      if ( *(_DWORD *)(v3 + 80) > v10 )
        v10 = *(_DWORD *)(v3 + 80);
      if ( v10 >= KiDynamicHeteroCpuPolicyExpectedCycles
        || (v6 = 0, !*(_DWORD *)((char *)&Mm64BitPhysicalAddress + 1))
        || (KiDynamicHeteroCpuPolicyMask & 8) == 0 )
      {
LABEL_34:
        if ( v9 != 3 )
          goto LABEL_30;
        if ( !(unsigned __int8)KiIsThreadRankBiased(v3, a3) )
        {
          if ( *(char *)(v3 + 195) < 15 )
          {
            v11 = *(_QWORD *)(v3 + 544);
            v9 = 2;
            if ( *(_BYTE *)(v11 + 1119) == 1 )
              goto LABEL_30;
            if ( (KiDynamicHeteroCpuPolicyMask & 1) == 0 || *(_BYTE *)(v11 + 1474) != 2 )
            {
              if ( (KiDynamicHeteroCpuPolicyMask & 2) == 0 )
                goto LABEL_30;
              v12 = *(char *)(v3 + 195);
              if ( v12 < KiDynamicHeteroCpuPolicyImportantPriority )
              {
                if ( (*(_DWORD *)(v3 + 116) & 0x400) != 0 && (char)v12 >= 8 )
                  v9 = 0;
                goto LABEL_30;
              }
            }
          }
          goto LABEL_24;
        }
      }
    }
    v9 = 2;
    goto LABEL_30;
  }
  v9 = *(_DWORD *)(v8 + 120) & 3;
  if ( (v5 & 3u) <= v9 )
    return (unsigned int)dword_1404002E4[2 * (v5 & 3)];
  do
LABEL_30:
    v13 = *(_DWORD *)(v3 + 120);
  while ( v13 != _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 120), v9 | v13 & 0xFFFFFFFC, v13) );
  return *(unsigned int *)(v4 + 4 * (v6 + 2LL * (int)v9) + 4195040);
}
