/*
 * XREFs of ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x180040AC4
 * Callers:
 *     ?CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z @ 0x1800411A0 (-CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z.c)
 * Callees:
 *     ?Clear@CSecurityDesc@ATL@@MEAAXXZ @ 0x18000A290 (-Clear@CSecurityDesc@ATL@@MEAAXXZ.c)
 *     ?MakeSelfRelative@CSecurityDesc@ATL@@QEAAXXZ @ 0x18000A364 (-MakeSelfRelative@CSecurityDesc@ATL@@QEAAXXZ.c)
 *     ?SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z @ 0x18000A42C (-SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z.c)
 *     ??1CSid@ATL@@UEAA@XZ @ 0x18000A5DC (--1CSid@ATL@@UEAA@XZ.c)
 *     ??0CSid@ATL@@QEAA@AEBU_SID_IDENTIFIER_AUTHORITY@@EZZ @ 0x18000A7D8 (--0CSid@ATL@@QEAA@AEBU_SID_IDENTIFIER_AUTHORITY@@EZZ.c)
 *     ?GetPACL@CAcl@ATL@@QEBAPEBU_ACL@@XZ @ 0x18000AB48 (-GetPACL@CAcl@ATL@@QEBAPEBU_ACL@@XZ.c)
 *     ?AddAllowedAce@CDacl@ATL@@QEAA_NAEBVCSid@2@KE@Z @ 0x18000B120 (-AddAllowedAce@CDacl@ATL@@QEAA_NAEBVCSid@2@KE@Z.c)
 *     ??1CDacl@ATL@@UEAA@XZ @ 0x18000B238 (--1CDacl@ATL@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18000B360 (--3@YAXPEAX@Z.c)
 *     ?Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z @ 0x180040530 (-Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z.c)
 *     ?Init@CSecurityDesc@ATL@@IEAAXAEBU_SECURITY_DESCRIPTOR@@@Z @ 0x180040DF4 (-Init@CSecurityDesc@ATL@@IEAAXAEBU_SECURITY_DESCRIPTOR@@@Z.c)
 *     ?GetDacl@CSecurityDesc@ATL@@QEBA_NPEAVCDacl@2@PEA_N1@Z @ 0x18004103C (-GetDacl@CSecurityDesc@ATL@@QEBA_NPEAVCDacl@2@PEA_N1@Z.c)
 *     ?EditAppContainerMask@@YAXPEAU_ACL@@@Z @ 0x1800410D0 (-EditAppContainerMask@@YAXPEAU_ACL@@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180061040 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x1800657AF (memcpy_0.c)
 */

