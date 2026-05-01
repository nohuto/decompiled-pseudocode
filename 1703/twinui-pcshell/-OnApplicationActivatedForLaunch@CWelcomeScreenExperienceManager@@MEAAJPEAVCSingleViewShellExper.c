/*
 * XREFs of ?OnApplicationActivatedForLaunch@CWelcomeScreenExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@J@Z @ 0x1800B2C90
 * Callers:
 *     <none>
 * Callees:
 *     ??$ApplicationActivatedForLaunch@AEAJ@WelcomeScreenExperienceManagerTelemetry@@SAXAEAJ@Z @ 0x1800B4914 (--$ApplicationActivatedForLaunch@AEAJ@WelcomeScreenExperienceManagerTelemetry@@SAXAEAJ@Z.c)
 */

__int64 __fastcall CWelcomeScreenExperienceManager::OnApplicationActivatedForLaunch(
        CWelcomeScreenExperienceManager *this,
        struct CSingleViewShellExperience *a2,
        int a3)
{
  int v4; // [rsp+40h] [rbp+18h] BYREF

  v4 = a3;
  WelcomeScreenExperienceManagerTelemetry::ApplicationActivatedForLaunch<long &>(&v4, a2);
  return 0LL;
}
