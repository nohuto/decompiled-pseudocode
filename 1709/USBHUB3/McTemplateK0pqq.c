/*
 * XREFs of McTemplateK0pqq @ 0x1C000A7EC
 * Callers:
 *     HUBFDO_EvtDeviceD0Entry @ 0x1C000ABD0 (HUBFDO_EvtDeviceD0Entry.c)
 *     HUBFDO_EvtDeviceD0Exit @ 0x1C000AE30 (HUBFDO_EvtDeviceD0Exit.c)
 *     HUBFDO_IoctlGetNodeConnectionInfo @ 0x1C000B9B4 (HUBFDO_IoctlGetNodeConnectionInfo.c)
 *     HUBFDO_CompleteGetDescriptorRequest @ 0x1C000BF50 (HUBFDO_CompleteGetDescriptorRequest.c)
 *     HUBPDO_CompleteClientSerialRequestWithStatusSuccess @ 0x1C001176C (HUBPDO_CompleteClientSerialRequestWithStatusSuccess.c)
 *     HUBPDO_CompleteClientSerialRequestWithStatusFailed @ 0x1C001194C (HUBPDO_CompleteClientSerialRequestWithStatusFailed.c)
 *     HUBPDO_CompleteClientSerialRequestWithLastStatus @ 0x1C0011AF8 (HUBPDO_CompleteClientSerialRequestWithLastStatus.c)
 *     HUBPDO_EvtDeviceWdmIrpPreprocess @ 0x1C00141E0 (HUBPDO_EvtDeviceWdmIrpPreprocess.c)
 *     HUBPDO_EvtDeviceD0Entry @ 0x1C00152C0 (HUBPDO_EvtDeviceD0Entry.c)
 *     HUBPDO_EvtDeviceD0Exit @ 0x1C00154A0 (HUBPDO_EvtDeviceD0Exit.c)
 *     EventWriteUSBHUB3_ETW_EVENT_CLIENT_INITIATED_RECOVERY_ACTION_Wrapper @ 0x1C0017240 (EventWriteUSBHUB3_ETW_EVENT_CLIENT_INITIATED_RECOVERY_ACTION_Wrapper.c)
 *     HUBUCX_UCXIoctlComplete @ 0x1C001EE40 (HUBUCX_UCXIoctlComplete.c)
 *     HUBFDO_IoctlGetNodeInformation @ 0x1C00677E8 (HUBFDO_IoctlGetNodeInformation.c)
 *     HUBFDO_IoctlGetNodeConnectionDriverKeyName @ 0x1C00679B8 (HUBFDO_IoctlGetNodeConnectionDriverKeyName.c)
 *     HUBFDO_IoctlGetNodeConnectionAttributes @ 0x1C0067D3C (HUBFDO_IoctlGetNodeConnectionAttributes.c)
 *     HUBFDO_IoctlGetHubCaps @ 0x1C0067F64 (HUBFDO_IoctlGetHubCaps.c)
 *     HUBFDO_IoctlGetHubCapsEx @ 0x1C0068124 (HUBFDO_IoctlGetHubCapsEx.c)
 *     HUBFDO_IoctlGetNodeConnectionName @ 0x1C006833C (HUBFDO_IoctlGetNodeConnectionName.c)
 *     HUBFDO_IoctlGetHubInformationEx @ 0x1C0068CC4 (HUBFDO_IoctlGetHubInformationEx.c)
 *     HUBFDO_IoctlGetPortConnectorProperties @ 0x1C0068F50 (HUBFDO_IoctlGetPortConnectorProperties.c)
 *     HUBFDO_IoctlGetNodeConnectionInformationExV2 @ 0x1C0069314 (HUBFDO_IoctlGetNodeConnectionInformationExV2.c)
 *     HUBFDO_IoctlCyclePort @ 0x1C006973C (HUBFDO_IoctlCyclePort.c)
 *     HUBFDO_IoctlResetHub @ 0x1C0069C08 (HUBFDO_IoctlResetHub.c)
 *     HUBACPI_GetAcpiPortAttributes @ 0x1C0073CD8 (HUBACPI_GetAcpiPortAttributes.c)
 * Callees:
 *     McGenEventWriteKM @ 0x1C00011C4 (McGenEventWriteKM.c)
 *     __security_check_cookie @ 0x1C00389B0 (__security_check_cookie.c)
 */

NTSTATUS McTemplateK0pqq(__int64 a1, const EVENT_DESCRIPTOR *a2, const GUID *a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-50h] BYREF
  va_list v5; // [rsp+40h] [rbp-40h]
  __int64 v6; // [rsp+48h] [rbp-38h]
  va_list v7; // [rsp+50h] [rbp-30h]
  __int64 v8; // [rsp+58h] [rbp-28h]
  va_list v9; // [rsp+60h] [rbp-20h]
  __int64 v10; // [rsp+68h] [rbp-18h]
  __int64 v11; // [rsp+A8h] [rbp+28h] BYREF
  va_list va; // [rsp+A8h] [rbp+28h]
  __int64 v13; // [rsp+B0h] [rbp+30h] BYREF
  va_list va1; // [rsp+B0h] [rbp+30h]
  va_list va2; // [rsp+B8h] [rbp+38h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v11 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v13 = va_arg(va2, _QWORD);
  v6 = 8LL;
  v8 = 4LL;
  va_copy(v5, va);
  va_copy(v7, va1);
  va_copy(v9, va2);
  v10 = 4LL;
  return McGenEventWriteKM(a1, a2, a3, 4u, &v4);
}