// Hidden C++ exception states: #wind=6 #try_helpers=1
__int64 __fastcall DetermineLowRightsKeySecurityDescriptor(HKEY hKey, void **a2)
{
  struct _SECURITY_DESCRIPTOR *v4; // r15
  signed int v5; // esi
  struct _SECURITY_DESCRIPTOR *v6; // rax
  LSTATUS KeySecurity; // eax
  bool *v8; // r8
  bool *v9; // r9
  struct _ACL *PACL; // rax
  struct _ACL *v11; // rbx
  ATL::CSid *v12; // rax
  bool v13; // bl
  DWORD SecurityDescriptorLength; // ebx
  void *v15; // rax
  void **v17; // [rsp+60h] [rbp-168h] BYREF
  PSECURITY_DESCRIPTOR pSecurityDescriptor; // [rsp+68h] [rbp-160h]
  DWORD cbSecurityDescriptor; // [rsp+70h] [rbp-158h] BYREF
  struct _SECURITY_DESCRIPTOR *v20; // [rsp+78h] [rbp-150h]
  void **v21; // [rsp+80h] [rbp-148h]
  void *v22[2]; // [rsp+88h] [rbp-140h] BYREF
  char v23; // [rsp+98h] [rbp-130h]
  int v24; // [rsp+9Ch] [rbp-12Ch]
  __int128 v25; // [rsp+A0h] [rbp-128h]
  __int64 v26; // [rsp+B0h] [rbp-118h]
  int v27; // [rsp+B8h] [rbp-110h]
  void *v28[2]; // [rsp+C0h] [rbp-108h] BYREF
  char v29; // [rsp+D0h] [rbp-F8h]
  int v30; // [rsp+D4h] [rbp-F4h]
  __int128 v31; // [rsp+D8h] [rbp-F0h]
  __int64 v32; // [rsp+E8h] [rbp-E0h]
  int v33; // [rsp+F0h] [rbp-D8h]
  __int64 v34; // [rsp+F8h] [rbp-D0h]
  struct _SID_IDENTIFIER_AUTHORITY pIdentifierAuthority; // [rsp+108h] [rbp-C0h] BYREF
  _BYTE v36[128]; // [rsp+110h] [rbp-B8h] BYREF

  v34 = -2LL;
  v21 = a2;
  cbSecurityDescriptor = 0;
  v4 = 0LL;
  v5 = 0;
  if ( RegGetKeySecurity(hKey, 4u, 0LL, &cbSecurityDescriptor) == 122 )
  {
    v6 = (struct _SECURITY_DESCRIPTOR *)operator new[](
                                          cbSecurityDescriptor,
                                          (const struct std::nothrow_t *)&std::nothrow);
    v4 = v6;
    v20 = v6;
    if ( v6 )
    {
      KeySecurity = RegGetKeySecurity(hKey, 4u, v6, &cbSecurityDescriptor);
      if ( KeySecurity )
      {
        if ( KeySecurity > 0 )
          v5 = (unsigned __int16)KeySecurity | 0x80070000;
        else
          v5 = KeySecurity;
      }
      else
      {
        v17 = &ATL::CSecurityDesc::`vftable';
        pSecurityDescriptor = 0LL;
        *(_DWORD *)pIdentifierAuthority.Value = 0;
        *(_WORD *)&pIdentifierAuthority.Value[4] = 1280;
        v28[1] = 0LL;
        v29 = 0;
        v30 = 2;
        v28[0] = &ATL::CDacl::`vftable';
        v31 = 0LL;
        v32 = 0LL;
        v33 = 0;
        if ( v4 )
        {
          ATL::CSecurityDesc::Clear((ATL::CSecurityDesc *)&v17);
          ATL::CSecurityDesc::Init((ATL::CSecurityDesc *)&v17, v4);
        }
        ATL::CSecurityDesc::GetDacl((ATL::CSecurityDesc *)&v17, (struct ATL::CDacl *)v28, v8, v9);
        PACL = (struct _ACL *)ATL::CAcl::GetPACL((ATL::CAcl *)v28);
        v11 = PACL;
        if ( PACL )
        {
          EditAppContainerMask(PACL);
          v22[1] = 0LL;
          v23 = 0;
          v24 = 2;
          v22[0] = &ATL::CDacl::`vftable';
          v25 = 0LL;
          v26 = 0LL;
          v27 = 0;
          ATL::CDacl::Copy((ATL::CDacl *)v22, v11);
          v12 = ATL::CSid::CSid((ATL::CSid *)v36, &pIdentifierAuthority, 6u);
          v13 = ATL::CDacl::AddAllowedAce((ATL::CDacl *)v22, v12, 0x10000000) == 0;
          ATL::CSid::~CSid((ATL::CSid *)v36);
          if ( v13 )
          {
            v5 = -2147467259;
            ATL::CDacl::~CDacl(v22);
            ATL::CDacl::~CDacl(v28);
            v17 = &ATL::CSecurityDesc::`vftable';
            ATL::CSecurityDesc::Clear((ATL::CSecurityDesc *)&v17);
            goto LABEL_13;
          }
          ATL::CSecurityDesc::SetDacl((ATL::CSecurityDesc *)&v17, (const struct ATL::CDacl *)v22);
          ATL::CSecurityDesc::MakeSelfRelative((ATL::CSecurityDesc *)&v17);
          ATL::CDacl::~CDacl(v22);
        }
        else
        {
          v5 = -2147024809;
        }
        ATL::CDacl::~CDacl(v28);
        if ( v5 >= 0 )
        {
          SecurityDescriptorLength = GetSecurityDescriptorLength(pSecurityDescriptor);
          v15 = operator new[](SecurityDescriptorLength, (const struct std::nothrow_t *)&std::nothrow);
          *a2 = v15;
          if ( v15 )
            memcpy_0(v15, pSecurityDescriptor, SecurityDescriptorLength);
          else
            v5 = -2147024882;
        }
        v17 = &ATL::CSecurityDesc::`vftable';
        ATL::CSecurityDesc::Clear((ATL::CSecurityDesc *)&v17);
      }
    }
    else
    {
      v5 = -2147024882;
    }
  }
LABEL_13:
  operator delete(v4);
  if ( v5 < 0 )
    AudSrvTraceLoggingErrorHelper("DetermineLowRightsKeySecurityDescriptor", 0x262u, v5);
  return (unsigned int)v5;
}
