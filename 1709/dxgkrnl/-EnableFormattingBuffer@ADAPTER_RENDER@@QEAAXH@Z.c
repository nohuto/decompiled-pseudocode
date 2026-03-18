/*
 * XREFs of ?EnableFormattingBuffer@ADAPTER_RENDER@@QEAAXH@Z @ 0x1C0177334
 * Callers:
 *     ?EnableFormattingBuffer@DXGGLOBAL@@QEAAXH@Z @ 0x1C01AA488 (-EnableFormattingBuffer@DXGGLOBAL@@QEAAXH@Z.c)
 * Callees:
 *     ?DestroyFormattingBuffer@ADAPTER_RENDER@@QEAAXXZ @ 0x1C0021768 (-DestroyFormattingBuffer@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ?CreateFormattingBuffer@ADAPTER_RENDER@@QEAAXXZ @ 0x1C0176F50 (-CreateFormattingBuffer@ADAPTER_RENDER@@QEAAXXZ.c)
 */

void __fastcall ADAPTER_RENDER::EnableFormattingBuffer(ADAPTER_RENDER *this, int a2)
{
  if ( *((_BYTE *)this + 712) )
  {
    if ( a2 )
      ADAPTER_RENDER::CreateFormattingBuffer(this);
    else
      ADAPTER_RENDER::DestroyFormattingBuffer(this);
  }
}
