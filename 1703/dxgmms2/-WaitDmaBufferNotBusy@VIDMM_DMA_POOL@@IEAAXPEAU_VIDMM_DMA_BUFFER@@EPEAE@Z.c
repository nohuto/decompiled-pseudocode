/*
 * XREFs of ?WaitDmaBufferNotBusy@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@EPEAE@Z @ 0x1C0063D90
 * Callers:
 *     ?AcquireBuffer@VIDMM_DMA_POOL@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@EE@Z @ 0x1C0063BC0 (-AcquireBuffer@VIDMM_DMA_POOL@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@EE@Z.c)
 *     ?RemoveDmaBufferFromPool@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@@Z @ 0x1C006E6FC (-RemoveDmaBufferFromPool@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@@Z.c)
 *     ?TrimPool@VIDMM_DMA_POOL@@QEAAXE@Z @ 0x1C009A6A8 (-TrimPool@VIDMM_DMA_POOL@@QEAAXE@Z.c)
 * Callees:
 *     VidSchIsWorkerThread @ 0x1C00108D0 (VidSchIsWorkerThread.c)
 *     VidSchiInterlockedRemoveEntryList @ 0x1C0011600 (VidSchiInterlockedRemoveEntryList.c)
 *     memset @ 0x1C0015FC0 (memset.c)
 *     VidSchWaitForCompletionEvent @ 0x1C004FB1C (VidSchWaitForCompletionEvent.c)
 *     VidSchRegisterCompletionEvent @ 0x1C004FCEC (VidSchRegisterCompletionEvent.c)
 */

void __fastcall VIDMM_DMA_POOL::WaitDmaBufferNotBusy(
        VIDMM_DMA_POOL *this,
        struct _VIDMM_DMA_BUFFER *a2,
        char a3,
        unsigned __int8 *a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rbx
  _QWORD *v16; // rax
  _QWORD v17[20]; // [rsp+20h] [rbp-B8h] BYREF

  if ( g_IsInternalReleaseOrDbg )
  {
    v13 = WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(v13 + 24) = *((_QWORD *)this + 2);
    *(_QWORD *)(v13 + 32) = a2;
  }
  if ( a4 )
    *a4 = 0;
  memset(v17, 0, sizeof(v17));
  LODWORD(v17[2]) = 0;
  if ( VidSchIsWorkerThread(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 16LL) + 416LL)) )
  {
    v14 = *((unsigned int *)a2 + 12);
    v15 = *((_QWORD *)a2 + 5);
    v16 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v9, v8, v10);
    v16[3] = 270LL;
    v16[4] = 22LL;
    v16[5] = a2;
    v16[6] = v15;
    v16[7] = v14;
    WdLogEvent5_WdCriticalError(v16);
  }
  v11 = *((_DWORD *)a2 + 7);
  LOBYTE(v17[19]) = a3;
  if ( (v11 & 2) == 0 )
  {
    v12 = *((_QWORD *)this + 3);
    if ( v12 )
      v12 = *(_QWORD *)(v12 + 232);
    v17[3] = v12;
    LODWORD(v17[4]) = (v12 != 0 ? 2 : 0) | v17[4] & 0xFFFFFFFD;
  }
  VidSchRegisterCompletionEvent(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 16LL) + 416LL), (__int64)v17);
  while ( *((_BYTE *)a2 + 24) == 1 )
  {
    if ( (unsigned int)VidSchWaitForCompletionEvent(
                         *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 16LL) + 416LL),
                         (__int64)v17,
                         1LL) == -1073741130 )
    {
      if ( a4 )
        *a4 = 1;
      break;
    }
  }
  VidSchiInterlockedRemoveEntryList(
    (KSPIN_LOCK *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 16LL) + 416LL) + 1896LL),
    v17,
    0LL);
}
