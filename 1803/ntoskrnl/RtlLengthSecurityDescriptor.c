/*
 * XREFs of RtlLengthSecurityDescriptor @ 0x1404C7070
 * Callers:
 *     CmpGetSecurityDescriptorNode @ 0x140007750 (CmpGetSecurityDescriptorNode.c)
 *     AdtpBuildAccessReasonAuditString @ 0x1402C4674 (AdtpBuildAccessReasonAuditString.c)
 *     CmpFindMatchingDescriptorCell @ 0x1404A0A60 (CmpFindMatchingDescriptorCell.c)
 *     ObLogSecurityDescriptor @ 0x1404C6E50 (ObLogSecurityDescriptor.c)
 *     CmpSetSecurityDescriptorInfo @ 0x1404E1604 (CmpSetSecurityDescriptorInfo.c)
 *     CmpTraceSecurityChanging @ 0x1404E1C30 (CmpTraceSecurityChanging.c)
 *     ExpWnfLookupPermanentName @ 0x1405178D4 (ExpWnfLookupPermanentName.c)
 *     _PnpValidatePropertyData @ 0x140523F3C (_PnpValidatePropertyData.c)
 *     WmipSecurityMethod @ 0x14055D0F0 (WmipSecurityMethod.c)
 *     ExpWnfRegisterPermanentName @ 0x140583CA8 (ExpWnfRegisterPermanentName.c)
 *     _CmSetDeviceRegPropWorker @ 0x1405CF72C (_CmSetDeviceRegPropWorker.c)
 *     _CmGetDeviceRegKeySecurityDescriptor @ 0x1405E09D4 (_CmGetDeviceRegKeySecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x1405E0F7C (_PnpGetPropertiesSecurityDescriptor.c)
 *     BiCreateKeySecurityDescriptor @ 0x140608EA0 (BiCreateKeySecurityDescriptor.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x14064EBCC (_PnpGetEnumSecurityDescriptor.c)
 *     PiAuGetServiceStateSecurityObject @ 0x140729BE0 (PiAuGetServiceStateSecurityObject.c)
 *     PiAuGetStateDirectorySecurityObject @ 0x140729E54 (PiAuGetStateDirectorySecurityObject.c)
 *     ObpSetObjectAuditInfo @ 0x14075938C (ObpSetObjectAuditInfo.c)
 *     _CmSetInstallerClassRegPropWorker @ 0x1407E943C (_CmSetInstallerClassRegPropWorker.c)
 *     DrvDbGetSecurityDescriptor @ 0x1407F403C (DrvDbGetSecurityDescriptor.c)
 *     PiAuCreateLocalSystemSecurityObject @ 0x1408BFB84 (PiAuCreateLocalSystemSecurityObject.c)
 *     PiAuCreateStandardSecurityObject @ 0x1408BFF3C (PiAuCreateStandardSecurityObject.c)
 *     PiAuGetDriverDataDirectorySecurityObject @ 0x1408C10B4 (PiAuGetDriverDataDirectorySecurityObject.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlLengthSecurityDescriptor(PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  __int16 v1; // r9
  ULONG v2; // edx
  __int16 v3; // r8
  __int64 v4; // rax
  char *v5; // rax
  __int64 v6; // rax
  char *v7; // rax
  __int64 v8; // rax
  char *v9; // rax
  __int64 v10; // rax
  char *v11; // rax

  v1 = *((_WORD *)SecurityDescriptor + 1);
  v2 = 20;
  v3 = v1 & 0x8000;
  if ( v1 >= 0 )
    v2 = 40;
  if ( v3 )
  {
    v4 = *((unsigned int *)SecurityDescriptor + 1);
    if ( !(_DWORD)v4 )
      goto LABEL_8;
    v5 = (char *)SecurityDescriptor + v4;
  }
  else
  {
    v5 = (char *)*((_QWORD *)SecurityDescriptor + 1);
  }
  if ( v5 )
    v2 += (4 * (unsigned __int8)v5[1] + 11) & 0xFFFFFFFC;
LABEL_8:
  if ( v3 )
  {
    v6 = *((unsigned int *)SecurityDescriptor + 2);
    if ( !(_DWORD)v6 )
      goto LABEL_13;
    v7 = (char *)SecurityDescriptor + v6;
  }
  else
  {
    v7 = (char *)*((_QWORD *)SecurityDescriptor + 2);
  }
  if ( v7 )
    v2 += (4 * (unsigned __int8)v7[1] + 11) & 0xFFFFFFFC;
LABEL_13:
  if ( (v1 & 4) == 0 )
    goto LABEL_19;
  if ( v3 )
  {
    v8 = *((unsigned int *)SecurityDescriptor + 4);
    if ( !(_DWORD)v8 )
      goto LABEL_19;
    v9 = (char *)SecurityDescriptor + v8;
  }
  else
  {
    v9 = (char *)*((_QWORD *)SecurityDescriptor + 4);
  }
  if ( v9 )
    v2 += (*((unsigned __int16 *)v9 + 1) + 3) & 0xFFFFFFFC;
LABEL_19:
  if ( (v1 & 0x10) != 0 )
  {
    if ( v1 >= 0 )
    {
      v11 = (char *)*((_QWORD *)SecurityDescriptor + 3);
    }
    else
    {
      v10 = *((unsigned int *)SecurityDescriptor + 3);
      if ( !(_DWORD)v10 )
        return v2;
      v11 = (char *)SecurityDescriptor + v10;
    }
    if ( v11 )
      return v2 + ((*((unsigned __int16 *)v11 + 1) + 3) & 0xFFFFFFFC);
  }
  return v2;
}
