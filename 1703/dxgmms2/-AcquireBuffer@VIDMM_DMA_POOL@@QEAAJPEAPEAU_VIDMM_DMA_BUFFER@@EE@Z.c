/*
 * XREFs of ?AcquireBuffer@VIDMM_DMA_POOL@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@EE@Z @ 0x1C0063BC0
 * Callers:
 *     VidMmAcquireDmaBuffer @ 0x1C0002C30 (VidMmAcquireDmaBuffer.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0059620 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?InitDmaPools@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C0073654 (-InitDmaPools@VIDMM_GLOBAL@@QEAAJXZ.c)
 * Callees:
 *     ?IsAllowedToGrow@VIDMM_DMA_POOL@@IEAAHKKK@Z @ 0x1C0063AB8 (-IsAllowedToGrow@VIDMM_DMA_POOL@@IEAAHKKK@Z.c)
 *     ?WaitDmaBufferNotBusy@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@EPEAE@Z @ 0x1C0063D90 (-WaitDmaBufferNotBusy@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@EPEAE@Z.c)
 *     ?AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z @ 0x1C0063ED4 (-AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z.c)
 *     ?RemoveDmaBufferFromPool@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@@Z @ 0x1C006E6FC (-RemoveDmaBufferFromPool@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@@Z.c)
 */

__int64 __fastcall VIDMM_DMA_POOL::AcquireBuffer(VIDMM_DMA_POOL *this, struct _VIDMM_DMA_BUFFER **a2, char a3, char a4)
{
  unsigned int v8; // ebp
  struct _VIDMM_DMA_BUFFER **v9; // rdi
  struct _VIDMM_DMA_BUFFER *v10; // rbx
  struct _VIDMM_DMA_BUFFER *v11; // rcx
  struct _VIDMM_DMA_BUFFER **v12; // rax
  struct _VIDMM_DMA_BUFFER ***v13; // rax
  struct _ERESOURCE *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r15
  signed __int64 v19; // rax
  __int64 v21; // rcx
  __int64 v22; // rdx
  bool v23; // zf
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rdi
  _QWORD *v27; // rax
  __int64 v28; // rax
  unsigned __int8 v29; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int8 v30; // [rsp+58h] [rbp+10h] BYREF

  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = this;
  v8 = 0;
  v9 = (struct _VIDMM_DMA_BUFFER **)((char *)this + 96);
  *a2 = 0LL;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v10 = *v9;
        if ( *((_BYTE *)*v9 + 24) )
          break;
        if ( *((_BYTE *)v10 + 25) != 1 )
        {
          if ( g_IsInternalReleaseOrDbg )
            *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = v10;
          ExAcquireResourceSharedLite(VIDMM_DMA_POOL::_DmaPoolsAddRemoveLock, 1u);
          v11 = *(struct _VIDMM_DMA_BUFFER **)v10;
          v12 = (struct _VIDMM_DMA_BUFFER **)*((_QWORD *)v10 + 1);
          if ( *(struct _VIDMM_DMA_BUFFER **)(*(_QWORD *)v10 + 8LL) != v10 || *v12 != v10 )
            __fastfail(3u);
          *v12 = v11;
          *((_QWORD *)v11 + 1) = v12;
          v13 = (struct _VIDMM_DMA_BUFFER ***)*((_QWORD *)this + 13);
          if ( *v13 != v9 )
            __fastfail(3u);
          v14 = VIDMM_DMA_POOL::_DmaPoolsAddRemoveLock;
          *(_QWORD *)v10 = v9;
          *((_QWORD *)v10 + 1) = v13;
          *v13 = (struct _VIDMM_DMA_BUFFER **)v10;
          *((_QWORD *)this + 13) = v10;
          ExReleaseResourceLite(v14);
          v18 = *((_QWORD *)this + 7);
          if ( v18 != *((_QWORD *)v10 + 5)
            || *((_DWORD *)this + 18) != *((_DWORD *)v10 + 12)
            || *((_DWORD *)this + 21) != *((_DWORD *)v10 + 13) )
          {
            v26 = *((unsigned int *)this + 18);
            v27 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v16, v15, v17);
            v27[3] = 270LL;
            v27[4] = 22LL;
            v27[5] = v10;
            v27[6] = v18;
            v27[7] = v26;
            WdLogEvent5_WdCriticalError(v27);
          }
          if ( (*((_BYTE *)this + 32) & 1) != 0 )
            *((_QWORD *)v10 + 21) = 0LL;
          *((_QWORD *)v10 + 2) = 0LL;
          *((_QWORD *)v10 + 3) = 0LL;
          v19 = _InterlockedIncrement64(&VIDMM_DMA_POOL::_DmaBufferUniqueness);
          *((_BYTE *)v10 + 24) = 1;
          *((_DWORD *)v10 + 7) |= 1u;
          *((_QWORD *)v10 + 20) = v19;
          *a2 = v10;
          return v8;
        }
        VIDMM_DMA_POOL::RemoveDmaBufferFromPool(this, *v9);
      }
      if ( !(unsigned int)VIDMM_DMA_POOL::IsAllowedToGrow(
                            this,
                            *((_DWORD *)this + 10),
                            *((_DWORD *)this + 16),
                            *((_DWORD *)this + 19)) )
        break;
      if ( g_IsInternalReleaseOrDbg )
      {
        WdLogNewEntry5_WdTrace(v21);
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v24) + 24) = *((unsigned int *)this + 23);
      }
      if ( VIDMM_DMA_POOL::AddDmaBufferToPool(
             this,
             *((_QWORD *)this + 5),
             *((_DWORD *)this + 16),
             *((_DWORD *)this + 19)) < 0 )
      {
        if ( a3 )
          return 3223191810LL;
        v29 = 0;
        VIDMM_DMA_POOL::WaitDmaBufferNotBusy(this, v10, a4 == 0, &v29);
        v23 = v29 == 0;
        goto LABEL_23;
      }
    }
    if ( g_IsInternalReleaseOrDbg )
    {
      WdLogNewEntry5_WdTrace(v21);
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v25) + 24) = v10;
    }
    if ( a3 )
      return 3223191810LL;
    v30 = 0;
    VIDMM_DMA_POOL::WaitDmaBufferNotBusy(this, v10, a4 == 0, &v30);
    v23 = v30 == 0;
LABEL_23:
    if ( !v23 )
    {
      v28 = WdLogNewEntry5_WdEvent(this, v22);
      *(_QWORD *)(v28 + 24) = v10;
      WdLogEvent5_WdEvent(v28);
      return (unsigned int)-1073741130;
    }
  }
}
