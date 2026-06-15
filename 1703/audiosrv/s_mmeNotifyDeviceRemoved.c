/*
 * XREFs of s_mmeNotifyDeviceRemoved @ 0x1800B0660
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckRpcClientTokenMembershipsDisjunctive@@YAHPEAX0PEAH@Z @ 0x18002F218 (-CheckRpcClientTokenMembershipsDisjunctive@@YAHPEAX0PEAH@Z.c)
 *     ?MmeOnDeviceRemoved@@YAJPEBG@Z @ 0x1800B03C8 (-MmeOnDeviceRemoved@@YAJPEBG@Z.c)
 */

DWORD __fastcall s_mmeNotifyDeviceRemoved(__int64 a1, const unsigned __int16 *a2)
{
  void *v3; // rdx
  void *v4; // rcx
  int v6; // [rsp+40h] [rbp+18h] BYREF

  if ( !(unsigned int)IsMmeNotifyDeviceRemovedSupported() )
    return 1;
  if ( !(unsigned int)CheckRpcClientTokenMembershipsDisjunctive(v4, v3, &v6) )
    return GetLastError();
  if ( v6 )
  {
    MmeOnDeviceRemoved(a2);
    if ( v6 )
      return 0;
  }
  return 5;
}
