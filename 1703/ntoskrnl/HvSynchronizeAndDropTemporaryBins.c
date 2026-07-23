/*
 * XREFs of HvSynchronizeAndDropTemporaryBins @ 0x14003B8EC
 * Callers:
 *     HvWriteHivePrimaryFile @ 0x1404391D8 (HvWriteHivePrimaryFile.c)
 *     CmpFlushHive @ 0x1404D6DE0 (CmpFlushHive.c)
 * Callees:
 *     RtlCopyBitMap @ 0x14001E390 (RtlCopyBitMap.c)
 *     RtlMergeBitMaps @ 0x14006DC7C (RtlMergeBitMaps.c)
 *     HvpMapEntryGetFreeBin @ 0x1400A80DC (HvpMapEntryGetFreeBin.c)
 *     ExWaitForRundownProtectionRelease @ 0x14010EFC0 (ExWaitForRundownProtectionRelease.c)
 *     ExRundownCompleted @ 0x1401161E0 (ExRundownCompleted.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     memset @ 0x140192D80 (memset.c)
 *     HvViewMapCopyToFileOffset @ 0x1401E0E98 (HvViewMapCopyToFileOffset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     HvpFreeBin @ 0x1404D289C (HvpFreeBin.c)
 *     HvpGetCellMap @ 0x140515540 (HvpGetCellMap.c)
 *     HvViewMapUnpinForFileOffset @ 0x140675F9C (HvViewMapUnpinForFileOffset.c)
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
  __int64 CellMap; // rcx
  __int64 FreeBin; // rax
  _DWORD *v16; // rcx
  int v17; // r8d
  int v18; // r10d
  unsigned int v19; // edi
  __int64 v20; // rax
  __int64 v21; // rbp
  unsigned __int64 v22; // rax
  int v23; // r13d
  unsigned __int64 v24; // r10
  unsigned int v25; // r14d
  unsigned int v26; // ecx
  unsigned int *v27; // r8
  unsigned int *v28; // r9
  int v29; // eax
  bool i; // zf
  unsigned int v31; // r14d
  struct _EX_RUNDOWN_REF *v32; // rax
  struct _EX_RUNDOWN_REF *v33; // rbp
  __int64 v34; // [rsp+30h] [rbp-58h]
  unsigned __int64 v35; // [rsp+38h] [rbp-50h]
  _RTL_BITMAP Destination; // [rsp+40h] [rbp-48h] BYREF
  int v37; // [rsp+90h] [rbp+8h]

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
    RtlMergeBitMaps(&Destination, BugCheckParameter2 + 96);
    if ( (*(_DWORD *)(BugCheckParameter2 + 5488) & 1) != 0 )
    {
      if ( *(struct _KTHREAD **)(BugCheckParameter2 + 5440) == KeGetCurrentThread() && !a5 )
        goto LABEL_13;
      RtlMergeBitMaps(&Destination, BugCheckParameter2 + 2856);
    }
    if ( a5 )
      RtlMergeBitMaps(&Destination, BugCheckParameter2 + 2904);
LABEL_13:
    v37 = 0;
    if ( !a4 )
      goto LABEL_44;
    while ( 1 )
    {
      v13 = (*a3 & 0xFFFFF000) - 4096;
      CellMap = HvpGetCellMap(BugCheckParameter2, v13);
      if ( !CellMap )
        KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v13, 0x898uLL);
      FreeBin = HvpMapEntryGetFreeBin(CellMap);
      if ( FreeBin )
        v19 = *(_DWORD *)(FreeBin + 20);
      else
        v19 = v13 - *v16;
      if ( v19 >= v17 + a3[4] - 4096 )
        goto LABEL_43;
      do
      {
        v20 = HvpGetCellMap(BugCheckParameter2, v19);
        v21 = v20;
        if ( !v20 )
          KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v19, 0x8AFuLL);
        v22 = *(_QWORD *)(v20 + 8) & 0xFFFFFFFFFFFFFFF0uLL;
        v23 = *(_DWORD *)(v21 + 32);
        v24 = *(_QWORD *)(v21 + 16) & 0xFFFFFFFFFFFFFFF0uLL;
        v34 = v24;
        v35 = v22;
        if ( !v24 )
        {
          v19 += v23;
          continue;
        }
        v25 = 0;
        if ( v23 )
        {
          while ( 1 )
          {
            v26 = (v25 + v19) >> 9;
            if ( v26 + 7 >= Destination.SizeOfBitMap )
              goto LABEL_26;
            v27 = &v11[(unsigned __int64)v26 >> 5];
            v28 = &v11[(unsigned __int64)(v26 + 7) >> 5];
            if ( v27 != v28 )
              break;
            if ( ((255 << v26) & *v27) != 0 )
              goto LABEL_26;
LABEL_35:
            HvViewMapUnpinForFileOffset(BugCheckParameter2 + 200, v25 + v19 + 4096, 4096LL);
LABEL_27:
            v24 = v34;
            v25 += 4096;
            if ( v25 >= *(_DWORD *)(v21 + 32) )
            {
              v22 = v35;
              goto LABEL_29;
            }
          }
          v29 = 0;
          for ( i = ((-1 << v26) & *v27) == 0; ; i = *v27 == 0 )
          {
            LOBYTE(v29) = i;
            if ( !v29 )
              break;
            if ( ++v27 == v28 )
              goto LABEL_35;
            v29 = 0;
          }
LABEL_26:
          v12 = HvViewMapCopyToFileOffset(BugCheckParameter2 + 200, v25 + v19 + 4096, v24 + v25, 4096LL);
          if ( v12 < 0 )
            goto LABEL_45;
          goto LABEL_27;
        }
LABEL_29:
        if ( v22 )
        {
          v31 = v19 + v23;
          while ( v19 < v31 )
          {
            v32 = (struct _EX_RUNDOWN_REF *)HvpGetCellMap(BugCheckParameter2, v19);
            v33 = v32;
            if ( !v32 )
              KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v19, 0x905uLL);
            ExWaitForRundownProtectionRelease(v32 + 3);
            v33[2].Count = 0LL;
            ExRundownCompleted(v33 + 3);
            v19 += 4096;
          }
          HvpFreeBin(BugCheckParameter2, v23, 0, 0, v34);
        }
        else
        {
          v19 += *(_DWORD *)(v21 + 32);
        }
      }
      while ( v19 < *a3 + a3[4] - 4096 );
      v18 = v37;
LABEL_43:
      a3 += 6;
      v37 = v18 + 1;
      if ( v18 + 1 >= a4 )
      {
LABEL_44:
        v12 = 0;
LABEL_45:
        ExFreePoolWithTag(v11, 0);
        return (unsigned int)v12;
      }
    }
  }
  return (unsigned int)-1073741670;
}
