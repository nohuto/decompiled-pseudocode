/*
 * XREFs of RtlStringFromGUIDEx @ 0x1404DF798
 * Callers:
 *     KsepEvntLogShimsApplied @ 0x1401596AC (KsepEvntLogShimsApplied.c)
 *     PpDevCfgProcessDeviceClass @ 0x14044EB08 (PpDevCfgProcessDeviceClass.c)
 *     PpDevCfgProcessDeviceReset @ 0x14044EE8C (PpDevCfgProcessDeviceReset.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x14044F0B8 (PiDevCfgResetDeviceDriverSettings.c)
 *     PopSetNewPolicyValue @ 0x1404DF45C (PopSetNewPolicyValue.c)
 *     RtlStringFromGUID @ 0x1404DF780 (RtlStringFromGUID.c)
 *     CmpInitCmRM @ 0x14050A840 (CmpInitCmRM.c)
 *     PipGenerateContainerID @ 0x140593694 (PipGenerateContainerID.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x1405A0C10 (PiDevCfgResolveVariableDeviceProperty.c)
 *     PiDevCfgQueryDriverConfiguration @ 0x1405A20B0 (PiDevCfgQueryDriverConfiguration.c)
 *     PiDevCfgLogDeviceConfigured @ 0x1405A3E50 (PiDevCfgLogDeviceConfigured.c)
 *     BcdOpenObject @ 0x1405AF35C (BcdOpenObject.c)
 *     BcdGetElementDataWithFlags @ 0x1405AF8C8 (BcdGetElementDataWithFlags.c)
 *     BiConvertElementToRegistryData @ 0x1405B03EC (BiConvertElementToRegistryData.c)
 *     CmpStartRMLog @ 0x1405E47A8 (CmpStartRMLog.c)
 *     CmpRecoverEnlistment @ 0x140695FE8 (CmpRecoverEnlistment.c)
 *     CmpAddRemoveRMLogContainer @ 0x140696310 (CmpAddRemoveRMLogContainer.c)
 *     CmpCloneHwProfile @ 0x140698898 (CmpCloneHwProfile.c)
 *     VrpPreLoadKey @ 0x1406A6F7C (VrpPreLoadKey.c)
 *     PiDevCfgResolveVariableGenerateGuid @ 0x1406C8F70 (PiDevCfgResolveVariableGenerateGuid.c)
 *     ExpCreateOutputSIGNATURE @ 0x1407589E4 (ExpCreateOutputSIGNATURE.c)
 *     ExpTranslateEfiPath @ 0x14075ABF0 (ExpTranslateEfiPath.c)
 *     BiCreateObject @ 0x140778F1C (BiCreateObject.c)
 *     BiUpdateObjectReferenceInEfiEntry @ 0x14077D278 (BiUpdateObjectReferenceInEfiEntry.c)
 *     ConvertDevpropcompkeyToString @ 0x140787F9C (ConvertDevpropcompkeyToString.c)
 *     PipInitComputerIds @ 0x1408470D0 (PipInitComputerIds.c)
 * Callees:
 *     swprintf_s @ 0x140163370 (swprintf_s.c)
 *     ExpAllocateStringRoutine @ 0x1404DF9E0 (ExpAllocateStringRoutine.c)
 */

__int64 __fastcall RtlStringFromGUIDEx(unsigned int *a1, __int64 a2, char a3)
{
  __int64 StringRoutine; // rax
  unsigned __int64 v6; // rdx

  if ( a3 )
  {
    *(_WORD *)(a2 + 2) = 78;
    StringRoutine = ExpAllocateStringRoutine(0x4EuLL);
    *(_QWORD *)(a2 + 8) = StringRoutine;
    if ( StringRoutine )
    {
LABEL_3:
      v6 = *(unsigned __int16 *)(a2 + 2);
      *(_WORD *)a2 = 76;
      swprintf_s(
        *(wchar_t **)(a2 + 8),
        v6 >> 1,
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
    if ( *(_WORD *)(a2 + 2) >= 0x4Eu )
      goto LABEL_3;
    return 3221225507LL;
  }
}
