/*
 * XREFs of HvWriteExternal @ 0x1406FB84C
 * Callers:
 *     CmSaveKey @ 0x1407022E4 (CmSaveKey.c)
 *     CmSaveMergedKeys @ 0x1407025D4 (CmSaveMergedKeys.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     HvpHeaderCheckSum @ 0x140496AEC (HvpHeaderCheckSum.c)
 *     CmpFileFlush @ 0x140498590 (CmpFileFlush.c)
 *     HvpGetCellMap @ 0x1404E4320 (HvpGetCellMap.c)
 *     CmpDoFileSetSizeEx @ 0x140566A0C (CmpDoFileSetSizeEx.c)
 */

__int64 __fastcall HvWriteExternal(ULONG_PTR BugCheckParameter2)
{
  unsigned int v1; // edi
  __int64 result; // rax
  unsigned int v4; // ebp
  unsigned int v5; // r10d
  unsigned int v6; // r8d
  __int64 CellMap; // rax
  unsigned int v8; // r8d
  int v9; // ecx
  int v11; // r12d
  _OWORD *PoolWithTag; // rax
  _DWORD *v13; // r15
  _OWORD *v14; // rcx
  __int64 v15; // rdx
  __int128 v16; // xmm1
  __int64 (__fastcall *v17)(ULONG_PTR, __int64, int *); // rax
  int v18; // ebx
  unsigned int v19; // ebx
  __int64 v20; // rax
  unsigned __int64 v21; // rax
  int v22; // r15d
  int (__fastcall *v23)(ULONG_PTR, __int64, int *); // rax
  int v24; // [rsp+30h] [rbp-38h] BYREF
  _DWORD *v25; // [rsp+38h] [rbp-30h]
  int v26; // [rsp+40h] [rbp-28h]

  v1 = 0;
  if ( !*(_QWORD *)(BugCheckParameter2 + 1552) )
    return 3221225485LL;
  v4 = *(_DWORD *)(BugCheckParameter2 + 272);
  result = CmpDoFileSetSizeEx(BugCheckParameter2, 2u, v4 + 4096, 0);
  v5 = result;
  if ( (int)result >= 0 )
  {
    v6 = 0;
    if ( v4 )
    {
      while ( 1 )
      {
        CellMap = HvpGetCellMap(BugCheckParameter2, v6);
        if ( !CellMap )
          KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v8, 0x99CuLL);
        v9 = *(_DWORD *)((*(_QWORD *)(CellMap + 8) & 0xFFFFFFFFFFFFFFF0uLL) + 8);
        v6 = v9 + v8;
        if ( v6 > *(_DWORD *)(BugCheckParameter2 + 272) || (v9 & 0xFFF) != 0 )
          break;
        if ( v6 >= v4 )
          goto LABEL_9;
      }
      return (unsigned int)-1073741492;
    }
    else
    {
LABEL_9:
      if ( v6 < *(_DWORD *)(BugCheckParameter2 + 272) )
        return v5;
      v11 = 4096;
      PoolWithTag = ExAllocatePoolWithTag(PagedPoolCacheAligned, 0x1000uLL, 0x20204D43u);
      v13 = PoolWithTag;
      if ( !PoolWithTag )
        return 3221225626LL;
      v14 = *(_OWORD **)(BugCheckParameter2 + 64);
      v15 = 32LL;
      do
      {
        *PoolWithTag = *v14;
        PoolWithTag[1] = v14[1];
        PoolWithTag[2] = v14[2];
        PoolWithTag[3] = v14[3];
        PoolWithTag[4] = v14[4];
        PoolWithTag[5] = v14[5];
        PoolWithTag[6] = v14[6];
        PoolWithTag += 8;
        v16 = v14[7];
        v14 += 8;
        *(PoolWithTag - 1) = v16;
        --v15;
      }
      while ( v15 );
      v13[10] = v4;
      v13[11] = 1;
      v13[127] = HvpHeaderCheckSum(v13);
      v17 = *(__int64 (__fastcall **)(ULONG_PTR, __int64, int *))(BugCheckParameter2 + 40);
      v24 = 0;
      v25 = v13;
      v26 = 4096;
      v18 = v17(BugCheckParameter2, 2LL, &v24);
      ExFreePoolWithTag(v13, 0);
      if ( v18 < 0 )
        return 3221225805LL;
      v19 = 0;
      if ( v4 )
      {
        while ( 1 )
        {
          v20 = HvpGetCellMap(BugCheckParameter2, v19);
          if ( !v20 )
            KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v19, 0x9F1uLL);
          v21 = *(_QWORD *)(v20 + 8) & 0xFFFFFFFFFFFFFFF0uLL;
          v22 = *(_DWORD *)(v21 + 8);
          v25 = (_DWORD *)v21;
          v23 = *(int (__fastcall **)(ULONG_PTR, __int64, int *))(BugCheckParameter2 + 40);
          v24 = v11;
          v26 = v22;
          if ( v23(BugCheckParameter2, 2LL, &v24) < 0 )
            break;
          v11 += v22;
          v19 += v22;
          if ( v19 >= v4 )
            goto LABEL_23;
        }
        return (unsigned int)-1073741491;
      }
      else
      {
LABEL_23:
        if ( CmpFileFlush(BugCheckParameter2, 2u) < 0 )
          return (unsigned int)-1073741491;
        return v1;
      }
    }
  }
  return result;
}
