/*
 * XREFs of RtlLengthSecurityDescriptor @ 0x1404C0030
 * Callers:
 *     CmpGetSecurityDescriptorNode @ 0x140016054 (CmpGetSecurityDescriptorNode.c)
 *     AdtpBuildAccessReasonAuditString @ 0x14028EA0C (AdtpBuildAccessReasonAuditString.c)
 *     CmpSetSecurityDescriptorInfo @ 0x140476DE8 (CmpSetSecurityDescriptorInfo.c)
 *     CmpFindMatchingDescriptorCell @ 0x1404773FC (CmpFindMatchingDescriptorCell.c)
 *     CmpTraceSecurityChanging @ 0x14047760C (CmpTraceSecurityChanging.c)
 *     WmipSecurityMethod @ 0x140483DC0 (WmipSecurityMethod.c)
 *     ObLogSecurityDescriptor @ 0x1404BFD80 (ObLogSecurityDescriptor.c)
 *     ExpWnfLookupPermanentName @ 0x1404E0E80 (ExpWnfLookupPermanentName.c)
 *     _PnpValidatePropertyData @ 0x14052FC20 (_PnpValidatePropertyData.c)
 *     _CmSetDeviceRegPropWorker @ 0x140551408 (_CmSetDeviceRegPropWorker.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x14057B66C (_PnpGetPropertiesSecurityDescriptor.c)
 *     ExpWnfRegisterPermanentName @ 0x14059E368 (ExpWnfRegisterPermanentName.c)
 *     BiCreateKeySecurityDescriptor @ 0x1405AFCB8 (BiCreateKeySecurityDescriptor.c)
 *     _CmGetDeviceRegKeySecurityDescriptor @ 0x1405D6474 (_CmGetDeviceRegKeySecurityDescriptor.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x1405E9464 (_PnpGetEnumSecurityDescriptor.c)
 *     ObpSetObjectAuditInfo @ 0x1406EFEFC (ObpSetObjectAuditInfo.c)
 *     _CmSetInstallerClassRegPropWorker @ 0x140780680 (_CmSetInstallerClassRegPropWorker.c)
 *     DrvDbGetSecurityDescriptor @ 0x1407878BC (DrvDbGetSecurityDescriptor.c)
 *     PiAuCreateLocalSystemSecurityObject @ 0x14084E620 (PiAuCreateLocalSystemSecurityObject.c)
 *     PiAuCreateStandardSecurityObject @ 0x14084E998 (PiAuCreateStandardSecurityObject.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlLengthSecurityDescriptor(PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  __int16 v1; // r8
  ULONG v2; // edx
  __int64 v3; // rax
  char *v4; // rax
  __int64 v5; // rax
  char *v6; // rax
  __int64 v7; // rax
  char *v8; // rax
  __int64 v9; // rax
  char *v10; // rax

  v1 = *((_WORD *)SecurityDescriptor + 1);
  v2 = 20;
  if ( v1 >= 0 )
    v2 = 40;
  if ( v1 < 0 )
  {
    v3 = *((unsigned int *)SecurityDescriptor + 1);
    if ( !(_DWORD)v3 )
      goto LABEL_8;
    v4 = (char *)SecurityDescriptor + v3;
  }
  else
  {
    v4 = (char *)*((_QWORD *)SecurityDescriptor + 1);
  }
  if ( v4 )
    v2 += (4 * (unsigned __int8)v4[1] + 11) & 0xFFFFFFFC;
LABEL_8:
  if ( v1 >= 0 )
  {
    v6 = (char *)*((_QWORD *)SecurityDescriptor + 2);
  }
  else
  {
    v5 = *((unsigned int *)SecurityDescriptor + 2);
    if ( !(_DWORD)v5 )
      goto LABEL_13;
    v6 = (char *)SecurityDescriptor + v5;
  }
  if ( v6 )
    v2 += (4 * (unsigned __int8)v6[1] + 11) & 0xFFFFFFFC;
LABEL_13:
  if ( (v1 & 4) == 0 )
    goto LABEL_19;
  if ( v1 >= 0 )
  {
    v8 = (char *)*((_QWORD *)SecurityDescriptor + 4);
  }
  else
  {
    v7 = *((unsigned int *)SecurityDescriptor + 4);
    if ( !(_DWORD)v7 )
      goto LABEL_19;
    v8 = (char *)SecurityDescriptor + v7;
  }
  if ( v8 )
    v2 += (*((unsigned __int16 *)v8 + 1) + 3) & 0xFFFFFFFC;
LABEL_19:
  if ( (v1 & 0x10) != 0 )
  {
    if ( v1 >= 0 )
    {
      v10 = (char *)*((_QWORD *)SecurityDescriptor + 3);
    }
    else
    {
      v9 = *((unsigned int *)SecurityDescriptor + 3);
      if ( !(_DWORD)v9 )
        return v2;
      v10 = (char *)SecurityDescriptor + v9;
    }
    if ( v10 )
      return v2 + ((*((unsigned __int16 *)v10 + 1) + 3) & 0xFFFFFFFC);
  }
  return v2;
}
