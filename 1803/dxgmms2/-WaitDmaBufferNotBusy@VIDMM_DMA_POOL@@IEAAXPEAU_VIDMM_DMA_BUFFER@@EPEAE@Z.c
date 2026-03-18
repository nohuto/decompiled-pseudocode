/*
 * XREFs of ?WaitDmaBufferNotBusy@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@EPEAE@Z @ 0x1C0057270
 * Callers:
 *     ?AcquireBuffer@VIDMM_DMA_POOL@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@EE@Z @ 0x1C00570A0 (-AcquireBuffer@VIDMM_DMA_POOL@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@EE@Z.c)
 *     ?RemoveDmaBufferFromPool@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@@Z @ 0x1C007AAF8 (-RemoveDmaBufferFromPool@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@@Z.c)
 *     ?TrimPool@VIDMM_DMA_POOL@@QEAAXE@Z @ 0x1C00A998C (-TrimPool@VIDMM_DMA_POOL@@QEAAXE@Z.c)
 * Callees:
 *     VidSchiInterlockedRemoveEntryList @ 0x1C0002828 (VidSchiInterlockedRemoveEntryList.c)
 *     VidSchIsWorkerThread @ 0x1C0004C00 (VidSchIsWorkerThread.c)
 *     memset @ 0x1C0017DC0 (memset.c)
 *     VidSchWaitForCompletionEvent @ 0x1C0074A5C (VidSchWaitForCompletionEvent.c)
 *     VidSchRegisterCompletionEvent @ 0x1C0074B84 (VidSchRegisterCompletionEvent.c)
 */

void __fastcall VIDMM_DMA_POOL::WaitDmaBufferNotBusy(
        VIDMM_DMA_POOL *this,
        struct _VIDMM_DMA_BUFFER *a2,
        char a3,
        unsigned __int8 *a4)
{
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // eax
  __int64 v13; // rcx
  int v14; // ecx
  unsigned int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rbx
  _QWORD *v19; // rax
  _QWORD v20[20]; // [rsp+28h] [rbp-59h] BYREF

  if ( g_IsInternalReleaseOrDbg )
  {
    v16 = WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(v16 + 24) = *((_QWORD *)this + 2);
    *(_QWORD *)(v16 + 32) = a2;
  }
  if ( a4 )
    *a4 = 0;
  memset(v20, 0, sizeof(v20));
  LODWORD(v20[2]) = 0;
  v8 = *(_QWORD *)this;
  if ( VidSchIsWorkerThread(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 16LL) + 528LL)) )
  {
    v17 = *((unsigned int *)a2 + 12);
    v18 = *((_QWORD *)a2 + 5);
    v19 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v10, v9, v11);
    v19[3] = 270LL;
    v19[4] = 22LL;
    v19[5] = a2;
    v19[6] = v18;
    v19[7] = v17;
    WdLogEvent5_WdCriticalError(v19);
    v8 = *(_QWORD *)this;
  }
  v12 = *((_DWORD *)a2 + 7);
  LOBYTE(v20[19]) = a3;
  if ( (v12 & 2) == 0 )
  {
    v13 = *((_QWORD *)this + 3);
    if ( v13 )
    {
      if ( (*(_DWORD *)(v13 + 364) & 0x10) != 0 )
      {
        v20[3] = *(_QWORD *)(v13 + 256);
        v14 = v20[3] != 0LL ? 4 : 0;
        v15 = v20[4] & 0xFFFFFFFB;
      }
      else
      {
        v20[3] = *(_QWORD *)(v13 + 232);
        v14 = v20[3] != 0LL ? 2 : 0;
        v15 = v20[4] & 0xFFFFFFFD;
      }
      LODWORD(v20[4]) = v15 | v14;
    }
  }
  VidSchRegisterCompletionEvent(*(_QWORD *)(*(_QWORD *)(v8 + 16) + 528LL), v20);
  while ( *((_BYTE *)a2 + 24) == 1 )
  {
    if ( (unsigned int)VidSchWaitForCompletionEvent(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 16LL) + 528LL), v20, 1LL) == -1073741130 )
    {
      if ( a4 )
        *a4 = 1;
      break;
    }
  }
  VidSchiInterlockedRemoveEntryList(
    (KSPIN_LOCK *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 16LL) + 528LL) + 1920LL),
    v20,
    0LL);
}
