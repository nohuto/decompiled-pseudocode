/*
 * XREFs of ?BlockMemoryRanges@VIDMM_SEGMENT@@QEAAJW4_VIDMM_POOL_BLOCK_STATE@@W4_DXGK_QUERYADAPTERINFOTYPE@@IAEA_K@Z @ 0x1C00A9B18
 * Callers:
 *     ?Init@VIDMM_SEGMENT@@UEAAJP6AXPEAX@ZPEAT_LARGE_INTEGER@@@Z @ 0x1C007C210 (-Init@VIDMM_SEGMENT@@UEAAJP6AXPEAX@ZPEAT_LARGE_INTEGER@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001DC0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0002544 (--3@YAXPEAX@Z.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C0016124 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     memset @ 0x1C0018400 (memset.c)
 *     ?ValidateMemoryRanges@VIDMM_SEGMENT@@QEAAJIPEAU_DXGK_MEMORYRANGE@@AEA_K@Z @ 0x1C00AC8B0 (-ValidateMemoryRanges@VIDMM_SEGMENT@@QEAAJIPEAU_DXGK_MEMORYRANGE@@AEA_K@Z.c)
 *     ?MarkMemoryBlocks@VIDMM_LINEAR_POOL@@QEAAJW4_VIDMM_POOL_BLOCK_STATE@@IPEAU_DXGK_MEMORYRANGE@@@Z @ 0x1C00B2850 (-MarkMemoryBlocks@VIDMM_LINEAR_POOL@@QEAAJW4_VIDMM_POOL_BLOCK_STATE@@IPEAU_DXGK_MEMORYRANGE@@@Z.c)
 */

__int64 __fastcall VIDMM_SEGMENT::BlockMemoryRanges(
        __int64 a1,
        unsigned __int8 a2,
        int a3,
        unsigned int a4,
        unsigned __int64 *a5)
{
  __int64 v5; // rbx
  __int64 v7; // r12
  SIZE_T v10; // rax
  struct _DXGK_MEMORYRANGE *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct _DXGK_MEMORYRANGE *v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  _QWORD *v20; // rax
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int16 v28; // [rsp+20h] [rbp-40h] BYREF
  _BYTE v29[14]; // [rsp+22h] [rbp-3Eh]
  struct _DXGKARG_QUERYADAPTERINFO v30; // [rsp+30h] [rbp-30h] BYREF

  LODWORD(v5) = 0;
  v7 = a3;
  if ( a4 )
  {
    v10 = 16LL * a4;
    if ( !is_mul_ok(a4, 0x10uLL) )
      v10 = -1LL;
    v11 = (struct _DXGK_MEMORYRANGE *)operator new[](v10, 0x30306956u, PagedPool);
    v14 = v11;
    if ( !v11 )
    {
      _InterlockedIncrement(&dword_1C0040584);
      v15 = WdLogNewEntry5_WdLowResource(v13, v12);
      LODWORD(v5) = -1073741801;
      *(_QWORD *)(v15 + 24) = a2;
      *(_QWORD *)(v15 + 32) = -1073741801LL;
      WdLogEvent5_WdLowResource(v15);
      return (unsigned int)v5;
    }
    memset(v11, 0, 16LL * a4);
    v30.InputDataSize = 16;
    *(_QWORD *)v29 = 0LL;
    v28 = *(_WORD *)(a1 + 16);
    *(_WORD *)v29 = *(_WORD *)(a1 + 380);
    v30.pInputData = &v28;
    v16 = *(_QWORD *)(a1 + 8);
    *(_DWORD *)&v29[2] = a4;
    *(_QWORD *)&v29[6] = v14;
    v30.Type = v7;
    v17 = DXGADAPTER::DdiQueryAdapterInfo(*(DXGADAPTER **)(v16 + 24), &v30);
    v5 = v17;
    if ( v17 >= 0 )
    {
      v21 = VIDMM_SEGMENT::ValidateMemoryRanges((VIDMM_SEGMENT *)a1, a4, v14, a5);
      v5 = v21;
      if ( v21 >= 0 )
      {
        LOBYTE(v22) = a2;
        v24 = VIDMM_LINEAR_POOL::MarkMemoryBlocks(*(_QWORD *)(a1 + 152), v22, a4, v14);
        v5 = v24;
        if ( v24 >= 0 )
        {
LABEL_14:
          operator delete(v14);
          return (unsigned int)v5;
        }
        v20 = (_QWORD *)WdLogNewEntry5_WdAssertion(v26, v25);
        v20[5] = 516LL;
      }
      else
      {
        v20 = (_QWORD *)WdLogNewEntry5_WdAssertion(v23, v22);
        v20[5] = 506LL;
      }
      v20[3] = a2;
    }
    else
    {
      v20 = (_QWORD *)WdLogNewEntry5_WdAssertion(v19, v18);
      v20[3] = v7;
      v20[5] = 496LL;
    }
    v20[4] = v5;
    WdLogEvent5_WdAssertion(v20);
    goto LABEL_14;
  }
  return (unsigned int)v5;
}
