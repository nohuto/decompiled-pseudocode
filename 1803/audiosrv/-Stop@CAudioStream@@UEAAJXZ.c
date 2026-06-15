/*
 * XREFs of ?Stop@CAudioStream@@UEAAJXZ @ 0x1800442C0
 * Callers:
 *     ?StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180047130 (-StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 * Callees:
 *     ?StopStream@CProcessSubmixProxy@@UEAAJ_K@Z @ 0x180044850 (-StopStream@CProcessSubmixProxy@@UEAAJ_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioStream::Stop(CAudioStream *this)
{
  CProcessSubmixProxy *v2; // rcx
  unsigned __int64 v3; // rdx
  __int64 (__fastcall *v4)(CProcessSubmixProxy *__hidden, unsigned __int64); // rax
  int v5; // eax
  unsigned int v6; // ebx
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (CProcessSubmixProxy *)*((_QWORD *)this + 8);
  v3 = *((_QWORD *)this + 7);
  v4 = *(__int64 (__fastcall **)(CProcessSubmixProxy *__hidden, unsigned __int64))(*(_QWORD *)v2 + 48LL);
  if ( v4 == CProcessSubmixProxy::StopStream )
    v5 = CProcessSubmixProxy::StopStream(v2, v3);
  else
    v5 = v4(v2, v3);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x266,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)(unsigned int)v5,
      v8);
    return v6;
  }
  else
  {
    *((_BYTE *)this + 416) = 0;
    return 0LL;
  }
}
