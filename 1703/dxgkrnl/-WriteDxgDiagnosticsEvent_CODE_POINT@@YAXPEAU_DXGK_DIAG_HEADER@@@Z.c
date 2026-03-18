/*
 * XREFs of ?WriteDxgDiagnosticsEvent_CODE_POINT@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C000BC70
 * Callers:
 *     ?WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C000C080 (-WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x1C000C2C8 (TraceLoggingProviderEnabled.c)
 *     _TlgKeywordOn @ 0x1C000C2F8 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C00103C8 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 */

void __fastcall WriteDxgDiagnosticsEvent_CODE_POINT(struct _DXGK_DIAG_HEADER *a1)
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
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-C0h] BYREF
  void *v19; // [rsp+60h] [rbp-A0h]
  __int64 v20; // [rsp+68h] [rbp-98h]
  char *v21; // [rsp+70h] [rbp-90h]
  __int64 v22; // [rsp+78h] [rbp-88h]
  char *v23; // [rsp+80h] [rbp-80h]
  __int64 v24; // [rsp+88h] [rbp-78h]
  int *v25; // [rsp+90h] [rbp-70h]
  __int64 v26; // [rsp+98h] [rbp-68h]
  char *v27; // [rsp+A0h] [rbp-60h]
  __int64 v28; // [rsp+A8h] [rbp-58h]
  int *v29; // [rsp+B0h] [rbp-50h]
  __int64 v30; // [rsp+B8h] [rbp-48h]
  char *v31; // [rsp+C0h] [rbp-40h]
  __int64 v32; // [rsp+C8h] [rbp-38h]
  char *v33; // [rsp+D0h] [rbp-30h]
  __int64 v34; // [rsp+D8h] [rbp-28h]
  char *v35; // [rsp+E0h] [rbp-20h]
  __int64 v36; // [rsp+E8h] [rbp-18h]
  _WORD *v37; // [rsp+F0h] [rbp-10h]
  __int64 v38; // [rsp+F8h] [rbp-8h]
  struct _DXGK_DIAG_HEADER *v39; // [rsp+100h] [rbp+0h]
  int v40; // [rsp+108h] [rbp+8h]
  int v41; // [rsp+10Ch] [rbp+Ch]

  v1 = *((_DWORD *)a1 + 12);
  if ( v1 < 32 )
    goto LABEL_7;
  if ( v1 <= 33 )
    goto LABEL_9;
  if ( v1 <= 36 )
  {
LABEL_7:
    if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&hProvider, 4u, 0x200000000010uLL) && hProvider > v3 )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000010uLL) )
      {
        v20 = v13;
        v19 = &unk_1C00541E4;
        v22 = v13;
        v21 = (char *)a1 + 40;
        v23 = (char *)a1 + 32;
        v17 = *(_DWORD *)a1;
        v25 = &v17;
        v27 = (char *)a1 + 44;
        v29 = &v16;
        v31 = (char *)a1 + 52;
        v33 = (char *)a1 + 56;
        v35 = (char *)a1 + 60;
        v15[0] = *((_WORD *)a1 + 2);
        v40 = v15[0];
        v24 = 8LL;
        v26 = v13;
        v28 = v13;
        v16 = v14;
        v30 = v13;
        v32 = v13;
        v34 = v13;
        v36 = v13;
        v37 = v15;
        v38 = 2LL;
        v39 = a1;
        v41 = (int)v12;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C004FC94, 0LL, v12, 0xDu, &pData);
      }
    }
    return;
  }
  if ( v1 == 60 || v1 <= 38 )
  {
LABEL_9:
    if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&hProvider, 4u, 0x10uLL)
      && hProvider > v4
      && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x10uLL) )
    {
      v20 = v10;
      v19 = &unk_1C00541E4;
      v22 = v10;
      v21 = (char *)a1 + 40;
      v23 = (char *)a1 + 32;
      v17 = *(_DWORD *)a1;
      v25 = &v17;
      v27 = (char *)a1 + 44;
      v29 = &v16;
      v31 = (char *)a1 + 52;
      v33 = (char *)a1 + 56;
      v35 = (char *)a1 + 60;
      v15[0] = *((_WORD *)a1 + 2);
      v40 = v15[0];
      v24 = 8LL;
      v26 = v10;
      v28 = v10;
      v16 = v11;
      v30 = v10;
      v32 = v10;
      v34 = v10;
      v36 = v10;
      v37 = v15;
      v38 = 2LL;
      v39 = a1;
      v41 = (int)v9;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C004FD88, 0LL, v9, 0xDu, &pData);
    }
    return;
  }
  if ( v1 != 88 )
    goto LABEL_7;
  if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&hProvider, 4u, 0x600000000010uLL)
    && hProvider > v5
    && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x600000000010uLL) )
  {
    v20 = v7;
    v19 = &unk_1C00541E4;
    v22 = v7;
    v21 = (char *)a1 + 40;
    v23 = (char *)a1 + 32;
    v16 = *(_DWORD *)a1;
    v25 = &v16;
    v27 = (char *)a1 + 44;
    v29 = &v17;
    v31 = (char *)a1 + 52;
    v33 = (char *)a1 + 56;
    v35 = (char *)a1 + 60;
    v15[0] = *((_WORD *)a1 + 2);
    v40 = v15[0];
    v24 = 8LL;
    v26 = v7;
    v28 = v7;
    v17 = v8;
    v30 = v7;
    v32 = v7;
    v34 = v7;
    v36 = v7;
    v37 = v15;
    v38 = 2LL;
    v39 = a1;
    v41 = (int)v6;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C004FD0E, 0LL, v6, 0xDu, &pData);
  }
}
