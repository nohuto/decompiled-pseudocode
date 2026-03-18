/*
 * XREFs of ?AlwaysNeedsRenderPass@CRenderTargetManager@@QEAA_NXZ @ 0x18013FE48
 * Callers:
 *     ?EnsureIndependentFlipState@COverlayContext@@AEAAJPEAVOverlayPlaneInfo@1@_N1@Z @ 0x1801428A8 (-EnsureIndependentFlipState@COverlayContext@@AEAAJPEAVOverlayPlaneInfo@1@_N1@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CRenderTargetManager::AlwaysNeedsRenderPass(CRenderTargetManager *this)
{
  int v1; // eax
  __int64 v2; // rdi
  bool v4; // bl
  __int64 v5; // rcx
  __int64 v6; // rdx

  v1 = *((_DWORD *)this + 26);
  v2 = 0LL;
  v4 = v1 != 0;
  if ( !v1 )
  {
    do
    {
      if ( (unsigned int)v2 >= *((_DWORD *)this + 12) )
        break;
      v5 = *(_QWORD *)(*((_QWORD *)this + 3) + 8 * v2);
      if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 48LL))(v5, 70LL) )
      {
        v6 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 8 * v2) + 112LL);
        if ( *(_QWORD *)(v6 + 128) != v6 )
          v4 = 1;
      }
      v2 = (unsigned int)(v2 + 1);
    }
    while ( !v4 );
  }
  return v4;
}
