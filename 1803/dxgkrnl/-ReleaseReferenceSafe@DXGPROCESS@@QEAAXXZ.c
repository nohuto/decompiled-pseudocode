/*
 * XREFs of ?ReleaseReferenceSafe@DXGPROCESS@@QEAAXXZ @ 0x1C002D1C8
 * Callers:
 *     ?DestroyVirtualGpu@DXGK_VIRTUAL_GPU_PARAV@@UEAAXXZ @ 0x1C0178C00 (-DestroyVirtualGpu@DXGK_VIRTUAL_GPU_PARAV@@UEAAXXZ.c)
 *     ?ResetVirtualFunction@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAPEAVDXGPROCESSVMWP@@E@Z @ 0x1C01790A0 (-ResetVirtualFunction@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAPEAVDXGPROCESSVMWP@@E@Z.c)
 *     ?DestroyVmProcess@DXGPROCESSVM@@QEAAXXZ @ 0x1C01B6788 (-DestroyVmProcess@DXGPROCESSVM@@QEAAXXZ.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0014E9C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0014EF0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReleaseReference@DXGPROCESS@@QEAAXXZ @ 0x1C001637C (-ReleaseReference@DXGPROCESS@@QEAAXXZ.c)
 */

void __fastcall DXGPROCESS::ReleaseReferenceSafe(DXGPROCESS *this)
{
  DXGFASTMUTEX *v2; // rbx

  v2 = (struct DXGGLOBAL *)((char *)DXGGLOBAL::GetGlobal((__int64)this) + 208);
  DXGFASTMUTEX::Acquire(v2);
  DXGPROCESS::ReleaseReference(this);
  DXGFASTMUTEX::Release((struct _KTHREAD **)v2);
}
