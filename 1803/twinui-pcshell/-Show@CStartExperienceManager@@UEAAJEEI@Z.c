/*
 * XREFs of ?Show@CStartExperienceManager@@UEAAJEEI@Z @ 0x180077680
 * Callers:
 *     ?ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x180078B50 (-ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLA.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CStartExperienceManager::Show(CStartExperienceManager *this, char a2, char a3, int a4)
{
  __int64 v5; // rdx

  *((_DWORD *)this + 142) = a4;
  v5 = 2LL;
  if ( a3 )
  {
    if ( !a2 )
      v5 = 6LL;
  }
  else
  {
    v5 = 3LL;
  }
  *((_BYTE *)this + 601) = 1;
  return CSingleViewShellExperience::Show(
           (__int64)this + 264,
           (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)v5);
}
