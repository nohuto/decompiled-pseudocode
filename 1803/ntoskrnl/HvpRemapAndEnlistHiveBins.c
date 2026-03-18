/*
 * XREFs of HvpRemapAndEnlistHiveBins @ 0x1404E31E4
 * Callers:
 *     HvLoadHive @ 0x140496B18 (HvLoadHive.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 *     HvpEnlistFreeCells @ 0x1404E3340 (HvpEnlistFreeCells.c)
 *     HvpValidateLoadedBin @ 0x1404E3420 (HvpValidateLoadedBin.c)
 *     HvpMarkDirty @ 0x1404E3FF0 (HvpMarkDirty.c)
 *     HvpGetCellMap @ 0x1404E4320 (HvpGetCellMap.c)
 *     CmpReleaseGlobalQuota @ 0x140514098 (CmpReleaseGlobalQuota.c)
 *     HvpAllocateBin @ 0x140517824 (HvpAllocateBin.c)
 *     HvpPointMapEntriesToBuffer @ 0x1405667B8 (HvpPointMapEntriesToBuffer.c)
 *     HvpProtectBin @ 0x140566C48 (HvpProtectBin.c)
 *     HvpViewMapPromoteRangeToMapping @ 0x140566C84 (HvpViewMapPromoteRangeToMapping.c)
 *     HvpFreeBin @ 0x1405840EC (HvpFreeBin.c)
 *     HvIsRangeDirty @ 0x1407013B0 (HvIsRangeDirty.c)
 */

