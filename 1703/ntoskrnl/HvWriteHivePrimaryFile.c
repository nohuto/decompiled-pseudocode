/*
 * XREFs of HvWriteHivePrimaryFile @ 0x1404391D8
 * Callers:
 *     HvInitializeHive @ 0x140439E6C (HvInitializeHive.c)
 *     CmpFlushHive @ 0x1404D6DE0 (CmpFlushHive.c)
 *     HvSyncHive @ 0x14066CBA0 (HvSyncHive.c)
 * Callees:
 *     HvSynchronizeAndDropTemporaryBins @ 0x14003B8EC (HvSynchronizeAndDropTemporaryBins.c)
 *     RtlNumberOfSetBits @ 0x14006E280 (RtlNumberOfSetBits.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     HvViewMapCopyToFileOffset @ 0x1401E0E98 (HvViewMapCopyToFileOffset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     HvpFinishPrimaryWrite @ 0x14043938C (HvpFinishPrimaryWrite.c)
 *     CmpTraceHiveFlushWrotePrimaryFile @ 0x140439434 (CmpTraceHiveFlushWrotePrimaryFile.c)
 *     HvpHeaderCheckSum @ 0x14043B4E8 (HvpHeaderCheckSum.c)
 *     HvpFindNextDirtyBlock @ 0x1404B7A5C (HvpFindNextDirtyBlock.c)
 *     CmpFileFlushAndPurge @ 0x1404DB67C (CmpFileFlushAndPurge.c)
 *     HvViewMapAddressForFileOffset @ 0x1406759AC (HvViewMapAddressForFileOffset.c)
 *     HvViewMapPinForFileOffset @ 0x140675D44 (HvViewMapPinForFileOffset.c)
 */

