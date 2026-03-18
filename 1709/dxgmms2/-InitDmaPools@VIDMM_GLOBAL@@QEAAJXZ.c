/*
 * XREFs of ?InitDmaPools@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C0079CB4
 * Callers:
 *     ?VidMmInitializePagingProcess@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C007B108 (-VidMmInitializePagingProcess@VIDMM_GLOBAL@@QEAAJXZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001DC0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?ReleaseBuffer@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z @ 0x1C000217C (-ReleaseBuffer@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z.c)
 *     ??_GVIDMM_DMA_POOL@@QEAAPEAXI@Z @ 0x1C0015C90 (--_GVIDMM_DMA_POOL@@QEAAPEAXI@Z.c)
 *     ?AcquireBuffer@VIDMM_DMA_POOL@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@EE@Z @ 0x1C00674D0 (-AcquireBuffer@VIDMM_DMA_POOL@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@EE@Z.c)
 *     ??0VIDMM_DMA_POOL@@QEAA@PEAVVIDMM_GLOBAL@@KPEAVVIDMM_DEVICE@@PEAVDXGCONTEXT@@KKKKKH@Z @ 0x1C0073CA4 (--0VIDMM_DMA_POOL@@QEAA@PEAVVIDMM_GLOBAL@@KPEAVVIDMM_DEVICE@@PEAVDXGCONTEXT@@KKKKKH@Z.c)
 *     ?Init@VIDMM_DMA_POOL@@QEAAJXZ @ 0x1C0073D84 (-Init@VIDMM_DMA_POOL@@QEAAJXZ.c)
 */

__int64 __fastcall VIDMM_GLOBAL::InitDmaPools(VIDMM_GLOBAL *this)
{
  struct VIDMM_DEVICE *v1; // r14
  __int64 v2; // rsi
  unsigned int v4; // ebp
  VIDMM_DMA_POOL *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbp
  __int64 v12; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 i; // rsi
  VIDMM_DMA_POOL *v17; // rcx
  struct _VIDMM_DMA_BUFFER *v18; // rdx
  VIDMM_DMA_POOL *v19; // rcx

  v1 = (struct VIDMM_DEVICE *)*((_QWORD *)this + 5041);
  v2 = 0LL;
  if ( *((_DWORD *)this + 1604) )
  {
    while ( 1 )
    {
      v4 = 1 << (*((_BYTE *)this + v2 + 52) - 1);
      v5 = (VIDMM_DMA_POOL *)operator new[](0x90uLL, 0x39326956u, (POOL_TYPE)512);
      if ( v5 )
        v5 = VIDMM_DMA_POOL::VIDMM_DMA_POOL(
               v5,
               this,
               v2,
               v1,
               0LL,
               *((_DWORD *)this + v2 + 29),
               0,
               0,
               v4,
               *((_DWORD *)this + v2 + 93),
               1);
      *((_QWORD *)this + v2 + 79) = v5;
      if ( !v5 )
        break;
      v8 = VIDMM_DMA_POOL::Init(v5);
      v11 = v8;
      if ( v8 < 0 )
      {
        _InterlockedAdd(&dword_1C0040600, 1u);
        v14 = WdLogNewEntry5_WdLowResource(v10, v9);
        *(_QWORD *)(v14 + 24) = v11;
        WdLogEvent5_WdLowResource(v14);
        goto LABEL_11;
      }
      VIDMM_DMA_POOL::AcquireBuffer(
        *((VIDMM_DMA_POOL **)this + v2 + 79),
        (struct _VIDMM_DMA_BUFFER **)this + v2 + 143,
        0,
        1);
      v12 = *((_QWORD *)this + v2 + 143);
      v2 = (unsigned int)(v2 + 1);
      *(_DWORD *)(v12 + 32) = 1;
      if ( (unsigned int)v2 >= *((_DWORD *)this + 1604) )
        goto LABEL_7;
    }
    _InterlockedAdd(&dword_1C00405FC, 1u);
    v15 = WdLogNewEntry5_WdLowResource(v7, v6);
    *(_QWORD *)(v15 + 24) = 1806LL;
    WdLogEvent5_WdLowResource(v15);
    LODWORD(v11) = -1073741801;
LABEL_11:
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 1604); i = (unsigned int)(i + 1) )
    {
      v17 = (VIDMM_DMA_POOL *)*((_QWORD *)this + i + 79);
      if ( v17 )
      {
        v18 = (struct _VIDMM_DMA_BUFFER *)*((_QWORD *)this + i + 143);
        if ( v18 )
        {
          VIDMM_DMA_POOL::ReleaseBuffer(v17, v18, 1);
          *((_QWORD *)this + i + 143) = 0LL;
        }
      }
      v19 = (VIDMM_DMA_POOL *)*((_QWORD *)this + i + 79);
      if ( v19 )
        VIDMM_DMA_POOL::`scalar deleting destructor'(v19);
      *((_QWORD *)this + i + 79) = 0LL;
    }
    return (unsigned int)v11;
  }
  else
  {
LABEL_7:
    *((_DWORD *)this + 10022) = 1;
    return 0LL;
  }
}
