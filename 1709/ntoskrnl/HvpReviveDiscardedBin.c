/*
 * XREFs of HvpReviveDiscardedBin @ 0x1406A0FE8
 * Callers:
 *     HvpAddBin @ 0x1404E4EF8 (HvpAddBin.c)
 * Callees:
 *     ExInitializePushLock @ 0x140025A30 (ExInitializePushLock.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     HvpFreeBin @ 0x140479E34 (HvpFreeBin.c)
 *     HvpGetCellMap @ 0x14047D620 (HvpGetCellMap.c)
 *     HvpProtectBin @ 0x14047D67C (HvpProtectBin.c)
 *     HvpAllocateBin @ 0x14047D6EC (HvpAllocateBin.c)
 */

__int64 __fastcall HvpReviveDiscardedBin(ULONG_PTR BugCheckParameter2, __int64 a2, unsigned int a3, int a4)
{
  int v6; // r15d
  size_t v7; // rbp
  void *v8; // rdi
  __int64 PoolWithTag; // rbx
  int v10; // esi
  int v11; // eax
  _DWORD *v12; // r14
  char v13; // al
  unsigned int v14; // esi
  __int64 CellMap; // rax
  unsigned int v16; // r8d
  void *v18; // [rsp+40h] [rbp-38h] BYREF
  __int64 v19; // [rsp+88h] [rbp+10h] BYREF

  v19 = 0LL;
  v18 = 0LL;
  v6 = *(_DWORD *)(a2 + 20) + (a4 << 31);
  v7 = a3;
  if ( a4 == 1 )
  {
    v8 = 0LL;
    PoolWithTag = (__int64)ExAllocatePoolWithTag(PagedPool, a3, 0x62484D43u);
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    goto LABEL_7;
  }
  v11 = HvpAllocateBin(BugCheckParameter2, a3, a4, v6, 0x35314D43u, &v19, (__int64 *)&v18);
  v8 = v18;
  v10 = v11;
  PoolWithTag = v19;
  if ( v11 >= 0 )
  {
    if ( v18 )
    {
      v12 = v18;
      goto LABEL_8;
    }
LABEL_7:
    v12 = (_DWORD *)PoolWithTag;
    if ( PoolWithTag )
    {
      v13 = 0;
LABEL_10:
      v10 = HvpProtectBin(BugCheckParameter2, v7, a4, v6, (__int64)v12, v13);
      if ( v10 >= 0 )
      {
        memset(v12, 0, v7);
        v12[7] = 0;
        *v12 = 1852400232;
        v12[1] = v6 & 0x7FFFFFFF;
        v14 = 0;
        v12[2] = v7;
        for ( v12[8] = v7 - 32; v14 < (unsigned int)v7; v14 += 4096 )
        {
          CellMap = HvpGetCellMap(BugCheckParameter2, v14 + v6);
          if ( !CellMap )
            KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v16, 0x282uLL);
          *(_QWORD *)CellMap = v14;
          *(_QWORD *)(CellMap + 8) = PoolWithTag;
          *(_QWORD *)(CellMap + 16) = v8;
          if ( v14 )
          {
            *(_DWORD *)(CellMap + 32) = 0;
          }
          else
          {
            *(_DWORD *)(CellMap + 32) = v7;
            *(_QWORD *)(CellMap + 8) = PoolWithTag | 1;
          }
          if ( v8 )
            ExInitializePushLock((PKSPIN_LOCK)(CellMap + 24));
          else
            *(_QWORD *)(CellMap + 24) = 1LL;
        }
        PoolWithTag = 0LL;
        v8 = 0LL;
        v10 = 0;
      }
      goto LABEL_21;
    }
LABEL_8:
    v13 = 1;
    goto LABEL_10;
  }
LABEL_21:
  if ( PoolWithTag || v8 )
    HvpFreeBin(BugCheckParameter2, v7, a4, PoolWithTag, (__int64)v8);
  return (unsigned int)v10;
}
