/*
 * XREFs of HvCheckHive @ 0x140515888
 * Callers:
 *     CmCheckRegistry @ 0x1404B6EBC (CmCheckRegistry.c)
 * Callees:
 *     HvpGetBinContextInitialize @ 0x14008CF2C (HvpGetBinContextInitialize.c)
 *     HvpMapEntryGetBinAddress @ 0x14008D010 (HvpMapEntryGetBinAddress.c)
 *     HvpMapEntryReleaseBinAddress @ 0x14008D170 (HvpMapEntryReleaseBinAddress.c)
 *     HvpMapEntryGetFreeBin @ 0x1400A80DC (HvpMapEntryGetFreeBin.c)
 *     SetFailureLocation @ 0x1401DEAE4 (SetFailureLocation.c)
 *     HvAddToLayoutStats @ 0x1404476B4 (HvAddToLayoutStats.c)
 *     HvCheckBin @ 0x140513920 (HvCheckBin.c)
 *     HvMoveLayoutStats @ 0x140513B50 (HvMoveLayoutStats.c)
 *     HvpGetCellMap @ 0x140515540 (HvpGetCellMap.c)
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
  int v11; // edx
  _DWORD *v12; // rcx
  struct _EX_RUNDOWN_REF *CellMap; // rax
  __int64 FreeBin; // rax
  _DWORD *BinAddress; // rsi
  __int64 v16; // r8
  unsigned int v17; // eax
  int v18; // eax
  unsigned int v19; // ebp
  int v22; // [rsp+98h] [rbp+10h] BYREF
  __int64 v23; // [rsp+A0h] [rbp+18h] BYREF
  va_list va; // [rsp+A0h] [rbp+18h]
  _RTL_BITMAP *v25; // [rsp+A8h] [rbp+20h]
  __int64 v26; // [rsp+B0h] [rbp+28h]
  __int64 v27; // [rsp+B8h] [rbp+30h]
  va_list va1; // [rsp+C0h] [rbp+38h] BYREF

  va_start(va1, a2);
  va_start(va, a2);
  v23 = va_arg(va1, _QWORD);
  v25 = va_arg(va1, _RTL_BITMAP *);
  v26 = va_arg(va1, _QWORD);
  v27 = va_arg(va1, _QWORD);
  v22 = a2;
  BitMapHeader = v25;
  HvpGetBinContextInitialize(&v22);
  LODWORD(v23) = 0;
  v5 = (unsigned int *)(v4 + 1400);
  v6 = v27;
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
      v19 = 0;
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
      v11 = *(_DWORD *)(FreeBin + 16);
      v8 += v11;
      if ( v26 )
      {
        HvAddToLayoutStats(v26, v11);
        HvMoveLayoutStats(v12);
      }
    }
    else
    {
      BinAddress = (_DWORD *)HvpMapEntryGetBinAddress(v3, (struct _EX_RUNDOWN_REF *)v3, &v22);
      v3 = v10 - v8;
      v17 = BinAddress[2];
      if ( v17 > (unsigned int)v3
        || v17 < 0x20
        || (v17 & 0xFFF) != 0
        || *BinAddress != 1852400232
        || BinAddress[1] != v8 )
      {
        v19 = -1073741492;
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
          HvpMapEntryReleaseBinAddress(v3, v7, &v22);
        return v19;
      }
      v18 = HvCheckBin(v3, BinAddress, v16, (__int64 *)va, BitMapHeader, v26, v6);
      v19 = v18;
      if ( v18 < 0 )
      {
        if ( v6 )
        {
          SetFailureLocation(v6, 0, 16, v18, 48);
          goto LABEL_24;
        }
        goto LABEL_17;
      }
      v8 += BinAddress[2];
      HvpMapEntryReleaseBinAddress(v3, v7, &v22);
      v4 = a1;
      BitMapHeader = v25;
    }
  }
  v19 = -1073741492;
  if ( v6 )
  {
    SetFailureLocation(v6, 0, 16, -1073741492, 0);
    *(_DWORD *)(v6 + 296) = v9;
    *(_DWORD *)(v6 + 300) = v8;
  }
  return v19;
}
