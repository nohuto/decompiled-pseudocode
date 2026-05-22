/*
 * XREFs of ??1CShellEdgyNotifier@@UEAA@XZ @ 0x18002BB40
 * Callers:
 *     ??_ECShellEdgyNotifier@@UEAAPEAXI@Z @ 0x180029FA0 (--_ECShellEdgyNotifier@@UEAAPEAXI@Z.c)
 *     ??1CShellEdgyImpl@@QEAA@XZ @ 0x18002BF90 (--1CShellEdgyImpl@@QEAA@XZ.c)
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800077C0 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$vector@VEdge@@V?$allocator@VEdge@@@std@@@std@@QEAA@XZ @ 0x18002AD98 (--1-$vector@VEdge@@V-$allocator@VEdge@@@std@@@std@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall CShellEdgyNotifier::~CShellEdgyNotifier(CShellEdgyNotifier *this)
{
  int v2; // eax
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *(_QWORD *)this = &CShellEdgyNotifier::`vftable';
  if ( *((_QWORD *)this + 5) )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD, const wchar_t *, _QWORD))(**((_QWORD **)this + 3) + 48LL))(
           *((_QWORD *)this + 3),
           L"EdgyConfigurationEndpoint",
           0LL);
    if ( v2 < 0 )
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x1C,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\edgegesture\\lib\\cshelledgyimpl.cpp",
        (const char *)(unsigned int)v2);
  }
  std::vector<Edge>::~vector<Edge>((unsigned __int64 *)this + 8);
  if ( *((_QWORD *)this + 7) )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 144LL))(*((_QWORD *)this + 6));
  *((_QWORD *)this + 7) = 0LL;
  v3 = *((_QWORD *)this + 6);
  if ( v3 )
  {
    *((_QWORD *)this + 6) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  if ( *((_QWORD *)this + 5) )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 144LL))(*((_QWORD *)this + 4));
  *((_QWORD *)this + 5) = 0LL;
  v4 = *((_QWORD *)this + 4);
  if ( v4 )
  {
    *((_QWORD *)this + 4) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = *((_QWORD *)this + 3);
  if ( v5 )
  {
    *((_QWORD *)this + 3) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = *((_QWORD *)this + 2);
  if ( v6 )
  {
    *((_QWORD *)this + 2) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  *(_QWORD *)this = &RefCountedObject::`vftable';
}
