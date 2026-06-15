/*
 * XREFs of ?Start@CAudioStream@@UEAAJXZ @ 0x18001C8F0
 * Callers:
 *     <none>
 * Callees:
 *     ?StartStream@CProcessSubmixProxy@@UEAAJ_K@Z @ 0x1800121A0 (-StartStream@CProcessSubmixProxy@@UEAAJ_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005E7F8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CAudioStream::Start(CAudioStream *this)
{
  CProcessSubmixProxy *v2; // rcx
  __int64 (__fastcall *v3)(CProcessSubmixProxy *); // rax
  int started; // eax
  unsigned int v5; // ebx
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (CProcessSubmixProxy *)*((_QWORD *)this + 7);
  v3 = *(__int64 (__fastcall **)(CProcessSubmixProxy *))(*(_QWORD *)v2 + 40LL);
  if ( v3 == CProcessSubmixProxy::StartStream )
    started = CProcessSubmixProxy::StartStream(v2);
  else
    started = ((__int64 (__fastcall *)(CProcessSubmixProxy *, _QWORD))v3)(v2, *((_QWORD *)this + 6));
  v5 = started;
  if ( started < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x266,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)(unsigned int)started,
      v7);
    return v5;
  }
  else
  {
    *((_BYTE *)this + 400) = 1;
    return 0LL;
  }
}
