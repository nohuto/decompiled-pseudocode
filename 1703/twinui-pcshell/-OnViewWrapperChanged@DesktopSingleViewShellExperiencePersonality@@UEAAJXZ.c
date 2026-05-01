/*
 * XREFs of ?OnViewWrapperChanged@DesktopSingleViewShellExperiencePersonality@@UEAAJXZ @ 0x18018E020
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DesktopSingleViewShellExperiencePersonality::OnViewWrapperChanged(
        DesktopSingleViewShellExperiencePersonality *this)
{
  __int64 (__fastcall ***v1)(_QWORD, GUID *, _QWORD *); // rdi
  _QWORD *v2; // rbx
  __int64 v3; // rcx
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *(__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *))(*((_QWORD *)this + 1) + 24LL);
  if ( v1 )
  {
    v2 = (_QWORD *)((char *)this + 16);
    v3 = *((_QWORD *)this + 2);
    if ( v3 )
    {
      *v2 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    }
    v4 = (**v1)(v1, &GUID_e67b82e2_7249_4743_98e4_2ac1c012e15f, v2);
    v5 = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x69,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\desktopsingleviewshellexperiencepersonality.cpp",
        (const char *)(unsigned int)v4);
      return v5;
    }
  }
  else
  {
    v7 = *((_QWORD *)this + 2);
    if ( v7 )
    {
      *((_QWORD *)this + 2) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
  }
  return 0LL;
}
