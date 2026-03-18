/*
 * XREFs of KiSelectLowestRankedThread @ 0x1400A723C
 * Callers:
 *     KiSelectNextThread @ 0x1400A70C0 (KiSelectNextThread.c)
 *     KiSelectReadyThreadEx @ 0x1400EE3A0 (KiSelectReadyThreadEx.c)
 *     KeDelayExecutionThread @ 0x140104BA0 (KeDelayExecutionThread.c)
 * Callees:
 *     KiSelectThreadFromSchedulingGroup @ 0x1400A9160 (KiSelectThreadFromSchedulingGroup.c)
 */

__int64 __fastcall KiSelectLowestRankedThread(__int64 a1)
{
  unsigned __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rax
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rax
  __int64 v8; // rdx
  __int64 i; // rax
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rax

  if ( KiPerfIsoEnabled )
  {
    v2 = **(_QWORD **)(a1 + 192) - ((**(_QWORD **)(a1 + 192) >> 1) & 0x5555555555555555LL);
    if ( (unsigned int)((0x101010101010101LL
                       * (((v2 & 0x3333333333333333LL)
                         + ((v2 >> 2) & 0x3333333333333333LL)
                         + (((v2 & 0x3333333333333333LL) + ((v2 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24 < KiPerfIsoEnabled )
      return 0LL;
    v3 = *(_QWORD *)(a1 + 200);
    v4 = *(_QWORD *)(a1 + 24920);
    if ( v3 != v4 )
    {
      v5 = v4 & ~v3;
      if ( (*(_QWORD *)(*(_QWORD *)(a1 + 192) + 16LL) & v5) == 0 )
      {
        _BitScanForward64(&v6, v5);
        if ( (*(_DWORD *)(KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64 * *(unsigned __int8 *)(a1 + 208)
                                                                              + (int)v6]]
                        + 236) & 0x10) == 0 )
          return 0LL;
      }
    }
  }
  v8 = 0LL;
  for ( i = a1 + 22896; ; i = v10 + 392 )
  {
    v11 = *(_QWORD *)(i + 8);
    if ( (v11 & 1) != 0 )
    {
      if ( v11 == 1 )
        return v8;
      v12 = v11 ^ (i | 1);
    }
    else
    {
      v12 = *(_QWORD *)(i + 8);
    }
    if ( !v12 )
      break;
    v10 = v12 - 88;
    v8 = KiSelectThreadFromSchedulingGroup(a1, v12 - 88, 0LL);
    if ( v8 )
      break;
  }
  return v8;
}
