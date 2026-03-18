/*
 * XREFs of RtlValidSecurityDescriptor @ 0x14050C750
 * Callers:
 *     _PnpOpenPropertiesKey @ 0x140487174 (_PnpOpenPropertiesKey.c)
 *     ObpAdjustAccessMask @ 0x1404CB0E4 (ObpAdjustAccessMask.c)
 *     ObInsertObjectEx @ 0x14050DCA0 (ObInsertObjectEx.c)
 *     ObOpenObjectByNameEx @ 0x14052E3C0 (ObOpenObjectByNameEx.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x1405971D4 (_PnpGetPropertiesSecurityDescriptor.c)
 *     _CmGetDeviceRegKeySecurityDescriptor @ 0x1405C43B4 (_CmGetDeviceRegKeySecurityDescriptor.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x1405CFE64 (_PnpGetEnumSecurityDescriptor.c)
 *     ObpSetObjectAuditInfo @ 0x1406C1550 (ObpSetObjectAuditInfo.c)
 *     CMFCreateSecurityDescriptor @ 0x14072104C (CMFCreateSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x1407453E0 (DrvDbGetSecurityDescriptor.c)
 *     PiAuCreateLocalSystemSecurityObject @ 0x14081D17C (PiAuCreateLocalSystemSecurityObject.c)
 *     PiAuCreateStandardSecurityObject @ 0x14081D4F4 (PiAuCreateStandardSecurityObject.c)
 * Callees:
 *     RtlValidSid @ 0x1404F5A90 (RtlValidSid.c)
 *     RtlValidAcl @ 0x14050C290 (RtlValidAcl.c)
 */

BOOLEAN __stdcall RtlValidSecurityDescriptor(PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  __int16 v2; // di
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  ACL *v6; // rcx
  __int16 v7; // cx
  __int64 v9; // rax
  ACL *v10; // rcx
  char *v11; // rcx
  char *v12; // rcx

  if ( *(_BYTE *)SecurityDescriptor == 1 )
  {
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
    if ( (~(_BYTE)v2 & 4) == 0 )
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
        if ( !v6 || RtlValidAcl(v6) )
          goto LABEL_12;
        return 0;
      }
    }
LABEL_12:
    v7 = *((_WORD *)SecurityDescriptor + 1);
    if ( (~(_BYTE)v7 & 0x10) != 0 )
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
  return 0;
}
