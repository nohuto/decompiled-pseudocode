/*
 * XREFs of HvSynchronizeAndDropTemporaryBins @ 0x140130A30
 * Callers:
 *     CmpFlushHive @ 0x1404DD950 (CmpFlushHive.c)
 *     HvWriteHivePrimaryFile @ 0x1404E4520 (HvWriteHivePrimaryFile.c)
 * Callees:
 *     HvpMapEntryGetFreeBin @ 0x140016924 (HvpMapEntryGetFreeBin.c)
 *     ExWaitForRundownProtectionRelease @ 0x1400A9850 (ExWaitForRundownProtectionRelease.c)
 *     ExRundownCompleted @ 0x1400ADB30 (ExRundownCompleted.c)
 *     RtlCopyBitMap @ 0x1400D4E00 (RtlCopyBitMap.c)
 *     RtlMergeBitMaps @ 0x140116B14 (RtlMergeBitMaps.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     memset @ 0x140192F40 (memset.c)
 *     HvViewMapCopyToFileOffset @ 0x1401E4FCC (HvViewMapCopyToFileOffset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     HvpFreeBin @ 0x140479E34 (HvpFreeBin.c)
 *     HvpGetCellMap @ 0x14047D620 (HvpGetCellMap.c)
 *     HvViewMapUnpinForFileOffset @ 0x1406A04D4 (HvViewMapUnpinForFileOffset.c)
 */

