/*
 * XREFs of ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x18008323C
 * Callers:
 *     ?CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z @ 0x180080FF8 (-CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z.c)
 * Callees:
 *     ??1CSid@ATL@@UEAA@XZ @ 0x1800137E8 (--1CSid@ATL@@UEAA@XZ.c)
 *     ??0CSid@ATL@@QEAA@AEBU_SID_IDENTIFIER_AUTHORITY@@EZZ @ 0x180013874 (--0CSid@ATL@@QEAA@AEBU_SID_IDENTIFIER_AUTHORITY@@EZZ.c)
 *     ??3@YAXPEAX@Z @ 0x180028D50 (--3@YAXPEAX@Z.c)
 *     ?Clear@CSecurityDesc@ATL@@MEAAXXZ @ 0x18002DCB0 (-Clear@CSecurityDesc@ATL@@MEAAXXZ.c)
 *     ?MakeSelfRelative@CSecurityDesc@ATL@@QEAAXXZ @ 0x18002DD84 (-MakeSelfRelative@CSecurityDesc@ATL@@QEAAXXZ.c)
 *     ?SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z @ 0x18002DE78 (-SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z.c)
 *     ?GetPACL@CAcl@ATL@@QEBAPEBU_ACL@@XZ @ 0x18002E208 (-GetPACL@CAcl@ATL@@QEBAPEBU_ACL@@XZ.c)
 *     ?AddAllowedAce@CDacl@ATL@@QEAA_NAEBVCSid@2@KE@Z @ 0x18002E6BC (-AddAllowedAce@CDacl@ATL@@QEAA_NAEBVCSid@2@KE@Z.c)
 *     ??1CDacl@ATL@@UEAA@XZ @ 0x18002E7C4 (--1CDacl@ATL@@UEAA@XZ.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180033220 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x180036B8F (memcpy_0.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z @ 0x180080BA0 (-Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z.c)
 *     ?EditAppContainerMask@@YAXPEAU_ACL@@@Z @ 0x1800838EC (-EditAppContainerMask@@YAXPEAU_ACL@@@Z.c)
 *     ?GetDacl@CSecurityDesc@ATL@@QEBA_NPEAVCDacl@2@PEA_N1@Z @ 0x18008426C (-GetDacl@CSecurityDesc@ATL@@QEBA_NPEAVCDacl@2@PEA_N1@Z.c)
 *     ?Init@CSecurityDesc@ATL@@IEAAXAEBU_SECURITY_DESCRIPTOR@@@Z @ 0x180084B90 (-Init@CSecurityDesc@ATL@@IEAAXAEBU_SECURITY_DESCRIPTOR@@@Z.c)
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
  struct _ACL *PACL; // rbx
  ATL::CSid *v11; // rax
  char v12; // r8
  SIZE_T SecurityDescriptorLength; // rbx
  void *v14; // rax
  void **v16; // [rsp+60h] [rbp-168h] BYREF
  PSECURITY_DESCRIPTOR pSecurityDescriptor; // [rsp+68h] [rbp-160h]
  DWORD cbSecurityDescriptor; // [rsp+70h] [rbp-158h] BYREF
  struct _SECURITY_DESCRIPTOR *v19; // [rsp+78h] [rbp-150h]
  void **v20; // [rsp+80h] [rbp-148h]
  void *v21[2]; // [rsp+88h] [rbp-140h] BYREF
  char v22; // [rsp+98h] [rbp-130h]
  int v23; // [rsp+9Ch] [rbp-12Ch]
  __int128 v24; // [rsp+A0h] [rbp-128h]
  __int64 v25; // [rsp+B0h] [rbp-118h]
  int v26; // [rsp+B8h] [rbp-110h]
  void *v27[2]; // [rsp+C0h] [rbp-108h] BYREF
  char v28; // [rsp+D0h] [rbp-F8h]
  int v29; // [rsp+D4h] [rbp-F4h]
  __int128 v30; // [rsp+D8h] [rbp-F0h]
  __int64 v31; // [rsp+E8h] [rbp-E0h]
  int v32; // [rsp+F0h] [rbp-D8h]
  __int64 v33; // [rsp+F8h] [rbp-D0h]
  struct _SID_IDENTIFIER_AUTHORITY pIdentifierAuthority; // [rsp+108h] [rbp-C0h] BYREF
  _BYTE v35[128]; // [rsp+110h] [rbp-B8h] BYREF

  v33 = -2LL;
  v20 = a2;
  cbSecurityDescriptor = 0;
  v4 = 0LL;
  v5 = 0;
  if ( RegGetKeySecurity(hKey, 4u, 0LL, &cbSecurityDescriptor) == 122 )
  {
    v6 = (struct _SECURITY_DESCRIPTOR *)operator new[](
                                          cbSecurityDescriptor,
                                          (const struct std::nothrow_t *)&std::nothrow);
    v4 = v6;
    v19 = v6;
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
        v16 = &ATL::CSecurityDesc::`vftable';
        pSecurityDescriptor = 0LL;
        *(_DWORD *)pIdentifierAuthority.Value = 0;
        *(_WORD *)&pIdentifierAuthority.Value[4] = 1280;
        v27[1] = 0LL;
        v28 = 0;
        v29 = 2;
        v27[0] = &ATL::CDacl::`vftable';
        v30 = 0LL;
        v31 = 0LL;
        v32 = 0;
        if ( v4 )
        {
          ATL::CSecurityDesc::Clear((ATL::CSecurityDesc *)&v16);
          ATL::CSecurityDesc::Init((ATL::CSecurityDesc *)&v16, v4);
        }
        ATL::CSecurityDesc::GetDacl((ATL::CSecurityDesc *)&v16, (struct ATL::CDacl *)v27, v8, v9);
        PACL = (struct _ACL *)ATL::CAcl::GetPACL((ATL::CAcl *)v27);
        EditAppContainerMask(PACL);
        v21[1] = 0LL;
        v22 = 0;
        v23 = 2;
        v21[0] = &ATL::CDacl::`vftable';
        v24 = 0LL;
        v25 = 0LL;
        v26 = 0;
        ATL::CDacl::Copy((ATL::CDacl *)v21, PACL);
        v11 = ATL::CSid::CSid((ATL::CSid *)v35, &pIdentifierAuthority, 6u);
        LOBYTE(PACL) = ATL::CDacl::AddAllowedAce((ATL::CDacl *)v21, v11, 0x10000000) == 0;
        ATL::CSid::~CSid((ATL::CSid *)v35);
        if ( (_BYTE)PACL )
        {
          v5 = -2147467259;
          ATL::CDacl::~CDacl(v21);
          ATL::CDacl::~CDacl(v27);
          v16 = &ATL::CSecurityDesc::`vftable';
          ATL::CSecurityDesc::Clear((ATL::CSecurityDesc *)&v16);
        }
        else
        {
          ATL::CSecurityDesc::SetDacl((void **)&v16, (const struct ATL::CDacl *)v21, v12);
          ATL::CSecurityDesc::MakeSelfRelative((PSECURITY_DESCRIPTOR *)&v16);
          ATL::CDacl::~CDacl(v21);
          ATL::CDacl::~CDacl(v27);
          SecurityDescriptorLength = GetSecurityDescriptorLength(pSecurityDescriptor);
          v14 = operator new[](SecurityDescriptorLength, (const struct std::nothrow_t *)&std::nothrow);
          *a2 = v14;
          if ( v14 )
            memcpy_0(v14, pSecurityDescriptor, SecurityDescriptorLength);
          else
            v5 = -2147024882;
          v16 = &ATL::CSecurityDesc::`vftable';
          ATL::CSecurityDesc::Clear((ATL::CSecurityDesc *)&v16);
        }
      }
    }
    else
    {
      v5 = -2147024882;
    }
  }
  operator delete(v4);
  if ( v5 < 0 )
    AudSrvTraceLoggingErrorHelper("DetermineLowRightsKeySecurityDescriptor", 599, v5);
  return (unsigned int)v5;
}
