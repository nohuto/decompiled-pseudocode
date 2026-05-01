/*
 * XREFs of ??$CortanaExperienceManager_CortanaViewState@W4ExperienceViewState@CSingleViewShellExperience@@@CortanaProactiveTelemetry@@SAX$$QEAW4ExperienceViewState@CSingleViewShellExperience@@@Z @ 0x1800BEF48
 * Callers:
 *     ?Show@CortanaSharedExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x1800BA790 (-Show@CortanaSharedExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Provider@CortanaProactiveLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x180098068 (-Provider@CortanaProactiveLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 */

int __fastcall CortanaProactiveTelemetry::CortanaExperienceManager_CortanaViewState<enum CSingleViewShellExperience::ExperienceViewState>(
        int *a1)
{
  const struct _TlgProvider_t *v2; // rax
  int v3; // ecx
  int v5; // [rsp+30h] [rbp-58h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-50h] BYREF
  int *v7; // [rsp+58h] [rbp-30h]
  int v8; // [rsp+60h] [rbp-28h]
  int v9; // [rsp+64h] [rbp-24h]

  v2 = CortanaProactiveLogging::Provider();
  if ( *(_DWORD *)v2 > 5u )
  {
    v3 = *a1;
    v9 = 0;
    v5 = v3;
    v7 = &v5;
    v8 = 4;
    LODWORD(v2) = TlgWrite(v2, &unk_1801FC55B, 0LL, 0LL, 3u, &pData);
  }
  return (int)v2;
}
