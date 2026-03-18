/*
 * XREFs of ?SetupMessageCallThreadInfo@CManipulationManager@@AEAAJPEAUIMessageSession@@P6AJPEAXPEBXH@ZPEAUMessageCallThreadInfo@1@@Z @ 0x180025AFC
 * Callers:
 *     ?ManipulationThreadMain@CManipulationManager@@AEAAJXZ @ 0x180025D68 (-ManipulationThreadMain@CManipulationManager@@AEAAJXZ.c)
 *     ?Initialize@CManipulationManager@@AEAAJXZ @ 0x180025FA4 (-Initialize@CManipulationManager@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000DD00 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CManipulationManager::SetupMessageCallThreadInfo(
        CManipulationManager *this,
        struct IMessageSession *a2,
        int (*a3)(void *, const void *, int),
        struct CManipulationManager::MessageCallThreadInfo *a4)
{
  int EndpointHost; // eax
  __int64 v9; // rcx
  __int64 v10; // rax
  int v11; // eax
  int v12; // eax
  void *retaddr; // [rsp+38h] [rbp+0h]

  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)a4 + 1);
  EndpointHost = CoreUICallCreateEndpointHost(a2, (char *)a4 + 8, 0LL);
  if ( EndpointHost < 0 )
    ModuleFailFastForHRESULT((unsigned int)EndpointHost, retaddr);
  v9 = *((_QWORD *)a4 + 2);
  if ( v9 )
  {
    *((_QWORD *)a4 + 2) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v10 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 2) + 552LL) + 96LL))(*(_QWORD *)(*((_QWORD *)this + 2) + 552LL));
  v11 = CoreUICallCreateEndpointHost(v10, 0LL, (char *)a4 + 16);
  if ( v11 < 0 )
    ModuleFailFastForHRESULT((unsigned int)v11, retaddr);
  v12 = (*(__int64 (__fastcall **)(struct IMessageSession *, int (*)(void *, const void *, int), CManipulationManager *, struct CManipulationManager::MessageCallThreadInfo *))(*(_QWORD *)a2 + 88LL))(
          a2,
          a3,
          this,
          a4);
  if ( v12 < 0 )
    ModuleFailFastForHRESULT((unsigned int)v12, retaddr);
  return 0LL;
}
