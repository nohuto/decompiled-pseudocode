/*
 * XREFs of RtlValidSecurityDescriptor @ 0x140485620
 * Callers:
 *     ObpAdjustAccessMask @ 0x1404681F4 (ObpAdjustAccessMask.c)
 *     ObOpenObjectByNameEx @ 0x1404AC5A0 (ObOpenObjectByNameEx.c)
 *     ObInsertObjectEx @ 0x1404BC710 (ObInsertObjectEx.c)
 *     _PnpOpenPropertiesKey @ 0x14051FA08 (_PnpOpenPropertiesKey.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x14057B66C (_PnpGetPropertiesSecurityDescriptor.c)
 *     _CmGetDeviceRegKeySecurityDescriptor @ 0x1405D6474 (_CmGetDeviceRegKeySecurityDescriptor.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x1405E9464 (_PnpGetEnumSecurityDescriptor.c)
 *     ObpSetObjectAuditInfo @ 0x1406EFEFC (ObpSetObjectAuditInfo.c)
 *     CMFCreateSecurityDescriptor @ 0x140760F4C (CMFCreateSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x1407878BC (DrvDbGetSecurityDescriptor.c)
 *     PiAuCreateLocalSystemSecurityObject @ 0x14084E620 (PiAuCreateLocalSystemSecurityObject.c)
 *     PiAuCreateStandardSecurityObject @ 0x14084E998 (PiAuCreateStandardSecurityObject.c)
 * Callees:
 *     RtlValidSid @ 0x140486030 (RtlValidSid.c)
 *     RtlValidAcl @ 0x1404BC590 (RtlValidAcl.c)
 */

BOOLEAN __stdcall RtlValidSecurityDescriptor(PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  __int16 v2; // di
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  ACL *v6; // rcx
  __int16 v7; // ax
  char *v9; // rcx
  char *v10; // rcx
  __int64 v11; // rax
  ACL *v12; // rcx

  if ( *(_BYTE *)SecurityDescriptor == 1 )
  {
    v2 = *((_WORD *)SecurityDescriptor + 1);
    if ( v2 >= 0 )
    {
      v9 = (char *)*((_QWORD *)SecurityDescriptor + 1);
    }
    else
    {
      v3 = *((unsigned int *)SecurityDescriptor + 1);
      if ( !(_DWORD)v3 )
        goto LABEL_4;
      v9 = (char *)SecurityDescriptor + v3;
    }
    if ( v9 && !RtlValidSid(v9) )
      return 0;
LABEL_4:
    if ( v2 >= 0 )
    {
      v10 = (char *)*((_QWORD *)SecurityDescriptor + 2);
    }
    else
    {
      v4 = *((unsigned int *)SecurityDescriptor + 2);
      if ( !(_DWORD)v4 )
        goto LABEL_6;
      v10 = (char *)SecurityDescriptor + v4;
    }
    if ( v10 && !RtlValidSid(v10) )
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
        if ( !v6 || RtlValidAcl(v6) )
          goto LABEL_12;
        return 0;
      }
    }
LABEL_12:
    v7 = *((_WORD *)SecurityDescriptor + 1);
    if ( (v7 & 0x10) == 0 )
      return 1;
    if ( v7 >= 0 )
    {
      v12 = (ACL *)*((_QWORD *)SecurityDescriptor + 3);
    }
    else
    {
      v11 = *((unsigned int *)SecurityDescriptor + 3);
      if ( !(_DWORD)v11 )
        return 1;
      v12 = (ACL *)((char *)SecurityDescriptor + v11);
    }
    return !v12 || RtlValidAcl(v12);
  }
  return 0;
}
