/*
 * XREFs of ?GetPACL@CAcl@ATL@@QEBAPEBU_ACL@@XZ @ 0x180024578
 * Callers:
 *     ?GetLength@CAcl@ATL@@QEBAIXZ @ 0x180024518 (-GetLength@CAcl@ATL@@QEBAIXZ.c)
 *     ?SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z @ 0x1800268BC (-SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z.c)
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x18002FEC0 (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 * Callees:
 *     ?GetLength@CAccessAce@CDacl@ATL@@UEBAIXZ @ 0x180024810 (-GetLength@CAccessAce@CDacl@ATL@@UEBAIXZ.c)
 *     ?GetACE@CAccessAce@CDacl@ATL@@UEBAPEAXXZ @ 0x180024830 (-GetACE@CAccessAce@CDacl@ATL@@UEBAPEAXXZ.c)
 *     ?GetAceCount@CDacl@ATL@@UEBAIXZ @ 0x180024940 (-GetAceCount@CDacl@ATL@@UEBAIXZ.c)
 *     ?PrepareAcesForACL@CDacl@ATL@@EEBAXXZ @ 0x180024950 (-PrepareAcesForACL@CDacl@ATL@@EEBAXXZ.c)
 *     ?GetAce@CDacl@ATL@@EEBAPEBVCAce@CAcl@2@I@Z @ 0x180024A90 (-GetAce@CDacl@ATL@@EEBAPEBVCAce@CAcl@2@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18007F6A4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?AtlHresultFromLastError@ATL@@YAJXZ @ 0x180098C70 (-AtlHresultFromLastError@ATL@@YAJXZ.c)
 */

const struct _ACL *__fastcall ATL::CAcl::GetPACL(ATL::CAcl *this)
{
  DWORD v2; // esi
  __int64 (*v3)(void); // rax
  unsigned int AceCount; // eax
  unsigned int v5; // ebx
  unsigned int i; // ebp
  const struct ATL::CAcl::CAce *(__fastcall *v7)(ATL::CDacl *__hidden, unsigned int); // rax
  const struct ATL::CAcl::CAce *Ace; // rax
  ATL::CDacl::CAccessAce *v9; // rcx
  unsigned int (__fastcall *v10)(ATL::CDacl::CAccessAce *__hidden); // rax
  unsigned int Length; // eax
  struct _ACL *v12; // rax
  void (__fastcall *v13)(ATL::CDacl *__hidden); // rax
  unsigned int j; // esi
  const struct ATL::CAcl::CAce *(__fastcall *v15)(ATL::CDacl *__hidden, unsigned int); // rax
  const struct ATL::CAcl::CAce *v16; // rax
  ATL::CDacl::CAccessAce *v17; // rbx
  ATL::CDacl::CAccessAce *v18; // rcx
  unsigned int (__fastcall *v19)(ATL::CDacl::CAccessAce *__hidden); // rax
  DWORD v20; // eax
  DWORD nAceListLength; // r14d
  void *(__fastcall *v22)(ATL::CDacl::CAccessAce *__hidden); // rax
  void *v23; // rax
  int Error; // ebx
  int v26; // ebx

  if ( !*((_QWORD *)this + 1) && !*((_BYTE *)this + 16) )
  {
    v2 = 8;
    v3 = *(__int64 (**)(void))(*(_QWORD *)this + 8LL);
    if ( (char *)v3 == (char *)ATL::CDacl::GetAceCount )
      AceCount = ATL::CDacl::GetAceCount(this);
    else
      AceCount = v3();
    v5 = 0;
    for ( i = AceCount; v5 < i; ++v5 )
    {
      v7 = *(const struct ATL::CAcl::CAce *(__fastcall **)(ATL::CDacl *__hidden, unsigned int))(*(_QWORD *)this + 32LL);
      if ( v7 == ATL::CDacl::GetAce )
        Ace = ATL::CDacl::GetAce(this, v5);
      else
        Ace = v7(this, v5);
      v9 = Ace;
      if ( Ace )
      {
        v10 = *(unsigned int (__fastcall **)(ATL::CDacl::CAccessAce *__hidden))(*(_QWORD *)Ace + 16LL);
        if ( v10 == ATL::CDacl::CAccessAce::GetLength )
          Length = ATL::CDacl::CAccessAce::GetLength(v9);
        else
          Length = v10(v9);
        v2 += Length;
      }
    }
    v12 = (struct _ACL *)malloc(v2);
    *((_QWORD *)this + 1) = v12;
    if ( !v12 )
      ATL::AtlThrowImpl(-2147024882);
    if ( !InitializeAcl(v12, v2, *((_DWORD *)this + 5)) )
    {
      Error = ATL::AtlHresultFromLastError();
      free(*((void **)this + 1));
      *((_QWORD *)this + 1) = 0LL;
      ATL::AtlThrowImpl(Error);
    }
    v13 = *(void (__fastcall **)(ATL::CDacl *__hidden))(*(_QWORD *)this + 40LL);
    if ( v13 == ATL::CDacl::PrepareAcesForACL )
      ATL::CDacl::PrepareAcesForACL(this);
    else
      v13(this);
    for ( j = 0; j < i; ++j )
    {
      v15 = *(const struct ATL::CAcl::CAce *(__fastcall **)(ATL::CDacl *__hidden, unsigned int))(*(_QWORD *)this + 32LL);
      if ( v15 == ATL::CDacl::GetAce )
        v16 = ATL::CDacl::GetAce(this, j);
      else
        v16 = v15(this, j);
      v17 = v16;
      if ( v16 )
      {
        v18 = v16;
        v19 = *(unsigned int (__fastcall **)(ATL::CDacl::CAccessAce *__hidden))(*(_QWORD *)v16 + 16LL);
        v20 = v19 == ATL::CDacl::CAccessAce::GetLength ? ATL::CDacl::CAccessAce::GetLength(v18) : v19(v18);
        nAceListLength = v20;
        v22 = *(void *(__fastcall **)(ATL::CDacl::CAccessAce *__hidden))(*(_QWORD *)v17 + 8LL);
        v23 = v22 == ATL::CDacl::CAccessAce::GetACE ? ATL::CDacl::CAccessAce::GetACE(v17) : v22(v17);
        if ( AddAce(*((PACL *)this + 1), *((_DWORD *)this + 5), 0xFFFFFFFF, v23, nAceListLength) )
          continue;
      }
      v26 = ATL::AtlHresultFromLastError();
      free(*((void **)this + 1));
      *((_QWORD *)this + 1) = 0LL;
      ATL::AtlThrowImpl(v26);
    }
  }
  return (const struct _ACL *)*((_QWORD *)this + 1);
}
