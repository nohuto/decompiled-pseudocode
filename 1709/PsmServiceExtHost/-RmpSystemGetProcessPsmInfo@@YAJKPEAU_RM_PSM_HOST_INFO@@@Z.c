/*
 * XREFs of ?RmpSystemGetProcessPsmInfo@@YAJKPEAU_RM_PSM_HOST_INFO@@@Z @ 0x180006740
 * Callers:
 *     ?RmpActivityHostQueryByPidOrPsmInfo@@YAJPEAU_RM_SERVICE_GLOBALS@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180001B94 (-RmpActivityHostQueryByPidOrPsmInfo@@YAJPEAU_RM_SERVICE_GLOBALS@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?GetPSMInfo@ResourceManager@ExecutionModel@@UEAAJKPEAU_RM_PSM_HOST_INFO@@@Z @ 0x18000D6F0 (-GetPSMInfo@ResourceManager@ExecutionModel@@UEAAJKPEAU_RM_PSM_HOST_INFO@@@Z.c)
 *     ?HamSrvCreateActivityForProcess@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEAU_HAM_ACTIVITY_PROPERTIES@@PEA_KPEAE@Z @ 0x18001D708 (-HamSrvCreateActivityForProcess@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEAU_HAM_ACTIVITY_PROPERTIES@@P.c)
 *     ?HamSrvIsHostHamManaged@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAE@Z @ 0x18001F948 (-HamSrvIsHostHamManaged@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAE@Z.c)
 *     ?RunWatchdog@ExternalResourceSet@ExecutionModel@@AEAAXXZ @ 0x18003D428 (-RunWatchdog@ExternalResourceSet@ExecutionModel@@AEAAXXZ.c)
 * Callees:
 *     CempHostInfoInitialize @ 0x1800063B8 (CempHostInfoInitialize.c)
 *     CempGetProcessHostInfo @ 0x180006500 (CempGetProcessHostInfo.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 */

__int64 __fastcall RmpSystemGetProcessPsmInfo(unsigned int a1, struct _RM_PSM_HOST_INFO *a2)
{
  int ProcessHostInfo; // ebx
  void *ProcessHandle; // [rsp+30h] [rbp-D0h] BYREF
  _CLIENT_ID ClientId; // [rsp+38h] [rbp-C8h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-B8h] BYREF
  char v8[464]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v9[68]; // [rsp+250h] [rbp+150h] BYREF
  int v10; // [rsp+294h] [rbp+194h]
  int v11; // [rsp+298h] [rbp+198h]
  __int64 v12; // [rsp+2A0h] [rbp+1A0h]

  ProcessHandle = 0LL;
  memset(&ObjectAttributes.RootDirectory, 0, 20);
  ClientId.UniqueThread = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ClientId.UniqueProcess = (HANDLE)a1;
  ObjectAttributes.Length = 48;
  ProcessHostInfo = NtOpenProcess(&ProcessHandle, 0x1000u, &ObjectAttributes, &ClientId);
  if ( ProcessHostInfo >= 0 )
  {
    ProcessHostInfo = CempGetProcessHostInfo(ProcessHandle, v8);
    if ( ProcessHostInfo >= 0 )
    {
      CempHostInfoInitialize((__int64)v8, v9, v10, v11, v12, (char *)a2);
      ProcessHostInfo = 0;
    }
  }
  if ( ProcessHandle )
    NtClose(ProcessHandle);
  return (unsigned int)ProcessHostInfo;
}
