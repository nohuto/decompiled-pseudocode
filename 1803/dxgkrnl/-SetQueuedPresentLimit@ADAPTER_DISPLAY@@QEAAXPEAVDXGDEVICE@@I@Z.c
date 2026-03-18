/*
 * XREFs of ?SetQueuedPresentLimit@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@I@Z @ 0x1C01579F8
 * Callers:
 *     ?SetQueuedPresentLimit@DXGDEVICE@@QEAAJI@Z @ 0x1C00F317C (-SetQueuedPresentLimit@DXGDEVICE@@QEAAJI@Z.c)
 * Callees:
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C0014AF8 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?SetQueuedPresentLimit@BLTQUEUE@@QEAAXI@Z @ 0x1C01D6914 (-SetQueuedPresentLimit@BLTQUEUE@@QEAAXI@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::SetQueuedPresentLimit(ADAPTER_DISPLAY *this, struct DXGDEVICE *a2, unsigned int a3)
{
  unsigned int i; // ebx

  if ( *((_QWORD *)this + 33) )
  {
    for ( i = 0; i < *((_DWORD *)this + 20); ++i )
    {
      if ( ADAPTER_DISPLAY::IsVidPnSourceOwner((DXGADAPTER **)this, a2, i) )
        BLTQUEUE::SetQueuedPresentLimit((BLTQUEUE *)(*(_QWORD *)(*((_QWORD *)this + 33) + 8LL) + 2704LL * i), a3);
    }
  }
}
