/*
 * XREFs of ?Release@CRegion@@QEBAJXZ @ 0x1C003A5C4
 * Callers:
 *     ??1CBufferRealization@@MEAA@XZ @ 0x1C00210B0 (--1CBufferRealization@@MEAA@XZ.c)
 *     ?OpenLifetimeDirtyRegion@CBufferRealization@@QEBAJPEAPEAUHRGN__@@@Z @ 0x1C0021128 (-OpenLifetimeDirtyRegion@CBufferRealization@@QEBAJPEAPEAUHRGN__@@@Z.c)
 *     ?Discard@CCompositionToken@@UEAAXXZ @ 0x1C00254C0 (-Discard@CCompositionToken@@UEAAXXZ.c)
 *     ??1CToken@@UEAA@XZ @ 0x1C0025940 (--1CToken@@UEAA@XZ.c)
 *     ??1CCompositionBuffer@@UEAA@XZ @ 0x1C003A350 (--1CCompositionBuffer@@UEAA@XZ.c)
 *     ?AddScrollAsDirty@CCompositionBuffer@@IEAAXAEBUScrollOptimization@@@Z @ 0x1C01528F0 (-AddScrollAsDirty@CCompositionBuffer@@IEAAXAEBUScrollOptimization@@@Z.c)
 *     ?Create@CRegion@@SAJAEBUtagRECT@@PEAPEAV1@@Z @ 0x1C015687C (-Create@CRegion@@SAJAEBUtagRECT@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?SetEmpty@CRegion@@QEAAXXZ @ 0x1C003A830 (-SetEmpty@CRegion@@QEAAXXZ.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 */

__int64 __fastcall CRegion::Release(CRegion *this)
{
  unsigned __int32 v2; // edi
  __int64 v3; // rdx
  __int64 v4; // r8

  v2 = _InterlockedDecrement((volatile signed __int32 *)this);
  if ( !v2 && this )
  {
    CRegion::SetEmpty(this);
    Win32FreePool(this, v3, v4);
  }
  return v2;
}
