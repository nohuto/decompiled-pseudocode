/*
 * XREFs of EtwpWriteAppStateChangeSummary @ 0x1404FE504
 * Callers:
 *     EtwTraceProcess @ 0x1404DBA5C (EtwTraceProcess.c)
 *     EtwTraceAppStateChange @ 0x1404FE234 (EtwTraceAppStateChange.c)
 * Callees:
 *     PsIsHostSilo @ 0x1400859F0 (PsIsHostSilo.c)
 *     PsGetProcessServerSilo @ 0x1400893E0 (PsGetProcessServerSilo.c)
 *     TraceLoggingProviderEnabled @ 0x1400BA300 (TraceLoggingProviderEnabled.c)
 *     _TlgKeywordOn @ 0x1400BA32C (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x1400BA358 (_TlgCreateWsz.c)
 *     _TlgWriteAgg @ 0x1400BA394 (_TlgWriteAgg.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

char __fastcall EtwpWriteAppStateChangeSummary(
        __int64 a1,
        char *a2,
        unsigned int *a3,
        __int64 a4,
        int *a5,
        unsigned __int16 *a6)
{
  __int64 v10; // r10
  __int64 ProcessServerSilo; // rsi
  bool v12; // zf
  __int64 *v13; // rax
  __int64 v14; // rax
  unsigned __int16 *v15; // r9
  char v16; // cl
  unsigned int v17; // eax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // r11
  __int64 v26; // r10
  __int64 v27; // r8
  __int64 v28; // r9
  int v30; // [rsp+30h] [rbp-D0h] BYREF
  int v31; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v32; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v33; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v34; // [rsp+48h] [rbp-B8h] BYREF
  _BOOL8 v35; // [rsp+50h] [rbp-B0h] BYREF
  _BOOL8 v36; // [rsp+58h] [rbp-A8h] BYREF
  _BOOL8 v37; // [rsp+60h] [rbp-A0h] BYREF
  _BOOL8 v38; // [rsp+68h] [rbp-98h] BYREF
  _BOOL8 v39; // [rsp+70h] [rbp-90h] BYREF
  _BOOL8 v40; // [rsp+78h] [rbp-88h] BYREF
  _BOOL8 v41; // [rsp+80h] [rbp-80h] BYREF
  __int64 v42; // [rsp+88h] [rbp-78h] BYREF
  __int64 v43; // [rsp+90h] [rbp-70h] BYREF
  __int64 v44; // [rsp+98h] [rbp-68h] BYREF
  __int64 v45; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v46; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v47; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v48; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v49; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v50; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v51; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v52[5]; // [rsp+D8h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v53; // [rsp+100h] [rbp+0h] BYREF
  _BOOL8 *v54; // [rsp+120h] [rbp+20h]
  __int64 v55; // [rsp+128h] [rbp+28h]
  _BOOL8 *v56; // [rsp+130h] [rbp+30h]
  __int64 v57; // [rsp+138h] [rbp+38h]
  _BOOL8 *v58; // [rsp+140h] [rbp+40h]
  __int64 v59; // [rsp+148h] [rbp+48h]
  _BOOL8 *v60; // [rsp+150h] [rbp+50h]
  __int64 v61; // [rsp+158h] [rbp+58h]
  _BOOL8 *v62; // [rsp+160h] [rbp+60h]
  __int64 v63; // [rsp+168h] [rbp+68h]
  _BOOL8 *v64; // [rsp+170h] [rbp+70h]
  __int64 v65; // [rsp+178h] [rbp+78h]
  _BOOL8 *v66; // [rsp+180h] [rbp+80h]
  __int64 v67; // [rsp+188h] [rbp+88h]
  __int64 *v68; // [rsp+190h] [rbp+90h]
  __int64 v69; // [rsp+198h] [rbp+98h]
  __int64 *v70; // [rsp+1A0h] [rbp+A0h]
  __int64 v71; // [rsp+1A8h] [rbp+A8h]
  __int64 *v72; // [rsp+1B0h] [rbp+B0h]
  __int64 v73; // [rsp+1B8h] [rbp+B8h]
  __int64 *v74; // [rsp+1C0h] [rbp+C0h]
  __int64 v75; // [rsp+1C8h] [rbp+C8h]
  __int64 *v76; // [rsp+1D0h] [rbp+D0h]
  __int64 v77; // [rsp+1D8h] [rbp+D8h]
  __int64 *v78; // [rsp+1E0h] [rbp+E0h]
  __int64 v79; // [rsp+1E8h] [rbp+E8h]
  __int64 *v80; // [rsp+1F0h] [rbp+F0h]
  __int64 v81; // [rsp+1F8h] [rbp+F8h]
  __int64 *v82; // [rsp+200h] [rbp+100h]
  __int64 v83; // [rsp+208h] [rbp+108h]
  __int64 *v84; // [rsp+210h] [rbp+110h]
  __int64 v85; // [rsp+218h] [rbp+118h]
  __int64 *v86; // [rsp+220h] [rbp+120h]
  __int64 v87; // [rsp+228h] [rbp+128h]
  __int64 *v88; // [rsp+230h] [rbp+130h]
  __int64 v89; // [rsp+238h] [rbp+138h]
  __int64 *v90; // [rsp+240h] [rbp+140h]
  __int64 v91; // [rsp+248h] [rbp+148h]
  __int64 *v92; // [rsp+250h] [rbp+150h]
  __int64 v93; // [rsp+258h] [rbp+158h]
  _DWORD *v94; // [rsp+260h] [rbp+160h]
  __int64 v95; // [rsp+268h] [rbp+168h]
  __int64 v96; // [rsp+270h] [rbp+170h]
  _DWORD v97[2]; // [rsp+278h] [rbp+178h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+280h] [rbp+180h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v99; // [rsp+290h] [rbp+190h] BYREF
  int *v100; // [rsp+2A0h] [rbp+1A0h]
  __int64 v101; // [rsp+2A8h] [rbp+1A8h]
  int *v102; // [rsp+2B0h] [rbp+1B0h]
  __int64 v103; // [rsp+2B8h] [rbp+1B8h]
  _DWORD *v104; // [rsp+2C0h] [rbp+1C0h]
  __int64 v105; // [rsp+2C8h] [rbp+1C8h]
  __int64 v106; // [rsp+2D0h] [rbp+1D0h]
  _DWORD v107[2]; // [rsp+2D8h] [rbp+1D8h] BYREF
  _QWORD *v108; // [rsp+2E0h] [rbp+1E0h]
  __int64 v109; // [rsp+2E8h] [rbp+1E8h]

  memset(v52, 0, 29);
  if ( TraceLoggingProviderEnabled(&stru_140354B50, (UCHAR)a2, 0x200000000000uLL) )
  {
    v10 |= 1uLL;
    v52[0] = v10;
  }
  if ( ((*(_DWORD *)(a1 + 1572) + 1073741515) & 0xFFFFFFFB) == 0 )
    v52[0] = v10 | 0x100;
  ProcessServerSilo = PsGetProcessServerSilo(a1);
  v12 = !PsIsHostSilo(ProcessServerSilo);
  v13 = (__int64 *)(ProcessServerSilo + 1240);
  if ( !v12 )
    v13 = PspNullGuid;
  if ( v13 )
    *(_OWORD *)((char *)&v52[1] + 5) = *(_OWORD *)v13;
  v14 = *(_QWORD *)(a1 + 1128);
  if ( stru_140354B50.LevelPlus1 > 5 )
  {
    LOBYTE(v14) = TlgKeywordOn(&stru_140354B50, 0x400000000000uLL);
    if ( (_BYTE)v14 )
    {
      v16 = *a2;
      v12 = *a2 == 1;
      v35 = *a2 == 0;
      v36 = v12;
      v37 = v16 == 2;
      v38 = v16 == 3;
      v39 = v16 == 4;
      v40 = v16 == 5;
      v41 = v16 == 6;
      v42 = *(_QWORD *)(a2 + 41);
      v43 = *(_QWORD *)(a2 + 49);
      v17 = 0;
      if ( a3 )
        LOBYTE(v17) = (*(_BYTE *)(a1 + 1739) & 0xF) != 0;
      v44 = v17;
      if ( a3 )
        v18 = *(unsigned __int8 *)(a1 + 1739) >> 4;
      else
        v18 = 0LL;
      v45 = v18;
      v19 = 0LL;
      if ( a3 )
        v19 = *a3;
      v46 = v19;
      if ( a3 )
      {
        v32 = *(_QWORD *)(a3 + 1);
        v33 = *(_QWORD *)(a3 + 3);
        v20 = a3[7];
      }
      else
      {
        v32 = 0LL;
        v33 = 0LL;
        v20 = 0LL;
      }
      v47 = v20;
      v21 = 0LL;
      if ( a3 )
        v21 = a3[9];
      v48 = v21;
      v22 = 0LL;
      if ( a3 )
        v22 = a3[8];
      v49 = v22;
      v23 = 0LL;
      if ( a3 )
        v23 = a3[10];
      v50 = v23;
      if ( a3 )
        v34 = *(_QWORD *)(a3 + 5);
      else
        v34 = 0LL;
      if ( v16 == 3 )
        v24 = *(unsigned int *)(a1 + 1448);
      else
        v24 = 0LL;
      v51 = v24;
      v55 = 8LL;
      v57 = 8LL;
      v30 = *a5;
      v31 = a5[1];
      v54 = &v35;
      v56 = &v36;
      v58 = &v37;
      v60 = &v38;
      v62 = &v39;
      v64 = &v40;
      v66 = &v41;
      v68 = &v42;
      v70 = &v43;
      v72 = &v44;
      v74 = &v45;
      v76 = &v46;
      v78 = &v32;
      v80 = &v33;
      v82 = &v47;
      v84 = &v48;
      v86 = &v49;
      v88 = &v50;
      v90 = &v34;
      v92 = &v51;
      v94 = v97;
      v96 = *((_QWORD *)v15 + 1);
      v97[0] = *v15;
      v59 = 8LL;
      v61 = 8LL;
      v63 = 8LL;
      v65 = 8LL;
      v67 = 8LL;
      v69 = 8LL;
      v71 = 8LL;
      v73 = 8LL;
      v75 = 8LL;
      v77 = 8LL;
      v79 = 8LL;
      v81 = 8LL;
      v83 = 8LL;
      v85 = 8LL;
      v87 = 8LL;
      v89 = 8LL;
      v91 = 8LL;
      v93 = 8LL;
      v95 = 2LL;
      v97[1] = 0;
      TlgCreateWsz(&pDesc, (LPCWSTR)(a4 + 16));
      TlgCreateWsz(&v99, (LPCWSTR)(a4 + 272));
      v102 = &v31;
      v104 = v107;
      v100 = &v30;
      v106 = *((_QWORD *)a6 + 1);
      v107[0] = *a6;
      v108 = v52;
      v101 = v25;
      v103 = v25;
      v105 = v26;
      v107[1] = 0;
      v109 = 29LL;
      LOBYTE(v14) = TlgWriteAgg((__int64)&stru_140354B50, (unsigned __int8 *)dword_1402D46A5, v27, v28, 0x1Fu, &v53);
    }
  }
  return v14;
}
