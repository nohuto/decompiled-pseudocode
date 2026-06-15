/*
 * XREFs of ?GetACE@CAccessAce@CDacl@ATL@@UEBAPEAXXZ @ 0x18000AE00
 * Callers:
 *     ?GetPACL@CAcl@ATL@@QEBAPEBU_ACL@@XZ @ 0x18000AB48 (-GetPACL@CAcl@ATL@@QEBAPEBU_ACL@@XZ.c)
 * Callees:
 *     ?AceType@CAccessAce@CDacl@ATL@@UEBAEXZ @ 0x18000ADD0 (-AceType@CAccessAce@CDacl@ATL@@UEBAEXZ.c)
 *     ?GetLength@CAccessAce@CDacl@ATL@@UEBAIXZ @ 0x18000ADE0 (-GetLength@CAccessAce@CDacl@ATL@@UEBAIXZ.c)
 *     memset_0 @ 0x1800617E0 (memset_0.c)
 *     _invalid_parameter_noinfo @ 0x180061852 (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x1800657AF (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18009BB24 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

_WORD *__fastcall ATL::CDacl::CAccessAce::GetACE(ATL::CDacl::CAccessAce *this)
{
  _WORD *v1; // rdi
  __int64 (*v3)(void); // rax
  unsigned int Length; // eax
  __int16 v5; // si
  __int64 v6; // rbp
  _WORD *v7; // rax
  bool (__fastcall *v8)(ATL::CDacl::CAccessAce *); // rax
  bool v9; // al
  DWORD LengthSid; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  size_t v14; // rbp
  size_t v15; // rsi
  void *v16; // rcx

  v1 = (_WORD *)*((_QWORD *)this + 17);
  if ( !v1 )
  {
    v3 = *(__int64 (**)(void))(*(_QWORD *)this + 16LL);
    if ( (char *)v3 == (char *)ATL::CDacl::CAccessAce::GetLength )
      Length = ATL::CDacl::CAccessAce::GetLength(this);
    else
      Length = v3();
    v5 = Length;
    v6 = Length;
    v7 = malloc(Length);
    v1 = v7;
    if ( !v7 )
      ATL::AtlThrowImpl(-2147024882);
    memset_0(v7, 0, (unsigned int)v6);
    v1[1] = v5;
    *((_BYTE *)v1 + 1) = *((_BYTE *)this + 132);
    v8 = *(bool (__fastcall **)(ATL::CDacl::CAccessAce *))(*(_QWORD *)this + 24LL);
    if ( v8 == ATL::CDacl::CAccessAce::AceType )
      v9 = ATL::CDacl::CAccessAce::AceType(this);
    else
      v9 = v8(this);
    *(_BYTE *)v1 = v9;
    *((_DWORD *)v1 + 1) = *((_DWORD *)this + 32);
    LengthSid = GetLengthSid((char *)this + 16);
    v14 = v6 - 8;
    v15 = LengthSid;
    v16 = v1 + 4;
    if ( !LengthSid )
      goto LABEL_12;
    if ( v1 == (_WORD *)-8LL )
      goto LABEL_17;
    if ( this != (ATL::CDacl::CAccessAce *)-16LL && v14 >= LengthSid )
    {
      memcpy_0(v16, (char *)this + 16, LengthSid);
LABEL_12:
      *((_QWORD *)this + 17) = v1;
      return v1;
    }
    memset_0(v16, 0, v14);
    if ( this == (ATL::CDacl::CAccessAce *)-16LL )
    {
LABEL_17:
      *(_DWORD *)_o__errno(v16, v11, v12, v13) = 22;
    }
    else
    {
      if ( v14 >= v15 )
        goto LABEL_22;
      *(_DWORD *)_o__errno(v16, v11, v12, v13) = 34;
    }
    invalid_parameter_noinfo();
LABEL_22:
    ATL::AtlThrowImpl(-2147024809);
  }
  return v1;
}
