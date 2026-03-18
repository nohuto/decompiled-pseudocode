/*
 * XREFs of ?SetupMessageCallThreadInfo@CManipulationManager@@AEAAJPEAUIMessageSession@@P6AJPEAXPEBXH@ZPEAUMessageCallThreadInfo@1@@Z @ 0x1801982F0
 * Callers:
 *     ?Initialize@CManipulationManager@@AEAAJXZ @ 0x180195F28 (-Initialize@CManipulationManager@@AEAAJXZ.c)
 *     ?ManipulationThreadMain@CManipulationManager@@AEAAJXZ @ 0x1801962CC (-ManipulationThreadMain@CManipulationManager@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007950C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CManipulationManager::SetupMessageCallThreadInfo(
        CManipulationManager *this,
        struct IMessageSession *a2,
        int (*a3)(void *, const void *, int),
        struct CManipulationManager::MessageCallThreadInfo *a4)
{
  signed int EndpointHost; // eax
  unsigned int v9; // ebx
  __int64 v10; // rax
  signed int v11; // eax
  signed int v12; // eax

  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)a4 + 1);
  EndpointHost = CoreUICallCreateEndpointHost(a2, (char *)a4 + 8, 0LL);
  v9 = EndpointHost;
  if ( EndpointHost < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, EndpointHost, 0x87Bu);
  }
  else
  {
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)a4 + 2);
    v10 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 2) + 528LL) + 96LL))(*(_QWORD *)(*((_QWORD *)this + 2) + 528LL));
    v11 = CoreUICallCreateEndpointHost(v10, 0LL, (char *)a4 + 16);
    v9 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v11, 0x883u);
    }
    else
    {
      v12 = (*(__int64 (__fastcall **)(struct IMessageSession *, int (*)(void *, const void *, int), CManipulationManager *, struct CManipulationManager::MessageCallThreadInfo *))(*(_QWORD *)a2 + 88LL))(
              a2,
              a3,
              this,
              a4);
      v9 = v12;
      if ( v12 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v12, 0x888u);
    }
  }
  return v9;
}
