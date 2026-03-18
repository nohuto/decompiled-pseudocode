/*
 * XREFs of ?WriteDxgDiagnosticsEvent_OUTPUTDUPL@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0037F70
 * Callers:
 *     ?WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C000C080 (-WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x1C000C2C8 (TraceLoggingProviderEnabled.c)
 *     _TlgKeywordOn @ 0x1C000C2F8 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C00103C8 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 */

void __fastcall WriteDxgDiagnosticsEvent_OUTPUTDUPL(struct _DXGK_DIAG_HEADER *a1)
{
  __int64 v1; // r10
  unsigned int v2; // r11d
  int v3; // ecx
  int v4; // ecx
  const GUID *v5; // r9
  int *v6; // r10
  __int64 v7; // r11
  const GUID *v8; // r9
  int *v9; // r10
  __int64 v10; // r11
  const GUID *v11; // r9
  int *v12; // r10
  __int64 v13; // r11
  _WORD v14[2]; // [rsp+30h] [rbp-D0h] BYREF
  int v15; // [rsp+34h] [rbp-CCh] BYREF
  int v16; // [rsp+38h] [rbp-C8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-C0h] BYREF
  void *v18; // [rsp+60h] [rbp-A0h]
  __int64 v19; // [rsp+68h] [rbp-98h]
  int *v20; // [rsp+70h] [rbp-90h]
  __int64 v21; // [rsp+78h] [rbp-88h]
  int *v22; // [rsp+80h] [rbp-80h]
  __int64 v23; // [rsp+88h] [rbp-78h]
  int *v24; // [rsp+90h] [rbp-70h]
  __int64 v25; // [rsp+98h] [rbp-68h]
  int *v26; // [rsp+A0h] [rbp-60h]
  __int64 v27; // [rsp+A8h] [rbp-58h]
  int *v28; // [rsp+B0h] [rbp-50h]
  __int64 v29; // [rsp+B8h] [rbp-48h]
  int *v30; // [rsp+C0h] [rbp-40h]
  __int64 v31; // [rsp+C8h] [rbp-38h]
  int *v32; // [rsp+D0h] [rbp-30h]
  __int64 v33; // [rsp+D8h] [rbp-28h]
  _WORD *v34; // [rsp+E0h] [rbp-20h]
  __int64 v35; // [rsp+E8h] [rbp-18h]
  int *v36; // [rsp+F0h] [rbp-10h]
  int v37; // [rsp+F8h] [rbp-8h]
  int v38; // [rsp+FCh] [rbp-4h]

  if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&hProvider, 4u, 0x200000000200uLL) )
  {
    v3 = *(_DWORD *)(v1 + 48);
    if ( v3 )
    {
      v4 = v3 - 1;
      if ( v4 )
      {
        if ( v4 == 10 && hProvider > v2 )
        {
          if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000200uLL) )
          {
            v19 = v7;
            v18 = &unk_1C00541E4;
            v21 = v7;
            v20 = v6 + 10;
            v22 = v6 + 8;
            v15 = *v6;
            v24 = &v15;
            v26 = v6 + 11;
            v28 = v6 + 13;
            v30 = v6 + 14;
            v32 = v6 + 15;
            v14[0] = *((_WORD *)v6 + 2);
            v37 = v14[0];
            v23 = 8LL;
            v25 = v7;
            v27 = v7;
            v29 = v7;
            v31 = v7;
            v33 = v7;
            v34 = v14;
            v35 = 2LL;
            v36 = v6;
            v38 = (int)v5;
            TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C004EA98, 0LL, v5, 0xCu, &pData);
          }
        }
      }
      else if ( hProvider > v2 && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000200uLL) )
      {
        v19 = v10;
        v18 = &unk_1C00541E4;
        v21 = v10;
        v20 = v9 + 10;
        v22 = v9 + 8;
        v15 = *v9;
        v24 = &v15;
        v26 = v9 + 11;
        v28 = v9 + 13;
        v30 = v9 + 14;
        v16 = v9[15];
        v32 = &v16;
        v14[0] = *((_WORD *)v9 + 2);
        v37 = v14[0];
        v23 = 8LL;
        v25 = v10;
        v27 = v10;
        v29 = v10;
        v31 = v10;
        v33 = v10;
        v34 = v14;
        v35 = 2LL;
        v36 = v9;
        v38 = (int)v8;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C004EA11, 0LL, v8, 0xCu, &pData);
      }
    }
    else if ( hProvider > v2 && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000200uLL) )
    {
      v19 = v13;
      v18 = &unk_1C00541E4;
      v21 = v13;
      v20 = v12 + 10;
      v22 = v12 + 8;
      v16 = *v12;
      v24 = &v16;
      v26 = v12 + 11;
      v28 = v12 + 13;
      v30 = v12 + 14;
      v32 = v12 + 15;
      v14[0] = *((_WORD *)v12 + 2);
      v37 = v14[0];
      v23 = 8LL;
      v25 = v13;
      v27 = v13;
      v29 = v13;
      v31 = v13;
      v33 = v13;
      v34 = v14;
      v35 = 2LL;
      v36 = v12;
      v38 = (int)v11;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C004EB1F, 0LL, v11, 0xCu, &pData);
    }
  }
}
