/*
 * XREFs of ?ReleaseInteropRenderTarget@CHolographicManager@@AEAAXXZ @ 0x1801A6344
 * Callers:
 *     CHolographicInteropTaskQueue::ProcessPendingMessages__lambda_1af5a33988fbdcb1a8e6d38412aed786___ @ 0x1801A5954 (CHolographicInteropTaskQueue--ProcessPendingMessages__lambda_1af5a33988fbdcb1a8e6d38412aed786___.c)
 *     ?ReleaseClient@CHolographicManager@@AEAAXXZ @ 0x1801A62F0 (-ReleaseClient@CHolographicManager@@AEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180048FE4 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?RemoveRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z @ 0x18006B630 (-RemoveRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z.c)
 */

void __fastcall CHolographicManager::ReleaseInteropRenderTarget(CHolographicManager *this)
{
  struct CRenderTarget *v1; // rdx
  CMILCOMBase *v3; // rcx

  v1 = (struct CRenderTarget *)*((_QWORD *)this + 3);
  if ( v1 )
  {
    CRenderTargetManager::RemoveRenderTarget(*(CRenderTargetManager **)(*((_QWORD *)this + 2) + 32LL), v1);
    v3 = (CMILCOMBase *)*((_QWORD *)this + 3);
    if ( v3 )
    {
      CMILCOMBase::InternalRelease(v3);
      *((_QWORD *)this + 3) = 0LL;
    }
  }
}
