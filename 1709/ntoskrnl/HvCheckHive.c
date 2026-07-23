/*
 * XREFs of HvCheckHive @ 0x14047CA0C
 * Callers:
 *     CmCheckRegistry @ 0x140471AFC (CmCheckRegistry.c)
 * Callees:
 *     HvpMapEntryGetFreeBin @ 0x140016924 (HvpMapEntryGetFreeBin.c)
 *     HvpGetBinContextInitialize @ 0x140080EC0 (HvpGetBinContextInitialize.c)
 *     HvpMapEntryGetBinAddress @ 0x140080F90 (HvpMapEntryGetBinAddress.c)
 *     HvpMapEntryReleaseBinAddress @ 0x1400812E0 (HvpMapEntryReleaseBinAddress.c)
 *     SetFailureLocation @ 0x1401E2FD4 (SetFailureLocation.c)
 *     HvpGetCellMap @ 0x14047D620 (HvpGetCellMap.c)
 *     HvCheckBin @ 0x1404D02F0 (HvCheckBin.c)
 *     HvMoveLayoutStats @ 0x1404D0524 (HvMoveLayoutStats.c)
 *     HvAddToLayoutStats @ 0x140583608 (HvAddToLayoutStats.c)
 */

__int64 HvCheckHive(__int64 a1, int a2, ...)
{
  _RTL_BITMAP *BitMapHeader; // rbp
  __int64 v3; // rcx
  __int64 v4; // r8
  unsigned int *v5; // r13
  __int64 v6; // rbx
  struct _EX_RUNDOWN_REF *v7; // r15
  unsigned int v8; // edi
  unsigned int v9; // r14d
  unsigned int v10; // r12d
  struct _EX_RUNDOWN_REF *CellMap; // rax
  __int64 FreeBin; // rax
  _DWORD *BinAddress; // rsi
  int v14; // r8d
  unsigned int v15; // eax
  int v16; // eax
  unsigned int v17; // ebp
  int v20; // [rsp+98h] [rbp+10h] BYREF
  __int64 v21; // [rsp+A0h] [rbp+18h] BYREF
  va_list va; // [rsp+A0h] [rbp+18h]
  _RTL_BITMAP *v23; // [rsp+A8h] [rbp+20h]
  __int64 v24; // [rsp+B0h] [rbp+28h]
  __int64 v25; // [rsp+B8h] [rbp+30h]
  va_list va1; // [rsp+C0h] [rbp+38h] BYREF

  va_start(va1, a2);
  va_start(va, a2);
  v21 = va_arg(va1, _QWORD);
  v23 = va_arg(va1, _RTL_BITMAP *);
  v24 = va_arg(va1, _QWORD);
  v25 = va_arg(va1, _QWORD);
  v20 = a2;
  BitMapHeader = v23;
  HvpGetBinContextInitialize(&v20);
  LODWORD(v21) = 0;
  v5 = (unsigned int *)(v4 + 1400);
  v6 = v25;
  v7 = 0LL;
  v8 = 0;
  v9 = 0;
LABEL_2:
  v10 = *v5;
  while ( 1 )
  {
    if ( v8 >= v10 )
    {
      ++v9;
      v5 += 158;
      v8 = 0x80000000;
      if ( v9 <= 1 )
        goto LABEL_2;
      v17 = 0;
      BinAddress = 0LL;
      goto LABEL_17;
    }
    CellMap = (struct _EX_RUNDOWN_REF *)HvpGetCellMap(v4, v8);
    v7 = CellMap;
    if ( !CellMap )
      break;
    FreeBin = HvpMapEntryGetFreeBin(CellMap);
    if ( FreeBin )
    {
      v8 += *(_DWORD *)(FreeBin + 16);
      if ( v24 )
      {
        HvAddToLayoutStats(v24);
        HvMoveLayoutStats();
      }
    }
    else
    {
      BinAddress = (_DWORD *)HvpMapEntryGetBinAddress(v3, (struct _EX_RUNDOWN_REF *)v3, &v20);
      v3 = v10 - v8;
      v15 = BinAddress[2];
      if ( v15 > (unsigned int)v3
        || v15 < 0x20
        || (v15 & 0xFFF) != 0
        || *BinAddress != 1852400232
        || BinAddress[1] != v8 )
      {
        v17 = -1073741492;
        if ( v6 )
        {
          SetFailureLocation(v6, 0, 16, -1073741492, 32);
LABEL_24:
          *(_DWORD *)(v6 + 296) = v9;
          *(_DWORD *)(v6 + 300) = v8;
          *(_QWORD *)(v6 + 304) = BinAddress;
        }
LABEL_17:
        if ( BinAddress )
          HvpMapEntryReleaseBinAddress(v3, v7, &v20);
        return v17;
      }
      v16 = HvCheckBin(v3, (int)BinAddress, v14, (int)va, BitMapHeader, v24, v6);
      v17 = v16;
      if ( v16 < 0 )
      {
        if ( v6 )
        {
          SetFailureLocation(v6, 0, 16, v16, 48);
          goto LABEL_24;
        }
        goto LABEL_17;
      }
      v8 += BinAddress[2];
      HvpMapEntryReleaseBinAddress(v3, v7, &v20);
      v4 = a1;
      BitMapHeader = v23;
    }
  }
  v17 = -1073741492;
  if ( v6 )
  {
    SetFailureLocation(v6, 0, 16, -1073741492, 0);
    *(_DWORD *)(v6 + 296) = v9;
    *(_DWORD *)(v6 + 300) = v8;
  }
  return v17;
}
