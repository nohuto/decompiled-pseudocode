/*
 * XREFs of HvpAddBin @ 0x14043A920
 * Callers:
 *     HvpDoAllocateCell @ 0x14048CDDC (HvpDoAllocateCell.c)
 * Callees:
 *     RtlCopyBitMap @ 0x14001E390 (RtlCopyBitMap.c)
 *     RtlNumberOfSetBits @ 0x14006E280 (RtlNumberOfSetBits.c)
 *     RtlClearBits @ 0x14008CF40 (RtlClearBits.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memset @ 0x140192D80 (memset.c)
 *     HvpFindFreeBin @ 0x14043AEF0 (HvpFindFreeBin.c)
 *     HvpAdjustHiveFreeDisplay @ 0x14043AFB4 (HvpAdjustHiveFreeDisplay.c)
 *     HvpExpandMap @ 0x14043B128 (HvpExpandMap.c)
 *     CmpCanGrowHive @ 0x14043B1FC (CmpCanGrowHive.c)
 *     CmpUpdateSystemHiveHysteresis @ 0x14043B514 (CmpUpdateSystemHiveHysteresis.c)
 *     CmpDoFileSetSizeEx @ 0x14043B560 (CmpDoFileSetSizeEx.c)
 *     CmpBoostActiveHiveWriter @ 0x14043B768 (CmpBoostActiveHiveWriter.c)
 *     HvpProtectBin @ 0x14048DBFC (HvpProtectBin.c)
 *     HvpAllocateBin @ 0x14048DC6C (HvpAllocateBin.c)
 *     HvpFreeBin @ 0x1404D289C (HvpFreeBin.c)
 *     HvpSetRangeProtection @ 0x1405151A8 (HvpSetRangeProtection.c)
 *     HvpPointMapEntriesToBuffer @ 0x140515304 (HvpPointMapEntriesToBuffer.c)
 *     HvpGetCellMap @ 0x140515540 (HvpGetCellMap.c)
 *     HvpMarkDirty @ 0x140515690 (HvpMarkDirty.c)
 *     HvpShrinkMap @ 0x140676A20 (HvpShrinkMap.c)
 *     HvpReviveDiscardedBin @ 0x140676AA8 (HvpReviveDiscardedBin.c)
 */

