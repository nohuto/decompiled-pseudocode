/*
 * XREFs of ?CheckRpcClientTokenMembershipsDisjunctive@@YAHPEAX0PEAH@Z @ 0x1800A0FB4
 * Callers:
 *     s_mmeNotifyDefaultDeviceChanged @ 0x1800A1A40 (s_mmeNotifyDefaultDeviceChanged.c)
 *     s_mmeNotifyDeviceAdded @ 0x1800A1AC0 (s_mmeNotifyDeviceAdded.c)
 *     s_mmeNotifyDeviceRemoved @ 0x1800A1B20 (s_mmeNotifyDeviceRemoved.c)
 *     s_mmeNotifyDeviceStateChanged @ 0x1800A1B80 (s_mmeNotifyDeviceStateChanged.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CheckRpcClientTokenMembershipsDisjunctive(void *a1, void *a2, int *a3)
{
  PSID v3; // rsi
  PSID v4; // rbp
  unsigned int v6; // ebx

  v3 = AudioEndpointBuilderSid;
  v4 = AudiosrvSid;
  v6 = 0;
  if ( !RpcImpersonateClient(0LL) )
  {
    v6 = CheckTokenMembership(0LL, v4, a3);
    if ( v6 && !*a3 )
      v6 = CheckTokenMembership(0LL, v3, a3);
    RpcRevertToSelf();
  }
  return v6;
}
