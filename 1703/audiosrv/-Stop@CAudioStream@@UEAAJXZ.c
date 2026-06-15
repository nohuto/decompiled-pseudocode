/*
 * XREFs of ?Stop@CAudioStream@@UEAAJXZ @ 0x1800192D0
 * Callers:
 *     ?StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180014D50 (-StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 * Callees:
 *     ?StopStream@CProcessSubmixProxy@@UEAAJ_K@Z @ 0x180007D40 (-StopStream@CProcessSubmixProxy@@UEAAJ_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007ECA8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CAudioStream::Stop(CAudioStream *this)
{
  CProcessSubmixProxy *v2; // rcx
  __int64 (__fastcall *v3)(CProcessSubmixProxy *); // rax
  int v4; // eax
  unsigned int v5; // ebx
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (CProcessSubmixProxy *)*((_QWORD *)this + 7);
  v3 = *(__int64 (__fastcall **)(CProcessSubmixProxy *))(*(_QWORD *)v2 + 48LL);
  if ( v3 == CProcessSubmixProxy::StopStream )
    v4 = CProcessSubmixProxy::StopStream(v2);
  else
    v4 = ((__int64 (__fastcall *)(CProcessSubmixProxy *, _QWORD))v3)(v2, *((_QWORD *)this + 6));
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x2AE,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)(unsigned int)v4,
      v7);
    return v5;
  }
  else
  {
    *((_BYTE *)this + 400) = 0;
    return 0LL;
  }
}