__int64 __fastcall HvpRemapAndEnlistHiveBins(_DWORD *BugCheckParameter2)
{
  __int64 v1; // r12
  unsigned int v2; // ebx
  unsigned int v3; // r15d
  char v4; // r13
  unsigned int v6; // ebp
  unsigned int i; // edi
  _DWORD *v8; // r14
  unsigned int v9; // eax
  int v10; // eax
  int v11; // ebx
  __int64 v13; // rbp
  _DWORD *v14; // r14
  int v15; // eax
  int Bin; // eax
  unsigned int j; // ebx
  __int64 v18; // rdx
  unsigned __int64 v19; // r8
  _OWORD *v20; // rax
  _OWORD *v21; // rcx
  __int128 v22; // xmm1
  __int64 v23; // rcx
  int v24; // eax
  unsigned int v25; // [rsp+80h] [rbp+8h]
  __int64 v26; // [rsp+88h] [rbp+10h] BYREF
  __int64 v27; // [rsp+90h] [rbp+18h] BYREF
  __int64 CellMap; // [rsp+98h] [rbp+20h]

  v27 = 0LL;
  v1 = 0LL;
  v2 = BugCheckParameter2[68];
  v3 = 0;
  v4 = 0;
  v26 = 0LL;
  v25 = v2;
  if ( (BugCheckParameter2[40] & 0x20000) != 0 )
    v6 = BugCheckParameter2[56] - 4096;
  else
    v6 = 0;
  for ( i = 0; i < v6; v2 = v25 )
  {
    CellMap = HvpGetCellMap(BugCheckParameter2, i);
    v8 = (_DWORD *)(*(_QWORD *)(CellMap + 8) & 0xFFFFFFFFFFFFFFF0uLL);
    if ( !(unsigned __int8)HvpValidateLoadedBin(v8, i, v2) )
    {
      if ( !CmpSelfHeal && (CmpBootType & 6) == 0 )
        return (unsigned int)-1073741492;
      if ( !(unsigned __int8)HvpMarkDirty((ULONG_PTR)BugCheckParameter2) )
        return (unsigned int)-1073741670;
      memset(v8, 0, 0x1000uLL);
      v8[7] = 0;
      *v8 = 1852400232;
      v8[1] = i & 0x7FFFFFFF;
      v4 = 1;
      v8[2] = 4096;
      v8[8] = 4064;
    }
    v9 = v8[2];
    if ( v9 != 4096 )
    {
      v3 = v8[2];
      if ( i + v9 > v6 )
        break;
      v11 = HvpViewMapPromoteRangeToMapping(BugCheckParameter2 + 54, i, v9, &v27);
      if ( v11 < 0 )
        return (unsigned int)v11;
      HvpPointMapEntriesToBuffer((ULONG_PTR)BugCheckParameter2, 0, 0LL);
      v8 = (_DWORD *)(*(_QWORD *)(CellMap + 8) & 0xFFFFFFFFFFFFFFF0uLL);
    }
    v10 = HvpEnlistFreeCells((ULONG_PTR)BugCheckParameter2);
    v11 = v10;
    if ( v10 == 1073741833 )
    {
      v4 = 1;
    }
    else if ( v10 < 0 )
    {
      return (unsigned int)v11;
    }
    i += v8[2];
  }
  while ( i < v2 )
  {
    v13 = HvpGetCellMap(BugCheckParameter2, i);
    v14 = (_DWORD *)(*(_QWORD *)(v13 + 8) & 0xFFFFFFFFFFFFFFF0uLL);
    if ( !(unsigned __int8)HvpValidateLoadedBin(v14, i, v2) )
    {
      if ( !CmpSelfHeal && (CmpBootType & 6) == 0 )
        return (unsigned int)-1073741492;
      if ( !(unsigned __int8)HvpMarkDirty((ULONG_PTR)BugCheckParameter2) )
        return (unsigned int)-1073741670;
      memset(v14, 0, 0x1000uLL);
      v14[7] = 0;
      *v14 = 1852400232;
      v14[1] = i & 0x7FFFFFFF;
      v4 = 1;
      v14[2] = 4096;
      v14[8] = 4064;
    }
    v15 = v14[2];
    if ( v15 != 4096 )
    {
      v3 = v14[2];
      Bin = HvpAllocateBin((_DWORD)BugCheckParameter2, v15, 0, 825445699, (__int64)&v26);
      v1 = v26;
      v11 = Bin;
      if ( Bin < 0 )
        goto LABEL_12;
      for ( j = 0; j < v3; *(_DWORD *)(v13 + 16) = 0 )
      {
        v13 = HvpGetCellMap(BugCheckParameter2, j + i);
        v18 = 32LL;
        v19 = *(_QWORD *)(v13 + 8) & 0xFFFFFFFFFFFFFFF0uLL;
        v20 = (_OWORD *)(v1 + j);
        v21 = (_OWORD *)v19;
        do
        {
          *v20 = *v21;
          v20[1] = v21[1];
          v20[2] = v21[2];
          v20[3] = v21[3];
          v20[4] = v21[4];
          v20[5] = v21[5];
          v20[6] = v21[6];
          v20 += 8;
          v22 = v21[7];
          v21 += 8;
          *(v20 - 1) = v22;
          --v18;
        }
        while ( v18 );
        if ( (*(_BYTE *)(v13 + 8) & 8) != 0 )
          HvpFreeBin(BugCheckParameter2, 4096LL, v19);
        else
          CmpReleaseGlobalQuota(4096LL);
        j += 4096;
        *(_QWORD *)v13 = 0LL;
        *(_QWORD *)(v13 + 8) = 0LL;
      }
      if ( !(unsigned __int8)HvIsRangeDirty(BugCheckParameter2, i, v3) )
      {
        v11 = HvpProtectBin(v23, v3, v1, 0LL);
        if ( v11 < 0 )
          goto LABEL_12;
      }
      HvpPointMapEntriesToBuffer((ULONG_PTR)BugCheckParameter2, 1, 0LL);
      v14 = (_DWORD *)(*(_QWORD *)(v13 + 8) & 0xFFFFFFFFFFFFFFF0uLL);
      v1 = 0LL;
      v26 = 0LL;
    }
    v24 = HvpEnlistFreeCells((ULONG_PTR)BugCheckParameter2);
    v11 = v24;
    if ( v24 == 1073741833 )
    {
      v4 = 1;
    }
    else if ( v24 < 0 )
    {
      return (unsigned int)v11;
    }
    i += v14[2];
    v2 = v25;
  }
  if ( v4 )
    return 1073741833;
  v11 = 0;
LABEL_12:
  if ( v1 )
    HvpFreeBin(BugCheckParameter2, v3, v1);
  return (unsigned int)v11;
}
