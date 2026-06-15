/*
 * XREFs of ?StartStream@CProcessSubmixProxy@@UEAAJ_K@Z @ 0x18001CE60
 * Callers:
 *     ?Start@CAudioStream@@UEAAJXZ @ 0x18002EE60 (-Start@CAudioStream@@UEAAJXZ.c)
 * Callees:
 *     ?UpdateAuxiliaryStreamState@CSharedStreamGroupProxy@@IEAAXXZ @ 0x18001DC30 (-UpdateAuxiliaryStreamState@CSharedStreamGroupProxy@@IEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CProcessSubmixProxy::StartStream(CProcessSubmixProxy *this)
{
  int v2; // eax
  unsigned int v3; // edi
  int v4; // ecx
  CSharedStreamGroupProxy *v5; // rcx
  __int64 (__fastcall *v6)(CSharedStreamGroupProxy *__hidden, struct IProcessSubmixProxy *); // rax
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 40LL))(*((_QWORD *)this + 5));
  v3 = v2;
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xADA,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v2,
      v8);
    return v3;
  }
  else
  {
    v4 = *((_DWORD *)this + 30);
    *((_DWORD *)this + 30) = v4 + 1;
    if ( !v4 )
    {
      v5 = (CSharedStreamGroupProxy *)*((_QWORD *)this + 24);
      v6 = *(__int64 (__fastcall **)(CSharedStreamGroupProxy *__hidden, struct IProcessSubmixProxy *))(*(_QWORD *)v5 + 344LL);
      if ( v6 == CSharedStreamGroupProxy::OnProcessSubmixStarted )
      {
        ++*((_DWORD *)v5 + 68);
        CSharedStreamGroupProxy::UpdateAuxiliaryStreamState((CSharedStreamGroupProxy *)((char *)v5 - 8));
      }
      else
      {
        v6(v5, this);
      }
    }
    return 0LL;
  }
}
