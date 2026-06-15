/*
 * XREFs of ?SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z @ 0x18000A42C
 * Callers:
 *     ?GetADGProcessSD@CAudioDGProcess@@CAJPEAPEAX@Z @ 0x180009A4C (-GetADGProcessSD@CAudioDGProcess@@CAJPEAPEAX@Z.c)
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x180040AC4 (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 * Callees:
 *     ?GetPACL@CAcl@ATL@@QEBAPEBU_ACL@@XZ @ 0x18000AB48 (-GetPACL@CAcl@ATL@@QEBAPEBU_ACL@@XZ.c)
 *     ?GetAceCount@CDacl@ATL@@UEBAIXZ @ 0x18000AF10 (-GetAceCount@CDacl@ATL@@UEBAIXZ.c)
 *     ?MakeAbsolute@CSecurityDesc@ATL@@QEAAXXZ @ 0x180040E88 (-MakeAbsolute@CSecurityDesc@ATL@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800617E0 (memset_0.c)
 *     _invalid_parameter_noinfo @ 0x180061852 (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x1800657AF (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18009BB24 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?AtlHresultFromLastError@ATL@@YAJXZ @ 0x1800B8880 (-AtlHresultFromLastError@ATL@@YAJXZ.c)
 *     ?AtlThrowLastWin32@ATL@@YAXXZ @ 0x1800B889C (-AtlThrowLastWin32@ATL@@YAXXZ.c)
 */

void __fastcall ATL::CSecurityDesc::SetDacl(ATL::CSecurityDesc *this, const struct ATL::CDacl *a2)
{
  void *v4; // rcx
  BOOL v5; // r14d
  void *v6; // rax
  unsigned int (__fastcall *v7)(ATL::CDacl *__hidden); // rax
  unsigned int AceCount; // eax
  struct _ACL *PACL; // rax
  unsigned int v10; // eax
  __int64 v11; // rbp
  struct _ACL *v12; // rdi
  const struct _ACL *v13; // rax
  int Error; // ebx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // ebx
  void *Block; // [rsp+20h] [rbp-48h] BYREF
  WINBOOL bDaclDefaulted; // [rsp+28h] [rbp-40h] BYREF
  WINBOOL bDaclPresent; // [rsp+2Ch] [rbp-3Ch] BYREF
  _BYTE pAclInformation[4]; // [rsp+30h] [rbp-38h] BYREF
  size_t Size; // [rsp+34h] [rbp-34h]

  v4 = (void *)*((_QWORD *)this + 1);
  if ( v4 )
  {
    ATL::CSecurityDesc::MakeAbsolute(this);
    v4 = (void *)*((_QWORD *)this + 1);
  }
  Block = 0LL;
  v5 = 1;
  if ( v4 )
  {
    if ( !GetSecurityDescriptorDacl(v4, &bDaclPresent, (PACL *)&Block, &bDaclDefaulted) )
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
  if ( *((_BYTE *)a2 + 16)
    || ((v7 = *(unsigned int (__fastcall **)(ATL::CDacl *__hidden))(*(_QWORD *)a2 + 8LL), v7 != ATL::CDacl::GetAceCount)
      ? (AceCount = v7(a2))
      : (AceCount = ATL::CDacl::GetAceCount(a2)),
        !AceCount) )
  {
    v12 = 0LL;
  }
  else
  {
    PACL = (struct _ACL *)ATL::CAcl::GetPACL(a2);
    if ( *((_BYTE *)a2 + 16) )
    {
      v10 = 0;
    }
    else
    {
      if ( !GetAclInformation(PACL, pAclInformation, 0xCu, AclSizeInformation) )
        ATL::AtlThrowLastWin32();
      v10 = Size;
    }
    v11 = v10;
    v12 = (struct _ACL *)malloc(v10);
    if ( !v12 )
      ATL::AtlThrowImpl(-2147024882);
    v13 = ATL::CAcl::GetPACL(a2);
    if ( v11 )
    {
      if ( !v13 )
      {
        memset_0(v12, 0, (unsigned int)v11);
        *(_DWORD *)_o__errno(v16, v15, v17, v18) = 22;
        invalid_parameter_noinfo();
        ATL::AtlThrowImpl(-2147024809);
      }
      memcpy_0(v12, v13, (unsigned int)v11);
    }
  }
  if ( !*((_BYTE *)a2 + 16) && !v12 )
    v5 = 0;
  if ( !SetSecurityDescriptorDacl(*((PSECURITY_DESCRIPTOR *)this + 1), v5, v12, 0) )
  {
    v19 = ATL::AtlHresultFromLastError();
    free(v12);
    ATL::AtlThrowImpl(v19);
  }
  free(Block);
}
