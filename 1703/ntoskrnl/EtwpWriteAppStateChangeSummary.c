/*
 * XREFs of EtwpWriteAppStateChangeSummary @ 0x1404E915C
 * Callers:
 *     EtwTraceAppStateChange @ 0x1404E977C (EtwTraceAppStateChange.c)
 *     EtwTraceProcess @ 0x1404ED910 (EtwTraceProcess.c)
 * Callees:
 *     _TlgCreateWsz @ 0x140081B24 (_TlgCreateWsz.c)
 *     _TlgWriteAgg @ 0x140081D20 (_TlgWriteAgg.c)
 *     TraceLoggingProviderEnabled @ 0x140082CB4 (TraceLoggingProviderEnabled.c)
 *     _TlgKeywordOn @ 0x140082CE0 (_TlgKeywordOn.c)
 *     PsGetProcessServerSilo @ 0x140085020 (PsGetProcessServerSilo.c)
 *     PsGetCurrentSilo @ 0x1400EDEE0 (PsGetCurrentSilo.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

BOOLEAN __fastcall EtwpWriteAppStateChangeSummary(
        __int64 a1,
        char *a2,
        unsigned int *a3,
        __int64 a4,
        __int64 *a5,
        unsigned __int16 *a6)
{
  __int64 v10; // r10
  unsigned __int64 ProcessServerSilo; // rcx
  BOOLEAN result; // al
  _OWORD *v13; // rdx
  char v14; // cl
  bool v15; // zf
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  unsigned __int16 *v22; // rdx
  int v23; // ecx
  __int64 v24; // rax
  __int64 v25; // r11
  __int64 v26; // r10
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v30; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v31; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v32; // [rsp+50h] [rbp-B8h] BYREF
  _BOOL8 v33; // [rsp+58h] [rbp-B0h] BYREF
  _BOOL8 v34; // [rsp+60h] [rbp-A8h] BYREF
  _BOOL8 v35; // [rsp+68h] [rbp-A0h] BYREF
  _BOOL8 v36; // [rsp+70h] [rbp-98h] BYREF
  _BOOL8 v37; // [rsp+78h] [rbp-90h] BYREF
  _BOOL8 v38; // [rsp+80h] [rbp-88h] BYREF
  _BOOL8 v39; // [rsp+88h] [rbp-80h] BYREF
  __int64 v40; // [rsp+90h] [rbp-78h] BYREF
  __int64 v41; // [rsp+98h] [rbp-70h] BYREF
  __int64 v42; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v43; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v44; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v45; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v46; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v47; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v48; // [rsp+D0h] [rbp-38h] BYREF
  _QWORD v49[4]; // [rsp+D8h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v50; // [rsp+F8h] [rbp-10h] BYREF
  _BOOL8 *v51; // [rsp+118h] [rbp+10h]
  __int64 v52; // [rsp+120h] [rbp+18h]
  _BOOL8 *v53; // [rsp+128h] [rbp+20h]
  __int64 v54; // [rsp+130h] [rbp+28h]
  _BOOL8 *v55; // [rsp+138h] [rbp+30h]
  __int64 v56; // [rsp+140h] [rbp+38h]
  _BOOL8 *v57; // [rsp+148h] [rbp+40h]
  __int64 v58; // [rsp+150h] [rbp+48h]
  _BOOL8 *v59; // [rsp+158h] [rbp+50h]
  __int64 v60; // [rsp+160h] [rbp+58h]
  _BOOL8 *v61; // [rsp+168h] [rbp+60h]
  __int64 v62; // [rsp+170h] [rbp+68h]
  _BOOL8 *v63; // [rsp+178h] [rbp+70h]
  __int64 v64; // [rsp+180h] [rbp+78h]
  __int64 *v65; // [rsp+188h] [rbp+80h]
  __int64 v66; // [rsp+190h] [rbp+88h]
  __int64 *v67; // [rsp+198h] [rbp+90h]
  __int64 v68; // [rsp+1A0h] [rbp+98h]
  __int64 *v69; // [rsp+1A8h] [rbp+A0h]
  __int64 v70; // [rsp+1B0h] [rbp+A8h]
  __int64 *v71; // [rsp+1B8h] [rbp+B0h]
  __int64 v72; // [rsp+1C0h] [rbp+B8h]
  __int64 *v73; // [rsp+1C8h] [rbp+C0h]
  __int64 v74; // [rsp+1D0h] [rbp+C8h]
  __int64 *v75; // [rsp+1D8h] [rbp+D0h]
  __int64 v76; // [rsp+1E0h] [rbp+D8h]
  __int64 *v77; // [rsp+1E8h] [rbp+E0h]
  __int64 v78; // [rsp+1F0h] [rbp+E8h]
  __int64 *v79; // [rsp+1F8h] [rbp+F0h]
  __int64 v80; // [rsp+200h] [rbp+F8h]
  __int64 *v81; // [rsp+208h] [rbp+100h]
  __int64 v82; // [rsp+210h] [rbp+108h]
  __int64 *v83; // [rsp+218h] [rbp+110h]
  __int64 v84; // [rsp+220h] [rbp+118h]
  __int64 *v85; // [rsp+228h] [rbp+120h]
  __int64 v86; // [rsp+230h] [rbp+128h]
  __int64 *v87; // [rsp+238h] [rbp+130h]
  __int64 v88; // [rsp+240h] [rbp+138h]
  _DWORD *v89; // [rsp+248h] [rbp+140h]
  __int64 v90; // [rsp+250h] [rbp+148h]
  __int64 v91; // [rsp+258h] [rbp+150h]
  _DWORD v92[2]; // [rsp+260h] [rbp+158h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+268h] [rbp+160h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v94; // [rsp+278h] [rbp+170h] BYREF
  __int64 *v95; // [rsp+288h] [rbp+180h]
  __int64 v96; // [rsp+290h] [rbp+188h]
  char *v97; // [rsp+298h] [rbp+190h]
  __int64 v98; // [rsp+2A0h] [rbp+198h]
  _DWORD *v99; // [rsp+2A8h] [rbp+1A0h]
  __int64 v100; // [rsp+2B0h] [rbp+1A8h]
  __int64 v101; // [rsp+2B8h] [rbp+1B0h]
  _DWORD v102[2]; // [rsp+2C0h] [rbp+1B8h] BYREF
  _QWORD *v103; // [rsp+2C8h] [rbp+1C0h]
  __int64 v104; // [rsp+2D0h] [rbp+1C8h]

  memset(v49, 0, 29);
  if ( TraceLoggingProviderEnabled(&stru_14033C520, (UCHAR)a2, 0x200000000000uLL) )
  {
    v10 |= 1uLL;
    v49[0] = v10;
  }
  if ( ((*(_DWORD *)(a1 + 1572) + 1073741515) & 0xFFFFFFFB) == 0 )
    v49[0] = v10 | 0x100;
  ProcessServerSilo = PsGetProcessServerSilo(a1);
  if ( ProcessServerSilo == -1LL )
    ProcessServerSilo = PsGetCurrentSilo();
  result = ProcessServerSilo - 56;
  v13 = (_OWORD *)((ProcessServerSilo + 1224) & -(__int64)(ProcessServerSilo != 0));
  if ( v13 )
    *(_OWORD *)((char *)&v49[1] + 5) = *v13;
  if ( stru_14033C520.LevelPlus1 > 5 )
  {
    result = TlgKeywordOn(&stru_14033C520, 0x400000000000uLL);
    if ( result )
    {
      v14 = *a2;
      v15 = *a2 == 1;
      v33 = *a2 == 0;
      v34 = v15;
      v35 = v14 == 2;
      v36 = v14 == 3;
      v37 = v14 == 4;
      v38 = v14 == 5;
      v39 = v14 == 6;
      v40 = *(_QWORD *)(a2 + 41);
      v41 = *(_QWORD *)(a2 + 49);
      v42 = *(unsigned __int8 *)(a1 + 1739);
      v16 = 0LL;
      if ( a3 )
        v16 = *a3;
      v43 = v16;
      if ( a3 )
      {
        v30 = *(_QWORD *)(a3 + 1);
        v31 = *(_QWORD *)(a3 + 3);
        v17 = a3[7];
      }
      else
      {
        v30 = 0LL;
        v31 = 0LL;
        v17 = 0LL;
      }
      v44 = v17;
      v18 = 0LL;
      if ( a3 )
        v18 = a3[9];
      v45 = v18;
      v19 = 0LL;
      if ( a3 )
        v19 = a3[8];
      v46 = v19;
      v20 = 0LL;
      if ( a3 )
        v20 = a3[10];
      v47 = v20;
      if ( a3 )
        v32 = *(_QWORD *)(a3 + 5);
      else
        v32 = 0LL;
      if ( v14 == 3 )
        v21 = *(unsigned int *)(a1 + 1448);
      else
        v21 = 0LL;
      v22 = *(unsigned __int16 **)(a1 + 1128);
      v48 = v21;
      v52 = 8LL;
      v29 = *a5;
      v51 = &v33;
      v53 = &v34;
      v55 = &v35;
      v57 = &v36;
      v59 = &v37;
      v61 = &v38;
      v63 = &v39;
      v65 = &v40;
      v67 = &v41;
      v69 = &v42;
      v71 = &v43;
      v73 = &v30;
      v75 = &v31;
      v77 = &v44;
      v79 = &v45;
      v81 = &v46;
      v83 = &v47;
      v85 = &v32;
      v87 = &v48;
      v54 = 8LL;
      v56 = 8LL;
      v58 = 8LL;
      v60 = 8LL;
      v62 = 8LL;
      v64 = 8LL;
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
      v23 = *v22;
      v24 = *((_QWORD *)v22 + 1);
      v89 = v92;
      v92[0] = v23;
      v90 = 2LL;
      v91 = v24;
      v92[1] = 0;
      TlgCreateWsz(&pDesc, (LPCWSTR)(a4 + 16));
      TlgCreateWsz(&v94, (LPCWSTR)(a4 + 272));
      v96 = v25;
      v95 = &v29;
      v97 = (char *)&v29 + 4;
      v99 = v102;
      v98 = v25;
      v101 = *((_QWORD *)a6 + 1);
      v102[0] = *a6;
      v103 = v49;
      v100 = v26;
      v102[1] = 0;
      v104 = 29LL;
      return TlgWriteAgg((__int64)&stru_14033C520, (unsigned __int8 *)dword_1402AF248, v27, v28, 0x1Eu, &v50);
    }
  }
  return result;
}
