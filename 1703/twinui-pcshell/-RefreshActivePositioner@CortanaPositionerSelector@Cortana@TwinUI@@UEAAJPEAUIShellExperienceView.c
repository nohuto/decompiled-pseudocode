/*
 * XREFs of ?RefreshActivePositioner@CortanaPositionerSelector@Cortana@TwinUI@@UEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUHSTRING__@@@Z @ 0x1800C0930
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetUserDisplayContext@Holographic@Shell@Internal@Windows@@YAJPEAW4UserDisplayContext@1234@@Z @ 0x1800C068C (-GetUserDisplayContext@Holographic@Shell@Internal@Windows@@YAJPEAW4UserDisplayContext@1234@@Z.c)
 *     ?SetActivePositioner@CortanaPositionerSelector@Cortana@TwinUI@@UEAAJW4ShellExperiencePositionerType@Experience@Shell@Internal@Windows@@PEAUIShellExperienceView@5678@@Z @ 0x1800C0A90 (-SetActivePositioner@CortanaPositionerSelector@Cortana@TwinUI@@UEAAJW4ShellExperiencePositionerT.c)
 *     ?GetCurrentInputContext@CortanaPositionerSelector@Cortana@TwinUI@@AEAA?AW4UserInputContext@Holographic@Shell@Internal@Windows@@XZ @ 0x1800C0F70 (-GetCurrentInputContext@CortanaPositionerSelector@Cortana@TwinUI@@AEAA-AW4UserInputContext@Holog.c)
 */

__int64 __fastcall TwinUI::Cortana::CortanaPositionerSelector::RefreshActivePositioner(
        TwinUI::Cortana::CortanaPositionerSelector *this,
        struct Windows::Internal::Shell::Experience::IShellExperienceView *a2,
        HSTRING a3)
{
  unsigned int v3; // ebx
  char v4; // di
  LSTATUS ValueW; // eax
  signed int v9; // ecx
  const wchar_t *StringRawBuffer; // rax
  enum Windows::Internal::Shell::Holographic::UserDisplayContext *v11; // rdx
  int active; // eax
  unsigned int v13; // ebx
  DWORD v15[4]; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  unsigned int v17; // [rsp+88h] [rbp+20h] BYREF

  v3 = 1;
  v4 = 0;
  if ( (unsigned int)dword_180244B0C > 1 )
    goto LABEL_10;
  v15[0] = 4;
  ValueW = RegGetValueW(
             HKEY_LOCAL_MACHINE,
             L"Software\\Microsoft\\Windows\\CurrentVersion\\ImmersiveShell",
             L"CortanaPositionerOverride",
             0x10u,
             0LL,
             &v17,
             v15);
  v9 = (unsigned __int16)ValueW | 0x80070000;
  if ( ValueW <= 0 )
    v9 = ValueW;
  if ( v9 >= 0 )
  {
    v4 = 1;
    if ( v17 <= 2 )
      v3 = v17;
  }
  if ( !dword_180244B0C )
    dword_180244B0C = 2 - (v4 != 0);
  if ( !v4 )
  {
LABEL_10:
    StringRawBuffer = WindowsGetStringRawBuffer(a3, 0LL);
    if ( StringRawBuffer && wcsstr(StringRawBuffer, L"QuerySource=VoiceActivation") )
    {
      v17 = 0;
      Windows::Internal::Shell::Holographic::GetUserDisplayContext((Windows::Internal::Shell::Holographic *)&v17, v11);
      if ( v17 == 1 )
        v3 = 2;
    }
    else if ( (unsigned int)TwinUI::Cortana::CortanaPositionerSelector::GetCurrentInputContext() == 1 )
    {
      v3 = 2;
    }
  }
  active = TwinUI::Cortana::CortanaPositionerSelector::SetActivePositioner(this, v3, a2);
  v13 = active;
  if ( active >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x64,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanapositioner.cpp",
    (const char *)(unsigned int)active);
  return v13;
}
