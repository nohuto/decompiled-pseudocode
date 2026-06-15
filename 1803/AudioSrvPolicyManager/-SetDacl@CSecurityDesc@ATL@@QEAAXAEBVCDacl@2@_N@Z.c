/*
 * XREFs of ?SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z @ 0x1800335F0
 * Callers:
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x1800342B0 (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18001013C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?AtlThrowLastWin32@ATL@@YAXXZ @ 0x18002A214 (-AtlThrowLastWin32@ATL@@YAXXZ.c)
 *     ?GetPACL@CAcl@ATL@@QEBAPEBU_ACL@@XZ @ 0x18003234C (-GetPACL@CAcl@ATL@@QEBAPEBU_ACL@@XZ.c)
 *     ?MakeAbsolute@CSecurityDesc@ATL@@QEAAXXZ @ 0x1800338A8 (-MakeAbsolute@CSecurityDesc@ATL@@QEAAXXZ.c)
 *     ?memcpy_s@Checked@ATL@@YAXPEAX_KPEBX1@Z @ 0x1800349AC (-memcpy_s@Checked@ATL@@YAXPEAX_KPEBX1@Z.c)
 *     ?AtlHresultFromLastError@ATL@@YAJXZ @ 0x180034A34 (-AtlHresultFromLastError@ATL@@YAJXZ.c)
 *     __security_check_cookie @ 0x180034E70 (__security_check_cookie.c)
 */

void __fastcall ATL::CSecurityDesc::SetDacl(ATL::CSecurityDesc *this, const struct ATL::CDacl *a2)
{
  void *v4; // rcx
  BOOL v5; // ebp
  void *v6; // rax
  char v7; // al
  struct _ACL *PACL; // rax
  unsigned int v9; // eax
  unsigned int v10; // r14d
  ATL::Checked *v11; // rdi
  const struct _ACL *v12; // rax
  int Error; // ebx
  int v14; // ebx
  PACL pDacl; // [rsp+20h] [rbp-48h] BYREF
  WINBOOL bDaclDefaulted; // [rsp+28h] [rbp-40h] BYREF
  WINBOOL bDaclPresent; // [rsp+2Ch] [rbp-3Ch] BYREF
  _BYTE pAclInformation[4]; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v19; // [rsp+34h] [rbp-34h]

  v4 = (void *)*((_QWORD *)this + 1);
  if ( v4 )
  {
    ATL::CSecurityDesc::MakeAbsolute(this);
    v4 = (void *)*((_QWORD *)this + 1);
  }
  pDacl = 0LL;
  v5 = 1;
  if ( v4 )
  {
    if ( !GetSecurityDescriptorDacl(v4, &bDaclPresent, &pDacl, &bDaclDefaulted) )
      ATL::AtlThrowLastWin32();
  }
  else
  {
    v6 = malloc(0x28uLL);
    *((_QWORD *)this + 1) = v6;
    if ( !v6 )
      ATL::AtlThrowImpl(-2147024882);
    if ( !InitializeSecurityDescriptor(v6, 1u) )
    {
      Error = ATL::AtlHresultFromLastError();
      free(*((void **)this + 1));
      *((_QWORD *)this + 1) = 0LL;
      ATL::AtlThrowImpl(Error);
    }
  }
  v7 = *((_BYTE *)a2 + 16);
  if ( v7 || !*((_DWORD *)a2 + 8) )
  {
    v11 = 0LL;
  }
  else
  {
    PACL = (struct _ACL *)ATL::CAcl::GetPACL(a2);
    if ( *((_BYTE *)a2 + 16) )
    {
      v9 = 0;
    }
    else
    {
      if ( !GetAclInformation(PACL, pAclInformation, 0xCu, AclSizeInformation) )
        ATL::AtlThrowLastWin32();
      v9 = v19;
    }
    v10 = v9;
    v11 = (ATL::Checked *)malloc(v9);
    if ( !v11 )
      ATL::AtlThrowImpl(-2147024882);
    v12 = ATL::CAcl::GetPACL(a2);
    ATL::Checked::memcpy_s(v11, (void *)v10, (unsigned __int64)v12, (const void *)v10, (unsigned __int64)pDacl);
    v7 = *((_BYTE *)a2 + 16);
  }
  if ( !v7 && !v11 )
    v5 = 0;
  if ( !SetSecurityDescriptorDacl(*((PSECURITY_DESCRIPTOR *)this + 1), v5, (PACL)v11, 0) )
  {
    v14 = ATL::AtlHresultFromLastError();
    free(v11);
    ATL::AtlThrowImpl(v14);
  }
  free(pDacl);
}
