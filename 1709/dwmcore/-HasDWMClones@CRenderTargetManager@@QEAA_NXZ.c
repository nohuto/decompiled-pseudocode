/*
 * XREFs of ?HasDWMClones@CRenderTargetManager@@QEAA_NXZ @ 0x180142D98
 * Callers:
 *     ?EnsureIndependentFlipState@COverlayContext@@AEAAJPEAVOverlayPlaneInfo@1@_N1@Z @ 0x1801428A8 (-EnsureIndependentFlipState@COverlayContext@@AEAAJPEAVOverlayPlaneInfo@1@_N1@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CRenderTargetManager::HasDWMClones(CRenderTargetManager *this)
{
  char v1; // bl
  __int64 v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // rcx

  v1 = 0;
  v3 = 0LL;
  do
  {
    if ( (unsigned int)v3 >= *((_DWORD *)this + 12) )
      break;
    v4 = *(_QWORD *)(*((_QWORD *)this + 3) + 8 * v3);
    if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 48LL))(v4, 70LL) )
    {
      v5 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 8 * v3) + 112LL);
      if ( *(_QWORD *)(v5 + 128) != v5 )
        v1 = 1;
    }
    v3 = (unsigned int)(v3 + 1);
  }
  while ( !v1 );
  return v1;
}
