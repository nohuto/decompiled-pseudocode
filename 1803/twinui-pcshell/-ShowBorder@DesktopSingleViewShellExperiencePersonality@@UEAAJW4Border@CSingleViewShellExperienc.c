/*
 * XREFs of ?ShowBorder@DesktopSingleViewShellExperiencePersonality@@UEAAJW4Border@CSingleViewShellExperience@@W4ACCENT_STATE@@KPEBUtagRECT@@@Z @ 0x18006DFF0
 * Callers:
 *     ?ShowBorder@ShellExperienceView@Cortana@TwinUI@@UEAAJW4ShellExperienceViewBorderEdge@Experience@Shell@Internal@Windows@@W4ShellExperienceViewBorderAccentState@5678@@Z @ 0x1800684C0 (-ShowBorder@ShellExperienceView@Cortana@TwinUI@@UEAAJW4ShellExperienceViewBorderEdge@Experience@.c)
 *     ?ShowBorder@CSingleViewShellExperience@@QEAAJW4Border@1@W4ACCENT_STATE@@KPEBUtagRECT@@@Z @ 0x18006C0CC (-ShowBorder@CSingleViewShellExperience@@QEAAJW4Border@1@W4ACCENT_STATE@@KPEBUtagRECT@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?get_ClientWindow@ViewWrapperBase@@UEAAJPEAI@Z @ 0x1800534D0 (-get_ClientWindow@ViewWrapperBase@@UEAAJPEAI@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180110E88 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DesktopSingleViewShellExperiencePersonality::ShowBorder(
        __int64 a1,
        char a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5)
{
  int (__fastcall ***v8)(_QWORD, GUID *, ViewWrapperBase **); // rcx
  __int64 (__fastcall *v9)(ViewWrapperBase *, unsigned int *); // rax
  int ClientWindow; // eax
  __int64 v11; // rdi
  int v12; // eax
  const char *v13; // r9
  ViewWrapperBase *v15; // rcx
  int updated; // eax
  unsigned int v17; // [rsp+20h] [rbp-50h] BYREF
  ViewWrapperBase *v18; // [rsp+28h] [rbp-48h] BYREF
  int v19; // [rsp+30h] [rbp-40h] BYREF
  _QWORD *v20; // [rsp+38h] [rbp-38h]
  int v21; // [rsp+40h] [rbp-30h]
  __int64 v22; // [rsp+48h] [rbp-28h]
  _QWORD v23[2]; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  v22 = -2LL;
  v8 = *(int (__fastcall ****)(_QWORD, GUID *, ViewWrapperBase **))(*(_QWORD *)(a1 + 8) + 24LL);
  v18 = 0LL;
  if ( (**v8)(v8, &GUID_7357c375_0d63_4d6c_a22a_d2d4fc1c012e, &v18) < 0
    || ((v9 = *(__int64 (__fastcall **)(ViewWrapperBase *, unsigned int *))(*(_QWORD *)v18 + 48LL),
         v9 != ViewWrapperBase::get_ClientWindow)
      ? (ClientWindow = v9(v18, &v17))
      : (ClientWindow = ViewWrapperBase::get_ClientWindow(v18, &v17)),
        ClientWindow < 0) )
  {
    v15 = v18;
    if ( v18 )
    {
      v18 = 0LL;
      (*(void (__fastcall **)(ViewWrapperBase *))(*(_QWORD *)v15 + 16LL))(v15);
    }
    v11 = 0LL;
  }
  else
  {
    v11 = (int)v17;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
  }
  v23[0] = a3;
  v12 = 1024;
  v23[1] = a4;
  if ( a5 )
    v12 = 3584;
  HIDWORD(v23[0]) = v12;
  if ( (a2 & 1) != 0 )
  {
    v12 |= 0x20u;
    HIDWORD(v23[0]) = v12;
  }
  if ( (a2 & 2) != 0 )
  {
    v12 |= 0x40u;
    HIDWORD(v23[0]) = v12;
  }
  if ( (a2 & 4) != 0 )
  {
    v12 |= 0x80u;
    HIDWORD(v23[0]) = v12;
  }
  if ( (a2 & 8) != 0 )
    HIDWORD(v23[0]) = v12 | 0x100;
  v19 = 19;
  v20 = v23;
  v21 = 16;
  if ( !(unsigned int)SetWindowCompositionAttribute(v11, &v19) )
    wil::details::in1diag3::_Log_GetLastError(
      retaddr,
      (void *)0xCB,
      (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\desktopsingleviewshellexperiencepersonality.cpp",
      v13);
  if ( a5 )
  {
    updated = DwmpUpdateAccentBlurRect(v11, a5);
    if ( updated < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xCF,
        (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\desktopsingleviewshellexperiencepersonality.cpp",
        (const char *)(unsigned int)updated,
        v17);
  }
  return 0LL;
}
