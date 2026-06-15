/*
 * XREFs of ??0CAccessObjectAce@CDacl@ATL@@QEAA@AEBVCSid@2@KE_NPEBU_GUID@@2@Z @ 0x18003321C
 * Callers:
 *     ?Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z @ 0x180032894 (-Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18001013C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ??0CAccessAce@CDacl@ATL@@QEAA@AEBVCSid@2@KE_N@Z @ 0x180032F84 (--0CAccessAce@CDacl@ATL@@QEAA@AEBVCSid@2@KE_N@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180035504 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
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
  ATL::CDacl::CAccessObjectAce *v7; // rbx
  HANDLE ProcessHeap; // rax
  struct _GUID *v9; // rax
  HANDLE v10; // rax
  struct _GUID *v11; // rax
  const struct _GUID *v16; // [rsp+78h] [rbp+30h]
  const struct _GUID *v17; // [rsp+78h] [rbp+30h]

  v7 = this;
  ATL::CDacl::CAccessAce::CAccessAce(this, a2, a3, a4, a5);
  *(_QWORD *)v7 = &ATL::CDacl::CAccessObjectAce::`vftable';
  *((_QWORD *)v7 + 19) = 0LL;
  *((_QWORD *)v7 + 20) = 0LL;
  if ( a6 )
  {
    try
    {
      ProcessHeap = GetProcessHeap();
      v9 = (struct _GUID *)HeapAlloc(ProcessHeap, 0, 0x10uLL);
      if ( v9 )
        *v9 = *a6;
      v16 = v9;
      *((_QWORD *)v7 + 19) = v9;
    }
    catch ( ... )
    {
      v7 = this;
      v9 = (struct _GUID *)v16;
    }
    if ( !v9 )
      ATL::AtlThrowImpl(-2147024882);
  }
  if ( a7 )
  {
    try
    {
      v10 = GetProcessHeap();
      v11 = (struct _GUID *)HeapAlloc(v10, 0, 0x10uLL);
      if ( v11 )
        *v11 = *a7;
      v17 = v11;
      *((_QWORD *)v7 + 20) = v11;
    }
    catch ( ... )
    {
      v7 = this;
      v11 = (struct _GUID *)v17;
    }
    if ( !v11 )
    {
      operator delete(*((void **)v7 + 19), (const struct std::nothrow_t *)0x10);
      *((_QWORD *)v7 + 19) = 0LL;
      ATL::AtlThrowImpl(-2147024882);
    }
  }
  return v7;
}
