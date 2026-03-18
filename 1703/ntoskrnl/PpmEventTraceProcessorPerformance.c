/*
 * XREFs of PpmEventTraceProcessorPerformance @ 0x1406D3F34
 * Callers:
 *     PpmEventTraceControlCallback @ 0x1405D6570 (PpmEventTraceControlCallback.c)
 * Callees:
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140094650 (EtwWrite.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     PpmEventHiddenProcessorPerformance @ 0x14041DA74 (PpmEventHiddenProcessorPerformance.c)
 */

void __fastcall PpmEventTraceProcessorPerformance(__int64 a1)
{
  REGHANDLE v2; // rsi
  __int64 v3; // rcx
  __int64 v4; // rbx
  unsigned int i; // esi
  __int64 v6; // rcx
  __int16 v7; // [rsp+30h] [rbp-D0h] BYREF
  int v8; // [rsp+34h] [rbp-CCh] BYREF
  int v9; // [rsp+38h] [rbp-C8h] BYREF
  int v10; // [rsp+3Ch] [rbp-C4h] BYREF
  int v11; // [rsp+40h] [rbp-C0h] BYREF
  int v12; // [rsp+44h] [rbp-BCh] BYREF
  int v13; // [rsp+48h] [rbp-B8h] BYREF
  int v14; // [rsp+4Ch] [rbp-B4h] BYREF
  BOOL v15; // [rsp+50h] [rbp-B0h] BYREF
  int v16; // [rsp+54h] [rbp-ACh] BYREF
  int v17; // [rsp+58h] [rbp-A8h] BYREF
  int v18; // [rsp+5Ch] [rbp-A4h] BYREF
  int v19; // [rsp+60h] [rbp-A0h] BYREF
  int v20; // [rsp+64h] [rbp-9Ch] BYREF
  int v21; // [rsp+68h] [rbp-98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp-90h] BYREF
  __int64 v23; // [rsp+80h] [rbp-80h]
  __int64 v24; // [rsp+88h] [rbp-78h]
  int *v25; // [rsp+90h] [rbp-70h]
  __int64 v26; // [rsp+98h] [rbp-68h]
  int *v27; // [rsp+A0h] [rbp-60h]
  __int64 v28; // [rsp+A8h] [rbp-58h]
  int *v29; // [rsp+B0h] [rbp-50h]
  __int64 v30; // [rsp+B8h] [rbp-48h]
  int *v31; // [rsp+C0h] [rbp-40h]
  __int64 v32; // [rsp+C8h] [rbp-38h]
  int *v33; // [rsp+D0h] [rbp-30h]
  __int64 v34; // [rsp+D8h] [rbp-28h]
  int *v35; // [rsp+E0h] [rbp-20h]
  __int64 v36; // [rsp+E8h] [rbp-18h]
  int *v37; // [rsp+F0h] [rbp-10h]
  __int64 v38; // [rsp+F8h] [rbp-8h]
  int *v39; // [rsp+100h] [rbp+0h]
  __int64 v40; // [rsp+108h] [rbp+8h]
  int *v41; // [rsp+110h] [rbp+10h]
  __int64 v42; // [rsp+118h] [rbp+18h]
  __int64 v43; // [rsp+120h] [rbp+20h]
  __int64 v44; // [rsp+128h] [rbp+28h]
  __int64 v45; // [rsp+130h] [rbp+30h]
  __int64 v46; // [rsp+138h] [rbp+38h]
  BOOL *v47; // [rsp+140h] [rbp+40h]
  __int64 v48; // [rsp+148h] [rbp+48h]
  int *v49; // [rsp+150h] [rbp+50h]
  __int64 v50; // [rsp+158h] [rbp+58h]
  int *v51; // [rsp+160h] [rbp+60h]
  __int64 v52; // [rsp+168h] [rbp+68h]
  int *v53; // [rsp+170h] [rbp+70h]
  __int64 v54; // [rsp+178h] [rbp+78h]
  int *v55; // [rsp+180h] [rbp+80h]
  __int64 v56; // [rsp+188h] [rbp+88h]

  if ( PpmEtwRegistered )
  {
    v2 = PpmEtwHandle;
    if ( EtwEventEnabled(PpmEtwHandle, &PPM_ETW_CURRENT_PERF_RUNDOWN) )
    {
      v3 = *(_QWORD *)(a1 + 24312);
      v4 = *(_QWORD *)(a1 + 24304);
      v20 = *(unsigned __int8 *)(a1 + 24354);
      v21 = *(_DWORD *)(a1 + 24356);
      if ( v3 )
      {
        v8 = *(_DWORD *)(v3 + 24);
        v9 = *(_DWORD *)(v3 + 28);
        v10 = *(_DWORD *)(v3 + 96);
        v12 = *(_DWORD *)(v3 + 104);
        v13 = *(_DWORD *)(v3 + 108);
        v14 = *(_DWORD *)(v3 + 112);
        v16 = *(_DWORD *)(v3 + 116);
        v17 = *(_DWORD *)(v3 + 120);
        v18 = *(unsigned __int8 *)(v3 + 49);
      }
      else
      {
        v8 = 100;
        v9 = 100;
        v10 = 100;
        v12 = 100;
        v13 = 100;
        v14 = 100;
        v18 = 0;
        v16 = 0;
        v17 = 0;
      }
      if ( v4 )
      {
        v11 = *(_DWORD *)(v4 + 316);
        v15 = *(_BYTE *)(v4 + 359) != 0;
        v19 = *(unsigned __int8 *)(v4 + 352);
      }
      else
      {
        v11 = *(_DWORD *)(a1 + 68);
        v15 = 0;
        v19 = 100;
      }
      v7 = *(unsigned __int8 *)(a1 + 208);
      *(_QWORD *)&UserData.Size = 2LL;
      UserData.Ptr = (ULONGLONG)&v7;
      v24 = 1LL;
      v23 = a1 + 209;
      v26 = 4LL;
      v25 = &v20;
      v27 = &v8;
      v29 = &v9;
      v31 = &v10;
      v33 = &v11;
      v35 = &v12;
      v37 = &v13;
      v39 = &v14;
      v41 = &v21;
      v43 = a1 + 23986;
      v45 = a1 + 23987;
      v47 = &v15;
      v49 = &v16;
      v51 = &v17;
      v53 = &v18;
      v55 = &v19;
      v28 = 4LL;
      v30 = 4LL;
      v32 = 4LL;
      v34 = 4LL;
      v36 = 4LL;
      v38 = 4LL;
      v40 = 4LL;
      v42 = 4LL;
      v44 = 1LL;
      v46 = 1LL;
      v48 = 4LL;
      v50 = 4LL;
      v52 = 4LL;
      v54 = 4LL;
      v56 = 4LL;
      EtwWrite(v2, &PPM_ETW_CURRENT_PERF_RUNDOWN, 0LL, 0x12u, &UserData);
      if ( v4 )
      {
        if ( *(_QWORD *)(v4 + 16) == a1 )
        {
          for ( i = 0; i < *(_DWORD *)(v4 + 200); ++i )
          {
            v6 = *(_QWORD *)(v4 + 208) + 152LL * i;
            if ( *(_BYTE *)(v6 + 16) )
              PpmEventHiddenProcessorPerformance(a1, *(_DWORD *)(v6 + 20), *(_DWORD *)(v6 + 24), *(_DWORD *)(v6 + 28));
          }
        }
      }
    }
  }
}
