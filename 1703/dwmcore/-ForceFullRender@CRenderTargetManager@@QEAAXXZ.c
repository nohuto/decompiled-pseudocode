/*
 * XREFs of ?ForceFullRender@CRenderTargetManager@@QEAAXXZ @ 0x18006BD9C
 * Callers:
 *     ?ForceFullRender@CComposition@@QEAAX_N@Z @ 0x18005BB10 (-ForceFullRender@CComposition@@QEAAX_N@Z.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ?UpdateDebugCounter@CComposition@@QEAAX_N@Z @ 0x18013FBA4 (-UpdateDebugCounter@CComposition@@QEAAX_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CRenderTargetManager::ForceFullRender(CRenderTargetManager *this)
{
  __int64 v1; // rbx
  __int64 v3; // rcx

  v1 = 0LL;
  if ( *((_DWORD *)this + 24) && *((_DWORD *)this + 12) )
  {
    do
    {
      v3 = *(_QWORD *)(*((_QWORD *)this + 3) + 8 * v1);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 200LL))(v3);
      v1 = (unsigned int)(v1 + 1);
    }
    while ( (unsigned int)v1 < *((_DWORD *)this + 12) );
  }
}
