/*
 * XREFs of ?SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z @ 0x18002DE78
 * Callers:
 *     ?GetADGProcessSD@CAudioDGProcess@@CAJPEAPEAX@Z @ 0x18002DF90 (-GetADGProcessSD@CAudioDGProcess@@CAJPEAPEAX@Z.c)
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x18008323C (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 * Callees:
 *     ?GetLength@CAcl@ATL@@QEBAIXZ @ 0x18002E1A8 (-GetLength@CAcl@ATL@@QEBAIXZ.c)
 *     ?GetPACL@CAcl@ATL@@QEBAPEBU_ACL@@XZ @ 0x18002E208 (-GetPACL@CAcl@ATL@@QEBAPEBU_ACL@@XZ.c)
 *     ?GetAceCount@CDacl@ATL@@UEBAIXZ @ 0x18002E550 (-GetAceCount@CDacl@ATL@@UEBAIXZ.c)
 *     _invalid_parameter_noinfo @ 0x180033A26 (_invalid_parameter_noinfo.c)
 *     memset @ 0x180033A5A (memset.c)
 *     memcpy_0 @ 0x180036B8F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18005F724 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?AtlHresultFromLastError@ATL@@YAJXZ @ 0x18007FC04 (-AtlHresultFromLastError@ATL@@YAJXZ.c)
 *     ?AtlThrowLastWin32@ATL@@YAXXZ @ 0x18007FC20 (-AtlThrowLastWin32@ATL@@YAXXZ.c)
 *     ?MakeAbsolute@CSecurityDesc@ATL@@QEAAXXZ @ 0x180085990 (-MakeAbsolute@CSecurityDesc@ATL@@QEAAXXZ.c)
 */

void __fastcall ATL::CSecurityDesc::SetDacl(void **this, const struct ATL::CDacl *a2, char a3)
{
  BOOL v5; // r14d
  void *v6; // rcx
  void *v7; // rax
  unsigned int (__fastcall *v8)(ATL::CDacl *__hidden); // rax
  unsigned int AceCount; // eax
  size_t Length; // rbp
  struct _ACL *v11; // rdi
  const struct _ACL *PACL; // rax
  int Error; // ebx
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // ebx
  WINBOOL bDaclPresent; // [rsp+50h] [rbp+8h] BYREF
  WINBOOL bDaclDefaulted; // [rsp+60h] [rbp+18h] BYREF
  void *Block; // [rsp+68h] [rbp+20h] BYREF

  LOBYTE(bDaclDefaulted) = a3;
  if ( this[1] )
    ATL::CSecurityDesc::MakeAbsolute((ATL::CSecurityDesc *)this);
  Block = 0LL;
  v5 = 1;
  v6 = this[1];
  if ( v6 )
  {
    if ( !GetSecurityDescriptorDacl(v6, &bDaclPresent, (PACL *)&Block, &bDaclDefaulted) )
      ATL::AtlThrowLastWin32();
  }
  else
  {
    v7 = malloc(0x28uLL);
    this[1] = v7;
    if ( !v7 )
      ATL::AtlThrowImpl(-2147024882);
    if ( !InitializeSecurityDescriptor(v7, 1u) )
    {
      Error = ATL::AtlHresultFromLastError();
      free(this[1]);
      this[1] = 0LL;
      ATL::AtlThrowImpl(Error);
    }
  }
  if ( *((_BYTE *)a2 + 16)
    || ((v8 = *(unsigned int (__fastcall **)(ATL::CDacl *__hidden))(*(_QWORD *)a2 + 8LL), v8 != ATL::CDacl::GetAceCount)
      ? (AceCount = v8(a2))
      : (AceCount = ATL::CDacl::GetAceCount(a2)),
        !AceCount) )
  {
    v11 = 0LL;
  }
  else
  {
    Length = ATL::CAcl::GetLength(a2);
    v11 = (struct _ACL *)malloc(Length);
    if ( !v11 )
      ATL::AtlThrowImpl(-2147024882);
    PACL = ATL::CAcl::GetPACL(a2);
    if ( Length )
    {
      if ( !PACL )
      {
        memset(v11, 0, (unsigned int)Length);
        *(_DWORD *)_o__errno(v15, v14) = 22;
        invalid_parameter_noinfo();
        ATL::AtlThrowImpl(-2147024809);
      }
      memcpy_0(v11, PACL, (unsigned int)Length);
    }
  }
  if ( !*((_BYTE *)a2 + 16) && !v11 )
    v5 = 0;
  if ( !SetSecurityDescriptorDacl(this[1], v5, v11, 0) )
  {
    v16 = ATL::AtlHresultFromLastError();
    free(v11);
    ATL::AtlThrowImpl(v16);
  }
  free(Block);
}