__int64 __fastcall HvpAddBin(ULONG_PTR BugCheckParameter2, unsigned int a2, int a3)
{
  unsigned int v3; // r14d
  __int64 v4; // r12
  _QWORD *v5; // r15
  unsigned int v6; // edi
  unsigned int v7; // r13d
  _QWORD *FreeBin; // rax
  __int64 v10; // rcx
  _DWORD *v11; // rbx
  char v12; // al
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned int v15; // ebx
  __int64 v16; // rdi
  int v17; // ebx
  unsigned int v18; // edi
  _RTL_BITMAP *v20; // rcx
  ULONG v21; // edx
  unsigned int v22; // r13d
  unsigned int v23; // r9d
  unsigned int *v24; // rbx
  void *v25; // rax
  bool v26; // zf
  void *v27; // rax
  __int64 v28; // rcx
  _QWORD *v29; // rax
  int v30; // ebx
  unsigned int v31; // r8d
  unsigned int v32; // ebx
  __int64 CellMap; // rax
  unsigned int v34; // r8d
  unsigned int v35; // r11d
  _QWORD *v36; // r10
  __int64 v37; // rax
  __int64 v38; // rax
  ULONG v39; // ebx
  __int64 v40; // rax
  ULONG v41; // edx
  __int64 v42; // rax
  char v43; // cl
  _DWORD *v44; // rdx
  _DWORD *v45; // rax
  __int64 *v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rdx
  int v49; // ebx
  ULONG v50; // eax
  __int64 v51; // rax
  ULONG v52; // eax
  unsigned int v53; // ebx
  unsigned int v54; // ebx
  ULONG_PTR v55; // rax
  __int64 v56; // rcx
  int i; // [rsp+40h] [rbp-59h]
  _DWORD v58[3]; // [rsp+44h] [rbp-55h] BYREF
  size_t Size; // [rsp+50h] [rbp-49h]
  void *v60; // [rsp+58h] [rbp-41h]
  unsigned int *v61; // [rsp+60h] [rbp-39h]
  unsigned int v62; // [rsp+68h] [rbp-31h]
  ULONG StartingIndex[2]; // [rsp+70h] [rbp-29h]
  __int64 v64; // [rsp+78h] [rbp-21h] BYREF
  __int64 v65; // [rsp+80h] [rbp-19h] BYREF
  __int64 v66; // [rsp+88h] [rbp-11h]
  void *v67; // [rsp+90h] [rbp-9h] BYREF
  __int64 v68; // [rsp+98h] [rbp-1h]
  _RTL_BITMAP Destination; // [rsp+A0h] [rbp+7h] BYREF
  _RTL_BITMAP BitMapHeader; // [rsp+B0h] [rbp+17h] BYREF
  char v71; // [rsp+100h] [rbp+67h]
  char v72; // [rsp+108h] [rbp+6Fh]
  unsigned int v73; // [rsp+118h] [rbp+7Fh]

  i = -1;
  v3 = 0;
  v4 = a3;
  LODWORD(Size) = 0;
  v5 = 0LL;
  v62 = 0;
  v6 = (a2 + 4127) & 0xFFFFF000;
  v61 = 0LL;
  v7 = 0;
  v60 = 0LL;
  v65 = 0LL;
  v64 = 0LL;
  v66 = 0LL;
  *(_QWORD *)&v58[1] = 0LL;
  v67 = 0LL;
  v73 = 0;
  v72 = 0;
  v71 = 0;
  if ( v6 <= 0x3000 && v6 - (unsigned __int64)a2 - 32 < 0xE00 )
    v6 += 4096;
  if ( *(_BYTE *)(BugCheckParameter2 + 4168) && a3 != 1
    || (FreeBin = (_QWORD *)HvpFindFreeBin(BugCheckParameter2), (v5 = FreeBin) == 0LL) )
  {
    v68 = 632 * v4;
    v3 = *(_DWORD *)(632 * v4 + BugCheckParameter2 + 1400);
    v73 = v3;
    v7 = v6 + v3;
    v58[0] = v6 + v3;
    if ( !(_DWORD)v4 && v6 <= 0x40000 && (((v3 + 4096) ^ (v7 + 4095)) & 0xFFFC0000) != 0 )
    {
      v73 = ((v3 + 266239) & 0xFFFC0000) - 4096;
      v7 = v6 + v73;
      v58[0] = v6 + v73;
    }
    if ( v7 < v3
      || !(unsigned __int8)CmpCanGrowHive(BugCheckParameter2, v7)
      || (int)HvpExpandMap(BugCheckParameter2, (unsigned int)v4, v3, v7) < 0 )
    {
      goto LABEL_102;
    }
    v72 = 1;
    if ( (int)HvpAdjustHiveFreeDisplay(BugCheckParameter2, v7, (unsigned int)v4) < 0 )
      goto LABEL_85;
    *(_DWORD *)(632 * v4 + BugCheckParameter2 + 1400) = v7;
    if ( !(_DWORD)v4 )
    {
      if ( (*(_DWORD *)(BugCheckParameter2 + 144) & 1) == 0 )
      {
        v20 = (_RTL_BITMAP *)(BugCheckParameter2 + 72);
        v21 = *(_DWORD *)(BugCheckParameter2 + 72);
        v22 = (v7 + 511) >> 9;
        StartingIndex[0] = v21;
        v23 = (((v22 + 7) >> 3) + 3) & 0xFFFFFFFC;
        LODWORD(Size) = v23;
        if ( *(_DWORD *)(BugCheckParameter2 + 92) >= v23 )
        {
          v38 = *(_QWORD *)(BugCheckParameter2 + 80);
          v39 = v22 - v21;
          v20->SizeOfBitMap = v22;
          *(_QWORD *)(BugCheckParameter2 + 80) = v38;
          RtlClearBits(v20, v21, v22 - v21);
          v40 = *(_QWORD *)(BugCheckParameter2 + 104);
          v41 = StartingIndex[0];
          *(_DWORD *)(BugCheckParameter2 + 96) = v22;
          *(_QWORD *)(BugCheckParameter2 + 104) = v40;
          RtlClearBits((PRTL_BITMAP)(BugCheckParameter2 + 96), v41, v39);
        }
        else
        {
          v61 = (unsigned int *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(BugCheckParameter2 + 24))(
                                  v23,
                                  0LL,
                                  959532355LL);
          v24 = v61;
          if ( !v61
            || (v25 = (void *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(BugCheckParameter2 + 24))(
                                (unsigned int)Size,
                                0LL,
                                959532355LL),
                (v60 = v25) == 0LL) )
          {
            v7 = v58[0];
            goto LABEL_85;
          }
          v26 = *(_QWORD *)(BugCheckParameter2 + 80) == 0LL;
          Destination.SizeOfBitMap = v22;
          Destination.Buffer = v61;
          BitMapHeader.SizeOfBitMap = v22;
          BitMapHeader.Buffer = (unsigned int *)v25;
          if ( v26 )
          {
            memset(v61, 0, (unsigned int)Size);
          }
          else
          {
            RtlCopyBitMap((PRTL_BITMAP)(BugCheckParameter2 + 72), &Destination, 0);
            RtlClearBits(&Destination, StartingIndex[0], v22 - StartingIndex[0]);
            (*(void (__fastcall **)(_QWORD, _QWORD))(BugCheckParameter2 + 32))(
              *(_QWORD *)(BugCheckParameter2 + 80),
              *(unsigned int *)(BugCheckParameter2 + 92));
          }
          if ( *(_QWORD *)(BugCheckParameter2 + 104) )
          {
            RtlCopyBitMap((PRTL_BITMAP)(BugCheckParameter2 + 96), &BitMapHeader, 0);
            RtlClearBits(&BitMapHeader, StartingIndex[0], v22 - StartingIndex[0]);
            (*(void (__fastcall **)(_QWORD, _QWORD))(BugCheckParameter2 + 32))(
              *(_QWORD *)(BugCheckParameter2 + 104),
              *(unsigned int *)(BugCheckParameter2 + 92));
          }
          else
          {
            memset(v60, 0, (unsigned int)Size);
          }
          v27 = v60;
          *(_DWORD *)(BugCheckParameter2 + 72) = v22;
          *(_QWORD *)(BugCheckParameter2 + 80) = v24;
          *(_QWORD *)(BugCheckParameter2 + 104) = v27;
          LODWORD(v27) = Size;
          *(_DWORD *)(BugCheckParameter2 + 96) = v22;
          *(_DWORD *)(BugCheckParameter2 + 92) = (_DWORD)v27;
        }
        v7 = v58[0];
        v71 = 1;
      }
      if ( (*(_DWORD *)(BugCheckParameter2 + 144) & 0x8001) == 0 )
      {
        CmpBoostActiveHiveWriter(v10, BugCheckParameter2 + 5464);
        v61 = 0LL;
        v60 = 0LL;
        if ( (int)CmpDoFileSetSizeEx(BugCheckParameter2, 0LL, v7 + 4096, 1LL) < 0 )
          goto LABEL_85;
        if ( (*(_DWORD *)(BugCheckParameter2 + 5360) & 0x800) != 0 && !*(_DWORD *)(BugCheckParameter2 + 5492) )
          *(_DWORD *)(BugCheckParameter2 + 5492) = v3;
      }
    }
    if ( v73 == v3 )
    {
LABEL_13:
      v61 = 0LL;
      v60 = 0LL;
      if ( (int)HvpAllocateBin(BugCheckParameter2, v6, v4, v73, 909200707, (__int64)&v67, (__int64)&v58[1]) < 0 )
        goto LABEL_85;
      if ( *(_QWORD *)&v58[1] )
      {
        v11 = *(_DWORD **)&v58[1];
      }
      else
      {
        v11 = v67;
        if ( v67 )
        {
          v12 = 0;
          goto LABEL_17;
        }
      }
      v12 = 1;
LABEL_17:
      v61 = 0LL;
      v60 = 0LL;
      if ( (int)HvpProtectBin(BugCheckParameter2, v6, v4, v73, (__int64)v11, v12) >= 0 )
      {
        memset(v11, 0, v6);
        v11[7] = 0;
        v13 = v65;
        v14 = v64;
        v11[1] = v73 & 0x7FFFFFFF;
        *v11 = 1852400232;
        v11[2] = v6;
        v11[8] = v6 - 32;
        if ( v13 || v14 )
        {
          v15 = v73;
          HvpPointMapEntriesToBuffer(BugCheckParameter2, v3 + ((_DWORD)v4 << 31), v66);
          v46 = (__int64 *)(BugCheckParameter2 + v68 + 2008);
          v47 = *v46;
          if ( *(__int64 **)(*v46 + 8) != v46 )
            __fastfail(3u);
          v48 = v66;
          *(_QWORD *)v66 = v47;
          *(_QWORD *)(v48 + 8) = v46;
          *(_QWORD *)(v47 + 8) = v48;
          *v46 = v48;
        }
        else
        {
          v15 = v73;
        }
        v16 = *(_QWORD *)&v58[1];
        v17 = ((_DWORD)v4 << 31) + v15;
        v73 = v17;
        HvpPointMapEntriesToBuffer(BugCheckParameter2, v17, 0LL);
        if ( (_DWORD)v4 )
          goto LABEL_22;
        if ( (*(_DWORD *)(BugCheckParameter2 + 144) & 1) != 0
          || (v61 = 0LL, v60 = 0LL, (unsigned __int8)HvpMarkDirty(BugCheckParameter2)) )
        {
          CmpUpdateSystemHiveHysteresis(BugCheckParameter2, v7, v3);
          HvpSetRangeProtection(BugCheckParameter2);
LABEL_22:
          v66 = 0LL;
          v18 = v17;
          v65 = 0LL;
          v64 = 0LL;
          v67 = 0LL;
          *(_QWORD *)&v58[1] = 0LL;
          v61 = 0LL;
          v60 = 0LL;
          i = v17;
          goto LABEL_23;
        }
LABEL_86:
        HvpShrinkMap(BugCheckParameter2, (unsigned int)v4, v7, v3);
        *(_DWORD *)(632 * v4 + BugCheckParameter2 + 1400) = v3;
LABEL_87:
        if ( v71 )
        {
          *(_QWORD *)(BugCheckParameter2 + 80) = *(_QWORD *)(BugCheckParameter2 + 80);
          *(_DWORD *)(BugCheckParameter2 + 72) = v3 >> 9;
          v49 = *(_DWORD *)(BugCheckParameter2 + 88);
          v50 = RtlNumberOfSetBits((PRTL_BITMAP)(BugCheckParameter2 + 72));
          *(_DWORD *)(BugCheckParameter2 + 88) = v50;
          _InterlockedExchangeAdd(&CmpDirtySectorCount, v50 - v49);
          v51 = *(_QWORD *)(BugCheckParameter2 + 104);
          *(_DWORD *)(BugCheckParameter2 + 96) = v3 >> 9;
          *(_QWORD *)(BugCheckParameter2 + 104) = v51;
          v52 = RtlNumberOfSetBits((PRTL_BITMAP)(BugCheckParameter2 + 96));
          v16 = *(_QWORD *)&v58[1];
          *(_DWORD *)(BugCheckParameter2 + 112) = v52;
        }
        v53 = Size;
        if ( v60 )
          (*(void (__fastcall **)(void *, _QWORD))(BugCheckParameter2 + 32))(v60, (unsigned int)Size);
        if ( v61 )
          (*(void (__fastcall **)(unsigned int *, _QWORD))(BugCheckParameter2 + 32))(v61, v53);
        if ( v65 || v64 )
        {
          v54 = v73;
          HvpFreeBin(BugCheckParameter2, v73 - v3, v4, v65, v64);
        }
        else
        {
          v54 = v73;
        }
        if ( v66 )
          (*(void (__fastcall **)(__int64, __int64))(BugCheckParameter2 + 32))(v66, 32LL);
        if ( v67 || v16 )
          HvpFreeBin(BugCheckParameter2, v7 - v54, v4, (_DWORD)v67, v16);
        goto LABEL_102;
      }
LABEL_85:
      v16 = *(_QWORD *)&v58[1];
      goto LABEL_86;
    }
    v61 = 0LL;
    v60 = 0LL;
    v58[0] = v73 - v3;
    if ( (int)HvpAllocateBin(BugCheckParameter2, v73 - v3, v4, v3, 808602947, (__int64)&v65, (__int64)&v64) < 0 )
      goto LABEL_85;
    v42 = v64;
    if ( v64 )
    {
      *(_QWORD *)StartingIndex = v64;
    }
    else
    {
      *(_QWORD *)StartingIndex = v65;
      v42 = v65;
      if ( v65 )
      {
        v43 = 0;
LABEL_72:
        v61 = 0LL;
        v60 = 0LL;
        if ( (int)HvpProtectBin(BugCheckParameter2, v58[0], v4, v3, v42, v43) < 0 )
          goto LABEL_85;
        memset(*(void **)StartingIndex, 0, v58[0]);
        v44 = *(_DWORD **)StartingIndex;
        *(_DWORD *)(*(_QWORD *)StartingIndex + 28LL) = 0;
        v44[1] = v3 & 0x7FFFFFFF;
        v44[2] = v58[0];
        *v44 = 1852400232;
        v44[8] = v58[0] - 32;
        v45 = (_DWORD *)(*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(BugCheckParameter2 + 24))(
                          32LL,
                          0LL,
                          825380163LL);
        v61 = 0LL;
        v60 = 0LL;
        v66 = (__int64)v45;
        if ( !v45 )
          goto LABEL_85;
        v45[4] = v58[0];
        v45[5] = v3;
        v45[6] = 1;
        goto LABEL_13;
      }
    }
    v43 = 1;
    goto LABEL_72;
  }
  v28 = *FreeBin;
  v29 = (_QWORD *)FreeBin[1];
  if ( *(_QWORD **)(v28 + 8) != v5 || (_QWORD *)*v29 != v5 )
    __fastfail(3u);
  *v29 = v28;
  *(_QWORD *)(v28 + 8) = v29;
  v30 = (_DWORD)v4 << 31;
  if ( !(unsigned __int8)HvpMarkDirty(BugCheckParameter2) )
    goto LABEL_102;
  if ( (v5[3] & 1) != 0 )
  {
    v31 = 0;
    v18 = v30 + *((_DWORD *)v5 + 5);
    v32 = v62;
    for ( i = v18; v31 < v32; *v36 = v37 )
    {
      CellMap = HvpGetCellMap(BugCheckParameter2, v31 + v18);
      v36 = (_QWORD *)CellMap;
      if ( !CellMap )
        KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v35, 0x38DuLL);
      *(_QWORD *)(CellMap + 8) &= ~2uLL;
      v37 = v34;
      v31 = v34 + 4096;
    }
    if ( !(_DWORD)v4 )
      HvpSetRangeProtection(BugCheckParameter2);
LABEL_23:
    if ( v18 != -1 )
      goto LABEL_24;
    v16 = *(_QWORD *)&v58[1];
    if ( !v72 )
      goto LABEL_87;
    goto LABEL_86;
  }
  if ( (int)HvpReviveDiscardedBin(BugCheckParameter2) >= 0 )
  {
    v18 = v30 + *((_DWORD *)v5 + 5);
    i = v18;
    goto LABEL_23;
  }
LABEL_102:
  v18 = i;
LABEL_24:
  if ( v5 )
  {
    if ( v18 == -1 )
    {
      v55 = 632 * v4 + BugCheckParameter2 + 2008;
      v56 = *(_QWORD *)v55;
      if ( *(_QWORD *)(*(_QWORD *)v55 + 8LL) != v55 )
        __fastfail(3u);
      *v5 = v56;
      v5[1] = v55;
      *(_QWORD *)(v56 + 8) = v5;
      *(_QWORD *)v55 = v5;
    }
    else
    {
      (*(void (__fastcall **)(_QWORD *, __int64))(BugCheckParameter2 + 32))(v5, 32LL);
    }
  }
  return v18;
}
