/*
 * XREFs of s_mmeNotifyDeviceStateChanged @ 0x1800B06C0
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckRpcClientTokenMembershipsDisjunctive@@YAHPEAX0PEAH@Z @ 0x18002F218 (-CheckRpcClientTokenMembershipsDisjunctive@@YAHPEAX0PEAH@Z.c)
 *     ?MmeOnDeviceStateChanged@@YAJPEBGK@Z @ 0x1800B044C (-MmeOnDeviceStateChanged@@YAJPEBGK@Z.c)
 */

DWORD __fastcall s_mmeNotifyDeviceStateChanged(__int64 a1, const unsigned __int16 *a2)
{
  void *v3; // rdx
  void *v4; // rcx
  int v6; // [rsp+48h] [rbp+20h] BYREF

  if ( !(unsigned int)IsMmeNotifyDeviceStateChangedSupported() )
    return 1;
  if ( !(unsigned int)CheckRpcClientTokenMembershipsDisjunctive(v4, v3, &v6) )
    return GetLastError();
  if ( v6 )
  {
    MmeOnDeviceStateChanged(a2);
    if ( v6 )
      return 0;
  }
  return 5;
}
