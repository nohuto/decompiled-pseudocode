/*
 * XREFs of ?RmpWnfCreateStateNameForIpcEx@@YAJPEAT_RM_SID@@0KKPEAU_WNF_STATE_NAME@@@Z @ 0x18001C38C
 * Callers:
 *     RmpWnfCreateStateNameForClient @ 0x18001C304 (RmpWnfCreateStateNameForClient.c)
 * Callees:
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall RmpWnfCreateStateNameForIpcEx(PSID pSid, PSID a2, __int64 a3, char a4, struct _WNF_STATE_NAME *a5)
{
  NTSTATUS result; // eax
  DWORD cbSid; // [rsp+40h] [rbp-C0h] BYREF
  PSID Sid; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE SecurityDescriptor[48]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v12[80]; // [rsp+80h] [rbp-80h] BYREF
  _ACL Acl; // [rsp+D0h] [rbp-30h] BYREF

  Sid = 0LL;
  result = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  if ( result >= 0 )
  {
    result = RtlCreateAcl(&Acl, 0x138u, 2u);
    if ( result >= 0 )
    {
      result = RtlAddAccessAllowedAceEx(&Acl, 2u, 0, 0x10000000u, pSid);
      if ( result >= 0 )
      {
        RtlAddAccessAllowedAceEx(&Acl, 2u, 0, 0x80000000, a2);
        result = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, &Acl, 0);
        if ( result >= 0 )
        {
          if ( (a4 & 1) == 0 )
          {
LABEL_10:
            result = NtCreateWnfStateName(a5, 3LL, 0LL);
            if ( result >= 0 )
              return 0;
            return result;
          }
          cbSid = 68;
          if ( CreateWellKnownSid(WinBuiltinAnyPackageSid, 0LL, v12, &cbSid) )
          {
            result = RtlAddAccessAllowedAceEx(&Acl, 2u, 0, 0x80000000, v12);
            if ( result < 0 )
              return result;
            if ( ConvertStringSidToSidW(
                   L"S-1-15-3-1024-1502825166-1963708345-2616377461-2562897074-4192028372-3968301570-1997628692-1435953622",
                   &Sid) )
            {
              result = RtlAddAccessAllowedAceEx(&Acl, 2u, 0, 0x80000000, Sid);
              if ( result < 0 )
                return result;
              goto LABEL_10;
            }
          }
          if ( (int)GetLastError() > 0 )
            return (unsigned __int16)GetLastError() | 0xC0070000;
          else
            return GetLastError();
        }
      }
    }
  }
  return result;
}
