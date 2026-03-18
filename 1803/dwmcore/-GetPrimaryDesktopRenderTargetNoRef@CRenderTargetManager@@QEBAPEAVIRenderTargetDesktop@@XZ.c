/*
 * XREFs of ?GetPrimaryDesktopRenderTargetNoRef@CRenderTargetManager@@QEBAPEAVIRenderTargetDesktop@@XZ @ 0x18005F020
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x18005BBB0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

struct IRenderTargetDesktop *__fastcall CRenderTargetManager::GetPrimaryDesktopRenderTargetNoRef(
        CRenderTargetManager *this)
{
  __int64 v1; // rbx
  unsigned int v3; // esi
  __int64 v4; // rcx

  v1 = 0LL;
  v3 = 0;
  if ( *((_DWORD *)this + 20) )
  {
    while ( 1 )
    {
      v4 = *(_QWORD *)(*((_QWORD *)this + 7) + 8LL * v3);
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v4 + 264LL))(v4) )
        break;
      if ( ++v3 >= *((_DWORD *)this + 20) )
        return (struct IRenderTargetDesktop *)v1;
    }
    return *(struct IRenderTargetDesktop **)(*((_QWORD *)this + 7) + 8LL * v3);
  }
  return (struct IRenderTargetDesktop *)v1;
}
