/*
 * XREFs of HvpAddBin @ 0x1404E4EF8
 * Callers:
 *     HvpDoAllocateCell @ 0x140479EE0 (HvpDoAllocateCell.c)
 * Callees:
 *     RtlClearBits @ 0x140080ED0 (RtlClearBits.c)
 *     RtlNumberOfSetBits @ 0x1400D4B40 (RtlNumberOfSetBits.c)
 *     RtlCopyBitMap @ 0x1400D4E00 (RtlCopyBitMap.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memset @ 0x140192F40 (memset.c)
 *     HvpFreeBin @ 0x140479E34 (HvpFreeBin.c)
 *     HvpSetRangeProtection @ 0x14047CF98 (HvpSetRangeProtection.c)
 *     HvpMarkDirty @ 0x14047D1F0 (HvpMarkDirty.c)
 *     HvpPointMapEntriesToBuffer @ 0x14047D3E0 (HvpPointMapEntriesToBuffer.c)
 *     HvpGetCellMap @ 0x14047D620 (HvpGetCellMap.c)
 *     HvpProtectBin @ 0x14047D67C (HvpProtectBin.c)
 *     HvpAllocateBin @ 0x14047D6EC (HvpAllocateBin.c)
 *     HvpFindFreeBin @ 0x1404E5630 (HvpFindFreeBin.c)
 *     HvpAdjustHiveFreeDisplay @ 0x1404E56F0 (HvpAdjustHiveFreeDisplay.c)
 *     HvpExpandMap @ 0x1404E585C (HvpExpandMap.c)
 *     CmpCanGrowHive @ 0x1404E5930 (CmpCanGrowHive.c)
 *     CmpUpdateSystemHiveHysteresis @ 0x1404E60E4 (CmpUpdateSystemHiveHysteresis.c)
 *     CmpDoFileSetSizeEx @ 0x1404E657C (CmpDoFileSetSizeEx.c)
 *     CmpBoostActiveHiveWriter @ 0x1404E66A0 (CmpBoostActiveHiveWriter.c)
 *     HvpShrinkMap @ 0x1406A0F60 (HvpShrinkMap.c)
 *     HvpReviveDiscardedBin @ 0x1406A0FE8 (HvpReviveDiscardedBin.c)
 */

