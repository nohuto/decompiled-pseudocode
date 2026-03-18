/*
 * XREFs of RtlValidSecurityDescriptor @ 0x1404C1B80
 * Callers:
 *     ObInsertObjectEx @ 0x1404C3DD0 (ObInsertObjectEx.c)
 *     ObpAdjustAccessMask @ 0x1404DE4C0 (ObpAdjustAccessMask.c)
 *     _PnpOpenPropertiesKey @ 0x14050421C (_PnpOpenPropertiesKey.c)
 *     ObOpenObjectByNameEx @ 0x1405AC6B0 (ObOpenObjectByNameEx.c)
 *     _CmGetDeviceRegKeySecurityDescriptor @ 0x1405E09D4 (_CmGetDeviceRegKeySecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x1405E0F7C (_PnpGetPropertiesSecurityDescriptor.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x14064EBCC (_PnpGetEnumSecurityDescriptor.c)
 *     PiAuGetServiceStateSecurityObject @ 0x140729BE0 (PiAuGetServiceStateSecurityObject.c)
 *     PiAuGetStateDirectorySecurityObject @ 0x140729E54 (PiAuGetStateDirectorySecurityObject.c)
 *     ObpSetObjectAuditInfo @ 0x14075938C (ObpSetObjectAuditInfo.c)
 *     CMFCreateSecurityDescriptor @ 0x1407C83C0 (CMFCreateSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x1407F403C (DrvDbGetSecurityDescriptor.c)
 *     PiAuCreateLocalSystemSecurityObject @ 0x1408BFB84 (PiAuCreateLocalSystemSecurityObject.c)
 *     PiAuCreateStandardSecurityObject @ 0x1408BFF3C (PiAuCreateStandardSecurityObject.c)
 *     PiAuGetDriverDataDirectorySecurityObject @ 0x1408C10B4 (PiAuGetDriverDataDirectorySecurityObject.c)
 * Callees:
 *     RtlValidSid @ 0x1404C80A0 (RtlValidSid.c)
 *     RtlValidAcl @ 0x1404C80D0 (RtlValidAcl.c)
 */

BOOLEAN __stdcall RtlValidSecurityDescriptor(PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  __int16 v2; // di
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  ACL *v6; // rcx
  __int16 v7; // ax
  __int64 v9; // rax
  ACL *v10; // rcx
  char *v11; // rcx
  char *v12; // rcx

  if ( *(_BYTE *)SecurityDescriptor != 1 )
    return 0;
  v2 = *((_WORD *)SecurityDescriptor + 1);
  if ( v2 >= 0 )
  {
    v11 = (char *)*((_QWORD *)SecurityDescriptor + 1);
  }
  else
  {
    v3 = *((unsigned int *)SecurityDescriptor + 1);
    if ( !(_DWORD)v3 )
      goto LABEL_4;
    v11 = (char *)SecurityDescriptor + v3;
  }
  if ( v11 && !RtlValidSid(v11) )
    return 0;
LABEL_4:
  if ( v2 >= 0 )
  {
    v12 = (char *)*((_QWORD *)SecurityDescriptor + 2);
  }
  else
  {
    v4 = *((unsigned int *)SecurityDescriptor + 2);
    if ( !(_DWORD)v4 )
      goto LABEL_6;
    v12 = (char *)SecurityDescriptor + v4;
  }
  if ( v12 && !RtlValidSid(v12) )
    return 0;
LABEL_6:
  if ( (v2 & 4) != 0 )
  {
    if ( v2 >= 0 )
    {
      v6 = (ACL *)*((_QWORD *)SecurityDescriptor + 4);
      goto LABEL_10;
    }
    v5 = *((unsigned int *)SecurityDescriptor + 4);
    if ( (_DWORD)v5 )
    {
      v6 = (ACL *)((char *)SecurityDescriptor + v5);
LABEL_10:
      if ( v6 && !RtlValidAcl(v6) )
        return 0;
    }
  }
  v7 = *((_WORD *)SecurityDescriptor + 1);
  if ( (v7 & 0x10) == 0 )
    return 1;
  if ( v7 >= 0 )
  {
    v10 = (ACL *)*((_QWORD *)SecurityDescriptor + 3);
  }
  else
  {
    v9 = *((unsigned int *)SecurityDescriptor + 3);
    if ( !(_DWORD)v9 )
      return 1;
    v10 = (ACL *)((char *)SecurityDescriptor + v9);
  }
  return !v10 || RtlValidAcl(v10);
}
