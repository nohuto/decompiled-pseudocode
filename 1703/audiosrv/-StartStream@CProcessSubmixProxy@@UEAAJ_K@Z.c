/*
 * XREFs of ?StartStream@CProcessSubmixProxy@@UEAAJ_K@Z @ 0x180007DB0
 * Callers:
 *     ?Start@CAudioStream@@UEAAJXZ @ 0x180019330 (-Start@CAudioStream@@UEAAJXZ.c)
 * Callees:
 *     ?OnProcessSubmixStarted@CSharedStreamGroupProxy@@UEAAJPEAUIProcessSubmixProxy@@@Z @ 0x18002BD60 (-OnProcessSubmixStarted@CSharedStreamGroupProxy@@UEAAJPEAUIProcessSubmixProxy@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007ECA8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
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
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0xAC6,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v2,
      v8);
    return v3;
  }
  else
  {
    v4 = *((_DWORD *)this + 31);
    *((_DWORD *)this + 31) = v4 + 1;
    if ( !v4 )
    {
      v5 = (CSharedStreamGroupProxy *)*((_QWORD *)this + 19);
      v6 = *(__int64 (__fastcall **)(CSharedStreamGroupProxy *__hidden, struct IProcessSubmixProxy *))(*(_QWORD *)v5 + 352LL);
      if ( v6 == CSharedStreamGroupProxy::OnProcessSubmixStarted )
        CSharedStreamGroupProxy::OnProcessSubmixStarted(v5, this);
      else
        v6(v5, this);
    }
    return 0LL;
  }
}
