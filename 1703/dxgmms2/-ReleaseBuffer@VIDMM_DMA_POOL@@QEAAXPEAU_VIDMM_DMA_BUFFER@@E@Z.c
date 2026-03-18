/*
 * XREFs of ?ReleaseBuffer@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z @ 0x1C0002BC0
 * Callers:
 *     VidMmReleaseDmaBuffer @ 0x1C001ED40 (VidMmReleaseDmaBuffer.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0059620 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?InitDmaPools@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C0073654 (-InitDmaPools@VIDMM_GLOBAL@@QEAAJXZ.c)
 *     ??1VIDMM_GLOBAL@@QEAA@XZ @ 0x1C00920D8 (--1VIDMM_GLOBAL@@QEAA@XZ.c)
 *     VidSchiDiscardQueuePacket @ 0x1C00AA7D4 (VidSchiDiscardQueuePacket.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_DMA_POOL::ReleaseBuffer(VIDMM_DMA_POOL *this, struct _VIDMM_DMA_BUFFER *a2, char a3)
{
  bool v6; // zf
  __int64 v7; // rax
  int v8; // eax

  if ( g_IsInternalReleaseOrDbg )
  {
    v7 = WdLogNewEntry5_WdTrace();
    *(_QWORD *)(v7 + 24) = a2;
    *(_QWORD *)(v7 + 32) = *((_QWORD *)this + 2);
  }
  if ( a3 )
  {
    v6 = _InterlockedExchangeAdd((volatile signed __int32 *)a2 + 8, 0xFFFFFFFF) == 1;
  }
  else
  {
    v8 = *((_DWORD *)a2 + 8);
    if ( v8 > 0 )
      *((_DWORD *)a2 + 8) = v8 - 1;
    v6 = *((_DWORD *)a2 + 8) == 0;
  }
  if ( v6 )
    *((_BYTE *)a2 + 24) = 0;
}
