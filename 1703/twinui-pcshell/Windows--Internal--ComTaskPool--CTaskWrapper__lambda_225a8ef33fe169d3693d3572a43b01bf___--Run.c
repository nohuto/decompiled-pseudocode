/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_225a8ef33fe169d3693d3572a43b01bf___::Run @ 0x1800973D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void Windows::Internal::ComTaskPool::CTaskWrapper__lambda_225a8ef33fe169d3693d3572a43b01bf___::Run()
{
  HRESULT v0; // eax
  int v1; // eax
  LPVOID v2; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  LPVOID v4; // [rsp+58h] [rbp+10h] BYREF

  v4 = 0LL;
  v0 = CoCreateInstance(
         &GUID_31143611_ac65_4568_ae76_8a9dad50ea88,
         0LL,
         0x404u,
         &GUID_2537d644_8c2f_4449_b8b6_10928822630c,
         &v4);
  if ( v0 >= 0 )
  {
    v1 = (*(__int64 (__fastcall **)(LPVOID, _QWORD))(*(_QWORD *)v4 + 64LL))(v4, 0LL);
    if ( v1 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4E8,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
        (const char *)(unsigned int)v1);
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x4E6,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v0);
  }
  v2 = v4;
  if ( v4 )
  {
    v4 = 0LL;
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v2 + 16LL))(v2);
  }
}
