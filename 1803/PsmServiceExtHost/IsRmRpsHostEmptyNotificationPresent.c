/*
 * XREFs of IsRmRpsHostEmptyNotificationPresent @ 0x18003F044
 * Callers:
 *     ?RmpRpExtHostEmptyNotification@@YAXPEAU_RM_RESOURCE_POLICY_CONTEXT@@PEBGPEAT_RM_SID@@KK_K@Z @ 0x1800323FC (-RmpRpExtHostEmptyNotification@@YAXPEAU_RM_RESOURCE_POLICY_CONTEXT@@PEBGPEAT_RM_SID@@KK_K@Z.c)
 *     ?RmpRpExtStart@@YAJPEAU_RM_RESOURCE_POLICY_CONTEXT@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180038FA8 (-RmpRpExtStart@@YAJPEAU_RM_RESOURCE_POLICY_CONTEXT@@PEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x18003F130 (ApiSetQueryApiSetPresence_0.c)
 */

char IsRmRpsHostEmptyNotificationPresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_180092878 == 1 )
    return 1;
  if ( dword_180092878 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"VX", &v1) < 0 )
    return 0;
  result = v1;
  dword_180092878 = 2 - (v1 != 0);
  return result;
}
