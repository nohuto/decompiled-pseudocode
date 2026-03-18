/*
 * XREFs of ?WriteDxgDiagnosticsEvent_CODE_POINT_ADAPTERLUID@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C000C1F8
 * Callers:
 *     ?WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C000C080 (-WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x1C000C2C8 (TraceLoggingProviderEnabled.c)
 *     _TlgKeywordOn @ 0x1C000C2F8 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C00103C8 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 */

void __fastcall WriteDxgDiagnosticsEvent_CODE_POINT_ADAPTERLUID(struct _DXGK_DIAG_HEADER *a1)
{
  int v1; // r11d
  unsigned int v3; // r10d
  unsigned int v4; // r10d
  unsigned int v5; // r10d
  const GUID *v6; // r9
  __int64 v7; // r10
  int v8; // r11d
  const GUID *v9; // r9
  __int64 v10; // r10
  int v11; // r11d
  const GUID *v12; // r9
  __int64 v13; // r10
  int v14; // r11d
  _WORD v15[2]; // [rsp+30h] [rbp-D0h] BYREF
  int v16; // [rsp+34h] [rbp-CCh] BYREF
  int v17; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v18[2]; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-B0h] BYREF
  void *v20; // [rsp+70h] [rbp-90h]
  __int64 v21; // [rsp+78h] [rbp-88h]
  char *v22; // [rsp+80h] [rbp-80h]
  __int64 v23; // [rsp+88h] [rbp-78h]
  char *v24; // [rsp+90h] [rbp-70h]
  __int64 v25; // [rsp+98h] [rbp-68h]
  int *v26; // [rsp+A0h] [rbp-60h]
  __int64 v27; // [rsp+A8h] [rbp-58h]
  char *v28; // [rsp+B0h] [rbp-50h]
  __int64 v29; // [rsp+B8h] [rbp-48h]
  _QWORD *v30; // [rsp+C0h] [rbp-40h]
  __int64 v31; // [rsp+C8h] [rbp-38h]
  int *v32; // [rsp+D0h] [rbp-30h]
  __int64 v33; // [rsp+D8h] [rbp-28h]
  char *v34; // [rsp+E0h] [rbp-20h]
  __int64 v35; // [rsp+E8h] [rbp-18h]
  char *v36; // [rsp+F0h] [rbp-10h]
  __int64 v37; // [rsp+F8h] [rbp-8h]
  char *v38; // [rsp+100h] [rbp+0h]
  __int64 v39; // [rsp+108h] [rbp+8h]
  _WORD *v40; // [rsp+110h] [rbp+10h]
  __int64 v41; // [rsp+118h] [rbp+18h]
  struct _DXGK_DIAG_HEADER *v42; // [rsp+120h] [rbp+20h]
  int v43; // [rsp+128h] [rbp+28h]
  int v44; // [rsp+12Ch] [rbp+2Ch]

  v1 = *((_DWORD *)a1 + 12);
  if ( v1 < 32 )
    goto LABEL_23;
  if ( v1 <= 33 )
    goto LABEL_3;
  if ( v1 <= 36 )
    goto LABEL_23;
  if ( v1 <= 38 || v1 == 60 )
  {
LABEL_3:
    if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&hProvider, 4u, 0x10uLL) && hProvider > v3 )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x10uLL) )
      {
        v21 = v10;
        v20 = &unk_1C00541E4;
        v23 = v10;
        v22 = (char *)a1 + 40;
        v24 = (char *)a1 + 32;
        v17 = *(_DWORD *)a1;
        v26 = &v17;
        v28 = (char *)a1 + 44;
        v18[0] = *((_QWORD *)a1 + 8);
        v30 = v18;
        v32 = &v16;
        v34 = (char *)a1 + 52;
        v36 = (char *)a1 + 56;
        v38 = (char *)a1 + 60;
        v15[0] = *((_WORD *)a1 + 2);
        v43 = v15[0];
        v25 = 8LL;
        v27 = v10;
        v29 = v10;
        v31 = 8LL;
        v16 = v11;
        v33 = v10;
        v35 = v10;
        v37 = v10;
        v39 = v10;
        v40 = v15;
        v41 = 2LL;
        v42 = a1;
        v44 = (int)v9;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C004FC0D, 0LL, v9, 0xEu, &pData);
      }
    }
    return;
  }
  if ( v1 == 88 )
  {
    if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&hProvider, 4u, 0x600000000010uLL)
      && hProvider > v5
      && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x600000000010uLL) )
    {
      v21 = v7;
      v20 = &unk_1C00541E4;
      v23 = v7;
      v22 = (char *)a1 + 40;
      v24 = (char *)a1 + 32;
      v16 = *(_DWORD *)a1;
      v26 = &v16;
      v28 = (char *)a1 + 44;
      v18[0] = *((_QWORD *)a1 + 8);
      v30 = v18;
      v32 = &v17;
      v34 = (char *)a1 + 52;
      v36 = (char *)a1 + 56;
      v38 = (char *)a1 + 60;
      v15[0] = *((_WORD *)a1 + 2);
      v43 = v15[0];
      v25 = 8LL;
      v27 = v7;
      v29 = v7;
      v31 = 8LL;
      v17 = v8;
      v33 = v7;
      v35 = v7;
      v37 = v7;
      v39 = v7;
      v40 = v15;
      v41 = 2LL;
      v42 = a1;
      v44 = (int)v6;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C004FB86, 0LL, v6, 0xEu, &pData);
    }
  }
  else
  {
LABEL_23:
    if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&hProvider, 4u, 0x200000000010uLL)
      && hProvider > v4
      && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000010uLL) )
    {
      v21 = v13;
      v20 = &unk_1C00541E4;
      v23 = v13;
      v22 = (char *)a1 + 40;
      v24 = (char *)a1 + 32;
      v17 = *(_DWORD *)a1;
      v26 = &v17;
      v28 = (char *)a1 + 44;
      v18[0] = *((_QWORD *)a1 + 8);
      v30 = v18;
      v32 = &v16;
      v34 = (char *)a1 + 52;
      v36 = (char *)a1 + 56;
      v38 = (char *)a1 + 60;
      v15[0] = *((_WORD *)a1 + 2);
      v43 = v15[0];
      v25 = 8LL;
      v27 = v13;
      v29 = v13;
      v31 = 8LL;
      v16 = v14;
      v33 = v13;
      v35 = v13;
      v37 = v13;
      v39 = v13;
      v40 = v15;
      v41 = 2LL;
      v42 = a1;
      v44 = (int)v12;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C004FAFF, 0LL, v12, 0xEu, &pData);
    }
  }
}
