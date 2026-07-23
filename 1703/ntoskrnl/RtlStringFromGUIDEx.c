/*
 * XREFs of RtlStringFromGUIDEx @ 0x1404C1BA0
 * Callers:
 *     CmpStartRMLog @ 0x14042EC9C (CmpStartRMLog.c)
 *     PipGenerateContainerID @ 0x140453598 (PipGenerateContainerID.c)
 *     PopSetNewPolicyValue @ 0x1404C1AA4 (PopSetNewPolicyValue.c)
 *     RtlStringFromGUID @ 0x1404C2C60 (RtlStringFromGUID.c)
 *     CmpInitCmRM @ 0x14054D650 (CmpInitCmRM.c)
 *     BcdOpenObject @ 0x14058B110 (BcdOpenObject.c)
 *     BcdGetElementDataWithFlags @ 0x14058B67C (BcdGetElementDataWithFlags.c)
 *     BiConvertElementToRegistryData @ 0x14058BFCC (BiConvertElementToRegistryData.c)
 *     PiDevCfgQueryDriverConfiguration @ 0x14058FD34 (PiDevCfgQueryDriverConfiguration.c)
 *     PiDevCfgLogDeviceConfigured @ 0x140591DE0 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x1405944B0 (PiDevCfgResolveVariableDeviceProperty.c)
 *     CmpRecoverEnlistment @ 0x14066B97C (CmpRecoverEnlistment.c)
 *     CmpAddRemoveRMLogContainer @ 0x14066BCA4 (CmpAddRemoveRMLogContainer.c)
 *     CmpCloneHwProfile @ 0x14066E3A0 (CmpCloneHwProfile.c)
 *     VrpPreLoadKey @ 0x14067C648 (VrpPreLoadKey.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x14069BB20 (PiDevCfgResetDeviceDriverSettings.c)
 *     PiDevCfgResolveVariableGenerateGuid @ 0x14069DA70 (PiDevCfgResolveVariableGenerateGuid.c)
 *     PpDevCfgProcessDeviceClass @ 0x14069E850 (PpDevCfgProcessDeviceClass.c)
 *     PpDevCfgProcessDeviceReset @ 0x14069F1F4 (PpDevCfgProcessDeviceReset.c)
 *     ExpCreateOutputSIGNATURE @ 0x1407191E4 (ExpCreateOutputSIGNATURE.c)
 *     ExpTranslateEfiPath @ 0x14071B354 (ExpTranslateEfiPath.c)
 *     BiCreateObject @ 0x140734C70 (BiCreateObject.c)
 *     BiUpdateObjectReferenceInEfiEntry @ 0x140738B00 (BiUpdateObjectReferenceInEfiEntry.c)
 *     ConvertDevpropcompkeyToString @ 0x140745AC8 (ConvertDevpropcompkeyToString.c)
 *     PipInitComputerIds @ 0x14080F160 (PipInitComputerIds.c)
 * Callees:
 *     swprintf_s @ 0x14016EB70 (swprintf_s.c)
 *     ExpAllocateStringRoutine @ 0x1404C1D30 (ExpAllocateStringRoutine.c)
 */

NTSTATUS __cdecl RtlStringFromGUIDEx(PGUID Guid, PUNICODE_STRING GuidString, BOOLEAN AllocateGuidString)
{
  wchar_t *StringRoutine; // rax
  unsigned __int64 MaximumLength; // rdx

  if ( AllocateGuidString )
  {
    GuidString->MaximumLength = 78;
    StringRoutine = (wchar_t *)ExpAllocateStringRoutine(78LL);
    GuidString->Buffer = StringRoutine;
    if ( StringRoutine )
    {
LABEL_3:
      MaximumLength = GuidString->MaximumLength;
      GuidString->Length = 76;
      swprintf_s(
        GuidString->Buffer,
        MaximumLength >> 1,
        L"{%08lx-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
        Guid->Data1,
        Guid->Data2,
        Guid->Data3,
        Guid->Data4[0],
        Guid->Data4[1],
        Guid->Data4[2],
        Guid->Data4[3],
        Guid->Data4[4],
        Guid->Data4[5],
        Guid->Data4[6],
        Guid->Data4[7]);
      return 0;
    }
    return -1073741801;
  }
  else
  {
    if ( GuidString->MaximumLength >= 0x4Eu )
      goto LABEL_3;
    return -1073741789;
  }
}
