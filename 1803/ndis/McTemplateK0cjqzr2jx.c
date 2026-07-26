/*
 * XREFs of McTemplateK0cjqzr2jx @ 0x1C00754AC
 * Callers:
 *     ?ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C0073678 (-ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ndisPublishSleepStudyNapsCustomData @ 0x1C00F63B0 (ndisPublishSleepStudyNapsCustomData.c)
 *     ndisPublishSleepStudyNapsOidCustomData @ 0x1C00F65B0 (ndisPublishSleepStudyNapsOidCustomData.c)
 *     ?ndisPublishSleepStudyNicAutoPowerSaverStats@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EPEBU_GUID@@@Z @ 0x1C00F680C (-ndisPublishSleepStudyNicAutoPowerSaverStats@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EPEBU_GUID@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     McGenEventWriteKM @ 0x1C003D074 (McGenEventWriteKM.c)
 */

NTSTATUS __fastcall McTemplateK0cjqzr2jx(
        __int64 a1,
        __int64 a2,
        const GUID *a3,
        char a4,
        __int64 a5,
        int a6,
        __int64 a7,
        __int64 a8,
        char a9)
{
  _EVENT_DATA_DESCRIPTOR v10; // [rsp+30h] [rbp-51h] BYREF
  char *v11; // [rsp+40h] [rbp-41h]
  __int64 v12; // [rsp+48h] [rbp-39h]
  __int64 v13; // [rsp+50h] [rbp-31h]
  __int64 v14; // [rsp+58h] [rbp-29h]
  int *v15; // [rsp+60h] [rbp-21h]
  __int64 v16; // [rsp+68h] [rbp-19h]
  __int64 v17; // [rsp+70h] [rbp-11h]
  int v18; // [rsp+78h] [rbp-9h]
  int v19; // [rsp+7Ch] [rbp-5h]
  __int64 v20; // [rsp+80h] [rbp-1h]
  __int64 v21; // [rsp+88h] [rbp+7h]
  char *v22; // [rsp+90h] [rbp+Fh]
  __int64 v23; // [rsp+98h] [rbp+17h]
  char v24; // [rsp+D8h] [rbp+57h] BYREF

  v24 = a4;
  v12 = 1LL;
  v19 = 0;
  v11 = &v24;
  v13 = a5;
  v14 = 16LL;
  v15 = &a6;
  v17 = a7;
  v16 = 4LL;
  v18 = 2 * a6;
  v20 = a8;
  v22 = &a9;
  v21 = 16LL;
  v23 = 8LL;
  return McGenEventWriteKM(&SLEEPSTUDY_ETW_PROVIDER_Context, &SLEEPSTUDY_EVT_SCENARIO_BLOCKER, a3, 7u, &v10);
}
