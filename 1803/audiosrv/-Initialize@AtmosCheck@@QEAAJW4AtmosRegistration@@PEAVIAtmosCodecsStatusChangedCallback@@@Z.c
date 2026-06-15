/*
 * XREFs of ?Initialize@AtmosCheck@@QEAAJW4AtmosRegistration@@PEAVIAtmosCodecsStatusChangedCallback@@@Z @ 0x18004F5D4
 * Callers:
 *     ?GetAtmosCheck@CSpatialAudioTech@@KAPEAVAtmosCheck@@XZ @ 0x18004F024 (-GetAtmosCheck@CSpatialAudioTech@@KAPEAVAtmosCheck@@XZ.c)
 * Callees:
 *     ?Trace@AtmosCheck@@AEAAXPEBDJ@Z @ 0x1800266F8 (-Trace@AtmosCheck@@AEAAXPEBDJ@Z.c)
 *     ?IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ @ 0x180026B40 (-IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ.c)
 *     ?PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z @ 0x180029798 (-PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z.c)
 *     ?RegisterAppDeploymentNotifications@AtmosCheck@@AEAAJXZ @ 0x18004F3C0 (-RegisterAppDeploymentNotifications@AtmosCheck@@AEAAJXZ.c)
 */

__int64 __fastcall AtmosCheck::Initialize(__int64 a1)
{
  int v3; // edi
  HANDLE v4; // rax
  signed int v5; // eax
  AtmosCheck *v6; // rcx
  const char *v7; // rdx
  void *v8; // rdx
  signed int LastError; // eax
  AtmosCheck *v10; // rcx
  PTP_TIMER ThreadpoolTimer; // rax
  signed int v12; // eax
  struct _TP_TIMER *v13; // rcx
  void *v14; // rcx
  void *v15; // rcx
  AtmosCheck *v16; // rcx
  struct _SECURITY_ATTRIBUTES EventAttributes; // [rsp+30h] [rbp-28h] BYREF
  struct _FILETIME pftDueTime; // [rsp+60h] [rbp+8h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+70h] [rbp+18h] BYREF

  SecurityDescriptor = 0LL;
  *(_DWORD *)(a1 + 148) = 0;
  *(_DWORD *)(a1 + 144) = 1;
  if ( !AtmosCheck::IsLicenseEvaluationRequired((AtmosCheck *)a1) )
  {
    *(_BYTE *)(a1 + 72) = 1;
    return 0LL;
  }
  v3 = 0;
  if ( !*(_BYTE *)(a1 + 72) )
  {
    *(_QWORD *)(a1 + 16) = &g_AtmosCheckCallback;
    if ( ConvertStringSecurityDescriptorToSecurityDescriptorW(
           L"D:(A;;GA;;;WD)(A;;GA;;;AC)",
           1u,
           &SecurityDescriptor,
           0LL) )
    {
      EventAttributes.bInheritHandle = 0;
      EventAttributes.lpSecurityDescriptor = SecurityDescriptor;
      EventAttributes.nLength = 24;
      v4 = CreateEventW(&EventAttributes, 1, 0, L"Global\\Client_Atmos_Check_Event");
      *(_QWORD *)(a1 + 80) = v4;
      if ( v4 )
      {
        *(_BYTE *)(a1 + 74) = 0;
LABEL_14:
        v3 = AtmosCheck::PerformLicenseCheck((AtmosCheck *)a1, 0);
        if ( v3 < 0 )
          goto LABEL_25;
        v8 = *(void **)(a1 + 80);
        if ( v8
          && !RegisterWaitForSingleObject(
                (PHANDLE)(a1 + 88),
                v8,
                AtmosCheck::StaticClientAtmosCheckEventFired,
                (PVOID)a1,
                0xFFFFFFFF,
                0x18u) )
        {
          LastError = GetLastError();
          if ( LastError > 0 )
            LastError = (unsigned __int16)LastError | 0x80070000;
          AtmosCheck::Trace(v10, "RegisterWaitForSingleObject Error", LastError);
          *(_BYTE *)(a1 + 74) = 1;
        }
        *(_BYTE *)(a1 + 72) = 1;
        ThreadpoolTimer = CreateThreadpoolTimer(
                            (PTP_TIMER_CALLBACK)AtmosCheck::StaticAtmosRefreshTimerCallback,
                            (PVOID)a1,
                            0LL);
        *(_QWORD *)(a1 + 160) = ThreadpoolTimer;
        if ( !ThreadpoolTimer )
        {
          v12 = GetLastError();
          v3 = v12;
          if ( v12 > 0 )
            v3 = (unsigned __int16)v12 | 0x80070000;
          if ( v3 < 0 )
            goto LABEL_25;
        }
        v13 = *(struct _TP_TIMER **)(a1 + 160);
        pftDueTime.dwHighDateTime = -1;
        pftDueTime.dwLowDateTime = 1294967296;
        SetThreadpoolTimer(v13, &pftDueTime, 0x5265C00u, 0x7530u);
        v3 = AtmosCheck::RegisterAppDeploymentNotifications((AtmosCheck *)a1);
        if ( v3 < 0 )
        {
LABEL_25:
          v14 = *(void **)(a1 + 88);
          *(_BYTE *)(a1 + 72) = 0;
          if ( v14 )
          {
            UnregisterWaitEx(v14, (HANDLE)0xFFFFFFFFFFFFFFFFLL);
            *(_QWORD *)(a1 + 88) = 0LL;
          }
          v15 = *(void **)(a1 + 80);
          if ( v15 )
          {
            CloseHandle(v15);
            *(_QWORD *)(a1 + 80) = 0LL;
          }
        }
        goto LABEL_29;
      }
      v5 = GetLastError();
      if ( v5 > 0 )
        v5 = (unsigned __int16)v5 | 0x80070000;
      v7 = "Error ConvertStringSecurityDescriptorToSecurityDescriptor";
    }
    else
    {
      v5 = GetLastError();
      if ( v5 > 0 )
        v5 = (unsigned __int16)v5 | 0x80070000;
      v7 = "Error creating Global\\Client_Atmos_Check_Event";
    }
    AtmosCheck::Trace(v6, v7, v5);
    goto LABEL_14;
  }
LABEL_29:
  v16 = (AtmosCheck *)SecurityDescriptor;
  if ( SecurityDescriptor )
    LocalFree(SecurityDescriptor);
  AtmosCheck::Trace(v16, "Init result", v3);
  return (unsigned int)v3;
}
