/*
 * XREFs of ?ReleaseInteropRenderTarget@CHolographicManager@@AEAAXXZ @ 0x1801F8E20
 * Callers:
 *     CHolographicInteropTaskQueue::ProcessPendingMessages__lambda_1af5a33988fbdcb1a8e6d38412aed786___ @ 0x1801F79C8 (CHolographicInteropTaskQueue--ProcessPendingMessages__lambda_1af5a33988fbdcb1a8e6d38412aed786___.c)
 *     ??1CHolographicManager@@EEAA@XZ @ 0x1801F7A8C (--1CHolographicManager@@EEAA@XZ.c)
 * Callees:
 *     ?RemoveRenderTarget@CRenderTargetManager@@QEAA_NPEAVCRenderTarget@@@Z @ 0x18005F3A8 (-RemoveRenderTarget@CRenderTargetManager@@QEAA_NPEAVCRenderTarget@@@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180078D7C (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x1801FEA40 (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

void __fastcall CHolographicManager::ReleaseInteropRenderTarget(CHolographicManager *this)
{
  struct CRenderTarget *v1; // rdx
  CHolographicInteropTaskQueue *v3; // rcx
  CMILCOMBase *v4; // rcx

  v1 = (struct CRenderTarget *)*((_QWORD *)this + 3);
  if ( v1 )
  {
    CRenderTargetManager::RemoveRenderTarget(*(CRenderTargetManager **)(*((_QWORD *)this + 2) + 72LL), v1);
    v3 = (CHolographicInteropTaskQueue *)*((_QWORD *)this + 5);
    if ( v3 )
      CHolographicInteropTaskQueue::PostMessageW(v3, 0x15u, 0LL, 0LL, 0LL, 0LL, 0LL);
    v4 = (CMILCOMBase *)*((_QWORD *)this + 3);
    if ( v4 )
    {
      CMILCOMBase::InternalRelease(v4);
      *((_QWORD *)this + 3) = 0LL;
    }
  }
}
