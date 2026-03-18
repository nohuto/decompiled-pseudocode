/*
 * XREFs of ??_GCLegacyTokenBuffer@@AEAAPEAXI@Z @ 0x1C0012FA4
 * Callers:
 *     ?ReturnLegacyTokenBuffer@CCompositionFrame@DirectComposition@@IEAAXXZ @ 0x1C0013604 (-ReturnLegacyTokenBuffer@CCompositionFrame@DirectComposition@@IEAAXXZ.c)
 *     ?Discard@CCompositionFrame@DirectComposition@@QEAAXXZ @ 0x1C00136E4 (-Discard@CCompositionFrame@DirectComposition@@QEAAXXZ.c)
 *     ?DeleteAllLegacyTokenBuffers@CTokenManager@@IEAAXXZ @ 0x1C00295EC (-DeleteAllLegacyTokenBuffers@CTokenManager@@IEAAXXZ.c)
 *     ?ReturnLegacyTokenBufferInternal@CTokenManager@@IEAAXPEAVCLegacyTokenBuffer@@@Z @ 0x1C0029CBC (-ReturnLegacyTokenBufferInternal@CTokenManager@@IEAAXPEAVCLegacyTokenBuffer@@@Z.c)
 * Callees:
 *     ?Reset@CLegacyTokenBuffer@@IEAAXXZ @ 0x1C0012EB4 (-Reset@CLegacyTokenBuffer@@IEAAXXZ.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 */

CLegacyTokenBuffer *__fastcall CLegacyTokenBuffer::`scalar deleting destructor'(CLegacyTokenBuffer *this)
{
  CLegacyTokenBuffer::Reset(this);
  Win32FreePool(this);
  return this;
}
