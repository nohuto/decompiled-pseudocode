/*
 * XREFs of RtlStringFromGUIDEx @ 0x140518D58
 * Callers:
 *     BapdpMarshallBootDataToRegistry @ 0x140171744 (BapdpMarshallBootDataToRegistry.c)
 *     KsepEvntLogShimsApplied @ 0x14024D0F8 (KsepEvntLogShimsApplied.c)
 *     PopSetNewPolicyValue @ 0x140518BB4 (PopSetNewPolicyValue.c)
 *     RtlStringFromGUID @ 0x140518D40 (RtlStringFromGUID.c)
 *     CmpInitCmRM @ 0x140561DC4 (CmpInitCmRM.c)
 *     PiDevCfgLogDeviceConfigured @ 0x1405D60B0 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgQueryDriverConfiguration @ 0x1405D6820 (PiDevCfgQueryDriverConfiguration.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x1405DA1C0 (PiDevCfgResolveVariableDeviceProperty.c)
 *     PipGenerateContainerID @ 0x1405E6814 (PipGenerateContainerID.c)
 *     CmpStartRMLog @ 0x1405F4564 (CmpStartRMLog.c)
 *     BcdOpenObject @ 0x140608384 (BcdOpenObject.c)
 *     BcdGetElementDataWithFlags @ 0x140608AB0 (BcdGetElementDataWithFlags.c)
 *     BiConvertElementToRegistryData @ 0x1406093F4 (BiConvertElementToRegistryData.c)
 *     CmpRecoverEnlistment @ 0x1406F9A54 (CmpRecoverEnlistment.c)
 *     CmpAddRemoveRMLogContainer @ 0x1406F9D80 (CmpAddRemoveRMLogContainer.c)
 *     CmpCloneHwProfile @ 0x1406FC0D0 (CmpCloneHwProfile.c)
 *     VrpPreLoadKey @ 0x14070B60C (VrpPreLoadKey.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x14072E24C (PiDevCfgResetDeviceDriverSettings.c)
 *     PiDevCfgResolveVariableGenerateGuid @ 0x14072FF90 (PiDevCfgResolveVariableGenerateGuid.c)
 *     PpDevCfgProcessDeviceClass @ 0x140730D6C (PpDevCfgProcessDeviceClass.c)
 *     PpDevCfgProcessDeviceReset @ 0x14073174C (PpDevCfgProcessDeviceReset.c)
 *     ExpCreateOutputSIGNATURE @ 0x1407BF674 (ExpCreateOutputSIGNATURE.c)
 *     ExpTranslateEfiPath @ 0x1407C1B1C (ExpTranslateEfiPath.c)
 *     BiCreateObject @ 0x1407E1B88 (BiCreateObject.c)
 *     BiUpdateObjectReferenceInEfiEntry @ 0x1407E5D78 (BiUpdateObjectReferenceInEfiEntry.c)
 *     ConvertDevpropcompkeyToString @ 0x1407F475C (ConvertDevpropcompkeyToString.c)
 *     PipInitComputerIds @ 0x1408B3A10 (PipInitComputerIds.c)
 * Callees:
 *     swprintf_s @ 0x14018D230 (swprintf_s.c)
 *     ExpAllocateStringRoutine @ 0x140518FA0 (ExpAllocateStringRoutine.c)
 */

__int64 __fastcall RtlStringFromGUIDEx(unsigned int *a1, __int64 a2, char a3)
{
  __int64 StringRoutine; // rax
  unsigned __int16 v6; // dx

  if ( a3 )
  {
    *(_WORD *)(a2 + 2) = 78;
    StringRoutine = ExpAllocateStringRoutine(0x4EuLL);
    *(_QWORD *)(a2 + 8) = StringRoutine;
    if ( StringRoutine )
    {
      v6 = *(_WORD *)(a2 + 2);
LABEL_4:
      *(_WORD *)a2 = 76;
      swprintf_s(
        *(wchar_t **)(a2 + 8),
        (unsigned __int64)v6 >> 1,
        L"{%08lx-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
        *a1,
        *((unsigned __int16 *)a1 + 2),
        *((unsigned __int16 *)a1 + 3),
        *((unsigned __int8 *)a1 + 8),
        *((unsigned __int8 *)a1 + 9),
        *((unsigned __int8 *)a1 + 10),
        *((unsigned __int8 *)a1 + 11),
        *((unsigned __int8 *)a1 + 12),
        *((unsigned __int8 *)a1 + 13),
        *((unsigned __int8 *)a1 + 14),
        *((unsigned __int8 *)a1 + 15));
      return 0LL;
    }
    return 3221225495LL;
  }
  else
  {
    v6 = *(_WORD *)(a2 + 2);
    if ( v6 >= 0x4Eu )
      goto LABEL_4;
    return 3221225507LL;
  }
}
