/*
 * XREFs of ?RmpWnfCreateStateNameForIpcEx@@YAJPEAT_RM_SID@@0KKPEAU_WNF_STATE_NAME@@@Z @ 0x18002A4D8
 * Callers:
 *     RmpWnfCreateStateNameForClient @ 0x18002A450 (RmpWnfCreateStateNameForClient.c)
 * Callees:
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 */

__int64 __fastcall RmpWnfCreateStateNameForIpcEx(PSID pSid, PSID a2, __int64 a3, char a4, struct _WNF_STATE_NAME *a5)
{
  int LastError; // ebx
  DWORD cbSid; // [rsp+40h] [rbp-C0h] BYREF
  PSID Sid; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE SecurityDescriptor[48]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v13[80]; // [rsp+80h] [rbp-80h] BYREF
  _ACL Acl; // [rsp+D0h] [rbp-30h] BYREF

  Sid = 0LL;
  LastError = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  if ( LastError >= 0 )
  {
    LastError = RtlCreateAcl(&Acl, 0x138u, 2u);
    if ( LastError >= 0 )
    {
      LastError = RtlAddAccessAllowedAceEx(&Acl, 2u, 0, 0x10000000u, pSid);
      if ( LastError >= 0 )
      {
        RtlAddAccessAllowedAceEx(&Acl, 2u, 0, 0x80000000, a2);
        LastError = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, &Acl, 0);
        if ( LastError >= 0 )
        {
          if ( (a4 & 1) != 0 )
          {
            cbSid = 68;
            if ( !CreateWellKnownSid(WinBuiltinAnyPackageSid, 0LL, v13, &cbSid) )
              goto LABEL_15;
            LastError = RtlAddAccessAllowedAceEx(&Acl, 2u, 0, 0x80000000, v13);
            if ( LastError < 0 )
              goto LABEL_12;
            if ( !ConvertStringSidToSidW(
                    L"S-1-15-3-1024-1502825166-1963708345-2616377461-2562897074-4192028372-3968301570-1997628692-1435953622",
                    &Sid) )
            {
LABEL_15:
              if ( (int)GetLastError() > 0 )
                LastError = (unsigned __int16)GetLastError() | 0xC0070000;
              else
                LastError = GetLastError();
              goto LABEL_12;
            }
            LastError = RtlAddAccessAllowedAceEx(&Acl, 2u, 0, 0x80000000, Sid);
            if ( LastError < 0 )
              goto LABEL_12;
          }
          LastError = NtCreateWnfStateName(a5, 3LL, 0LL);
          if ( LastError >= 0 )
            LastError = 0;
        }
      }
    }
  }
LABEL_12:
  if ( Sid )
    LocalFree(Sid);
  return (unsigned int)LastError;
}
