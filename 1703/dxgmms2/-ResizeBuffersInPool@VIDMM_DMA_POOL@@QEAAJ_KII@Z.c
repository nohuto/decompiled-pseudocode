/*
 * XREFs of ?ResizeBuffersInPool@VIDMM_DMA_POOL@@QEAAJ_KII@Z @ 0x1C009A524
 * Callers:
 *     VidMmResizeBuffersInPool @ 0x1C001ED90 (VidMmResizeBuffersInPool.c)
 * Callees:
 *     ?AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z @ 0x1C0063ED4 (-AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z.c)
 *     ?RemoveDmaBufferFromPool@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@@Z @ 0x1C006E6FC (-RemoveDmaBufferFromPool@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@@Z.c)
 */

__int64 __fastcall VIDMM_DMA_POOL::ResizeBuffersInPool(
        struct _VIDMM_DMA_BUFFER **this,
        unsigned __int64 a2,
        unsigned int a3,
        unsigned int a4)
{
  __int64 v9; // rdi
  int v10; // r15d
  struct _VIDMM_DMA_BUFFER *v11; // rdi
  struct _VIDMM_DMA_BUFFER *v12; // rcx
  __int64 v13; // rax

  if ( a2 < (unsigned __int64)this[6] || a3 < *((_DWORD *)this + 17) || a4 < *((_DWORD *)this + 20) )
  {
    v13 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v13 + 24) = 1843LL;
    WdLogEvent5_WdAssertion(v13);
    return 3221225485LL;
  }
  else if ( (struct _VIDMM_DMA_BUFFER *)a2 == this[5] && a3 == *((_DWORD *)this + 16) && a4 == *((_DWORD *)this + 19) )
  {
    return 0LL;
  }
  else
  {
    v9 = 0LL;
    while ( 1 )
    {
      v10 = VIDMM_DMA_POOL::AddDmaBufferToPool((VIDMM_DMA_POOL *)this, a2, a3, a4);
      if ( v10 < 0 )
        break;
      v9 = (unsigned int)(v9 + 1);
      if ( (unsigned int)v9 >= 2 )
        goto LABEL_14;
    }
    if ( (_DWORD)v9 )
    {
      do
      {
        VIDMM_DMA_POOL::RemoveDmaBufferFromPool(this, this[12]);
        --v9;
      }
      while ( v9 );
    }
LABEL_14:
    if ( v10 >= 0 )
    {
      v11 = this[13];
      this[5] = (struct _VIDMM_DMA_BUFFER *)a2;
      *((_DWORD *)this + 16) = a3;
      *((_DWORD *)this + 19) = a4;
      do
      {
        while ( 1 )
        {
          v12 = v11;
          v11 = (struct _VIDMM_DMA_BUFFER *)*((_QWORD *)v11 + 1);
          if ( *((struct _VIDMM_DMA_BUFFER **)v12 + 5) == this[5]
            && *((_DWORD *)v12 + 12) == *((_DWORD *)this + 16)
            && *((_DWORD *)v12 + 13) == *((_DWORD *)this + 19) )
          {
            break;
          }
          if ( *((_BYTE *)v12 + 24) )
            *((_BYTE *)v12 + 25) = 1;
          else
            VIDMM_DMA_POOL::RemoveDmaBufferFromPool(this, v12);
        }
      }
      while ( *((_BYTE *)v12 + 25) );
    }
    return (unsigned int)v10;
  }
}