__int64 __fastcall HvpAddBin(__int64 BugCheckParameter2, unsigned int a2, int a3)
{
  unsigned int *v3; // r13
  __int64 v4; // r12
  _QWORD *v5; // r15
  unsigned int v6; // r14d
  unsigned int v7; // edi
  _QWORD *FreeBin; // rax
  unsigned int v10; // edx
  __int64 v11; // rcx
  unsigned int v12; // r13d
  ULONG v13; // edx
  unsigned int v14; // ebx
  __int64 v15; // rax
  ULONG v16; // ebx
  __int64 v17; // rax
  ULONG v18; // edx
  _DWORD *v19; // rbx
  char v20; // al
  __int64 v21; // rcx
  __int64 v22; // r8
  int v23; // ebx
  unsigned int v24; // r9d
  __int64 v25; // rdi
  int v26; // ebx
  unsigned int v27; // edi
  __int64 v29; // rbx
  bool v30; // zf
  int v31; // eax
  int v32; // eax
  __int64 v33; // rcx
  _QWORD *v34; // rax
  int v35; // ebx
  unsigned int v36; // r8d
  unsigned int v37; // ebx
  __int64 CellMap; // rax
  unsigned int v39; // r8d
  unsigned int v40; // r11d
  _QWORD *v41; // r10
  __int64 v42; // rax
  __int64 v43; // rax
  char v44; // cl
  ULONG v45; // r13d
  _DWORD *v46; // rcx
  __int64 v47; // rcx
  _QWORD *v48; // r13
  __int64 v49; // rax
  __int64 v50; // rcx
  int v51; // ebx
  ULONG v52; // eax
  __int64 v53; // rax
  ULONG v54; // eax
  unsigned int v55; // ebx
  int v56; // ebx
  ULONG_PTR v57; // rax
  __int64 v58; // rcx
  int i; // [rsp+40h] [rbp-59h]
  _DWORD v60[3]; // [rsp+44h] [rbp-55h] BYREF
  ULONG StartingIndex; // [rsp+50h] [rbp-49h]
  _DWORD Size[3]; // [rsp+54h] [rbp-45h] BYREF
  void *v63; // [rsp+60h] [rbp-39h]
  unsigned int v64; // [rsp+68h] [rbp-31h]
  void *v65; // [rsp+70h] [rbp-29h] BYREF
  void *v66; // [rsp+78h] [rbp-21h] BYREF
  void *v67; // [rsp+80h] [rbp-19h] BYREF
  __int64 v68; // [rsp+88h] [rbp-11h]
  __int64 v69; // [rsp+90h] [rbp-9h]
  _RTL_BITMAP Destination; // [rsp+98h] [rbp-1h] BYREF
  _RTL_BITMAP BitMapHeader; // [rsp+A8h] [rbp+Fh] BYREF
  char v72; // [rsp+100h] [rbp+67h]
  char v73; // [rsp+108h] [rbp+6Fh]
  int v74; // [rsp+118h] [rbp+7Fh]

  i = -1;
  v3 = 0LL;
  v4 = a3;
  v5 = 0LL;
  v64 = 0;
  v6 = 0;
  memset(Size, 0, sizeof(Size));
  v7 = (a2 + 4127) & 0xFFFFF000;
  v66 = 0LL;
  v65 = 0LL;
  v68 = 0LL;
  v67 = 0LL;
  v74 = 0;
  memset(v60, 0, sizeof(v60));
  v73 = 0;
  v72 = 0;
  if ( v7 <= 0x3000 && v7 - (unsigned __int64)a2 - 32 < 0xE00 )
    v7 += 4096;
  if ( *(_BYTE *)(BugCheckParameter2 + 4168) && a3 != 1
    || (FreeBin = (_QWORD *)HvpFindFreeBin(BugCheckParameter2), (v5 = FreeBin) == 0LL) )
  {
    v69 = 632 * v4;
    v6 = *(_DWORD *)(632 * v4 + BugCheckParameter2 + 1400);
    v74 = v6;
    v10 = v7 + v6;
    v60[0] = v7 + v6;
    if ( !(_DWORD)v4 && v7 <= 0x40000 && (((v6 + 4096) ^ (v10 + 4095)) & 0xFFFC0000) != 0 )
    {
      v74 = ((v6 + 266239) & 0xFFFC0000) - 4096;
      v10 = v7 + v74;
      v60[0] = v7 + v74;
    }
    if ( v10 < v6
      || !(unsigned __int8)CmpCanGrowHive(BugCheckParameter2)
      || (int)HvpExpandMap(BugCheckParameter2, (unsigned int)v4, v6, v60[0]) < 0 )
    {
      goto LABEL_99;
    }
    v73 = 1;
    if ( (int)HvpAdjustHiveFreeDisplay(BugCheckParameter2, v60[0], (unsigned int)v4) < 0 )
      goto LABEL_68;
    v11 = v60[0];
    *(_DWORD *)(v69 + BugCheckParameter2 + 1400) = v60[0];
    if ( !(_DWORD)v4 )
    {
      if ( (*(_DWORD *)(BugCheckParameter2 + 144) & 1) == 0 )
      {
        v12 = (unsigned int)(v60[0] + 511) >> 9;
        v13 = *(_DWORD *)(BugCheckParameter2 + 72);
        StartingIndex = v13;
        LODWORD(v63) = v12;
        v14 = (((v12 + 7) >> 3) + 3) & 0xFFFFFFFC;
        Size[0] = v14;
        if ( *(_DWORD *)(BugCheckParameter2 + 92) < v14 )
        {
          v3 = (unsigned int *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(BugCheckParameter2 + 24))(
                                 v14,
                                 0LL,
                                 959532355LL);
          if ( !v3 )
            goto LABEL_68;
          *(_QWORD *)&Size[1] = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(BugCheckParameter2 + 24))(
                                  v14,
                                  0LL,
                                  959532355LL);
          v29 = *(_QWORD *)&Size[1];
          if ( !*(_QWORD *)&Size[1] )
            goto LABEL_68;
          v30 = *(_QWORD *)(BugCheckParameter2 + 80) == 0LL;
          Destination.SizeOfBitMap = (unsigned int)v63;
          BitMapHeader.SizeOfBitMap = (unsigned int)v63;
          Destination.Buffer = v3;
          BitMapHeader.Buffer = *(unsigned int **)&Size[1];
          if ( v30 )
          {
            memset(v3, 0, Size[0]);
          }
          else
          {
            RtlCopyBitMap((PRTL_BITMAP)(BugCheckParameter2 + 72), &Destination, 0);
            RtlClearBits(&Destination, StartingIndex, (_DWORD)v63 - StartingIndex);
            (*(void (__fastcall **)(_QWORD, _QWORD))(BugCheckParameter2 + 32))(
              *(_QWORD *)(BugCheckParameter2 + 80),
              *(unsigned int *)(BugCheckParameter2 + 92));
          }
          if ( *(_QWORD *)(BugCheckParameter2 + 104) )
          {
            RtlCopyBitMap((PRTL_BITMAP)(BugCheckParameter2 + 96), &BitMapHeader, 0);
            RtlClearBits(&BitMapHeader, StartingIndex, (_DWORD)v63 - StartingIndex);
            (*(void (__fastcall **)(_QWORD, _QWORD))(BugCheckParameter2 + 32))(
              *(_QWORD *)(BugCheckParameter2 + 104),
              *(unsigned int *)(BugCheckParameter2 + 92));
          }
          else
          {
            memset(*(void **)&Size[1], 0, Size[0]);
          }
          v31 = (int)v63;
          *(_DWORD *)(BugCheckParameter2 + 72) = (_DWORD)v63;
          *(_QWORD *)(BugCheckParameter2 + 80) = v3;
          *(_DWORD *)(BugCheckParameter2 + 96) = v31;
          v32 = Size[0];
          *(_QWORD *)(BugCheckParameter2 + 104) = v29;
          *(_DWORD *)(BugCheckParameter2 + 92) = v32;
        }
        else
        {
          v15 = *(_QWORD *)(BugCheckParameter2 + 80);
          v16 = v12 - v13;
          *(_DWORD *)(BugCheckParameter2 + 72) = v12;
          *(_QWORD *)(BugCheckParameter2 + 80) = v15;
          RtlClearBits((PRTL_BITMAP)(BugCheckParameter2 + 72), v13, v12 - v13);
          v17 = *(_QWORD *)(BugCheckParameter2 + 104);
          v18 = StartingIndex;
          *(_DWORD *)(BugCheckParameter2 + 96) = v12;
          *(_QWORD *)(BugCheckParameter2 + 104) = v17;
          RtlClearBits((PRTL_BITMAP)(BugCheckParameter2 + 96), v18, v16);
        }
        v72 = 1;
      }
      if ( (*(_DWORD *)(BugCheckParameter2 + 144) & 0x8001) == 0 )
      {
        CmpBoostActiveHiveWriter(v11, BugCheckParameter2 + 5464);
        v3 = 0LL;
        *(_QWORD *)&Size[1] = 0LL;
        if ( (int)CmpDoFileSetSizeEx(BugCheckParameter2, 0LL, (unsigned int)(v60[0] + 4096), 1LL) < 0 )
          goto LABEL_68;
        if ( (*(_DWORD *)(BugCheckParameter2 + 5360) & 0x800) != 0 && !*(_DWORD *)(BugCheckParameter2 + 5492) )
          *(_DWORD *)(BugCheckParameter2 + 5492) = v6;
      }
    }
    if ( v74 == v6 )
    {
LABEL_23:
      v3 = 0LL;
      *(_QWORD *)&Size[1] = 0LL;
      if ( (int)HvpAllocateBin(BugCheckParameter2, v7, v4, v74, 0x36314D43u, (__int64 *)&v67, (__int64 *)&v60[1]) < 0 )
        goto LABEL_68;
      if ( *(_QWORD *)&v60[1] )
      {
        v19 = *(_DWORD **)&v60[1];
      }
      else
      {
        v19 = v67;
        if ( v67 )
        {
          v20 = 0;
          goto LABEL_27;
        }
      }
      v20 = 1;
LABEL_27:
      *(_QWORD *)&Size[1] = 0LL;
      if ( (int)HvpProtectBin(BugCheckParameter2, v7, v4, v74, (__int64)v19, v20) >= 0 )
      {
        memset(v19, 0, v7);
        v19[7] = 0;
        v21 = (__int64)v66;
        v22 = (__int64)v65;
        v19[1] = v74 & 0x7FFFFFFF;
        *v19 = 1852400232;
        v19[2] = v7;
        v19[8] = v7 - 32;
        if ( v21 || v22 )
        {
          v23 = v74;
          v48 = (_QWORD *)v68;
          HvpPointMapEntriesToBuffer(BugCheckParameter2, v21, v22, v74 - v6, v6 + ((_DWORD)v4 << 31), v68);
          v49 = BugCheckParameter2 + v69 + 2008;
          v50 = *(_QWORD *)v49;
          if ( *(_QWORD *)(*(_QWORD *)v49 + 8LL) != v49 )
            __fastfail(3u);
          *v48 = v50;
          v48[1] = v49;
          *(_QWORD *)(v50 + 8) = v48;
          *(_QWORD *)v49 = v48;
        }
        else
        {
          v23 = v74;
        }
        v24 = v7;
        v25 = *(_QWORD *)&v60[1];
        v26 = ((_DWORD)v4 << 31) + v23;
        v74 = v26;
        HvpPointMapEntriesToBuffer(BugCheckParameter2, (__int64)v67, *(__int64 *)&v60[1], v24, v26, 0LL);
        if ( (_DWORD)v4 )
          goto LABEL_35;
        if ( (*(_DWORD *)(BugCheckParameter2 + 144) & 1) != 0
          || (v3 = 0LL, *(_QWORD *)&Size[1] = 0LL, HvpMarkDirty(BugCheckParameter2, v6, v60[0] - v6, 0)) )
        {
          CmpUpdateSystemHiveHysteresis(BugCheckParameter2, v60[0], v6);
          HvpSetRangeProtection(BugCheckParameter2, v6, v60[0] - v6, 4u);
LABEL_35:
          v66 = 0LL;
          v27 = v26;
          v65 = 0LL;
          v67 = 0LL;
          *(_QWORD *)&v60[1] = 0LL;
          i = v26;
          goto LABEL_36;
        }
LABEL_83:
        HvpShrinkMap(BugCheckParameter2, (unsigned int)v4, v60[0], v6);
        *(_DWORD *)(632 * v4 + BugCheckParameter2 + 1400) = v6;
LABEL_84:
        if ( v72 )
        {
          *(_QWORD *)(BugCheckParameter2 + 80) = *(_QWORD *)(BugCheckParameter2 + 80);
          *(_DWORD *)(BugCheckParameter2 + 72) = v6 >> 9;
          v51 = *(_DWORD *)(BugCheckParameter2 + 88);
          v52 = RtlNumberOfSetBits((PRTL_BITMAP)(BugCheckParameter2 + 72));
          *(_DWORD *)(BugCheckParameter2 + 88) = v52;
          _InterlockedExchangeAdd(&CmpDirtySectorCount, v52 - v51);
          v53 = *(_QWORD *)(BugCheckParameter2 + 104);
          *(_DWORD *)(BugCheckParameter2 + 96) = v6 >> 9;
          *(_QWORD *)(BugCheckParameter2 + 104) = v53;
          v54 = RtlNumberOfSetBits((PRTL_BITMAP)(BugCheckParameter2 + 96));
          v25 = *(_QWORD *)&v60[1];
          *(_DWORD *)(BugCheckParameter2 + 112) = v54;
        }
        v55 = Size[0];
        if ( *(_QWORD *)&Size[1] )
          (*(void (__fastcall **)(_QWORD, _QWORD))(BugCheckParameter2 + 32))(*(_QWORD *)&Size[1], Size[0]);
        if ( v3 )
          (*(void (__fastcall **)(unsigned int *, _QWORD))(BugCheckParameter2 + 32))(v3, v55);
        if ( v66 || v65 )
        {
          v56 = v74;
          HvpFreeBin(BugCheckParameter2, v74 - v6, v4, (__int64)v66, (__int64)v65);
        }
        else
        {
          v56 = v74;
        }
        if ( v68 )
          (*(void (__fastcall **)(__int64, __int64))(BugCheckParameter2 + 32))(v68, 32LL);
        if ( v67 || v25 )
          HvpFreeBin(BugCheckParameter2, v60[0] - v56, v4, (__int64)v67, v25);
        goto LABEL_99;
      }
LABEL_68:
      v25 = *(_QWORD *)&v60[1];
      goto LABEL_83;
    }
    StartingIndex = v74 - v6;
    v3 = 0LL;
    *(_QWORD *)&Size[1] = 0LL;
    if ( (int)HvpAllocateBin(BugCheckParameter2, v74 - v6, v4, v6, 0x30324D43u, (__int64 *)&v66, (__int64 *)&v65) < 0 )
      goto LABEL_68;
    v43 = (__int64)v65;
    if ( v65 )
    {
      v63 = v65;
    }
    else
    {
      v63 = v66;
      v43 = (__int64)v66;
      if ( v66 )
      {
        v44 = 0;
        goto LABEL_63;
      }
    }
    v44 = 1;
LABEL_63:
    *(_QWORD *)&Size[1] = 0LL;
    if ( (int)HvpProtectBin(BugCheckParameter2, StartingIndex, v4, v6, v43, v44) < 0 )
      goto LABEL_68;
    v45 = StartingIndex;
    memset(v63, 0, StartingIndex);
    v46 = v63;
    *((_DWORD *)v63 + 7) = 0;
    v46[1] = v6 & 0x7FFFFFFF;
    *v46 = 1852400232;
    v46[2] = v45;
    v46[8] = v45 - 32;
    v3 = 0LL;
    v68 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(BugCheckParameter2 + 24))(32LL, 0LL, 825380163LL);
    *(_QWORD *)&Size[1] = 0LL;
    v47 = v68;
    if ( !v68 )
      goto LABEL_68;
    *(_DWORD *)(v68 + 16) = StartingIndex;
    *(_DWORD *)(v47 + 20) = v6;
    *(_DWORD *)(v47 + 24) = 1;
    goto LABEL_23;
  }
  v33 = *FreeBin;
  if ( *(_QWORD **)(*FreeBin + 8LL) != FreeBin || (v34 = (_QWORD *)FreeBin[1], (_QWORD *)*v34 != v5) )
    __fastfail(3u);
  *v34 = v33;
  *(_QWORD *)(v33 + 8) = v34;
  v35 = (_DWORD)v4 << 31;
  if ( !HvpMarkDirty(BugCheckParameter2, ((_DWORD)v4 << 31) + *((_DWORD *)v5 + 5), *((_DWORD *)v5 + 4), 0) )
    goto LABEL_99;
  if ( (v5[3] & 1) != 0 )
  {
    v36 = 0;
    v27 = v35 + *((_DWORD *)v5 + 5);
    v37 = v64;
    for ( i = v27; v36 < v37; *v41 = v42 )
    {
      CellMap = HvpGetCellMap(BugCheckParameter2, v36 + v27);
      v41 = (_QWORD *)CellMap;
      if ( !CellMap )
        KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v40, 0x38DuLL);
      *(_QWORD *)(CellMap + 8) &= ~2uLL;
      v42 = v39;
      v36 = v39 + 4096;
    }
    if ( !(_DWORD)v4 )
      HvpSetRangeProtection(BugCheckParameter2, v27, v37, 4u);
LABEL_36:
    if ( v27 != -1 )
      goto LABEL_37;
    v25 = *(_QWORD *)&v60[1];
    v3 = 0LL;
    *(_QWORD *)&Size[1] = 0LL;
    v68 = 0LL;
    if ( !v73 )
      goto LABEL_84;
    goto LABEL_83;
  }
  if ( (int)HvpReviveDiscardedBin(BugCheckParameter2) >= 0 )
  {
    v27 = v35 + *((_DWORD *)v5 + 5);
    i = v27;
    goto LABEL_36;
  }
LABEL_99:
  v27 = i;
LABEL_37:
  if ( v5 )
  {
    if ( v27 == -1 )
    {
      v57 = 632 * v4 + BugCheckParameter2 + 2008;
      v58 = *(_QWORD *)v57;
      if ( *(_QWORD *)(*(_QWORD *)v57 + 8LL) != v57 )
        __fastfail(3u);
      *v5 = v58;
      v5[1] = v57;
      *(_QWORD *)(v58 + 8) = v5;
      *(_QWORD *)v57 = v5;
    }
    else
    {
      (*(void (__fastcall **)(_QWORD *, __int64))(BugCheckParameter2 + 32))(v5, 32LL);
    }
  }
  return v27;
}
