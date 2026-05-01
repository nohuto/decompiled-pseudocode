/*
 * XREFs of CempRpcBindToServer @ 0x180003DDC
 * Callers:
 *     ?GetAppMemoryReport@CMemoryManager@System@Windows@@UEAAJPEAPEAUIAppMemoryReport@23@@Z @ 0x180002BA0 (-GetAppMemoryReport@CMemoryManager@System@Windows@@UEAAJPEAPEAUIAppMemoryReport@23@@Z.c)
 *     ?Init@CMemoryManager@System@Windows@@CAJXZ @ 0x180003D2C (-Init@CMemoryManager@System@Windows@@CAJXZ.c)
 *     CreateResourceManagerProxy @ 0x180003EF8 (CreateResourceManagerProxy.c)
 *     HampConnectionAllocateState @ 0x180003FE4 (HampConnectionAllocateState.c)
 *     HamGetApplicationInterruptiveUIState @ 0x180007650 (HamGetApplicationInterruptiveUIState.c)
 *     HamGetInterruptiveUIStateForAumid @ 0x180007780 (HamGetInterruptiveUIStateForAumid.c)
 *     HamGetPackageInterruptiveUIState @ 0x1800078B0 (HamGetPackageInterruptiveUIState.c)
 *     RmGameModeDisableForRegisteredProcess @ 0x180009CF0 (RmGameModeDisableForRegisteredProcess.c)
 *     RmGameModeDisableForRegisteredProcessById @ 0x180009DB0 (RmGameModeDisableForRegisteredProcessById.c)
 *     RmGameModeGetLargestValidResourceRequest @ 0x180009E70 (RmGameModeGetLargestValidResourceRequest.c)
 *     RmGameModeReenableForRegisteredProcess @ 0x180009F70 (RmGameModeReenableForRegisteredProcess.c)
 *     RmGameModeReenableForRegisteredProcessById @ 0x18000A030 (RmGameModeReenableForRegisteredProcessById.c)
 *     RmGameModeRegisterPairedAuxiliaryProcess @ 0x18000A0F0 (RmGameModeRegisterPairedAuxiliaryProcess.c)
 *     RmGameModeRegisterPairedAuxiliaryProcessById @ 0x18000A1F0 (RmGameModeRegisterPairedAuxiliaryProcessById.c)
 *     RmGameModeRegisterProcess @ 0x18000A2F0 (RmGameModeRegisterProcess.c)
 *     RmGameModeRegisterProcessById @ 0x18000A3E0 (RmGameModeRegisterProcessById.c)
 *     RmGameModeUnregisterProcess @ 0x18000A4D0 (RmGameModeUnregisterProcess.c)
 *     RmGameModeUnregisterProcessById @ 0x18000A590 (RmGameModeUnregisterProcessById.c)
 *     RmConnectToResourceManager @ 0x18000BE90 (RmConnectToResourceManager.c)
 *     RmQueryHostMemoryLimitValues @ 0x18000BF40 (RmQueryHostMemoryLimitValues.c)
 *     CrmSubscribe @ 0x18000D500 (CrmSubscribe.c)
 *     ?Init@ResourceManagerClientProxy@@IEAAJXZ @ 0x18000EA28 (-Init@ResourceManagerClientProxy@@IEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180006FE0 (__security_check_cookie.c)
 *     memset_0 @ 0x180007B70 (memset_0.c)
 */

__int64 __fastcall CempRpcBindToServer(RPC_IF_HANDLE IfSpec, _QWORD *a2)
{
  RPC_STATUS v4; // eax
  unsigned int v5; // ebx
  bool v6; // cc
  RPC_BINDING_HANDLE v7; // rax
  RPC_BINDING_HANDLE Binding; // [rsp+20h] [rbp-79h] BYREF
  RPC_BINDING_HANDLE_SECURITY_V1_W Security; // [rsp+28h] [rbp-71h] BYREF
  _DWORD v11[14]; // [rsp+50h] [rbp-49h] BYREF
  RPC_BINDING_HANDLE_OPTIONS_V1 Options; // [rsp+88h] [rbp-11h] BYREF
  RPC_BINDING_HANDLE_TEMPLATE_V1_W Template; // [rsp+98h] [rbp-1h] BYREF

  Binding = 0LL;
  memset_0(&Template, 0, sizeof(Template));
  *(_QWORD *)&Options.Version = 0LL;
  *(_QWORD *)&Options.ComTimeout = 0LL;
  memset_0(v11, 0, sizeof(v11));
  memset_0(&Security, 0, sizeof(Security));
  v11[1] = 0;
  Template.Version = 1;
  Options.ComTimeout = 5;
  v11[0] = 5;
  Template.ProtocolSequence = 3;
  Options.Version = 1;
  Options.Flags = 1;
  v11[2] = 1;
  v11[3] = 3;
  Security.Version = 1;
  Security.SecurityQos = (RPC_SECURITY_QOS *)v11;
  Security.AuthnLevel = 6;
  Security.AuthnSvc = 10;
  v4 = RpcBindingCreateW(&Template, &Security, &Options, &Binding);
  v5 = v4;
  v6 = v4 <= 0;
  if ( v4 || (v4 = RpcBindingBind(0LL, Binding, IfSpec), v5 = v4, v6 = v4 <= 0, v4) )
  {
    if ( !v6 )
      v5 = (unsigned __int16)v4 | 0xC0070000;
  }
  else
  {
    v7 = Binding;
    Binding = 0LL;
    *a2 = v7;
  }
  if ( Binding )
    RpcBindingFree(&Binding);
  return v5;
}