__int64 __fastcall HvWriteHivePrimaryFile(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // r12
  char v6; // r15
  int v7; // ebx
  _DWORD *v8; // r9
  int v9; // eax
  int v10; // eax
  unsigned __int8 (__fastcall *v11)(ULONG_PTR, _QWORD, int *, __int64, unsigned int *, int); // rax
  int v12; // eax
  _DWORD *PoolWithTag; // r14
  unsigned int v14; // r13d
  ULONG v15; // eax
  int v16; // ebx
  int v18; // eax
  char *v19; // rbx
  __int64 v20; // rcx
  bool v21; // zf
  unsigned int v22; // eax
  int v23; // [rsp+40h] [rbp-29h] BYREF
  char *v24; // [rsp+48h] [rbp-21h]
  __int64 v25; // [rsp+50h] [rbp-19h]
  char *v26; // [rsp+58h] [rbp-11h] BYREF
  int v27; // [rsp+60h] [rbp-9h] BYREF
  __int64 v28; // [rsp+68h] [rbp-1h]
  int v29; // [rsp+70h] [rbp+7h]
  unsigned int v30; // [rsp+D0h] [rbp+67h] BYREF
  char v31; // [rsp+D8h] [rbp+6Fh]
  int v32; // [rsp+E0h] [rbp+77h]
  unsigned int v33; // [rsp+E8h] [rbp+7Fh] BYREF

  v4 = a2;
  v31 = 0;
  v6 = 1;
  v7 = a3 & 1;
  v32 = v7;
  if ( (_BYTE)a2 )
  {
    if ( !*(_QWORD *)(BugCheckParameter2 + 2928) )
    {
      v16 = 0;
      goto LABEL_25;
    }
    v8 = *(_DWORD **)(BugCheckParameter2 + 2944);
  }
  else
  {
    if ( !*(_DWORD *)(BugCheckParameter2 + 112) )
    {
      v16 = 0;
      goto LABEL_22;
    }
    v8 = *(_DWORD **)(BugCheckParameter2 + 64);
    v8[10] = *(_DWORD *)(BugCheckParameter2 + 1400);
    v8[11] = 1;
  }
  v9 = *(_DWORD *)(BugCheckParameter2 + 164);
  v8[2] = v9;
  v8[1] = v9 + 1;
  v10 = HvpHeaderCheckSum(v8);
  v21 = CmpFailPrimarySave == 1;
  *(_DWORD *)(a4 + 508) = v10;
  if ( v21 )
    goto LABEL_31;
  v11 = *(unsigned __int8 (__fastcall **)(ULONG_PTR, _QWORD, int *, __int64, unsigned int *, int))(BugCheckParameter2
                                                                                                 + 40);
  v28 = a4;
  v31 = 1;
  v30 = 0;
  v27 = 0;
  v29 = 4096;
  if ( !v11(BugCheckParameter2, 0LL, &v27, 1LL, &v30, v7) )
  {
    v16 = -1073741491;
    goto LABEL_25;
  }
  v12 = CmpFailPrimarySave;
  if ( CmpFailPrimarySave == 2 )
  {
LABEL_31:
    v16 = -1073741823;
    goto LABEL_25;
  }
  if ( v4 )
  {
    PoolWithTag = *(_DWORD **)(BugCheckParameter2 + 2928);
    v14 = *(_DWORD *)(BugCheckParameter2 + 2936);
  }
  else
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 24LL * *(unsigned int *)(BugCheckParameter2 + 112), 0x62534D43u);
    if ( !PoolWithTag )
    {
      v16 = -1073741801;
      goto LABEL_22;
    }
    v14 = 0;
    v23 = 0;
    if ( *(_DWORD *)(BugCheckParameter2 + 112) )
    {
      v18 = BugCheckParameter2 + 96;
      do
      {
        if ( !(unsigned __int8)HvpFindNextDirtyBlock(
                                 BugCheckParameter2,
                                 v18,
                                 (unsigned int)&v23,
                                 (unsigned int)&v26,
                                 (__int64)&v33,
                                 (__int64)&v30,
                                 0) )
          break;
        v19 = v26;
        v24 = v26;
        v20 = 3LL * v14;
        PoolWithTag[6 * v14] = v30;
        v21 = (*(_BYTE *)(BugCheckParameter2 + 124) & 4) == 0;
        v25 = v20;
        if ( !v21 )
        {
          if ( (char *)HvViewMapAddressForFileOffset(BugCheckParameter2 + 200, v30) != v19 )
          {
            v16 = HvViewMapPinForFileOffset(BugCheckParameter2 + 200, v30, v33);
            if ( v16 < 0 )
              goto LABEL_19;
            v16 = HvViewMapCopyToFileOffset(BugCheckParameter2 + 200, v30, v24, v33);
            if ( v16 < 0 )
              goto LABEL_19;
            v19 = v24;
          }
          v20 = v25;
          v21 = (*(_BYTE *)(BugCheckParameter2 + 124) & 4) == 0;
        }
        v22 = v33;
        if ( !v21 )
          v19 = 0LL;
        PoolWithTag[2 * v20 + 4] = v33;
        ++v14;
        *(_QWORD *)&PoolWithTag[2 * v20 + 2] = v19;
        v30 += v22;
        v18 = BugCheckParameter2 + 96;
      }
      while ( v14 < *(_DWORD *)(BugCheckParameter2 + 112) );
      v7 = v32;
    }
    v12 = CmpFailPrimarySave;
  }
  if ( v12 == 3 )
    goto LABEL_23;
  if ( !(*(unsigned __int8 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *, _QWORD, unsigned int *, int))(BugCheckParameter2 + 40))(
          BugCheckParameter2,
          0LL,
          PoolWithTag,
          v14,
          &v30,
          v7) )
  {
    v16 = -1073741491;
    goto LABEL_19;
  }
  if ( CmpFailPrimarySave == 4
    || !(unsigned __int8)CmpFileFlushAndPurge(BugCheckParameter2, 0LL)
    || CmpFailPrimarySave == 5 )
  {
LABEL_23:
    v16 = -1073741823;
    goto LABEL_19;
  }
  if ( v4 )
    v15 = RtlNumberOfSetBits((PRTL_BITMAP)(BugCheckParameter2 + 2904));
  else
    v15 = *(_DWORD *)(BugCheckParameter2 + 112);
  CmpTraceHiveFlushWrotePrimaryFile(v15, v15 << 9);
  v31 = 0;
  if ( !v4 )
    HvSynchronizeAndDropTemporaryBins(BugCheckParameter2, 0, PoolWithTag, v14, 0);
  v16 = 0;
LABEL_19:
  if ( !PoolWithTag )
    goto LABEL_25;
  if ( !v4 )
  {
    ExFreePoolWithTag(PoolWithTag, 0);
LABEL_25:
    if ( !v4 )
      goto LABEL_22;
  }
  v6 = 0;
LABEL_22:
  LOBYTE(a3) = v31;
  LOBYTE(a4) = v6;
  LOBYTE(a2) = v16 >= 0;
  HvpFinishPrimaryWrite(BugCheckParameter2, a2, a3, a4);
  return (unsigned int)v16;
}