__int64 __fastcall HvSynchronizeAndDropTemporaryBins(
        ULONG_PTR BugCheckParameter2,
        char a2,
        _DWORD *a3,
        unsigned int a4,
        char a5)
{
  unsigned int *PoolWithTag; // rax
  unsigned int *v11; // r12
  int v12; // ebx
  unsigned int v13; // edi
  _BYTE *CellMap; // rcx
  __int64 FreeBin; // rax
  _DWORD *v16; // rcx
  int v17; // r8d
  int v18; // r10d
  unsigned int v19; // edi
  __int64 v20; // rax
  __int64 v21; // rbp
  unsigned __int64 v22; // rax
  int v23; // r13d
  unsigned __int64 v24; // rbx
  unsigned int v25; // r9d
  int v26; // r11d
  unsigned int v27; // ecx
  unsigned int v28; // edx
  unsigned int *v29; // r8
  unsigned int *v30; // r10
  unsigned int v31; // r15d
  bool i; // zf
  unsigned int v33; // r15d
  struct _EX_RUNDOWN_REF *v34; // rax
  struct _EX_RUNDOWN_REF *v35; // rbp
  __int64 v36; // [rsp+38h] [rbp-60h]
  unsigned __int64 v37; // [rsp+40h] [rbp-58h]
  _RTL_BITMAP Destination; // [rsp+48h] [rbp-50h] BYREF
  int v39; // [rsp+A0h] [rbp+8h]

  if ( (*(_BYTE *)(BugCheckParameter2 + 124) & 4) == 0 )
    return 0LL;
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(
                                  PagedPool,
                                  *(unsigned int *)(BugCheckParameter2 + 92),
                                  0x30364D43u);
  v11 = PoolWithTag;
  if ( PoolWithTag )
  {
    Destination.Buffer = PoolWithTag;
    Destination.SizeOfBitMap = *(_DWORD *)(BugCheckParameter2 + 72);
    if ( !a2 )
    {
      memset(PoolWithTag, 0, *(unsigned int *)(BugCheckParameter2 + 92));
      goto LABEL_13;
    }
    RtlCopyBitMap((PRTL_BITMAP)(BugCheckParameter2 + 72), &Destination, 0);
    RtlMergeBitMaps(&Destination.SizeOfBitMap, BugCheckParameter2 + 96);
    if ( (*(_DWORD *)(BugCheckParameter2 + 5488) & 1) != 0 )
    {
      if ( *(struct _KTHREAD **)(BugCheckParameter2 + 5440) == KeGetCurrentThread() && !a5 )
        goto LABEL_13;
      RtlMergeBitMaps(&Destination.SizeOfBitMap, BugCheckParameter2 + 2856);
    }
    if ( a5 )
      RtlMergeBitMaps(&Destination.SizeOfBitMap, BugCheckParameter2 + 2904);
LABEL_13:
    v39 = 0;
    if ( !a4 )
    {
LABEL_46:
      v12 = 0;
LABEL_47:
      ExFreePoolWithTag(v11, 0);
      return (unsigned int)v12;
    }
    while ( 1 )
    {
      v13 = (*a3 & 0xFFFFF000) - 4096;
      CellMap = (_BYTE *)HvpGetCellMap(BugCheckParameter2, v13);
      if ( !CellMap )
        KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v13, 0x897uLL);
      FreeBin = HvpMapEntryGetFreeBin(CellMap);
      v19 = FreeBin ? *(_DWORD *)(FreeBin + 20) : v13 - *v16;
      if ( v19 < v17 + a3[4] - 4096 )
        break;
LABEL_45:
      a3 += 6;
      v39 = v18 + 1;
      if ( v18 + 1 >= a4 )
        goto LABEL_46;
    }
    while ( 1 )
    {
      v20 = HvpGetCellMap(BugCheckParameter2, v19);
      v21 = v20;
      if ( !v20 )
        KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v19, 0x8AEuLL);
      v22 = *(_QWORD *)(v20 + 8) & 0xFFFFFFFFFFFFFFF0uLL;
      v23 = *(_DWORD *)(v21 + 32);
      v24 = *(_QWORD *)(v21 + 16) & 0xFFFFFFFFFFFFFFF0uLL;
      v36 = v24;
      v37 = v22;
      if ( v24 )
        break;
      v19 += v23;
LABEL_43:
      if ( v19 >= a3[4] + *a3 - 4096 )
      {
        v18 = v39;
        goto LABEL_45;
      }
    }
    if ( !v23 )
    {
LABEL_31:
      if ( v22 )
      {
        v33 = v19 + v23;
        while ( v19 < v33 )
        {
          v34 = (struct _EX_RUNDOWN_REF *)HvpGetCellMap(BugCheckParameter2, v19);
          v35 = v34;
          if ( !v34 )
            KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v19, 0x904uLL);
          ExWaitForRundownProtectionRelease(v34 + 3);
          v35[2].Count = 0LL;
          ExRundownCompleted(v35 + 3);
          v19 += 4096;
        }
        HvpFreeBin(BugCheckParameter2, v23, 0, 0, v36);
      }
      else
      {
        v19 += *(_DWORD *)(v21 + 32);
      }
      goto LABEL_43;
    }
    v25 = v19;
    v26 = -v19;
    while ( 1 )
    {
      v27 = v25 >> 9;
      v28 = (v25 >> 9) + 7;
      if ( v28 >= Destination.SizeOfBitMap )
        goto LABEL_27;
      v29 = &v11[(unsigned __int64)v27 >> 5];
      v30 = &v11[(unsigned __int64)v28 >> 5];
      if ( v29 != v30 )
        break;
      if ( ((255 << v27) & *v29) != 0 )
        goto LABEL_27;
LABEL_37:
      v31 = v25 + 4096;
      HvViewMapUnpinForFileOffset(BugCheckParameter2 + 200, v25 + 4096, 4096LL);
LABEL_29:
      v26 = -v19;
      v25 = v31;
      if ( v31 - v19 >= *(_DWORD *)(v21 + 32) )
      {
        v22 = v37;
        goto LABEL_31;
      }
    }
    for ( i = ((-1 << v27) & *v29) == 0; i; i = *v29 == 0 )
    {
      if ( ++v29 == v30 )
        goto LABEL_37;
    }
LABEL_27:
    v31 = v25 + 4096;
    v12 = HvViewMapCopyToFileOffset(BugCheckParameter2 + 200, v25 + 4096, v24 + v26 + v25, 4096LL);
    if ( v12 < 0 )
      goto LABEL_47;
    v24 = v36;
    goto LABEL_29;
  }
  return (unsigned int)-1073741670;
}
