/*
 * XREFs of ?ndisPublishSleepStudyCustomData@@YAXEPEBU_GUID@@PEBG_K@Z @ 0x1C00E9F64
 * Callers:
 *     ?ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C0071484 (-ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ?ndisPublishSleepStudyCustomDataCsSpuriousWakeStats@@YAXEPEBU_GUID@@PEAU_NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS@@PEAU_NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS_EX@@@Z @ 0x1C00EA0C8 (-ndisPublishSleepStudyCustomDataCsSpuriousWakeStats@@YAXEPEBU_GUID@@PEAU_NDIS_MINIPORT_CS_SPURIO.c)
 *     ?ndisPublishSleepStudyCustomDataCsTraffic@@YAXEPEBU_GUID@@PEAU_NDIS_MINIPORT_CS_TRAFFIC_STATS@@1@Z @ 0x1C00EA160 (-ndisPublishSleepStudyCustomDataCsTraffic@@YAXEPEBU_GUID@@PEAU_NDIS_MINIPORT_CS_TRAFFIC_STATS@@1.c)
 *     ndisPublishSleepStudyNapsCustomData @ 0x1C00EA248 (ndisPublishSleepStudyNapsCustomData.c)
 *     ndisPublishSleepStudyNapsOidCustomData @ 0x1C00EA448 (ndisPublishSleepStudyNapsOidCustomData.c)
 *     ndisPublishSleepStudyNicAutoPowerSaverCustomData @ 0x1C00EA558 (ndisPublishSleepStudyNicAutoPowerSaverCustomData.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 *     memset @ 0x1C0028B80 (memset.c)
 */

void __fastcall ndisPublishSleepStudyCustomData(
        char a1,
        const struct _GUID *a2,
        const unsigned __int16 *a3,
        ULONGLONG a4)
{
  __int64 v7; // rcx
  __int64 v8; // rax
  int v9; // [rsp+30h] [rbp-D0h] BYREF
  int v10; // [rsp+34h] [rbp-CCh] BYREF
  int v11; // [rsp+38h] [rbp-C8h] BYREF
  _UNICODE_STRING String; // [rsp+40h] [rbp-C0h] BYREF
  _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-B0h] BYREF
  int *v14; // [rsp+60h] [rbp-A0h]
  __int64 v15; // [rsp+68h] [rbp-98h]
  const struct _GUID *v16; // [rsp+70h] [rbp-90h]
  __int64 v17; // [rsp+78h] [rbp-88h]
  int *v18; // [rsp+80h] [rbp-80h]
  __int64 v19; // [rsp+88h] [rbp-78h]
  const unsigned __int16 *v20; // [rsp+90h] [rbp-70h]
  int v21; // [rsp+98h] [rbp-68h]
  int v22; // [rsp+9Ch] [rbp-64h]
  int *v23; // [rsp+A0h] [rbp-60h]
  __int64 v24; // [rsp+A8h] [rbp-58h]
  _WORD *v25; // [rsp+B0h] [rbp-50h]
  int v26; // [rsp+B8h] [rbp-48h]
  int v27; // [rsp+BCh] [rbp-44h]
  _WORD v28[24]; // [rsp+D0h] [rbp-30h] BYREF
  char v29; // [rsp+140h] [rbp+40h] BYREF

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
    EtwWrite(Microsoft_Windows_SleepStudyHandle, &SLEEPSTUDY_EVT_SCENARIO_BLOCKER_DATA, a2, 7u, &UserData);
  }
}
