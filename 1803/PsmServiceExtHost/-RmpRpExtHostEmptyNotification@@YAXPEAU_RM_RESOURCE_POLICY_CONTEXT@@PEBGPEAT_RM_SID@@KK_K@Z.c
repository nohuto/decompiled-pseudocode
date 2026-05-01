/*
 * XREFs of ?RmpRpExtHostEmptyNotification@@YAXPEAU_RM_RESOURCE_POLICY_CONTEXT@@PEBGPEAT_RM_SID@@KK_K@Z @ 0x1800323FC
 * Callers:
 *     ?HostStateNotification@ResourceManager@ExecutionModel@@UEAAXPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x18001BDF0 (-HostStateNotification@ResourceManager@ExecutionModel@@UEAAXPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_I.c)
 * Callees:
 *     IsRmRpsHostEmptyNotificationPresent @ 0x18003F044 (IsRmRpsHostEmptyNotificationPresent.c)
 */

void __fastcall RmpRpExtHostEmptyNotification(
        struct _RM_RESOURCE_POLICY_CONTEXT *a1,
        const unsigned __int16 *a2,
        union _RM_SID *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int64 a6)
{
  if ( (unsigned __int8)IsRmRpsHostEmptyNotificationPresent() )
  {
    if ( (*((_BYTE *)a1 + 8) & 1) != 0 )
      RmRpsHostEmptyNotification(*(_QWORD *)a1, a2, a3, a4, a5, a6);
  }
}
