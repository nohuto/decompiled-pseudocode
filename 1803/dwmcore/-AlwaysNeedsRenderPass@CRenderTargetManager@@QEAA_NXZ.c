/*
 * XREFs of ?AlwaysNeedsRenderPass@CRenderTargetManager@@QEAA_NXZ @ 0x180163A60
 * Callers:
 *     ?EnsureIndependentFlipState@COverlayContext@@AEAAJPEAVOverlayPlaneInfo@1@_N1@Z @ 0x180165CB0 (-EnsureIndependentFlipState@COverlayContext@@AEAAJPEAVOverlayPlaneInfo@1@_N1@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CRenderTargetManager::AlwaysNeedsRenderPass(CRenderTargetManager *this)
{
  int v1; // eax
  bool v3; // bl
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rdx

  v1 = *((_DWORD *)this + 26);
  v3 = v1 != 0;
  v4 = 0LL;
  if ( !v1 )
  {
    do
    {
      if ( (unsigned int)v4 >= *((_DWORD *)this + 12) )
        break;
      v5 = *(_QWORD *)(*((_QWORD *)this + 3) + 8 * v4);
      if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 48LL))(v5, 76LL) )
      {
        v6 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 8 * v4) + 168LL);
        if ( *(_QWORD *)(v6 + 152) != v6 )
          v3 = 1;
      }
      v4 = (unsigned int)(v4 + 1);
    }
    while ( !v3 );
  }
  return v3;
}
