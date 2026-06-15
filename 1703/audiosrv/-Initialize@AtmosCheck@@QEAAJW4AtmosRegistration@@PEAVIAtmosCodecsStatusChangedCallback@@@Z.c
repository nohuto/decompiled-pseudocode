/*
 * XREFs of ?Initialize@AtmosCheck@@QEAAJW4AtmosRegistration@@PEAVIAtmosCodecsStatusChangedCallback@@@Z @ 0x18003CFAC
 * Callers:
 *     ?GetAtmosCheck@CSpatialAudioTech@@KAPEAVAtmosCheck@@XZ @ 0x180045DB4 (-GetAtmosCheck@CSpatialAudioTech@@KAPEAVAtmosCheck@@XZ.c)
 * Callees:
 *     ?Trace@AtmosCheck@@AEAAXPEBDJ@Z @ 0x180026130 (-Trace@AtmosCheck@@AEAAXPEBDJ@Z.c)
 *     ?RegisterAppDeploymentNotifications@AtmosCheck@@AEAAJXZ @ 0x18003CDE0 (-RegisterAppDeploymentNotifications@AtmosCheck@@AEAAJXZ.c)
 *     ?IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ @ 0x18004D5A4 (-IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ.c)
 *     ?PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z @ 0x180057B78 (-PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z.c)
 */

__int64 __fastcall AtmosCheck::Initialize(__int64 a1, __int64 a2, struct _FILETIME a3)
{
  AtmosCheck *v4; // rcx
  signed int v6; // ebx
  PTP_TIMER ThreadpoolTimer; // rax
  signed int LastError; // eax
  struct _TP_TIMER *v9; // rcx
  struct _FILETIME pftDueTime; // [rsp+40h] [rbp+18h] BYREF

  pftDueTime = a3;
  *(_DWORD *)(a1 + 116) = 0;
  *(_DWORD *)(a1 + 112) = 1;
  if ( AtmosCheck::IsLicenseEvaluationRequired((AtmosCheck *)a1) )
  {
    v6 = 0;
    if ( !*(_BYTE *)(a1 + 72) )
    {
      *(_QWORD *)(a1 + 16) = &g_AtmosCheckCallback;
      v6 = AtmosCheck::PerformLicenseCheck((AtmosCheck *)a1, 0);
      if ( v6 < 0 )
        goto LABEL_10;
      *(_BYTE *)(a1 + 72) = 1;
      ThreadpoolTimer = CreateThreadpoolTimer(AtmosCheck::StaticAtmosRefreshTimerCallback, (PVOID)a1, 0LL);
      *(_QWORD *)(a1 + 128) = ThreadpoolTimer;
      if ( !ThreadpoolTimer )
      {
        LastError = GetLastError();
        v6 = LastError;
        if ( LastError > 0 )
          v6 = (unsigned __int16)LastError | 0x80070000;
        if ( v6 < 0 )
          goto LABEL_10;
      }
      v9 = *(struct _TP_TIMER **)(a1 + 128);
      pftDueTime.dwHighDateTime = -1;
      pftDueTime.dwLowDateTime = 1294967296;
      SetThreadpoolTimer(v9, &pftDueTime, 0x5265C00u, 0x7530u);
      v6 = AtmosCheck::RegisterAppDeploymentNotifications((AtmosCheck *)a1);
      if ( v6 < 0 )
LABEL_10:
        *(_BYTE *)(a1 + 72) = 0;
    }
    AtmosCheck::Trace(v4, "Init result", v6);
    return (unsigned int)v6;
  }
  else
  {
    *(_BYTE *)(a1 + 72) = 1;
    return 0LL;
  }
}
