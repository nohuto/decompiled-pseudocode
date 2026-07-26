/*
 * XREFs of Template_cjqzr2jx @ 0x1C0073244
 * Callers:
 *     ?ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C0071484 (-ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ndisPublishSleepStudyNapsCustomData @ 0x1C00EA248 (ndisPublishSleepStudyNapsCustomData.c)
 *     ndisPublishSleepStudyNapsOidCustomData @ 0x1C00EA448 (ndisPublishSleepStudyNapsOidCustomData.c)
 *     ?ndisPublishSleepStudyNicAutoPowerSaverStats@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EPEBU_GUID@@@Z @ 0x1C00EA690 (-ndisPublishSleepStudyNicAutoPowerSaverStats@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EPEBU_GUID@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_cjqzr2jx(
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
  _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-51h] BYREF
  __int64 v11; // [rsp+40h] [rbp-41h]
  __int64 v12; // [rsp+48h] [rbp-39h]
  int *v13; // [rsp+50h] [rbp-31h]
  __int64 v14; // [rsp+58h] [rbp-29h]
  __int64 v15; // [rsp+60h] [rbp-21h]
  int v16; // [rsp+68h] [rbp-19h]
  int v17; // [rsp+6Ch] [rbp-15h]
  __int64 v18; // [rsp+70h] [rbp-11h]
  __int64 v19; // [rsp+78h] [rbp-9h]
  char *v20; // [rsp+80h] [rbp-1h]
  __int64 v21; // [rsp+88h] [rbp+7h]
  char v22; // [rsp+D8h] [rbp+57h] BYREF

  v22 = a4;
  UserData.Ptr = (unsigned __int64)&v22;
  v11 = a5;
  v13 = &a6;
  v15 = a7;
  v17 = 0;
  v16 = 2 * a6;
  v18 = a8;
  v20 = &a9;
  *(_QWORD *)&UserData.Size = 1LL;
  v12 = 16LL;
  v14 = 4LL;
  v19 = 16LL;
  v21 = 8LL;
  return EtwWrite(Microsoft_Windows_SleepStudyHandle, &SLEEPSTUDY_EVT_SCENARIO_BLOCKER, a3, 6u, &UserData);
}
