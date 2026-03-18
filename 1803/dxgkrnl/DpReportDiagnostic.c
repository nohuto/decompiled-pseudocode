/*
 * XREFs of DpReportDiagnostic @ 0x1C0038EE0
 * Callers:
 *     <none>
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x1C0007C58 (TraceLoggingProviderEnabled.c)
 *     _TlgKeywordOn @ 0x1C0007C84 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0007E1C (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 */

__int64 __fastcall DpReportDiagnostic(__int64 a1, unsigned int *a2)
{
  unsigned int v3; // edi
  _QWORD *v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  unsigned int v9; // edx
  _QWORD *v10; // rax
  unsigned int v11; // esi
  BOOLEAN v12; // al
  ULONGLONG v13; // r10
  unsigned int v14; // r11d
  __int64 v15; // rdx
  const GUID *v16; // r9
  char v17; // r10
  __int64 v18; // r11
  __int64 v19; // rdx
  const GUID *v20; // r9
  char v21; // r10
  __int64 v22; // r11
  BOOLEAN v23; // al
  unsigned int v24; // r11d
  const GUID *v25; // r9
  __int64 v26; // r10
  __int64 v27; // r11
  const GUID *v28; // r9
  __int64 v29; // r10
  __int64 v30; // r11
  char v32; // [rsp+38h] [rbp-D0h] BYREF
  char v33; // [rsp+39h] [rbp-CFh] BYREF
  char v34; // [rsp+3Ah] [rbp-CEh] BYREF
  char v35; // [rsp+3Bh] [rbp-CDh] BYREF
  char v36; // [rsp+3Ch] [rbp-CCh] BYREF
  char v37; // [rsp+3Dh] [rbp-CBh] BYREF
  char v38; // [rsp+3Eh] [rbp-CAh] BYREF
  char v39; // [rsp+3Fh] [rbp-C9h] BYREF
  _BYTE v40[4]; // [rsp+40h] [rbp-C8h] BYREF
  int v41; // [rsp+44h] [rbp-C4h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-C0h] BYREF
  int *v43; // [rsp+68h] [rbp-A0h]
  __int64 v44; // [rsp+70h] [rbp-98h]
  unsigned int *v45; // [rsp+78h] [rbp-90h]
  __int64 v46; // [rsp+80h] [rbp-88h]
  unsigned int *v47; // [rsp+88h] [rbp-80h]
  __int64 v48; // [rsp+90h] [rbp-78h]
  char *v49; // [rsp+98h] [rbp-70h]
  __int64 v50; // [rsp+A0h] [rbp-68h]
  char *v51; // [rsp+A8h] [rbp-60h]
  __int64 v52; // [rsp+B0h] [rbp-58h]
  char *v53; // [rsp+B8h] [rbp-50h]
  __int64 v54; // [rsp+C0h] [rbp-48h]
  char *v55; // [rsp+C8h] [rbp-40h]
  __int64 v56; // [rsp+D0h] [rbp-38h]
  char *v57; // [rsp+D8h] [rbp-30h]
  __int64 v58; // [rsp+E0h] [rbp-28h]
  char *v59; // [rsp+E8h] [rbp-20h]
  __int64 v60; // [rsp+F0h] [rbp-18h]
  char *v61; // [rsp+F8h] [rbp-10h]
  __int64 v62; // [rsp+100h] [rbp-8h]
  char *v63; // [rsp+108h] [rbp+0h]
  __int64 v64; // [rsp+110h] [rbp+8h]
  char *v65; // [rsp+118h] [rbp+10h]
  __int64 v66; // [rsp+120h] [rbp+18h]

  v3 = -1073741811;
  if ( KeGetCurrentIrql() > 2u )
  {
    v4 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1);
    v4[3] = 275LL;
    v4[4] = 21LL;
    v4[5] = -1073741811LL;
    WdLogEvent5_WdCriticalError(v4);
    return v3;
  }
  if ( !a1 )
  {
    v5 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v5 + 24) = 1LL;
LABEL_45:
    v8 = v5;
    goto LABEL_46;
  }
  v6 = *(_QWORD *)(a1 + 64);
  if ( !v6 || *(_DWORD *)(v6 + 16) != 1953656900 || *(_DWORD *)(v6 + 20) != 2 )
  {
    v5 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v5 + 24) = 2LL;
    goto LABEL_45;
  }
  v7 = *a2;
  if ( !(_DWORD)v7 )
  {
    v5 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v5 + 24) = 4LL;
    goto LABEL_45;
  }
  if ( (((_DWORD)v7 - 1) & (unsigned int)v7) != 0 )
  {
    v8 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v8 + 24) = *a2;
    *(_QWORD *)(v8 + 32) = 5LL;
