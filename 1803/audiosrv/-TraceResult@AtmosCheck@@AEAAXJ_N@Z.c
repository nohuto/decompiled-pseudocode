/*
 * XREFs of ?TraceResult@AtmosCheck@@AEAAXJ_N@Z @ 0x180026400
 * Callers:
 *     ?IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ @ 0x180026B40 (-IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ.c)
 *     ?PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z @ 0x180029798 (-PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z.c)
 * Callees:
 *     _TlgCreateSz @ 0x1800059B0 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x180043BEC (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180043F18 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 */

void __fastcall AtmosCheck::TraceResult(AtmosCheck *this, unsigned int a2, char a3)
{
  const CHAR *v3; // r9
  __int64 v5; // r10
  LPCSTR v6; // r11
  __int64 v7; // r10
  const CHAR *v8; // r9
  __int64 v9; // r10
  __int64 v10; // r10
  LPCSTR v11; // r11
  __int64 v12; // r10
  LPCGUID v13; // r8
  int v14; // [rsp+38h] [rbp-D0h] BYREF
  int v15; // [rsp+3Ch] [rbp-CCh] BYREF
  _DWORD v16[2]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v17; // [rsp+48h] [rbp-C0h]
  void *v18; // [rsp+58h] [rbp-B0h] BYREF
  int v19; // [rsp+60h] [rbp-A8h]
  int v20; // [rsp+64h] [rbp-A4h]
  void *v21; // [rsp+68h] [rbp-A0h]
  __int64 v22; // [rsp+70h] [rbp-98h]
  int *v23; // [rsp+78h] [rbp-90h]
  __int64 v24; // [rsp+80h] [rbp-88h]
  char *v25; // [rsp+88h] [rbp-80h]
  __int64 v26; // [rsp+90h] [rbp-78h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+98h] [rbp-70h] BYREF
  char *v28; // [rsp+A8h] [rbp-60h]
  __int64 v29; // [rsp+B0h] [rbp-58h]
  char *v30; // [rsp+B8h] [rbp-50h]
  __int64 v31; // [rsp+C0h] [rbp-48h]
  char *v32; // [rsp+C8h] [rbp-40h]
  __int64 v33; // [rsp+D0h] [rbp-38h]
  struct _EVENT_DATA_DESCRIPTOR v34; // [rsp+D8h] [rbp-30h] BYREF
  GUID *v35; // [rsp+E8h] [rbp-20h]
  __int64 v36; // [rsp+F0h] [rbp-18h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+F8h] [rbp-10h] BYREF
  int *v38; // [rsp+118h] [rbp+10h]
  __int64 v39; // [rsp+120h] [rbp+18h]
  char *v40; // [rsp+128h] [rbp+20h]
  __int64 v41; // [rsp+130h] [rbp+28h]
  struct _EVENT_DATA_DESCRIPTOR v42; // [rsp+138h] [rbp+30h] BYREF
  char *v43; // [rsp+148h] [rbp+40h]
  __int64 v44; // [rsp+150h] [rbp+48h]
  char *v45; // [rsp+158h] [rbp+50h]
  __int64 v46; // [rsp+160h] [rbp+58h]
  char *v47; // [rsp+168h] [rbp+60h]
  __int64 v48; // [rsp+170h] [rbp+68h]
  struct _EVENT_DATA_DESCRIPTOR v49; // [rsp+178h] [rbp+70h] BYREF
  GUID *p_pRelatedActivityId; // [rsp+188h] [rbp+80h]
  __int64 v51; // [rsp+190h] [rbp+88h]
  GUID pRelatedActivityId; // [rsp+1C0h] [rbp+B8h] BYREF

  pRelatedActivityId.Data1 = a2;
  v3 = "None";
  switch ( *((_DWORD *)this + 36) )
  {
    case 1:
      v3 = "Initialization";
      break;
    case 2:
      v3 = "AppInstallation";
      break;
    case 3:
      v3 = "AppUninstallation";
      break;
    case 4:
      v3 = "TimerCallback";
      break;
    case 5:
      v3 = "ForceLicenseRefresh";
      break;
    case 6:
      v3 = "ClientEventFired";
      break;
  }
  if ( !*((_BYTE *)this + 73) || a3 )
  {
    if ( (unsigned int)dword_1801883F0 > 4 && TlgKeywordOn((TraceLoggingHProvider)&dword_1801883F0, 0x400000000000uLL) )
    {
      v15 = 3;
      v38 = &v15;
      v39 = v9;
      v40 = (char *)this + 128;
      v41 = 16LL;
      TlgCreateSz(&v42, v8);
      v44 = v10;
      v45 = (char *)this + 100;
      v43 = (char *)this + 96;
      v47 = (char *)this + 104;
      v46 = v10;
      v48 = v10;
      TlgCreateSz(&v49, v11);
      v51 = v12;
      p_pRelatedActivityId = &pRelatedActivityId;
      TlgWrite((TraceLoggingHProvider)&dword_1801883F0, &unk_180149B20, v13, &pRelatedActivityId, 0xAu, &pData);
    }
    *((_BYTE *)this + 73) = 1;
  }
  else if ( (unsigned int)dword_1801883F0 > 4 )
  {
    v14 = 3;
    v23 = &v14;
    v24 = 4LL;
    v25 = (char *)this + 128;
    v26 = 16LL;
    TlgCreateSz(&pDesc, v3);
    v29 = v5;
    v30 = (char *)this + 100;
    v28 = (char *)this + 96;
    v32 = (char *)this + 104;
    v31 = v5;
    v33 = v5;
    TlgCreateSz(&v34, v6);
    v36 = v7;
    v35 = &pRelatedActivityId;
    v16[1] = 4;
    v18 = off_1801883F8;
    v16[0] = ((unsigned int)&unk_180149BC1 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    v17 = 0LL;
    v19 = *(unsigned __int16 *)off_1801883F8;
    v21 = &unk_180149BCC;
    v20 = 2;
    v22 = 0x100000095LL;
    EtwEventWriteTransfer(qword_180188410, v16, 0LL, 0LL, 10, &v18, v14);
  }
}
