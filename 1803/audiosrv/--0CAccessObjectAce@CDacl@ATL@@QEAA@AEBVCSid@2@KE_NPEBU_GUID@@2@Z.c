/*
 * XREFs of ??0CAccessObjectAce@CDacl@ATL@@QEAA@AEBVCSid@2@KE_NPEBU_GUID@@2@Z @ 0x1800B80E4
 * Callers:
 *     ?Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z @ 0x180040530 (-Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z.c)
 * Callees:
 *     ??0CSid@ATL@@QEAA@AEBV01@@Z @ 0x18000A6C4 (--0CSid@ATL@@QEAA@AEBV01@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18000B390 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180061038 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18009BB24 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
ATL::CDacl::CAccessObjectAce *__fastcall ATL::CDacl::CAccessObjectAce::CAccessObjectAce(
        ATL::CDacl::CAccessObjectAce *this,
        const struct ATL::CSid *a2,
        int a3,
        char a4,
        bool a5,
        const struct _GUID *a6,
        const struct _GUID *a7)
{
  ATL::CDacl::CAccessObjectAce *v9; // rsi
  struct _GUID *v10; // rax
  struct _GUID *v11; // rax
  const struct _GUID *v16; // [rsp+68h] [rbp+30h]
  const struct _GUID *v17; // [rsp+68h] [rbp+30h]

  v9 = this;
  *(_QWORD *)this = &ATL::CAcl::CAce::`vftable';
  ATL::CSid::CSid((ATL::CDacl::CAccessObjectAce *)((char *)this + 8), a2);
  *((_DWORD *)v9 + 32) = a3;
  *((_BYTE *)v9 + 132) = a4;
  *((_QWORD *)v9 + 17) = 0LL;
  *((_BYTE *)v9 + 144) = a5;
  *(_QWORD *)v9 = &ATL::CDacl::CAccessObjectAce::`vftable';
  *((_QWORD *)v9 + 19) = 0LL;
  *((_QWORD *)v9 + 20) = 0LL;
  if ( a6 )
  {
    try
    {
      v10 = (struct _GUID *)operator new(0x10uLL);
      if ( v10 )
        *v10 = *a6;
      v16 = v10;
      *((_QWORD *)v9 + 19) = v10;
    }
    catch ( ... )
    {
      v9 = this;
      v10 = (struct _GUID *)v16;
    }
    if ( !v10 )
      ATL::AtlThrowImpl(-2147024882);
  }
  if ( a7 )
  {
    try
    {
      v11 = (struct _GUID *)operator new(0x10uLL);
      if ( v11 )
        *v11 = *a7;
      v17 = v11;
      *((_QWORD *)v9 + 20) = v11;
    }
    catch ( ... )
    {
      v9 = this;
      v11 = (struct _GUID *)v17;
    }
    if ( !v11 )
    {
      operator delete(*((void **)v9 + 19), (const struct std::nothrow_t *)0x10);
      *((_QWORD *)v9 + 19) = 0LL;
      ATL::AtlThrowImpl(-2147024882);
    }
  }
  return v9;
}
