/*
 * XREFs of ??$ReportWindowPosition@AEAJAEAJJJAEAE_NAEAW4PositionMenuFlags@CStartExperienceManager@@@StartMenuReposition@StartMenuExperienceTelemetry@@QEAAXAEAJ0$$QEAJ1AEAE$$QEA_NAEAW4PositionMenuFlags@CStartExperienceManager@@@Z @ 0x1800B9D5C
 * Callers:
 *     ?PositionMenu@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@W4PositionMenuFlags@1@@Z @ 0x1800B8324 (-PositionMenu@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@W4PositionMenuFlags@.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Provider@StartMenuExperienceLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x1800BB664 (-Provider@StartMenuExperienceLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

int __fastcall StartMenuExperienceTelemetry::StartMenuReposition::ReportWindowPosition<long &,long &,long,long,unsigned char &,bool,enum CStartExperienceManager::PositionMenuFlags &>(
        __int64 a1,
        int *a2,
        int *a3,
        int *a4,
        int *a5,
        unsigned __int8 *a6,
        unsigned __int8 *a7,
        int *a8)
{
  const struct _TlgProvider_t *v12; // rax
  int v13; // ecx
  int v14; // edx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v20; // [rsp+30h] [rbp-99h] BYREF
  int v21; // [rsp+34h] [rbp-95h] BYREF
  int v22; // [rsp+38h] [rbp-91h] BYREF
  int v23; // [rsp+3Ch] [rbp-8Dh] BYREF
  int v24; // [rsp+40h] [rbp-89h] BYREF
  int v25; // [rsp+44h] [rbp-85h] BYREF
  int v26; // [rsp+48h] [rbp-81h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-79h] BYREF
  int *v28; // [rsp+70h] [rbp-59h]
  __int64 v29; // [rsp+78h] [rbp-51h]
  int *v30; // [rsp+80h] [rbp-49h]
  __int64 v31; // [rsp+88h] [rbp-41h]
  int *v32; // [rsp+90h] [rbp-39h]
  __int64 v33; // [rsp+98h] [rbp-31h]
  int *v34; // [rsp+A0h] [rbp-29h]
  __int64 v35; // [rsp+A8h] [rbp-21h]
  int *v36; // [rsp+B0h] [rbp-19h]
  __int64 v37; // [rsp+B8h] [rbp-11h]
  int *v38; // [rsp+C0h] [rbp-9h]
  __int64 v39; // [rsp+C8h] [rbp-1h]
  int *v40; // [rsp+D0h] [rbp+7h]
  __int64 v41; // [rsp+D8h] [rbp+Fh]

  v12 = StartMenuExperienceLogging::Provider();
  if ( *(_DWORD *)v12 > 4u )
  {
    v13 = *a3;
    v14 = *a2;
    v28 = &v20;
    v30 = &v21;
    v22 = *a4;
    v32 = &v22;
    v21 = v13;
    v20 = v14;
    v29 = 4LL;
    v15 = *a5;
    v34 = &v23;
    v23 = v15;
    v31 = 4LL;
    v33 = 4LL;
    v16 = *a6;
    v36 = &v24;
    v24 = v16;
    v35 = 4LL;
    v37 = 4LL;
    v17 = *a7;
    v38 = &v25;
    v25 = v17;
    v39 = 4LL;
    v41 = 4LL;
    v18 = *a8;
    v40 = &v26;
    v26 = v18;
    LODWORD(v12) = TlgWrite(v12, &unk_18025B7B4, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), 0LL, 9u, &pData);
  }
  return (int)v12;
}
