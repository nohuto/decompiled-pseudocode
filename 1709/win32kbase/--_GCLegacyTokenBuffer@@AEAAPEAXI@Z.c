/*
 * XREFs of ??_GCLegacyTokenBuffer@@AEAAPEAXI@Z @ 0x1C00394BC
 * Callers:
 *     ?Discard@CCompositionFrame@DirectComposition@@QEAAXXZ @ 0x1C0035174 (-Discard@CCompositionFrame@DirectComposition@@QEAAXXZ.c)
 *     ?DeleteAllLegacyTokenBuffers@CTokenManager@@IEAAXXZ @ 0x1C003566C (-DeleteAllLegacyTokenBuffers@CTokenManager@@IEAAXXZ.c)
 *     ?ReturnLegacyTokenBufferInternal@CTokenManager@@IEAAXPEAVCLegacyTokenBuffer@@@Z @ 0x1C0035EAC (-ReturnLegacyTokenBufferInternal@CTokenManager@@IEAAXPEAVCLegacyTokenBuffer@@@Z.c)
 *     NtDCompositionRetireFrame @ 0x1C0037500 (NtDCompositionRetireFrame.c)
 * Callees:
 *     ?Reset@CLegacyTokenBuffer@@IEAAXXZ @ 0x1C00393CC (-Reset@CLegacyTokenBuffer@@IEAAXXZ.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 */

CLegacyTokenBuffer *__fastcall CLegacyTokenBuffer::`scalar deleting destructor'(
        CLegacyTokenBuffer *this,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // r8

  CLegacyTokenBuffer::Reset(this, a2, a3);
  Win32FreePool(this, v4, v5);
  return this;
}
