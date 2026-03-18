/*
 * XREFs of HvpAddLoadedBinToHive @ 0x1406A2B74
 * Callers:
 *     HvpApplyLogEntry @ 0x1406A2C58 (HvpApplyLogEntry.c)
 * Callees:
 *     memmove @ 0x140192C00 (memmove.c)
 *     HvpFreeBin @ 0x140479E34 (HvpFreeBin.c)
 *     HvpPointMapEntriesToBuffer @ 0x14047D3E0 (HvpPointMapEntriesToBuffer.c)
 *     HvpAllocateBin @ 0x14047D6EC (HvpAllocateBin.c)
 */

__int64 __fastcall HvpAddLoadedBinToHive(ULONG_PTR BugCheckParameter2, unsigned int *Src, int a3, unsigned int **a4)
{
  int Bin; // ebx
  void *v9; // rbx
  unsigned int *v10; // rdi
  __int64 v11; // r9
  void *v12; // rax
  void *v14; // [rsp+40h] [rbp-28h] BYREF
  unsigned int *v15; // [rsp+78h] [rbp+10h] BYREF

  Bin = HvpAllocateBin(BugCheckParameter2, Src[2], 0, a3, 0x31334D43u, (__int64 *)&v15, (__int64 *)&v14);
  if ( Bin < 0 )
  {
    v12 = v14;
    v11 = (__int64)v15;
  }
  else
  {
    v9 = v14;
    v10 = v15;
    if ( v14 )
      v10 = (unsigned int *)v14;
    memmove(v10, Src, Src[2]);
    HvpPointMapEntriesToBuffer(BugCheckParameter2, (__int64)v15, (__int64)v9, v10[2], a3, 0LL);
    v11 = 0LL;
    *a4 = v10;
    v12 = 0LL;
    Bin = 0;
  }
  if ( v11 || v12 )
    HvpFreeBin(BugCheckParameter2, Src[2], 0, v11, (__int64)v12);
  return (unsigned int)Bin;
}
