/*
 * XREFs of ?ndisPublishSleepStudyCustomData@@YAXEPEBU_GUID@@PEBG_K@Z @ 0x1C00F60C8
 * Callers:
 *     ?ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C0073678 (-ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ?ndisPublishSleepStudyCustomDataCsSpuriousWakeStats@@YAXEPEBU_GUID@@PEAU_NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS@@PEAU_NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS_EX@@@Z @ 0x1C00F6224 (-ndisPublishSleepStudyCustomDataCsSpuriousWakeStats@@YAXEPEBU_GUID@@PEAU_NDIS_MINIPORT_CS_SPURIO.c)
 *     ?ndisPublishSleepStudyCustomDataCsTraffic@@YAXEPEBU_GUID@@PEAU_NDIS_MINIPORT_CS_TRAFFIC_STATS@@1@Z @ 0x1C00F62C8 (-ndisPublishSleepStudyCustomDataCsTraffic@@YAXEPEBU_GUID@@PEAU_NDIS_MINIPORT_CS_TRAFFIC_STATS@@1.c)
 *     ndisPublishSleepStudyNapsCustomData @ 0x1C00F63B0 (ndisPublishSleepStudyNapsCustomData.c)
 *     ndisPublishSleepStudyNapsOidCustomData @ 0x1C00F65B0 (ndisPublishSleepStudyNapsOidCustomData.c)
 *     ndisPublishSleepStudyNicAutoPowerSaverCustomData @ 0x1C00F66C0 (ndisPublishSleepStudyNicAutoPowerSaverCustomData.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     memset @ 0x1C0026180 (memset.c)
 */

void __fastcall ndisPublishSleepStudyCustomData(
        char a1,
        const struct _GUID *a2,
        const unsigned __int16 *a3,
        ULONGLONG a4)
{
  __int64 v7; // rcx
  __int64 v8; // rax
  int v9; // [rsp+30h] [rbp-99h] BYREF
  int v10; // [rsp+34h] [rbp-95h] BYREF
  int v11; // [rsp+38h] [rbp-91h] BYREF
  _UNICODE_STRING String; // [rsp+40h] [rbp-89h] BYREF
  _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-79h] BYREF
  int *v14; // [rsp+60h] [rbp-69h]
  __int64 v15; // [rsp+68h] [rbp-61h]
  const struct _GUID *v16; // [rsp+70h] [rbp-59h]
  __int64 v17; // [rsp+78h] [rbp-51h]
  int *v18; // [rsp+80h] [rbp-49h]
  __int64 v19; // [rsp+88h] [rbp-41h]
  const unsigned __int16 *v20; // [rsp+90h] [rbp-39h]
  int v21; // [rsp+98h] [rbp-31h]
  int v22; // [rsp+9Ch] [rbp-2Dh]
  int *v23; // [rsp+A0h] [rbp-29h]
  __int64 v24; // [rsp+A8h] [rbp-21h]
  _WORD *v25; // [rsp+B0h] [rbp-19h]
  int v26; // [rsp+B8h] [rbp-11h]
  int v27; // [rsp+BCh] [rbp-Dh]
  _WORD v28[24]; // [rsp+C0h] [rbp-9h] BYREF
  char v29; // [rsp+130h] [rbp+67h] BYREF

  v29 = a1;
  memset(v28, 0, 0x2AuLL);
  v9 = 1;
  *(_DWORD *)&String.Length = 2752512;
  String.Buffer = v28;
  if ( RtlInt64ToUnicodeString(a4, 0xAu, &String) >= 0 )
  {
    v7 = -1LL;
    v8 = -1LL;
    do
      ++v8;
    while ( a3[v8] );
    v10 = v8;
    do
      ++v7;
    while ( v28[v7] );
    v11 = v7;
    v21 = 2 * v8;
    UserData.Ptr = (unsigned __int64)&v29;
    v23 = &v11;
    v14 = &v9;
    v25 = v28;
    v18 = &v10;
    v26 = 2 * v7;
    *(_QWORD *)&UserData.Size = 1LL;
    v15 = 4LL;
    v16 = a2;
    v17 = 16LL;
    v19 = 4LL;
    v20 = a3;
    v22 = 0;
    v24 = 4LL;
    v27 = 0;
    EtwWrite(SLEEPSTUDY_ETW_PROVIDER_Context, &SLEEPSTUDY_EVT_SCENARIO_BLOCKER_DATA, a2, 7u, &UserData);
  }
}
