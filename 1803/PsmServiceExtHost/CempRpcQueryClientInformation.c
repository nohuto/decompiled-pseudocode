/*
 * XREFs of CempRpcQueryClientInformation @ 0x18002B3B0
 * Callers:
 *     HamRpcSrvConnectExtendedExecution @ 0x1800296D0 (HamRpcSrvConnectExtendedExecution.c)
 *     RmgrSrv_RegisterWithServer @ 0x18002B230 (RmgrSrv_RegisterWithServer.c)
 *     HamRpcSrvConnect @ 0x18002B600 (HamRpcSrvConnect.c)
 *     HamRpcSrvConnectDebugging @ 0x180036AE0 (HamRpcSrvConnectDebugging.c)
 *     HamRpcSrvConnectStateChangeNotifications @ 0x180036BE0 (HamRpcSrvConnectStateChangeNotifications.c)
 *     HamRpcSrvConnectServicing @ 0x180036CE0 (HamRpcSrvConnectServicing.c)
 *     HamRpcSrvConnectSessionState @ 0x180036DD0 (HamRpcSrvConnectSessionState.c)
 *     RmCoreRpcSrvConnectToRmServer @ 0x18003D6C0 (RmCoreRpcSrvConnectToRmServer.c)
 *     ?Handle_RM_ConnectToServer@ResourceManagerServerProxy@@QEAAJPEAXPEAPEAXPEAU_WNF_STATE_NAME@@@Z @ 0x18003D7A0 (-Handle_RM_ConnectToServer@ResourceManagerServerProxy@@QEAAJPEAXPEAPEAXPEAU_WNF_STATE_NAME@@@Z.c)
 *     RmgrSrv_RmSetMemoryUsageLimit @ 0x18004D200 (RmgrSrv_RmSetMemoryUsageLimit.c)
 *     CrmRpcSrvSubscribe @ 0x18006E280 (CrmRpcSrvSubscribe.c)
 * Callees:
 *     CempGetUserSidFromToken @ 0x18002B514 (CempGetUserSidFromToken.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     memset_0 @ 0x180041D1C (memset_0.c)
 */

__int64 __fastcall CempRpcQueryClientInformation(
        RPC_BINDING_HANDLE ClientBinding,
        __int64 a2,
        void *a3,
        _DWORD *a4,
        __int64 a5,
        _QWORD *a6)
{
  HANDLE CurrentThread; // rax
  NTSTATUS UserSidFromToken; // ebx
  void *v12; // rax
  void *TokenHandle; // [rsp+30h] [rbp-89h] BYREF
  ULONG ReturnLength; // [rsp+38h] [rbp-81h] BYREF
  _DWORD RpcCallAttributes[28]; // [rsp+40h] [rbp-79h] BYREF

  TokenHandle = 0LL;
  if ( RpcImpersonateClient(ClientBinding) )
    goto LABEL_18;
  CurrentThread = GetCurrentThread();
  UserSidFromToken = NtOpenThreadToken(CurrentThread, 8u, 1u, &TokenHandle);
  if ( UserSidFromToken < 0
    || a2 && (UserSidFromToken = CempGetUserSidFromToken(TokenHandle, a2), UserSidFromToken < 0)
    || a3
    && (UserSidFromToken = NtQueryInformationToken(TokenHandle, TokenSessionId, a3, 4u, &ReturnLength),
        UserSidFromToken < 0)
    || a5 && (UserSidFromToken = RtlQueryTokenHostIdAsUlong64(TokenHandle, a5), UserSidFromToken < 0) )
  {
    RpcRevertToSelf();
    goto LABEL_15;
  }
  if ( RpcRevertToSelf() )
    goto LABEL_18;
  if ( a4 )
  {
    memset_0(RpcCallAttributes, 0, sizeof(RpcCallAttributes));
    RpcCallAttributes[0] = 2;
    RpcCallAttributes[1] = 16;
    if ( !RpcServerInqCallAttributesW(ClientBinding, RpcCallAttributes) )
    {
      *a4 = RpcCallAttributes[16];
      goto LABEL_12;
    }
LABEL_18:
    UserSidFromToken = -1073741823;
    goto LABEL_15;
  }
LABEL_12:
  if ( a6 )
  {
    v12 = TokenHandle;
    TokenHandle = 0LL;
    *a6 = v12;
  }
  UserSidFromToken = 0;
LABEL_15:
  if ( TokenHandle )
    CloseHandle(TokenHandle);
  return (unsigned int)UserSidFromToken;
}