LABEL_46:
    WdLogEvent5_WdError(v8);
    return v3;
  }
  if ( (v7 & 1) == 0 )
  {
    v8 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v8 + 24) = *a2;
    *(_QWORD *)(v8 + 32) = 6LL;
    goto LABEL_46;
  }
  v9 = a2[1];
  if ( !v9 )
  {
    v5 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v5 + 24) = 7LL;
    goto LABEL_45;
  }
  if ( ((v9 - 1) & v9) != 0 )
  {
    v8 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v8 + 24) = a2[1];
    *(_QWORD *)(v8 + 32) = 8LL;
    goto LABEL_46;
  }
  if ( v9 >= 4 )
  {
    v8 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v8 + 24) = a2[1];
    *(_QWORD *)(v8 + 32) = 9LL;
    goto LABEL_46;
  }
  if ( (unsigned __int16)a2[2] < 0x18u )
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdError(v7);
    v10[3] = (unsigned __int16)a2[2];
    v8 = (__int64)v10;
    v10[4] = 24LL;
    v10[5] = 10LL;
    goto LABEL_46;
  }
  v11 = a2[5];
  v41 = 1;
  if ( v11 >= 0x80 )
  {
    v8 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v8 + 24) = (unsigned __int64)a2[5] >> 7;
    *(_QWORD *)(v8 + 32) = 11LL;
    goto LABEL_46;
  }
  if ( (v9 & 1) != 0 )
  {
    v12 = TraceLoggingProviderEnabled((TraceLoggingHProvider)&dword_1C0079B30, 4u, 1uLL);
    if ( v11 )
    {
      if ( v12 && dword_1C0079B30 > v14 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C0079B30, v13) )
      {
        v44 = v22;
        v43 = &v41;
        v45 = a2 + 3;
        v47 = a2 + 4;
        v49 = &v33;
        v51 = &v32;
        v46 = v22;
        v36 = v21 & (v11 >> 4);
        v53 = &v36;
        v48 = v22;
        v37 = v21 & (v11 >> 3);
        v55 = &v37;
        v33 = v21;
        v38 = v21 & (v11 >> 1);
        v57 = &v38;
        v50 = v19;
        v39 = v21 & (v11 >> 6);
        v59 = &v39;
        v32 = v21;
        v40[0] = v21 & v11;
        v61 = v40;
        v34 = v21 & (v11 >> 5);
        v52 = v19;
        v63 = &v34;
        v65 = &v35;
        v54 = v19;
        v56 = v19;
        v58 = v19;
        v60 = v19;
        v62 = v19;
        v64 = v19;
        v35 = v21 & (v11 >> 2);
        v66 = v19;
        TlgWrite((TraceLoggingHProvider)&dword_1C0079B30, &unk_1C00590BE, 0LL, v20, 0xEu, &pData);
      }
    }
    else if ( v12 && dword_1C0079B30 > v14 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C0079B30, v13) )
    {
      v44 = v18;
      v43 = &v41;
      v45 = a2 + 3;
      v47 = a2 + 4;
      v49 = &v32;
      v51 = &v33;
      v46 = v18;
      v48 = v18;
      v32 = v17;
      v50 = v15;
      v33 = 0;
      v52 = v15;
      TlgWrite((TraceLoggingHProvider)&dword_1C0079B30, &unk_1C0059173, 0LL, v16, 7u, &pData);
    }
  }
  else
  {
    v23 = TraceLoggingProviderEnabled((TraceLoggingHProvider)&dword_1C0079B30, 4u, 2uLL);
    if ( v11 )
    {
      if ( v23 && dword_1C0079B30 > v24 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C0079B30, 2uLL) )
      {
        v44 = v30;
        v43 = &v41;
        v45 = a2 + 3;
        v47 = a2 + 4;
        v49 = &v35;
        v51 = &v34;
        v46 = v30;
        v40[0] = v29 & (v11 >> 4);
        v53 = v40;
        v48 = v30;
        v39 = v29 & (v11 >> 3);
        v55 = &v39;
        v35 = 0;
        v38 = v29 & (v11 >> 1);
        v57 = &v38;
        v50 = v29;
        v37 = v29 & (v11 >> 6);
        v59 = &v37;
        v34 = v29;
        v36 = v29 & v11;
        v61 = &v36;
        v33 = v29 & (v11 >> 5);
        v52 = v29;
        v63 = &v33;
        v65 = &v32;
        v54 = v29;
        v56 = v29;
        v58 = v29;
        v60 = v29;
        v62 = v29;
        v64 = v29;
        v32 = v29 & (v11 >> 2);
        v66 = v29;
        TlgWrite((TraceLoggingHProvider)&dword_1C0079B30, &unk_1C0058FC1, 0LL, v28, 0xEu, &pData);
      }
    }
    else if ( v23 && dword_1C0079B30 > v24 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C0079B30, 2uLL) )
    {
      v44 = v27;
      v43 = &v41;
      v45 = a2 + 3;
      v47 = a2 + 4;
      v49 = &v35;
      v51 = &v34;
      v46 = v27;
      v48 = v27;
      v35 = 0;
      v50 = v26;
      v34 = 0;
      v52 = v26;
      TlgWrite((TraceLoggingHProvider)&dword_1C0079B30, &unk_1C0059076, 0LL, v25, 7u, &pData);
    }
  }
  return 0;
}
