/*
 * XREFs of ?Release@CRegion@@QEBAJXZ @ 0x1C0012A44
 * Callers:
 *     ??1CToken@@UEAA@XZ @ 0x1C00070B0 (--1CToken@@UEAA@XZ.c)
 *     ??1CBufferRealization@@MEAA@XZ @ 0x1C00101F0 (--1CBufferRealization@@MEAA@XZ.c)
 *     ?OpenLifetimeDirtyRegion@CBufferRealization@@QEBAJPEAPEAUHRGN__@@@Z @ 0x1C0010268 (-OpenLifetimeDirtyRegion@CBufferRealization@@QEBAJPEAPEAUHRGN__@@@Z.c)
 *     ?Discard@CCompositionToken@@UEAAXXZ @ 0x1C0011AF0 (-Discard@CCompositionToken@@UEAAXXZ.c)
 *     ??1CCompositionBuffer@@UEAA@XZ @ 0x1C00127D0 (--1CCompositionBuffer@@UEAA@XZ.c)
 *     ?AddScrollAsDirty@CCompositionBuffer@@IEAAXAEBUScrollOptimization@@@Z @ 0x1C01514D0 (-AddScrollAsDirty@CCompositionBuffer@@IEAAXAEBUScrollOptimization@@@Z.c)
 *     ?Create@CRegion@@SAJAEBUtagRECT@@PEAPEAV1@@Z @ 0x1C0157100 (-Create@CRegion@@SAJAEBUtagRECT@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?SetEmpty@CRegion@@QEAAXXZ @ 0x1C0012CB0 (-SetEmpty@CRegion@@QEAAXXZ.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 */

__int64 __fastcall CRegion::Release(CRegion *this)
{
  unsigned __int32 v2; // edi

  v2 = _InterlockedDecrement((volatile signed __int32 *)this);
  if ( !v2 && this )
  {
    CRegion::SetEmpty(this);
    Win32FreePool(this);
  }
  return v2;
}
