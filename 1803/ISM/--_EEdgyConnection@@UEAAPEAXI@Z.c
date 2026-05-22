/*
 * XREFs of ??_EEdgyConnection@@UEAAPEAXI@Z @ 0x180067790
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$vector@VEdge@@V?$allocator@VEdge@@@std@@@std@@QEAA@XZ @ 0x180067D18 (--1-$vector@VEdge@@V-$allocator@VEdge@@@std@@@std@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
EdgyConnection *__fastcall EdgyConnection::`vector deleting destructor'(EdgyConnection *this, char a2)
{
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  EdgyConnection *v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *(_QWORD *)this = &EdgyConnection::`vftable';
  if ( *((_QWORD *)this + 5)
    && (v4 = (*(__int64 (__fastcall **)(_QWORD, const wchar_t *, _QWORD))(**((_QWORD **)this + 3) + 48LL))(
               *((_QWORD *)this + 3),
               L"EdgyConfigurationEndpoint",
               0LL),
        v4 < 0) )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x25,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgyconnection.cpp",
      (const char *)(unsigned int)v4);
    return (EdgyConnection *)EdgyConnection::Initialize(v11);
  }
  else
  {
    std::vector<Edge>::~vector<Edge>((char *)this + 72);
    v5 = *((_QWORD *)this + 8);
    if ( v5 )
    {
      *((_QWORD *)this + 8) = 0LL;
      (**(void (__fastcall ***)(__int64))(v5 + 16))(v5 + 16);
    }
    if ( *((_QWORD *)this + 7) )
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 144LL))(*((_QWORD *)this + 6));
    *((_QWORD *)this + 7) = 0LL;
    v6 = *((_QWORD *)this + 6);
    if ( v6 )
    {
      *((_QWORD *)this + 6) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    if ( *((_QWORD *)this + 5) )
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 144LL))(*((_QWORD *)this + 4));
    *((_QWORD *)this + 5) = 0LL;
    v7 = *((_QWORD *)this + 4);
    if ( v7 )
    {
      *((_QWORD *)this + 4) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    v8 = *((_QWORD *)this + 3);
    if ( v8 )
    {
      *((_QWORD *)this + 3) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    v9 = *((_QWORD *)this + 2);
    if ( v9 )
    {
      *((_QWORD *)this + 2) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    *(_QWORD *)this = &RefCountedObject::`vftable';
    if ( (a2 & 1) != 0 )
    {
      if ( (a2 & 4) != 0 )
        operator delete(this);
      else
        free(this);
    }
    return this;
  }
}
