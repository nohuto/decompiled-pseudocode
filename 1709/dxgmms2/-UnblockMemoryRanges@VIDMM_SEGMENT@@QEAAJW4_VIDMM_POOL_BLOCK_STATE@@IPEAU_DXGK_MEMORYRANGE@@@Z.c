/*
 * XREFs of ?UnblockMemoryRanges@VIDMM_SEGMENT@@QEAAJW4_VIDMM_POOL_BLOCK_STATE@@IPEAU_DXGK_MEMORYRANGE@@@Z @ 0x1C00AC5A8
 * Callers:
 *     ?UnblockUEFIFrameBufferRanges@VIDMM_GLOBAL@@QEAAJPEBU_DXGK_QUERYSEGMENTMEMORYSTATE@@@Z @ 0x1C009D974 (-UnblockUEFIFrameBufferRanges@VIDMM_GLOBAL@@QEAAJPEBU_DXGK_QUERYSEGMENTMEMORYSTATE@@@Z.c)
 * Callees:
 *     memset @ 0x1C0018400 (memset.c)
 *     ?QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C0060F60 (-QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?ValidateMemoryRanges@VIDMM_SEGMENT@@QEAAJIPEAU_DXGK_MEMORYRANGE@@AEA_K@Z @ 0x1C00AC8B0 (-ValidateMemoryRanges@VIDMM_SEGMENT@@QEAAJIPEAU_DXGK_MEMORYRANGE@@AEA_K@Z.c)
 */

__int64 __fastcall VIDMM_SEGMENT::UnblockMemoryRanges(
        VIDMM_SEGMENT *a1,
        __int64 a2,
        unsigned int a3,
        struct _DXGK_MEMORYRANGE *a4)
{
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rax
  struct _DXGK_MEMORYRANGE v13; // xmm0
  VIDMM_GLOBAL *v14; // rcx
  unsigned __int64 v15; // [rsp+20h] [rbp-78h] BYREF
  _QWORD v16[12]; // [rsp+30h] [rbp-68h] BYREF

  v7 = VIDMM_SEGMENT::ValidateMemoryRanges(a1, a3, a4, &v15);
  v10 = v7;
  if ( v7 >= 0 )
  {
    memset(v16, 0, 0x58uLL);
    v13 = *a4;
    v14 = (VIDMM_GLOBAL *)*((_QWORD *)a1 + 1);
    LODWORD(v16[0]) = 216;
    *(struct _DXGK_MEMORYRANGE *)&v16[7] = v13;
    v16[5] = a1;
    LOBYTE(v16[6]) = 7;
    HIDWORD(v16[6]) = a3;
    VIDMM_GLOBAL::QueueSystemCommandAndWait(v14, (struct _VIDMM_SYSTEM_COMMAND *)v16, 0);
    return 0LL;
  }
  else
  {
    v11 = WdLogNewEntry5_WdAssertion(v9, v8);
    *(_QWORD *)(v11 + 24) = v10;
    *(_QWORD *)(v11 + 32) = 570LL;
    WdLogEvent5_WdAssertion(v11);
    return (unsigned int)v10;
  }
}
