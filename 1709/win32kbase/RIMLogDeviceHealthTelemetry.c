/*
 * XREFs of RIMLogDeviceHealthTelemetry @ 0x1C00A3F30
 * Callers:
 *     RIMEnumerateDevicesForTelemetry @ 0x1C00A3D60 (RIMEnumerateDevicesForTelemetry.c)
 *     RIMFillDeviceHealthInfo @ 0x1C01018F0 (RIMFillDeviceHealthInfo.c)
 * Callees:
 *     _TlgCreateWsz @ 0x1C000C4FC (_TlgCreateWsz.c)
 *     RimDeviceTypeToRimInputTypeString @ 0x1C000C538 (RimDeviceTypeToRimInputTypeString.c)
 *     _TlgKeywordOn @ 0x1C001C648 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C001C674 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 */

void RIMLogDeviceHealthTelemetry()
{
  const WCHAR *v0; // r9
  __int64 v1; // r10
  __int64 v2; // r10
  const wchar_t *v3; // rax
  __int64 v4; // r10
  unsigned int v5; // edx
  char v6; // al
  __int64 v7; // rdx
  __int64 v8; // rax
  int v9; // [rsp+30h] [rbp-D0h] BYREF
  int v10; // [rsp+34h] [rbp-CCh] BYREF
  int v11; // [rsp+38h] [rbp-C8h] BYREF
  BOOL v12; // [rsp+3Ch] [rbp-C4h] BYREF
  BOOL v13; // [rsp+40h] [rbp-C0h] BYREF
  int v14; // [rsp+44h] [rbp-BCh] BYREF
  int v15; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v16; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v17; // [rsp+58h] [rbp-A8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+90h] [rbp-70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+A0h] [rbp-60h] BYREF
  int *v22; // [rsp+B0h] [rbp-50h]
  __int64 v23; // [rsp+B8h] [rbp-48h]
  BOOL *v24; // [rsp+C0h] [rbp-40h]
  __int64 v25; // [rsp+C8h] [rbp-38h]
  BOOL *v26; // [rsp+D0h] [rbp-30h]
  __int64 v27; // [rsp+D8h] [rbp-28h]
  int *v28; // [rsp+E0h] [rbp-20h]
  __int64 v29; // [rsp+E8h] [rbp-18h]
  int *v30; // [rsp+F0h] [rbp-10h]
  __int64 v31; // [rsp+F8h] [rbp-8h]
  __int64 v32; // [rsp+100h] [rbp+0h]
  __int64 v33; // [rsp+108h] [rbp+8h]
  __int64 v34; // [rsp+110h] [rbp+10h]
  __int64 v35; // [rsp+118h] [rbp+18h]
  __int64 v36; // [rsp+120h] [rbp+20h]
  __int64 v37; // [rsp+128h] [rbp+28h]
  int *v38; // [rsp+130h] [rbp+30h]
  __int64 v39; // [rsp+138h] [rbp+38h]
  int *v40; // [rsp+140h] [rbp+40h]
  __int64 v41; // [rsp+148h] [rbp+48h]
  __int64 *v42; // [rsp+150h] [rbp+50h]
  __int64 v43; // [rsp+158h] [rbp+58h]
  __int64 *v44; // [rsp+160h] [rbp+60h]
  __int64 v45; // [rsp+168h] [rbp+68h]

  if ( dword_1C018D230 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C018D230, 0x400000000000uLL) )
  {
    TlgCreateWsz(&pDesc, v0);
    TlgCreateWsz(&v20, *(LPCWSTR *)(v1 + 216));
    v3 = RimDeviceTypeToRimInputTypeString(v2, *(unsigned __int8 *)(v2 + 48));
    TlgCreateWsz(&v21, v3);
    v5 = *(_DWORD *)(v4 + 184);
    v23 = 4LL;
    v11 = (v5 >> 12) & 1;
    v22 = &v11;
    v25 = 4LL;
    v27 = 4LL;
    v29 = 4LL;
    v12 = __CFSHR__(v5, 11);
    v24 = &v12;
    v13 = __CFSHR__(v5, 12);
    v26 = &v13;
    v14 = (unsigned __int8)(v5 & 0x40) >> 6;
    v28 = &v14;
    if ( __CFSHR__(v5, 12) || __CFSHR__(v5, 11) || (v9 = 1, (v5 & 0x80u) != 0) )
      v9 = 0;
    v30 = &v9;
    v31 = 4LL;
    v32 = v4 + 288;
    v34 = v4 + 272;
    v36 = v4 + 168;
    v38 = &v15;
    v6 = *(_BYTE *)(v4 + 200);
    v33 = 4LL;
    v35 = 4LL;
    v37 = 4LL;
    v15 = (v5 >> 25) & 1;
    v39 = 4LL;
    if ( v6 < 0 && (v8 = *(_QWORD *)(v4 + 472)) != 0 )
      v10 = -__CFSHR__(*(_DWORD *)(v8 + 276), 15);
    else
      v10 = 0;
    v41 = 4LL;
    v40 = &v10;
    v43 = 8LL;
    v7 = ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
         * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
       - *(_QWORD *)(v4 + 80);
    v42 = &v16;
    v16 = v7;
    v45 = 8LL;
    v17 = ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
          * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
        - *(_QWORD *)(v4 + 88);
    v44 = &v17;
    TlgWrite((TraceLoggingHProvider)&dword_1C018D230, &unk_1C016A494, 0LL, (LPCGUID)0xFFFFF78000000320LL, 0x11u, &pData);
  }
}
