/*
 * XREFs of ?OnMessage@CStartExperienceManager@@UEAAJI_K_J@Z @ 0x180173C50
 * Callers:
 *     <none>
 * Callees:
 *     Microsoft::WRL::EventSource_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::StartExperienceManager_____ptr64_int__Microsoft::WRL::InvokeModeOptions_2___::DoInvoke__lambda_d789d36f4409f79ab6db7c104c5ebf63___ @ 0x180172598 (Microsoft--WRL--EventSource_Windows--Foundation--ITypedEventHandler_Windows--Intern_ea_180172598.c)
 *     ?StartThemeChanged@CStartExperienceManager@@QEAAJW4StartThemeUpdateType@@@Z @ 0x180174748 (-StartThemeChanged@CStartExperienceManager@@QEAAJW4StartThemeUpdateType@@@Z.c)
 */

__int64 __fastcall CStartExperienceManager::OnMessage(
        RTL_SRWLOCK *this,
        int a2,
        CStartExperienceManager *a3,
        const WCHAR *a4)
{
  RTL_SRWLOCK *v5; // rcx
  __int64 v6; // rdx
  RTL_SRWLOCK *v8; // [rsp+30h] [rbp-28h] BYREF
  __int128 v9; // [rsp+40h] [rbp-18h] BYREF
  int v10; // [rsp+68h] [rbp+10h] BYREF

  if ( a2 == 26 )
  {
    if ( !a4 || CompareStringOrdinal(a4, -1, L"ImmersiveColorSet", -1, 0) != 2 )
      return 0LL;
    v5 = this - 6;
    v6 = 0LL;
LABEL_10:
    CStartExperienceManager::StartThemeChanged(v5, v6);
    return 0LL;
  }
  if ( a2 == 798 )
  {
    v5 = this - 6;
    v6 = 1LL;
    goto LABEL_10;
  }
  if ( a2 == 1025 && a3 == (CStartExperienceManager *)&this[-6] )
  {
    v8 = this - 6;
    v10 = (int)a4;
    *(_QWORD *)&v9 = &v8;
    *((_QWORD *)&v9 + 1) = &v10;
    Microsoft::WRL::EventSource_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::StartExperienceManager_____ptr64_int__Microsoft::WRL::InvokeModeOptions_2___::DoInvoke__lambda_d789d36f4409f79ab6db7c104c5ebf63___(
      this + 27,
      &v9);
  }
  return 0LL;
}
