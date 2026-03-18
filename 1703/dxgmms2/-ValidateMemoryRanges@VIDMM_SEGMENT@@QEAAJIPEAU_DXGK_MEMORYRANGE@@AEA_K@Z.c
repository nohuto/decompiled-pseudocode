/*
 * XREFs of ?ValidateMemoryRanges@VIDMM_SEGMENT@@QEAAJIPEAU_DXGK_MEMORYRANGE@@AEA_K@Z @ 0x1C00A4364
 * Callers:
 *     ?BlockMemoryRanges@VIDMM_SEGMENT@@QEAAJW4_VIDMM_POOL_BLOCK_STATE@@W4_DXGK_QUERYADAPTERINFOTYPE@@IAEA_K@Z @ 0x1C00A13B8 (-BlockMemoryRanges@VIDMM_SEGMENT@@QEAAJW4_VIDMM_POOL_BLOCK_STATE@@W4_DXGK_QUERYADAPTERINFOTYPE@@.c)
 *     ?UnblockMemoryRanges@VIDMM_SEGMENT@@QEAAJW4_VIDMM_POOL_BLOCK_STATE@@IPEAU_DXGK_MEMORYRANGE@@@Z @ 0x1C00A3FD8 (-UnblockMemoryRanges@VIDMM_SEGMENT@@QEAAJW4_VIDMM_POOL_BLOCK_STATE@@IPEAU_DXGK_MEMORYRANGE@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDMM_SEGMENT::ValidateMemoryRanges(
        VIDMM_SEGMENT *this,
        unsigned __int64 a2,
        struct _DXGK_MEMORYRANGE *a3,
        unsigned __int64 *a4)
{
  int v4; // ebx
  unsigned int v7; // ebp
  VIDMM_SEGMENT *v8; // r11
  UINT64 *i; // r10
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rax
  _QWORD *v14; // rax

  v4 = 0;
  v7 = a2;
  v8 = this;
  if ( !(_DWORD)a2 )
    return 0LL;
  for ( i = &a3->SizeInBytes; ; i += 2 )
  {
    v10 = *(i - 1);
    v11 = *((_QWORD *)v8 + 8);
    if ( v10 >= v11 )
      break;
    this = (VIDMM_SEGMENT *)(v10 + *i);
    if ( (unsigned __int64)this > v11 )
      break;
    v12 = *((_QWORD *)v8 + 6);
    if ( v10 < v12 )
    {
      if ( (unsigned __int64)this >= v12 )
        *i = v12 - v10;
      a2 = *i;
      if ( !*i || (this = (VIDMM_SEGMENT *)(*((_QWORD *)v8 + 6) - *((_QWORD *)v8 + 9)), a2 >= (unsigned __int64)this) )
      {
        v14 = (_QWORD *)WdLogNewEntry5_WdAssertion(this, a2);
        v14[3] = a3[v4].SizeInBytes;
        v14[4] = -1073741811LL;
        v14[5] = 619LL;
        goto LABEL_15;
      }
      *a4 += a2;
    }
    if ( ++v4 >= v7 )
      return 0LL;
  }
  v14 = (_QWORD *)WdLogNewEntry5_WdAssertion(this, a2);
  v14[3] = a3[v4].SegmentOffset;
  v14[4] = a3[v4].SizeInBytes;
  v14[5] = -1073741811LL;
  v14[6] = 596LL;
LABEL_15:
  WdLogEvent5_WdAssertion(v14);
  return 3221225485LL;
}
