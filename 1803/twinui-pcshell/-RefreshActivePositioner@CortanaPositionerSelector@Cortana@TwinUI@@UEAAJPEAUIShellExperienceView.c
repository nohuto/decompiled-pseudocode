/*
 * XREFs of ?RefreshActivePositioner@CortanaPositionerSelector@Cortana@TwinUI@@UEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUHSTRING__@@@Z @ 0x180084EE0
 * Callers:
 *     ?Show@CortanaSharedExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x180067BE0 (-Show@CortanaSharedExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetActivePositioner@CortanaPositionerSelector@Cortana@TwinUI@@UEAAJW4ShellExperiencePositionerType@Experience@Shell@Internal@Windows@@PEAUIShellExperienceView@5678@@Z @ 0x180085020 (-SetActivePositioner@CortanaPositionerSelector@Cortana@TwinUI@@UEAAJW4ShellExperiencePositionerT.c)
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x180085EE0 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ?GetUserInputContext@Holographic@Shell@Internal@Windows@@YAJPEAW4UserInputContext@1234@@Z @ 0x18009044C (-GetUserInputContext@Holographic@Shell@Internal@Windows@@YAJPEAW4UserInputContext@1234@@Z.c)
 *     ?GetUserDisplayContext@Holographic@Shell@Internal@Windows@@YAJPEAW4UserDisplayContext@1234@@Z @ 0x18009052C (-GetUserDisplayContext@Holographic@Shell@Internal@Windows@@YAJPEAW4UserDisplayContext@1234@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TwinUI::Cortana::CortanaPositionerSelector::RefreshActivePositioner(
        TwinUI::Cortana::CortanaPositionerSelector *this,
        struct Windows::Internal::Shell::Experience::IShellExperienceView *a2,
        HSTRING a3)
{
  unsigned int v3; // ebx
  unsigned __int8 v4; // di
  const wchar_t *StringRawBuffer; // rax
  enum Windows::Internal::Shell::Holographic::UserDisplayContext *v9; // rdx
  const wchar_t *v10; // rax
  __int64 (__fastcall *v11)(TwinUI::Cortana::CortanaPositionerSelector *, _QWORD, struct Windows::Internal::Shell::Experience::IShellExperienceView *); // rax
  int active; // eax
  unsigned int v13; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v16; // [rsp+40h] [rbp+8h] BYREF

  v3 = 1;
  v4 = 0;
  if ( (unsigned int)dword_180438038 > 1 )
    goto LABEL_6;
  if ( (int)SHRegGetDWORD(
              HKEY_LOCAL_MACHINE,
              L"Software\\Microsoft\\Windows\\CurrentVersion\\ImmersiveShell",
              L"CortanaPositionerOverride",
              &v16) >= 0 )
  {
    v4 = 1;
    if ( v16 <= 2 )
      v3 = v16;
  }
  if ( !dword_180438038 )
    dword_180438038 = (v4 ^ 1) + 1;
  if ( !v4 )
  {
LABEL_6:
    StringRawBuffer = WindowsGetStringRawBuffer(a3, 0LL);
    if ( StringRawBuffer && wcsstr(StringRawBuffer, L"QuerySource=VoiceActivation")
      || (v10 = WindowsGetStringRawBuffer(a3, 0LL)) != 0LL && wcsstr(v10, L"QuerySource=Cortini") )
    {
      v16 = 0;
      Windows::Internal::Shell::Holographic::GetUserDisplayContext((Windows::Internal::Shell::Holographic *)&v16, v9);
      if ( v16 == 1 )
        v3 = 2;
    }
    else
    {
      v16 = 0;
      Windows::Internal::Shell::Holographic::GetUserInputContext((Windows::Internal::Shell::Holographic *)&v16, v9);
      if ( v16 == 1 )
        v3 = 2;
    }
  }
  v11 = *(__int64 (__fastcall **)(TwinUI::Cortana::CortanaPositionerSelector *, _QWORD, struct Windows::Internal::Shell::Experience::IShellExperienceView *))(*(_QWORD *)this + 32LL);
  if ( (char *)v11 == (char *)TwinUI::Cortana::CortanaPositionerSelector::SetActivePositioner )
    active = TwinUI::Cortana::CortanaPositionerSelector::SetActivePositioner(this, v3, a2);
  else
    active = v11(this, v3, a2);
  v13 = active;
  if ( active >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x65,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanapositioner.cpp",
    (const char *)(unsigned int)active);
  return v13;
}
