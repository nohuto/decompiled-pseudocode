/*
 * XREFs of ?StartStream@CProcessSubmixProxy@@UEAAJ_K@Z @ 0x1800121A0
 * Callers:
 *     ?Start@CAudioStream@@UEAAJXZ @ 0x18001C8F0 (-Start@CAudioStream@@UEAAJXZ.c)
 * Callees:
 *     ?UpdateActiveStreamCount@CProcessSubmixProxy@@IEAAXH@Z @ 0x1800120DC (-UpdateActiveStreamCount@CProcessSubmixProxy@@IEAAXH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005E7F8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CProcessSubmixProxy::StartStream(CProcessSubmixProxy *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 40LL))(*((_QWORD *)this + 5));
  v3 = v2;
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0xACE,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v2,
      v5);
    return v3;
  }
  else
  {
    CProcessSubmixProxy::UpdateActiveStreamCount((CProcessSubmixProxy *)((char *)this - 8), 1);
    return 0LL;
  }
}
