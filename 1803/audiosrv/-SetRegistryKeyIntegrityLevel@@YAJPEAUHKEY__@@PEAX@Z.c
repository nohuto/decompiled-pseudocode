/*
 * XREFs of ?SetRegistryKeyIntegrityLevel@@YAJPEAUHKEY__@@PEAX@Z @ 0x1800412F0
 * Callers:
 *     ?CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z @ 0x1800411A0 (-CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18000B360 (--3@YAXPEAX@Z.c)
 *     ?SetSidOnSACL@@YAKPEAXPEAU_ACL@@PEAPEAU1@PEAK@Z @ 0x18004145C (-SetSidOnSACL@@YAKPEAXPEAU_ACL@@PEAPEAU1@PEAK@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180061040 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall SetRegistryKeyIntegrityLevel(HKEY hKey, PSID pSid)
{
  int KeySecurity; // ebx
  struct _ACL *v5; // rsi
  void *v6; // rax
  void *v7; // rdi
  signed int v8; // eax
  unsigned int v10; // r8d
  signed int LastError; // eax
  WINBOOL bSaclPresent; // [rsp+20h] [rbp-40h] BYREF
  PACL pSacl; // [rsp+28h] [rbp-38h] BYREF
  struct _ACL *v14; // [rsp+30h] [rbp-30h] BYREF
  _BYTE pSecurityDescriptor[40]; // [rsp+38h] [rbp-28h] BYREF
  DWORD cbSecurityDescriptor; // [rsp+98h] [rbp+38h] BYREF
  unsigned int v17; // [rsp+A0h] [rbp+40h] BYREF
  WINBOOL bSaclDefaulted; // [rsp+A8h] [rbp+48h] BYREF

  KeySecurity = -2147024809;
  if ( !pSid )
    goto LABEL_29;
  pSacl = 0LL;
  v14 = 0LL;
  v5 = 0LL;
  cbSecurityDescriptor = 0;
  KeySecurity = RegGetKeySecurity(hKey, 0x10u, 0LL, &cbSecurityDescriptor);
  if ( KeySecurity == 122 )
  {
    v6 = operator new[](cbSecurityDescriptor, (const struct std::nothrow_t *)&std::nothrow);
    v7 = v6;
    if ( v6 )
    {
      KeySecurity = RegGetKeySecurity(hKey, 0x10u, v6, &cbSecurityDescriptor);
      if ( !KeySecurity )
      {
        if ( GetSecurityDescriptorSacl(v7, &bSaclPresent, &pSacl, &bSaclDefaulted) )
        {
          v17 = 0;
          KeySecurity = SetSidOnSACL(pSid, pSacl, &v14, &v17);
          if ( !KeySecurity )
            v5 = v14;
        }
        else
        {
          KeySecurity = GetLastError();
        }
      }
      operator delete(v7);
    }
    else
    {
      KeySecurity = 122;
    }
  }
  v8 = KeySecurity;
  if ( KeySecurity > 0 )
    v8 = (unsigned __int16)KeySecurity | 0x80070000;
  if ( v8 < 0 )
  {
    v10 = KeySecurity;
    if ( KeySecurity > 0 )
      v10 = (unsigned __int16)KeySecurity | 0x80070000;
    AudSrvTraceLoggingErrorHelper("AddSidToSACL", 0x163u, v10);
  }
  if ( KeySecurity > 0 )
    KeySecurity = (unsigned __int16)KeySecurity | 0x80070000;
  if ( KeySecurity < 0 )
    goto LABEL_29;
  if ( !InitializeSecurityDescriptor(pSecurityDescriptor, 1u)
    || !SetSecurityDescriptorSacl(pSecurityDescriptor, 1, v5, 0)
    || RegSetKeySecurity(hKey, 0x10u, pSecurityDescriptor) )
  {
    LastError = GetLastError();
    KeySecurity = LastError;
    if ( LastError > 0 )
      KeySecurity = (unsigned __int16)LastError | 0x80070000;
  }
  if ( v5 )
    operator delete(v5);
  if ( KeySecurity < 0 )
LABEL_29:
    AudSrvTraceLoggingErrorHelper("SetRegistryKeyIntegrityLevel", 0x1A3u, KeySecurity);
  return (unsigned int)KeySecurity;
}
