/*
 * XREFs of ?SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z @ 0x1800268BC
 * Callers:
 *     ?GetADGProcessSD@CAudioDGProcess@@CAJPEAPEAX@Z @ 0x180025614 (-GetADGProcessSD@CAudioDGProcess@@CAJPEAPEAX@Z.c)
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x18002FEC0 (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 * Callees:
 *     ?GetLength@CAcl@ATL@@QEBAIXZ @ 0x180024518 (-GetLength@CAcl@ATL@@QEBAIXZ.c)
 *     ?GetPACL@CAcl@ATL@@QEBAPEBU_ACL@@XZ @ 0x180024578 (-GetPACL@CAcl@ATL@@QEBAPEBU_ACL@@XZ.c)
 *     ?GetAceCount@CDacl@ATL@@UEBAIXZ @ 0x180024940 (-GetAceCount@CDacl@ATL@@UEBAIXZ.c)
 *     ?MakeAbsolute@CSecurityDesc@ATL@@QEAAXXZ @ 0x1800302A0 (-MakeAbsolute@CSecurityDesc@ATL@@QEAAXXZ.c)
 *     _invalid_parameter_noinfo @ 0x180049B5A (_invalid_parameter_noinfo.c)
 *     memset @ 0x180049B8A (memset.c)
 *     memcpy_0 @ 0x180057FA0 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18007F6A4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?AtlHresultFromLastError@ATL@@YAJXZ @ 0x180098C70 (-AtlHresultFromLastError@ATL@@YAJXZ.c)
 *     ?AtlThrowLastWin32@ATL@@YAXXZ @ 0x180098C8C (-AtlThrowLastWin32@ATL@@YAXXZ.c)
 */

void __fastcall ATL::CSecurityDesc::SetDacl(void **this, const struct ATL::CDacl *a2, char a3)
{
  BOOL v5; // r14d
  void *v6; // rcx
  void *v7; // rax
  __int64 (__fastcall *v8)(ATL::CDacl *); // rax
  int AceCount; // eax
  size_t Length; // rbp
  struct _ACL *v11; // rsi
  const struct _ACL *PACL; // rax
  int Error; // ebx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // ebx
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
    || ((v8 = *(__int64 (__fastcall **)(ATL::CDacl *))(*(_QWORD *)a2 + 8LL), v8 != ATL::CDacl::GetAceCount)
      ? (AceCount = v8(a2))
      : (AceCount = ATL::CDacl::GetAceCount(a2)),
        !AceCount) )
  {
    v11 = 0LL;
  }
  else
  {
    Length = (unsigned int)ATL::CAcl::GetLength(a2);
    v11 = (struct _ACL *)malloc(Length);
    if ( !v11 )
      ATL::AtlThrowImpl(-2147024882);
    PACL = ATL::CAcl::GetPACL(a2);
    if ( Length )
    {
      if ( !PACL )
      {
        memset(v11, 0, (unsigned int)Length);
        *(_DWORD *)_o__errno(v15, v14, v16, v17) = 22;
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
    v18 = ATL::AtlHresultFromLastError();
    free(v11);
    ATL::AtlThrowImpl(v18);
  }
  free(Block);
}
