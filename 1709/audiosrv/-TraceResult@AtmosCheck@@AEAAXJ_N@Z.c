/*
 * XREFs of ?TraceResult@AtmosCheck@@AEAAXJ_N@Z @ 0x180001B70
 * Callers:
 *     ?IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ @ 0x1800020F0 (-IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ.c)
 *     ?PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z @ 0x180004CD0 (-PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001690 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x18002CF70 (_TlgCreateSz.c)
 *     _TlgKeywordOn @ 0x1800312F4 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 */

void __fastcall AtmosCheck::TraceResult(AtmosCheck *this, int a2, char a3)
{
  const char *v4; // r9
  int v5; // ecx
  const char *v6; // r10
  int v7; // ecx
  __int64 v8; // rax
  __int64 v9; // rcx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  const CHAR *v16; // r9
  LPCSTR v17; // r10
  LPCGUID v18; // r8
  LPCGUID v19; // r9
  __int64 v20; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v21[2]; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v22; // [rsp+40h] [rbp-C0h]
  void *v23; // [rsp+50h] [rbp-B0h] BYREF
  int v24; // [rsp+58h] [rbp-A8h]
  int v25; // [rsp+5Ch] [rbp-A4h]
  void *v26; // [rsp+60h] [rbp-A0h]
  int v27; // [rsp+68h] [rbp-98h]
  int v28; // [rsp+6Ch] [rbp-94h]
  __int64 *v29; // [rsp+70h] [rbp-90h]
  __int64 v30; // [rsp+78h] [rbp-88h]
  char *v31; // [rsp+80h] [rbp-80h]
  __int64 v32; // [rsp+88h] [rbp-78h]
  const char *v33; // [rsp+90h] [rbp-70h]
  int v34; // [rsp+98h] [rbp-68h]
  int v35; // [rsp+9Ch] [rbp-64h]
  char *v36; // [rsp+A0h] [rbp-60h]
  __int64 v37; // [rsp+A8h] [rbp-58h]
  char *v38; // [rsp+B0h] [rbp-50h]
  __int64 v39; // [rsp+B8h] [rbp-48h]
  char *v40; // [rsp+C0h] [rbp-40h]
  __int64 v41; // [rsp+C8h] [rbp-38h]
  const char *v42; // [rsp+D0h] [rbp-30h]
  int v43; // [rsp+D8h] [rbp-28h]
  int v44; // [rsp+DCh] [rbp-24h]
  int *v45; // [rsp+E0h] [rbp-20h]
  __int64 v46; // [rsp+E8h] [rbp-18h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+F0h] [rbp-10h] BYREF
  char *v48; // [rsp+110h] [rbp+10h]
  __int64 v49; // [rsp+118h] [rbp+18h]
  char *v50; // [rsp+120h] [rbp+20h]
  __int64 v51; // [rsp+128h] [rbp+28h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+130h] [rbp+30h] BYREF
  char *v53; // [rsp+140h] [rbp+40h]
  __int64 v54; // [rsp+148h] [rbp+48h]
  char *v55; // [rsp+150h] [rbp+50h]
  __int64 v56; // [rsp+158h] [rbp+58h]
  char *v57; // [rsp+160h] [rbp+60h]
  __int64 v58; // [rsp+168h] [rbp+68h]
  struct _EVENT_DATA_DESCRIPTOR v59; // [rsp+170h] [rbp+70h] BYREF
  int *v60; // [rsp+180h] [rbp+80h]
  __int64 v61; // [rsp+188h] [rbp+88h]
  int v62; // [rsp+1B8h] [rbp+B8h] BYREF

  v62 = a2;
  v4 = "None";
  v5 = *((_DWORD *)this + 30);
  v6 = "None";
  if ( v5 == 5 )
  {
    v4 = "ForceLicenseRefresh";
  }
  else
  {
    v11 = v5 - 1;
    if ( v11 )
    {
      v12 = v11 - 1;
      if ( v12 )
      {
        v13 = v12 - 1;
        if ( v13 )
        {
          if ( v13 == 1 )
            v4 = "TimerCallback";
        }
        else
        {
          v4 = "AppUninstallation";
        }
      }
      else
      {
        v4 = "AppInstallation";
      }
    }
    else
    {
      v4 = "Initialization";
    }
  }
  v7 = *((_DWORD *)this + 31);
  if ( v7 )
  {
    v14 = v7 - 1;
    if ( v14 )
    {
      v15 = v14 - 1;
      if ( v15 )
      {
        if ( v15 == 1 )
          v6 = "Skipped";
      }
      else
      {
        v6 = "Disabled";
      }
    }
    else
    {
      v6 = "OEMEnabled";
    }
  }
  else
  {
    v6 = "Enabled";
  }
  if ( !*((_BYTE *)this + 73) || a3 )
  {
    if ( (unsigned int)dword_18014A470 > 4 && TlgKeywordOn((TraceLoggingHProvider)&dword_18014A470, 0x400000000000uLL) )
    {
      HIDWORD(v20) = 3;
      v48 = (char *)&v20 + 4;
      v49 = 4LL;
      v50 = (char *)this + 104;
      v51 = 16LL;
      TlgCreateSz(&pDesc, v16);
      v54 = 4LL;
      v55 = (char *)this + 80;
      v53 = (char *)this + 76;
      v57 = (char *)this + 84;
      v56 = 4LL;
      v58 = 4LL;
      TlgCreateSz(&v59, v17);
      v61 = 4LL;
      v60 = &v62;
      TlgWrite((TraceLoggingHProvider)&dword_18014A470, &unk_1801128B4, v18, v19, 0xAu, &pData);
    }
    *((_BYTE *)this + 73) = 1;
  }
  else if ( (unsigned int)dword_18014A470 > 4 )
  {
    LODWORD(v20) = 3;
    v29 = &v20;
    v30 = 4LL;
    v31 = (char *)this + 104;
    v8 = -1LL;
    v9 = -1LL;
    v32 = 16LL;
    do
      ++v9;
    while ( v4[v9] );
    v33 = v4;
    v34 = v9 + 1;
    v36 = (char *)this + 76;
    v38 = (char *)this + 80;
    v40 = (char *)this + 84;
    v35 = 0;
    v37 = 4LL;
    v39 = 4LL;
    v41 = 4LL;
    while ( v6[++v8] != 0 )
      ;
    v42 = v6;
    v43 = v8 + 1;
    v45 = &v62;
    v44 = 0;
    v46 = 4LL;
    v21[1] = 4;
    v23 = off_18014A478;
    v21[0] = ((unsigned int)&unk_180112955 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    v22 = 0LL;
    v24 = *(unsigned __int16 *)off_18014A478;
    v26 = &unk_180112960;
    v25 = 2;
    v27 = 149;
    v28 = 1;
    ((void (__fastcall *)(__int64, _DWORD *, _QWORD, _QWORD, int, void **, __int64))EtwEventWriteTransfer)(
      qword_18014A490,
      v21,
      0LL,
      0LL,
      10,
      &v23,
      v20);
  }
}
