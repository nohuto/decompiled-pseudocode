/*
 * XREFs of ?ReleaseResourcesForDisplayChange@CHolographicManager@@QEAAXXZ @ 0x1801F8E84
 * Callers:
 *     CHolographicInteropTaskQueue::ProcessPendingMessages__lambda_1af5a33988fbdcb1a8e6d38412aed786___ @ 0x1801F79C8 (CHolographicInteropTaskQueue--ProcessPendingMessages__lambda_1af5a33988fbdcb1a8e6d38412aed786___.c)
 *     ??1CHolographicInteropTarget@@MEAA@XZ @ 0x1801FD9AC (--1CHolographicInteropTarget@@MEAA@XZ.c)
 *     ?ReleaseResourcesForDisplayChange@CHolographicInteropTarget@@UEAAXXZ @ 0x1801FDDF0 (-ReleaseResourcesForDisplayChange@CHolographicInteropTarget@@UEAAXXZ.c)
 * Callees:
 *     ?ReleaseResources@CHolographicInteropTexture@@QEAAXXZ @ 0x1801FB978 (-ReleaseResources@CHolographicInteropTexture@@QEAAXXZ.c)
 */

void __fastcall CHolographicManager::ReleaseResourcesForDisplayChange(CHolographicManager *this)
{
  __int64 i; // rbx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 36); i = (unsigned int)(i + 1) )
    CHolographicInteropTexture::ReleaseResources(*(CHolographicInteropTexture **)(*((_QWORD *)this + 15) + 8 * i));
}
