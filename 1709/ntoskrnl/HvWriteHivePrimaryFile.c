/*
 * XREFs of HvWriteHivePrimaryFile @ 0x1404E4520
 * Callers:
 *     HvInitializeHive @ 0x140470A40 (HvInitializeHive.c)
 *     CmpFlushHive @ 0x1404DD950 (CmpFlushHive.c)
 *     HvSyncHive @ 0x140697218 (HvSyncHive.c)
 * Callees:
 *     RtlNumberOfSetBits @ 0x1400D4B40 (RtlNumberOfSetBits.c)
 *     HvSynchronizeAndDropTemporaryBins @ 0x140130A30 (HvSynchronizeAndDropTemporaryBins.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     HvViewMapCopyToFileOffset @ 0x1401E4FCC (HvViewMapCopyToFileOffset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     CmpFileFlushAndPurge @ 0x1404E410C (CmpFileFlushAndPurge.c)
 *     HvpHeaderCheckSum @ 0x1404E4CA4 (HvpHeaderCheckSum.c)
 *     HvpFinishPrimaryWrite @ 0x1404E6964 (HvpFinishPrimaryWrite.c)
 *     CmpTraceHiveFlushWrotePrimaryFile @ 0x1404E6A0C (CmpTraceHiveFlushWrotePrimaryFile.c)
 *     HvpFindNextDirtyBlock @ 0x140513F8C (HvpFindNextDirtyBlock.c)
 *     HvViewMapAddressForFileOffset @ 0x14069FEE4 (HvViewMapAddressForFileOffset.c)
 *     HvViewMapPinForFileOffset @ 0x1406A027C (HvViewMapPinForFileOffset.c)
 */

