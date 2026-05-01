/*
 * XREFs of CempRpcQueryClientInformation @ 0x18001DD00
 * Callers:
 *     HamRpcSrvConnectExtendedExecution @ 0x18001DAC0 (HamRpcSrvConnectExtendedExecution.c)
 *     RmgrSrv_RegisterWithServer @ 0x18001DB90 (RmgrSrv_RegisterWithServer.c)
 *     HamRpcSrvConnect @ 0x18001DF50 (HamRpcSrvConnect.c)
 *     RmCoreRpcSrvConnectToRmServer @ 0x180024FC0 (RmCoreRpcSrvConnectToRmServer.c)
 *     ?Handle_RM_ConnectToServer@ResourceManagerServerProxy@@QEAAJPEAXPEAPEAXPEAU_WNF_STATE_NAME@@@Z @ 0x1800250A0 (-Handle_RM_ConnectToServer@ResourceManagerServerProxy@@QEAAJPEAXPEAPEAXPEAU_WNF_STATE_NAME@@@Z.c)
 *     HamRpcSrvConnectStateChangeNotifications @ 0x1800256D0 (HamRpcSrvConnectStateChangeNotifications.c)
 *     RmgrSrv_RmSetMemoryUsageLimit @ 0x180030210 (RmgrSrv_RmSetMemoryUsageLimit.c)
 * Callees:
 *     CempGetHostIdFromProcessToken @ 0x18000647C (CempGetHostIdFromProcessToken.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     memset_0 @ 0x180026AAB (memset_0.c)
 */

__int64 __fastcall CempRpcQueryClientInformation(
        RPC_BINDING_HANDLE ClientBinding,
        PSID DestinationSid,
        PVOID TokenInformation,
        _DWORD *a4,
        _QWORD *a5)
{
  HANDLE CurrentThread; // rax
  int HostIdFromProcessToken; // ebx
  void *TokenHandle; // [rsp+30h] [rbp-D0h] BYREF
  ULONG ReturnLength; // [rsp+38h] [rbp-C8h] BYREF
  _DWORD RpcCallAttributes[28]; // [rsp+40h] [rbp-C0h] BYREF
  PSID TokenInformationa[12]; // [rsp+B0h] [rbp-50h] BYREF

  TokenHandle = 0LL;
  if ( RpcImpersonateClient(ClientBinding) )
    goto LABEL_17;
  CurrentThread = GetCurrentThread();
  HostIdFromProcessToken = NtOpenThreadToken(CurrentThread, 8u, 1u, &TokenHandle);
  if ( HostIdFromProcessToken >= 0 )
  {
    if ( !DestinationSid )
      goto LABEL_6;
    HostIdFromProcessToken = NtQueryInformationToken(TokenHandle, TokenUser, TokenInformationa, 0x58u, &ReturnLength);
    if ( HostIdFromProcessToken >= 0 )
    {
      RtlCopySid(0x44u, DestinationSid, TokenInformationa[0]);
LABEL_6:
      if ( TokenInformation )
      {
        HostIdFromProcessToken = NtQueryInformationToken(
                                   TokenHandle,
                                   TokenSessionId,
                                   TokenInformation,
                                   4u,
                                   &ReturnLength);
        if ( HostIdFromProcessToken < 0 )
          goto LABEL_19;
      }
      if ( a5 )
      {
        HostIdFromProcessToken = CempGetHostIdFromProcessToken((__int64)TokenHandle, a5);
        if ( HostIdFromProcessToken < 0 )
          goto LABEL_19;
      }
      if ( !RpcRevertToSelf() )
      {
        if ( !a4 )
        {
LABEL_13:
          HostIdFromProcessToken = 0;
          goto LABEL_14;
        }
        memset_0(RpcCallAttributes, 0, sizeof(RpcCallAttributes));
        RpcCallAttributes[0] = 2;
        RpcCallAttributes[1] = 16;
        if ( !RpcServerInqCallAttributesW(ClientBinding, RpcCallAttributes) )
        {
          *a4 = RpcCallAttributes[16];
          goto LABEL_13;
        }
      }
LABEL_17:
      HostIdFromProcessToken = -1073741823;
      goto LABEL_14;
    }
  }
LABEL_19:
  RpcRevertToSelf();
LABEL_14:
  if ( TokenHandle )
    CloseHandle(TokenHandle);
  return (unsigned int)HostIdFromProcessToken;
}
