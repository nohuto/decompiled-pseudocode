/*
 * XREFs of ?CreateOverlapEvent@ManipulationInjector@@AEAAXXZ @ 0x1800C04AC
 * Callers:
 *     ?Initialize@ManipulationInjector@@QEAAXPEAUHMONITOR__@@PEBUtagRECT@@@Z @ 0x1800C0560 (-Initialize@ManipulationInjector@@QEAAXPEAUHMONITOR__@@PEBUtagRECT@@@Z.c)
 * Callees:
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x180005594 (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800C0358 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x1800C0390 (-_FailFast_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 */

void __fastcall ManipulationInjector::CreateOverlapEvent(ManipulationInjector *this)
{
  HANDLE v2; // rax
  DWORD LastError; // eax
  __int64 v4; // r8
  unsigned int v5; // eax
  __int64 v6; // r8
  struct _SECURITY_ATTRIBUTES EventAttributes; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *((_QWORD *)this + 98) = 0LL;
  memset(&EventAttributes.nLength + 1, 0, 20);
  EventAttributes.nLength = 24;
  if ( !ConvertStringSecurityDescriptorToSecurityDescriptorW(
          L"D:(A;;GA;;;S-1-5-90-0)(A;;GA;;;AC)(A;;GA;;;WD)(A;;GA;;;S-1-15-3-1024-1502825166-1963708345-2616377461-25628970"
           "74-4192028372-3968301570-1997628692-1435953622)",
          1u,
          &EventAttributes.lpSecurityDescriptor,
          0LL)
    || (v2 = CreateEventExA(&EventAttributes, "ManipulationInjectorEnableOverlapEvent", 0, 0x1F0003u),
        (*((_QWORD *)this + 98) = v2) == 0LL) )
  {
    LastError = GetLastError();
    if ( !LastError )
    {
      v5 = wil::verify_hresult<long>(0x80004005);
      wil::details::in1diag3::FailFast_Hr(retaddr, (void *)0x74, v6, (const char *)v5);
      JUMPOUT(0x1800C055CLL);
    }
    wil::details::in1diag3::_FailFast_Win32(retaddr, (void *)0x71, v4, (const char *)LastError);
    __debugbreak();
  }
}
