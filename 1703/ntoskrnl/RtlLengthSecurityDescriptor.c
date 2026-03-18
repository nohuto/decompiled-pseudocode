/*
 * XREFs of RtlLengthSecurityDescriptor @ 0x14050E880
 * Callers:
 *     CmpGetSecurityDescriptorNode @ 0x14006ECBC (CmpGetSecurityDescriptorNode.c)
 *     AdtpBuildAccessReasonAuditString @ 0x1402646C0 (AdtpBuildAccessReasonAuditString.c)
 *     WmipSecurityMethod @ 0x1404575E0 (WmipSecurityMethod.c)
 *     ExpWnfRegisterPermanentName @ 0x14045CAAC (ExpWnfRegisterPermanentName.c)
 *     CmpSetSecurityDescriptorInfo @ 0x1404BF12C (CmpSetSecurityDescriptorInfo.c)
 *     CmpFindMatchingDescriptorCell @ 0x1404BFD5C (CmpFindMatchingDescriptorCell.c)
 *     ExpWnfLookupPermanentName @ 0x1404C0014 (ExpWnfLookupPermanentName.c)
 *     _PnpValidatePropertyData @ 0x1404DBC98 (_PnpValidatePropertyData.c)
 *     ObLogSecurityDescriptor @ 0x14050E5E0 (ObLogSecurityDescriptor.c)
 *     BiCreateKeySecurityDescriptor @ 0x14058BA78 (BiCreateKeySecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x1405971D4 (_PnpGetPropertiesSecurityDescriptor.c)
 *     _CmSetDeviceRegPropWorker @ 0x1405C2018 (_CmSetDeviceRegPropWorker.c)
 *     _CmGetDeviceRegKeySecurityDescriptor @ 0x1405C43B4 (_CmGetDeviceRegKeySecurityDescriptor.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x1405CFE64 (_PnpGetEnumSecurityDescriptor.c)
 *     ObpSetObjectAuditInfo @ 0x1406C1550 (ObpSetObjectAuditInfo.c)
 *     _CmSetInstallerClassRegPropWorker @ 0x14073BF60 (_CmSetInstallerClassRegPropWorker.c)
 *     DrvDbGetSecurityDescriptor @ 0x1407453E0 (DrvDbGetSecurityDescriptor.c)
 *     PiAuCreateLocalSystemSecurityObject @ 0x14081D17C (PiAuCreateLocalSystemSecurityObject.c)
 *     PiAuCreateStandardSecurityObject @ 0x14081D4F4 (PiAuCreateStandardSecurityObject.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlLengthSecurityDescriptor(PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  __int16 v1; // r8
  ULONG v2; // edx
  __int64 v3; // rax
  __int64 v4; // rax
  char *v5; // rax
  __int64 v6; // rax
  char *v7; // rax
  __int64 v8; // rax
  char *v9; // rax
  char *v11; // rax

  v1 = *((_WORD *)SecurityDescriptor + 1);
  v2 = 20;
  if ( v1 < 0 )
  {
    v3 = *((unsigned int *)SecurityDescriptor + 1);
    if ( !(_DWORD)v3 )
      goto LABEL_7;
    v11 = (char *)SecurityDescriptor + v3;
  }
  else
  {
    v2 = 40;
    v11 = (char *)*((_QWORD *)SecurityDescriptor + 1);
  }
  if ( v11 )
    v2 += (4 * (unsigned __int8)v11[1] + 11) & 0xFFFFFFFC;
LABEL_7:
  if ( v1 >= 0 )
  {
    v5 = (char *)*((_QWORD *)SecurityDescriptor + 2);
  }
  else
  {
    v4 = *((unsigned int *)SecurityDescriptor + 2);
    if ( !(_DWORD)v4 )
      goto LABEL_12;
    v5 = (char *)SecurityDescriptor + v4;
  }
  if ( v5 )
    v2 += (4 * (unsigned __int8)v5[1] + 11) & 0xFFFFFFFC;
LABEL_12:
  if ( (~(_BYTE)v1 & 4) != 0 )
    goto LABEL_18;
  if ( v1 >= 0 )
  {
    v7 = (char *)*((_QWORD *)SecurityDescriptor + 4);
  }
  else
  {
    v6 = *((unsigned int *)SecurityDescriptor + 4);
    if ( !(_DWORD)v6 )
      goto LABEL_18;
    v7 = (char *)SecurityDescriptor + v6;
  }
  if ( v7 )
    v2 += (*((unsigned __int16 *)v7 + 1) + 3) & 0xFFFFFFFC;
LABEL_18:
  if ( (~(_BYTE)v1 & 0x10) == 0 )
  {
    if ( v1 >= 0 )
    {
      v9 = (char *)*((_QWORD *)SecurityDescriptor + 3);
    }
    else
    {
      v8 = *((unsigned int *)SecurityDescriptor + 3);
      if ( !(_DWORD)v8 )
        return v2;
      v9 = (char *)SecurityDescriptor + v8;
    }
    if ( v9 )
      return v2 + ((*((unsigned __int16 *)v9 + 1) + 3) & 0xFFFFFFFC);
  }
  return v2;
}
