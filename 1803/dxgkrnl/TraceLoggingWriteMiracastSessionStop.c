/*
 * XREFs of TraceLoggingWriteMiracastSessionStop @ 0x1C0042E80
 * Callers:
 *     DpiMiracastTearDownAssociation @ 0x1C003E500 (DpiMiracastTearDownAssociation.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0007C84 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0007E1C (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C000904C (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 */

void __fastcall TraceLoggingWriteMiracastSessionStop(__int64 a1, int a2, int a3)
{
  _DWORD *v5; // r11
  __int64 v6; // r11
  __int64 v7; // r11
  __int64 v8; // r11
  __int64 v9; // r11
  int v10; // ecx
  const WCHAR *v11; // rdx
  __int64 v12; // r11
  __int64 v13; // r11
  __int64 v14; // r11
  int v15; // ecx
  int v16; // edx
  unsigned int v17; // ecx
  int v18; // ecx
  LPCGUID v19; // r9
  LPCGUID v20; // r10
  int v21; // [rsp+30h] [rbp-D0h] BYREF
  int v22; // [rsp+34h] [rbp-CCh] BYREF
  int v23; // [rsp+38h] [rbp-C8h] BYREF
  int v24; // [rsp+3Ch] [rbp-C4h] BYREF
  int v25; // [rsp+40h] [rbp-C0h] BYREF
  int v26; // [rsp+44h] [rbp-BCh] BYREF
  int v27; // [rsp+48h] [rbp-B8h] BYREF
  int v28; // [rsp+4Ch] [rbp-B4h] BYREF
  int v29; // [rsp+50h] [rbp-B0h] BYREF
  int v30; // [rsp+54h] [rbp-ACh] BYREF
  int v31; // [rsp+58h] [rbp-A8h] BYREF
  int v32; // [rsp+5Ch] [rbp-A4h] BYREF
  int v33; // [rsp+60h] [rbp-A0h] BYREF
  int v34; // [rsp+64h] [rbp-9Ch] BYREF
  int v35; // [rsp+68h] [rbp-98h] BYREF
  int v36; // [rsp+6Ch] [rbp-94h] BYREF
  int v37; // [rsp+70h] [rbp-90h] BYREF
  int v38; // [rsp+74h] [rbp-8Ch] BYREF
  int v39; // [rsp+78h] [rbp-88h] BYREF
  int v40; // [rsp+7Ch] [rbp-84h] BYREF
  int v41; // [rsp+80h] [rbp-80h] BYREF
  int v42; // [rsp+84h] [rbp-7Ch] BYREF
  int v43; // [rsp+88h] [rbp-78h] BYREF
  int v44; // [rsp+8Ch] [rbp-74h] BYREF
  int v45; // [rsp+90h] [rbp-70h] BYREF
  int v46; // [rsp+94h] [rbp-6Ch] BYREF
  int v47; // [rsp+98h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A0h] [rbp-60h] BYREF
  _DWORD *v49; // [rsp+C0h] [rbp-40h]
  __int64 v50; // [rsp+C8h] [rbp-38h]
  int *v51; // [rsp+D0h] [rbp-30h]
  __int64 v52; // [rsp+D8h] [rbp-28h]
  int *v53; // [rsp+E0h] [rbp-20h]
  __int64 v54; // [rsp+E8h] [rbp-18h]
  _DWORD *v55; // [rsp+F0h] [rbp-10h]
  __int64 v56; // [rsp+F8h] [rbp-8h]
  int *v57; // [rsp+100h] [rbp+0h]
  __int64 v58; // [rsp+108h] [rbp+8h]
  int *v59; // [rsp+110h] [rbp+10h]
  __int64 v60; // [rsp+118h] [rbp+18h]
  int *v61; // [rsp+120h] [rbp+20h]
  __int64 v62; // [rsp+128h] [rbp+28h]
  int *v63; // [rsp+130h] [rbp+30h]
  __int64 v64; // [rsp+138h] [rbp+38h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+140h] [rbp+40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v66; // [rsp+150h] [rbp+50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v67; // [rsp+160h] [rbp+60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v68; // [rsp+170h] [rbp+70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v69; // [rsp+180h] [rbp+80h] BYREF
  int *v70; // [rsp+190h] [rbp+90h]
  __int64 v71; // [rsp+198h] [rbp+98h]
  int *v72; // [rsp+1A0h] [rbp+A0h]
  __int64 v73; // [rsp+1A8h] [rbp+A8h]
  struct _EVENT_DATA_DESCRIPTOR v74; // [rsp+1B0h] [rbp+B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v75; // [rsp+1C0h] [rbp+C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v76; // [rsp+1D0h] [rbp+D0h] BYREF
  int *v77; // [rsp+1E0h] [rbp+E0h]
  __int64 v78; // [rsp+1E8h] [rbp+E8h]
  int *v79; // [rsp+1F0h] [rbp+F0h]
  __int64 v80; // [rsp+1F8h] [rbp+F8h]
  int *v81; // [rsp+200h] [rbp+100h]
  __int64 v82; // [rsp+208h] [rbp+108h]
  int *v83; // [rsp+210h] [rbp+110h]
  __int64 v84; // [rsp+218h] [rbp+118h]
  __int64 v85; // [rsp+220h] [rbp+120h]
  __int64 v86; // [rsp+228h] [rbp+128h]
  int *v87; // [rsp+230h] [rbp+130h]
  __int64 v88; // [rsp+238h] [rbp+138h]
  int *v89; // [rsp+240h] [rbp+140h]
  __int64 v90; // [rsp+248h] [rbp+148h]
  int *v91; // [rsp+250h] [rbp+150h]
  __int64 v92; // [rsp+258h] [rbp+158h]
  int *v93; // [rsp+260h] [rbp+160h]
  __int64 v94; // [rsp+268h] [rbp+168h]
  int *v95; // [rsp+270h] [rbp+170h]
  __int64 v96; // [rsp+278h] [rbp+178h]
  int *v97; // [rsp+280h] [rbp+180h]
  __int64 v98; // [rsp+288h] [rbp+188h]
  int *v99; // [rsp+290h] [rbp+190h]
  __int64 v100; // [rsp+298h] [rbp+198h]
  int *v101; // [rsp+2A0h] [rbp+1A0h]
  __int64 v102; // [rsp+2A8h] [rbp+1A8h]
  int *v103; // [rsp+2B0h] [rbp+1B0h]
  __int64 v104; // [rsp+2B8h] [rbp+1B8h]
  int *v105; // [rsp+2C0h] [rbp+1C0h]
  __int64 v106; // [rsp+2C8h] [rbp+1C8h]
  int *v107; // [rsp+2D0h] [rbp+1D0h]
  __int64 v108; // [rsp+2D8h] [rbp+1D8h]
  int *v109; // [rsp+2E0h] [rbp+1E0h]
  __int64 v110; // [rsp+2E8h] [rbp+1E8h]
  int *v111; // [rsp+2F0h] [rbp+1F0h]
  __int64 v112; // [rsp+2F8h] [rbp+1F8h]
  int *v113; // [rsp+300h] [rbp+200h]
  __int64 v114; // [rsp+308h] [rbp+208h]
  int *v115; // [rsp+310h] [rbp+210h]
  __int64 v116; // [rsp+318h] [rbp+218h]

  if ( dword_1C0079090 > 5u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C0079090, 0x800000000002uLL) )
    {
      v21 = v5[197];
      v49 = v5 + 28;
      v51 = &v21;
      v22 = v5[163];
      v53 = &v22;
      v55 = v5 + 176;
      v23 = v5[104];
      v57 = &v23;
      v24 = v5[196];
      v59 = &v24;
      v25 = v5[175];
      v61 = &v25;
      v26 = v5[195];
      v63 = &v26;
      v50 = 16LL;
      v52 = 4LL;
      v54 = 4LL;
      v56 = 4LL;
      v58 = 4LL;
      v60 = 4LL;
      v62 = 4LL;
      v64 = 4LL;
      TlgCreateWsz(&pDesc, &pwsz);
      TlgCreateWsz(&v66, *(LPCWSTR *)(v6 + 336));
      TlgCreateWsz(&v67, *(LPCWSTR *)(v7 + 344));
      TlgCreateWsz(&v68, *(LPCWSTR *)(v8 + 360));
      TlgCreateWsz(&v69, &pwsz);
      v10 = *(_DWORD *)(v9 + 192);
      v11 = *(const WCHAR **)(v9 + 376);
      v70 = &v27;
      v28 = *(_DWORD *)(v9 + 196);
      v27 = v10;
      v72 = &v28;
      v71 = 4LL;
      v73 = 4LL;
      TlgCreateWsz(&v74, v11);
      TlgCreateWsz(&v75, *(LPCWSTR *)(v12 + 384));
      TlgCreateWsz(&v76, (LPCWSTR)(v13 + 708));
      v15 = *(_DWORD *)(v14 + 776);
      v77 = &v29;
      v30 = *(_QWORD *)(v14 + 608) >> 16;
      v79 = &v30;
      v29 = v15;
      v78 = 4LL;
      v80 = 4LL;
      v16 = *(_DWORD *)(v14 + 692);
      v31 = *(_QWORD *)(v14 + 616) >> 16;
      v81 = &v31;
      v32 = *(_QWORD *)(v14 + 624) >> 16;
      v83 = &v32;
      v17 = *(_DWORD *)(v14 + 600);
      v85 = v14 + 600;
      v33 = v17 & 1;
      v87 = &v33;
      v34 = (v17 >> 1) & 1;
      v35 = (v17 >> 2) & 1;
      v89 = &v34;
      v91 = &v35;
      v36 = *(_DWORD *)(v14 + 664);
      v93 = &v36;
      v37 = *(_DWORD *)(v14 + 656);
      v95 = &v37;
      v38 = *(_DWORD *)(v14 + 660);
      v97 = &v38;
      v99 = &v39;
      v40 = *(_DWORD *)(v14 + 680);
      v101 = &v40;
      v41 = *(_DWORD *)(v14 + 684);
      v103 = &v41;
      v18 = (unsigned __int16)*(_DWORD *)(v14 + 688);
      v105 = &v42;
      v43 = *(_DWORD *)(v14 + 696);
      v107 = &v43;
      v44 = *(_DWORD *)(v14 + 668);
      v82 = 4LL;
      v84 = 4LL;
      v86 = 4LL;
      v88 = 4LL;
      v90 = 4LL;
      v92 = 4LL;
      v94 = 4LL;
      v96 = 4LL;
      v98 = 4LL;
      v39 = a2;
      v100 = 4LL;
      v102 = 4LL;
      v104 = 4LL;
      v42 = v18 + (v16 << 16);
      v106 = 4LL;
      v108 = 4LL;
      v109 = &v44;
      v45 = dword_1C007AB70 - *(_DWORD *)(v14 + 672);
      v111 = &v45;
      v46 = *(_DWORD *)(v14 + 676);
      v113 = &v46;
      v115 = &v47;
      v110 = 4LL;
      v112 = 4LL;
      v114 = 4LL;
      v47 = a3;
      v116 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1C0079090, &unk_1C0059284, v20, v19, 0x28u, &pData);
    }
  }
}