__int64 __fastcall HvWriteHivePrimaryFile(ULONG_PTR BugCheckParameter2, char a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  char v7; // r10
  int v8; // r13d
  _DWORD *v9; // r9
  int v10; // eax
  int v11; // eax
  unsigned __int8 (__fastcall *v12)(ULONG_PTR, _QWORD, int *, __int64, __int64 *, int); // rax
  _DWORD *PoolWithTag; // rsi
  unsigned int v14; // r15d
  ULONG v15; // eax
  char *v17; // r12
  __int64 v18; // rbx
  bool v19; // zf
  int v20; // eax
  char *v21; // [rsp+40h] [rbp-38h]
  int v22; // [rsp+50h] [rbp-28h] BYREF
  __int64 v23; // [rsp+58h] [rbp-20h]
  int v24; // [rsp+60h] [rbp-18h]
  __int64 v25; // [rsp+C0h] [rbp+48h] BYREF
  char v26; // [rsp+C8h] [rbp+50h]
  __int64 v27; // [rsp+D0h] [rbp+58h] BYREF
  int i; // [rsp+D8h] [rbp+60h]

  v4 = 0;
  v7 = 0;
  v8 = a3 & 1;
  if ( !a2 )
  {
    if ( !*(_DWORD *)(BugCheckParameter2 + 112) )
      goto LABEL_22;
    v9 = *(_DWORD **)(BugCheckParameter2 + 64);
    v9[10] = *(_DWORD *)(BugCheckParameter2 + 1400);
    v9[11] = 1;
LABEL_4:
    v10 = *(_DWORD *)(BugCheckParameter2 + 164);
    v9[2] = v10;
    v9[1] = v10 + 1;
    v11 = HvpHeaderCheckSum(v9);
    v19 = CmpFailPrimarySave == 1;
    *(_DWORD *)(a4 + 508) = v11;
    if ( v19 )
    {
      v4 = -1073741823;
      goto LABEL_22;
    }
    v12 = *(unsigned __int8 (__fastcall **)(ULONG_PTR, _QWORD, int *, __int64, __int64 *, int))(BugCheckParameter2 + 40);
    v23 = a4;
    v26 = 1;
    LODWORD(v27) = 0;
    v22 = 0;
    v24 = 4096;
    if ( v12(BugCheckParameter2, 0LL, &v22, 1LL, &v27, v8) )
    {
      if ( CmpFailPrimarySave != 2 )
      {
        if ( a2 )
        {
          PoolWithTag = *(_DWORD **)(BugCheckParameter2 + 2928);
          v14 = *(_DWORD *)(BugCheckParameter2 + 2936);
        }
        else
        {
          PoolWithTag = ExAllocatePoolWithTag(
                          PagedPool,
                          24LL * *(unsigned int *)(BugCheckParameter2 + 112),
                          0x62534D43u);
          if ( !PoolWithTag )
          {
            v4 = -1073741801;
LABEL_21:
            v7 = v26;
            goto LABEL_22;
          }
          v14 = 0;
          for ( i = 0; v14 < *(_DWORD *)(BugCheckParameter2 + 112); LODWORD(v27) = v20 + v27 )
          {
            if ( !(unsigned __int8)HvpFindNextDirtyBlock(BugCheckParameter2, (__int64)&v25, (__int64)&v27, 0) )
              break;
            v17 = v21;
            v18 = 3LL * v14;
            PoolWithTag[6 * v14] = v27;
            v19 = (*(_BYTE *)(BugCheckParameter2 + 124) & 4) == 0;
            if ( (*(_BYTE *)(BugCheckParameter2 + 124) & 4) != 0 )
            {
              if ( (char *)HvViewMapAddressForFileOffset(BugCheckParameter2 + 200, (unsigned int)v27) != v21 )
              {
                v4 = HvViewMapPinForFileOffset(BugCheckParameter2 + 200, (unsigned int)v27, (unsigned int)v25);
                if ( v4 < 0 )
                  goto LABEL_18;
                v4 = HvViewMapCopyToFileOffset(BugCheckParameter2 + 200, v27, v21, v25);
                if ( v4 < 0 )
                  goto LABEL_18;
                v18 = 3LL * v14;
              }
              v19 = (*(_BYTE *)(BugCheckParameter2 + 124) & 4) == 0;
            }
            if ( !v19 )
              v17 = 0LL;
            v20 = v25;
            PoolWithTag[2 * v18 + 4] = v25;
            ++v14;
            *(_QWORD *)&PoolWithTag[2 * v18 + 2] = v17;
            v4 = 0;
          }
        }
        if ( CmpFailPrimarySave != 3 )
        {
          if ( !(*(unsigned __int8 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *, _QWORD, __int64 *, int))(BugCheckParameter2 + 40))(
                  BugCheckParameter2,
                  0LL,
                  PoolWithTag,
                  v14,
                  &v27,
                  v8) )
          {
            v4 = -1073741491;
            goto LABEL_18;
          }
          if ( CmpFailPrimarySave != 4 && CmpFileFlushAndPurge(BugCheckParameter2, 0) && CmpFailPrimarySave != 5 )
          {
            if ( a2 )
              v15 = RtlNumberOfSetBits((PRTL_BITMAP)(BugCheckParameter2 + 2904));
            else
              v15 = *(_DWORD *)(BugCheckParameter2 + 112);
            CmpTraceHiveFlushWrotePrimaryFile(v15, v15 << 9);
            v26 = 0;
            if ( !a2 )
              HvSynchronizeAndDropTemporaryBins(BugCheckParameter2, 0, PoolWithTag, v14, 0);
            goto LABEL_18;
          }
        }
        v4 = -1073741823;
LABEL_18:
        if ( PoolWithTag && !a2 )
          ExFreePoolWithTag(PoolWithTag, 0);
        goto LABEL_21;
      }
      v4 = -1073741823;
    }
    else
    {
      v4 = -1073741491;
    }
    v7 = 1;
    goto LABEL_22;
  }
  if ( *(_QWORD *)(BugCheckParameter2 + 2928) )
  {
    v9 = *(_DWORD **)(BugCheckParameter2 + 2944);
    goto LABEL_4;
  }
LABEL_22:
  LOBYTE(a3) = v7;
  LOBYTE(a4) = a2 == 0;
  HvpFinishPrimaryWrite(BugCheckParameter2, v4 >= 0, a3, a4);
  return (unsigned int)v4;
}
