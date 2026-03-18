/*
 * XREFs of ?ReleaseResourcesForDisplayChange@CHolographicManager@@QEAAXXZ @ 0x1801C0DC0
 * Callers:
 *     CHolographicInteropTaskQueue::ProcessPendingMessages__lambda_1af5a33988fbdcb1a8e6d38412aed786___ @ 0x1801BF828 (CHolographicInteropTaskQueue--ProcessPendingMessages__lambda_1af5a33988fbdcb1a8e6d38412aed786___.c)
 *     ??1CHolographicInteropTarget@@MEAA@XZ @ 0x1801C15A4 (--1CHolographicInteropTarget@@MEAA@XZ.c)
 *     ?ReleaseResourcesForDisplayChange@CHolographicInteropTarget@@UEAAXXZ @ 0x1801C1A40 (-ReleaseResourcesForDisplayChange@CHolographicInteropTarget@@UEAAXXZ.c)
 * Callees:
 *     ?ReleaseResources@CHolographicInteropTexture@@QEAAXXZ @ 0x1801BED2C (-ReleaseResources@CHolographicInteropTexture@@QEAAXXZ.c)
 */

void __fastcall CHolographicManager::ReleaseResourcesForDisplayChange(CHolographicManager *this)
{
  __int64 i; // rbx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 36); i = (unsigned int)(i + 1) )
    CHolographicInteropTexture::ReleaseResources(*(RTL_SRWLOCK **)(*((_QWORD *)this + 15) + 8 * i));
}
