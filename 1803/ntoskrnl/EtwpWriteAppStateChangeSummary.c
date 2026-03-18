/*
 * XREFs of EtwpWriteAppStateChangeSummary @ 0x1405108B4
 * Callers:
 *     EtwTraceProcess @ 0x1404F846C (EtwTraceProcess.c)
 *     EtwTraceAppStateChange @ 0x140510E74 (EtwTraceAppStateChange.c)
 * Callees:
 *     PsGetProcessServerSilo @ 0x14006CFF0 (PsGetProcessServerSilo.c)
 *     _TlgCreateWsz @ 0x14006F020 (_TlgCreateWsz.c)
 *     TraceLoggingProviderEnabled @ 0x14006F0C4 (TraceLoggingProviderEnabled.c)
 *     _TlgKeywordOn @ 0x14006F0F0 (_TlgKeywordOn.c)
 *     _TlgWriteAgg @ 0x14006F11C (_TlgWriteAgg.c)
 *     PsIsHostSilo @ 0x140108640 (PsIsHostSilo.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

char __fastcall EtwpWriteAppStateChangeSummary(
        __int64 a1,
        char *a2,
        unsigned int *a3,
        __int64 a4,
        __int64 *a5,
        unsigned __int16 *a6)
{
  __int64 v10; // r10
  unsigned int v11; // esi
  __int64 ProcessServerSilo; // r14
  bool v13; // zf
  __int64 *v14; // rax
  __int64 v15; // rax
  unsigned __int16 *v16; // r9
  char v17; // cl
  unsigned int v18; // eax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  unsigned int v26; // eax
  unsigned int v27; // eax
  __int64 v28; // rax
  int v29; // eax
  __int64 v30; // r11
  __int64 v31; // r10
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v35; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v36; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v37; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v38; // [rsp+50h] [rbp-B8h] BYREF
  _BOOL8 v39; // [rsp+58h] [rbp-B0h] BYREF
  _BOOL8 v40; // [rsp+60h] [rbp-A8h] BYREF
  _BOOL8 v41; // [rsp+68h] [rbp-A0h] BYREF
  _BOOL8 v42; // [rsp+70h] [rbp-98h] BYREF
  _BOOL8 v43; // [rsp+78h] [rbp-90h] BYREF
  _BOOL8 v44; // [rsp+80h] [rbp-88h] BYREF
  _BOOL8 v45; // [rsp+88h] [rbp-80h] BYREF
  __int64 v46; // [rsp+90h] [rbp-78h] BYREF
  __int64 v47; // [rsp+98h] [rbp-70h] BYREF
  __int64 v48; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v49; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v50; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v51; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v52; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v53; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v54; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v55; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v56; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v57; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v58; // [rsp+F0h] [rbp-18h] BYREF
  _QWORD v59[4]; // [rsp+F8h] [rbp-10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v60; // [rsp+118h] [rbp+10h] BYREF
  _BOOL8 *v61; // [rsp+138h] [rbp+30h]
  __int64 v62; // [rsp+140h] [rbp+38h]
  _BOOL8 *v63; // [rsp+148h] [rbp+40h]
  __int64 v64; // [rsp+150h] [rbp+48h]
  _BOOL8 *v65; // [rsp+158h] [rbp+50h]
  __int64 v66; // [rsp+160h] [rbp+58h]
  _BOOL8 *v67; // [rsp+168h] [rbp+60h]
  __int64 v68; // [rsp+170h] [rbp+68h]
  _BOOL8 *v69; // [rsp+178h] [rbp+70h]
  __int64 v70; // [rsp+180h] [rbp+78h]
  _BOOL8 *v71; // [rsp+188h] [rbp+80h]
  __int64 v72; // [rsp+190h] [rbp+88h]
  _BOOL8 *v73; // [rsp+198h] [rbp+90h]
  __int64 v74; // [rsp+1A0h] [rbp+98h]
  __int64 *v75; // [rsp+1A8h] [rbp+A0h]
  __int64 v76; // [rsp+1B0h] [rbp+A8h]
  __int64 *v77; // [rsp+1B8h] [rbp+B0h]
  __int64 v78; // [rsp+1C0h] [rbp+B8h]
  __int64 *v79; // [rsp+1C8h] [rbp+C0h]
  __int64 v80; // [rsp+1D0h] [rbp+C8h]
  __int64 *v81; // [rsp+1D8h] [rbp+D0h]
  __int64 v82; // [rsp+1E0h] [rbp+D8h]
  __int64 *v83; // [rsp+1E8h] [rbp+E0h]
  __int64 v84; // [rsp+1F0h] [rbp+E8h]
  __int64 *v85; // [rsp+1F8h] [rbp+F0h]
  __int64 v86; // [rsp+200h] [rbp+F8h]
  __int64 *v87; // [rsp+208h] [rbp+100h]
  __int64 v88; // [rsp+210h] [rbp+108h]
  __int64 *v89; // [rsp+218h] [rbp+110h]
  __int64 v90; // [rsp+220h] [rbp+118h]
  __int64 *v91; // [rsp+228h] [rbp+120h]
  __int64 v92; // [rsp+230h] [rbp+128h]
  __int64 *v93; // [rsp+238h] [rbp+130h]
  __int64 v94; // [rsp+240h] [rbp+138h]
  __int64 *v95; // [rsp+248h] [rbp+140h]
  __int64 v96; // [rsp+250h] [rbp+148h]
  __int64 *v97; // [rsp+258h] [rbp+150h]
  __int64 v98; // [rsp+260h] [rbp+158h]
  __int64 *v99; // [rsp+268h] [rbp+160h]
  __int64 v100; // [rsp+270h] [rbp+168h]
  __int64 *v101; // [rsp+278h] [rbp+170h]
  __int64 v102; // [rsp+280h] [rbp+178h]
  __int64 *v103; // [rsp+288h] [rbp+180h]
  __int64 v104; // [rsp+290h] [rbp+188h]
  __int64 *v105; // [rsp+298h] [rbp+190h]
  __int64 v106; // [rsp+2A0h] [rbp+198h]
  _DWORD *v107; // [rsp+2A8h] [rbp+1A0h]
  __int64 v108; // [rsp+2B0h] [rbp+1A8h]
  __int64 v109; // [rsp+2B8h] [rbp+1B0h]
  _DWORD v110[2]; // [rsp+2C0h] [rbp+1B8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+2C8h] [rbp+1C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v112; // [rsp+2D8h] [rbp+1D0h] BYREF
  __int64 *v113; // [rsp+2E8h] [rbp+1E0h]
  __int64 v114; // [rsp+2F0h] [rbp+1E8h]
  char *v115; // [rsp+2F8h] [rbp+1F0h]
  __int64 v116; // [rsp+300h] [rbp+1F8h]
  _DWORD *v117; // [rsp+308h] [rbp+200h]
  __int64 v118; // [rsp+310h] [rbp+208h]
  __int64 v119; // [rsp+318h] [rbp+210h]
  _DWORD v120[2]; // [rsp+320h] [rbp+218h] BYREF
  _QWORD *v121; // [rsp+328h] [rbp+220h]
  __int64 v122; // [rsp+330h] [rbp+228h]

  memset(v59, 0, 29);
  if ( TraceLoggingProviderEnabled(&stru_1403977E0, 0, 0x200000000000uLL) )
  {
    v59[0] = 1LL;
    v10 = 1LL;
  }
  v11 = *(_DWORD *)(a1 + 1572);
  if ( ((v11 + 1073741515) & 0xFFFFFFFB) == 0 )
    v59[0] = v10 | 0x100;
  ProcessServerSilo = PsGetProcessServerSilo(a1);
  v13 = !PsIsHostSilo(ProcessServerSilo);
  v14 = (__int64 *)(ProcessServerSilo + 1240);
  if ( !v13 )
    v14 = PspNullGuid;
  if ( v14 )
    *(_OWORD *)((char *)&v59[1] + 5) = *(_OWORD *)v14;
  v15 = *(_QWORD *)(a1 + 1128);
  if ( stru_1403977E0.LevelPlus1 > 5 )
  {
    LOBYTE(v15) = TlgKeywordOn(&stru_1403977E0, 0x400000000000uLL);
    if ( (_BYTE)v15 )
    {
      v17 = *a2;
      v13 = *a2 == 1;
      v39 = *a2 == 0;
      v40 = v13;
      v41 = v17 == 2;
      v42 = v17 == 3;
      v43 = v17 == 4;
      v44 = v17 == 5;
      v45 = v17 == 6;
      v46 = *(_QWORD *)(a2 + 41);
      v47 = *(_QWORD *)(a2 + 49);
      v18 = 0;
      if ( a3 )
        LOBYTE(v18) = (*(_BYTE *)(a1 + 1739) & 0xF) != 0;
      v48 = v18;
      if ( a3 )
        v19 = *(unsigned __int8 *)(a1 + 1739) >> 4;
      else
        v19 = 0LL;
      v49 = v19;
      v20 = 0LL;
      if ( a3 )
        v20 = *a3;
      v50 = v20;
      if ( a3 )
      {
        v36 = *(_QWORD *)(a3 + 1);
        v37 = *(_QWORD *)(a3 + 3);
        v21 = a3[7];
      }
      else
      {
        v36 = 0LL;
        v37 = 0LL;
        v21 = 0LL;
      }
      v51 = v21;
      v22 = 0LL;
      if ( a3 )
        v22 = a3[9];
      v52 = v22;
      v23 = 0LL;
      if ( a3 )
        v23 = a3[8];
      v53 = v23;
      v24 = 0LL;
      if ( a3 )
        v24 = a3[10];
      v54 = v24;
      if ( a3 )
      {
        v38 = *(_QWORD *)(a3 + 5);
        v25 = v11 >> 31;
      }
      else
      {
        v38 = 0LL;
        v25 = 0LL;
      }
      v55 = v25;
      v26 = 0;
      if ( a3 )
        LOBYTE(v26) = v11 == 0;
      v56 = v26;
      v27 = 0;
      if ( a3 )
        LOBYTE(v27) = v11 == 1;
      v57 = v27;
      if ( v17 == 3 )
        v28 = *(unsigned int *)(a1 + 1448);
      else
        v28 = 0LL;
      v58 = v28;
      v62 = 8LL;
      v64 = 8LL;
      v35 = *a5;
      v61 = &v39;
      v63 = &v40;
      v65 = &v41;
      v67 = &v42;
      v69 = &v43;
      v71 = &v44;
      v73 = &v45;
      v75 = &v46;
      v77 = &v47;
      v79 = &v48;
      v81 = &v49;
      v83 = &v50;
      v85 = &v36;
      v87 = &v37;
      v89 = &v51;
      v91 = &v52;
      v93 = &v53;
      v95 = &v54;
      v97 = &v38;
      v99 = &v55;
      v101 = &v56;
      v103 = &v57;
      v105 = &v58;
      v107 = v110;
      v109 = *((_QWORD *)v16 + 1);
      v29 = *v16;
      v66 = 8LL;
      v68 = 8LL;
      v70 = 8LL;
      v72 = 8LL;
      v74 = 8LL;
      v76 = 8LL;
      v78 = 8LL;
      v80 = 8LL;
      v82 = 8LL;
      v84 = 8LL;
      v86 = 8LL;
      v88 = 8LL;
      v90 = 8LL;
      v92 = 8LL;
      v94 = 8LL;
      v96 = 8LL;
      v98 = 8LL;
      v100 = 8LL;
      v102 = 8LL;
      v104 = 8LL;
      v106 = 8LL;
      v108 = 2LL;
      v110[0] = v29;
      v110[1] = 0;
      TlgCreateWsz(&pDesc, (LPCWSTR)(a4 + 16));
      TlgCreateWsz(&v112, (LPCWSTR)(a4 + 272));
      v115 = (char *)&v35 + 4;
      v113 = &v35;
      v117 = v120;
      v119 = *((_QWORD *)a6 + 1);
      v120[0] = *a6;
      v121 = v59;
      v114 = v30;
      v116 = v30;
      v118 = v31;
      v120[1] = 0;
      v122 = 29LL;
      LOBYTE(v15) = TlgWriteAgg((__int64)&stru_1403977E0, (unsigned __int8 *)dword_14030E7A0, v32, v33, 0x22u, &v60);
    }
  }
  return v15;
}
