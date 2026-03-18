/*
 * XREFs of KeQueryCpuSetInformation @ 0x1405CBA44
 * Callers:
 *     ExpQuerySystemInformation @ 0x140528170 (ExpQuerySystemInformation.c)
 * Callees:
 *     KiGetCpuSetData @ 0x14003BE34 (KiGetCpuSetData.c)
 *     RtlTryEndReadTickLock @ 0x1401106EC (RtlTryEndReadTickLock.c)
 *     RtlBeginReadTickLock @ 0x140110700 (RtlBeginReadTickLock.c)
 *     memset @ 0x140192D80 (memset.c)
 */

__int64 __fastcall KeQueryCpuSetInformation(void *a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v5; // r15
  _QWORD *v6; // rbx
  unsigned int v7; // r14d
  unsigned int v8; // ecx
  _DWORD *v9; // r8
  unsigned int v10; // edx
  __int64 v11; // r9
  unsigned int v12; // r10d
  unsigned __int64 v13; // rsi
  unsigned __int16 v14; // r12
  unsigned __int64 v15; // r8
  __int64 CpuSetData; // rax
  int v17; // r10d
  __int64 v18; // r11
  int v19; // r8d
  char v20; // dl
  __int64 v21; // r8
  __int64 TickLock; // [rsp+40h] [rbp-58h]

  v5 = a1;
  if ( a4 )
  {
    v6 = (_QWORD *)(a4 + 1928);
    if ( (*(_DWORD *)(a4 + 1740) & 0x200) != 0 )
      v6 = (_QWORD *)*v6;
  }
  else
  {
    v6 = 0LL;
  }
  do
  {
    TickLock = RtlBeginReadTickLock(&KiCpuSetSequence);
    v7 = KiTotalCpuSetCount;
    v8 = 32 * KiTotalCpuSetCount;
    *v9 = 32 * KiTotalCpuSetCount;
    if ( v10 < v8 )
      return 3221225507LL;
    memset(v5, 0, v8);
    LODWORD(v11) = 0;
    v12 = 0;
    v13 = KiGroupBlock[0];
    v14 = KiActiveGroups;
    while ( v13 )
    {
      _BitScanForward64(&v15, v13);
      v13 &= ~(1LL << v15);
      CpuSetData = KiGetCpuSetData(v11, v15);
      *(_DWORD *)v18 = 32;
      *(_DWORD *)(v18 + 4) = 0;
      *(_DWORD *)(v18 + 8) = v19 | ((_DWORD)v11 << 16) | 0x100;
      *(_WORD *)(v18 + 12) = v11;
      *(_BYTE *)(v18 + 14) = *(_BYTE *)(CpuSetData + 1);
      *(_BYTE *)(v18 + 15) = *(_BYTE *)(CpuSetData + 2);
      *(_BYTE *)(v18 + 16) = *(_BYTE *)(CpuSetData + 3);
      *(_BYTE *)(v18 + 17) = *(_BYTE *)(CpuSetData + 4);
      *(_BYTE *)(v18 + 18) = *(_BYTE *)(CpuSetData + 5);
      v20 = 0;
      v21 = 1LL << v19;
      if ( (v21 & KiNonParkedCpuSets[v11]) == 0 )
      {
        v20 = 1;
        *(_BYTE *)(v18 + 19) |= 1u;
      }
      if ( (v21 & KiSystemAllowedCpuSets[v11]) != 0 )
      {
        if ( !a4 || (*(_DWORD *)(a4 + 1740) & 0x10000000) == 0 )
          goto LABEL_10;
      }
      else if ( v6 && (v21 & v6[v11]) != 0 )
      {
        v20 |= 4u;
      }
      v20 |= 0xAu;
LABEL_10:
      *(_BYTE *)(v18 + 19) = v20;
      *(_QWORD *)(v18 + 24) = *(_QWORD *)(CpuSetData + 8);
      v12 = v17 + 1;
      v5 = a1;
LABEL_11:
      if ( v12 >= v7 )
        goto LABEL_21;
    }
    LODWORD(v11) = v11 + 1;
    if ( (unsigned int)v11 < v14 )
    {
      v13 = KiGroupBlock[2 * (unsigned int)v11];
      goto LABEL_11;
    }
LABEL_21:
    ;
  }
  while ( !RtlTryEndReadTickLock(&KiCpuSetSequence, TickLock) );
  return 0LL;
}
