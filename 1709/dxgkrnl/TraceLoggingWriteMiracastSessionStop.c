/*
 * XREFs of TraceLoggingWriteMiracastSessionStop @ 0x1C00343FC
 * Callers:
 *     DpiMiracastTearDownAssociation @ 0x1C0030410 (DpiMiracastTearDownAssociation.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C000A1C0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C000D3F4 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C000D494 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 */

void __fastcall TraceLoggingWriteMiracastSessionStop(__int64 a1, int a2, int a3)
{
  __int64 v5; // r11
  __int64 v6; // r11
  __int64 v7; // r11
  __int64 v8; // r11
  __int64 v9; // r11
  __int64 v10; // r11
  int v11; // ecx
  const WCHAR *v12; // rdx
  __int64 v13; // r11
  __int64 v14; // r11
  __int64 v15; // r11
  int v16; // ecx
  int v17; // edx
  unsigned int v18; // ecx
  int v19; // ecx
  LPCGUID v20; // r9
  LPCGUID v21; // r10
  int v22; // [rsp+30h] [rbp-D0h] BYREF
  int v23; // [rsp+34h] [rbp-CCh] BYREF
  int v24; // [rsp+38h] [rbp-C8h] BYREF
  int v25; // [rsp+3Ch] [rbp-C4h] BYREF
  int v26; // [rsp+40h] [rbp-C0h] BYREF
  int v27; // [rsp+44h] [rbp-BCh] BYREF
  int v28; // [rsp+48h] [rbp-B8h] BYREF
  int v29; // [rsp+4Ch] [rbp-B4h] BYREF
  int v30; // [rsp+50h] [rbp-B0h] BYREF
  int v31; // [rsp+54h] [rbp-ACh] BYREF
  int v32; // [rsp+58h] [rbp-A8h] BYREF
  int v33; // [rsp+5Ch] [rbp-A4h] BYREF
  int v34; // [rsp+60h] [rbp-A0h] BYREF
  int v35; // [rsp+64h] [rbp-9Ch] BYREF
  int v36; // [rsp+68h] [rbp-98h] BYREF
  int v37; // [rsp+6Ch] [rbp-94h] BYREF
  int v38; // [rsp+70h] [rbp-90h] BYREF
  int v39; // [rsp+74h] [rbp-8Ch] BYREF
  int v40; // [rsp+78h] [rbp-88h] BYREF
  int v41; // [rsp+7Ch] [rbp-84h] BYREF
  int v42; // [rsp+80h] [rbp-80h] BYREF
  int v43; // [rsp+84h] [rbp-7Ch] BYREF
  int v44; // [rsp+88h] [rbp-78h] BYREF
  int v45; // [rsp+8Ch] [rbp-74h] BYREF
  int v46; // [rsp+90h] [rbp-70h] BYREF
  int v47; // [rsp+94h] [rbp-6Ch] BYREF
  int v48; // [rsp+98h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v50; // [rsp+C0h] [rbp-40h]
  __int64 v51; // [rsp+C8h] [rbp-38h]
  int *v52; // [rsp+D0h] [rbp-30h]
  __int64 v53; // [rsp+D8h] [rbp-28h]
  int *v54; // [rsp+E0h] [rbp-20h]
  __int64 v55; // [rsp+E8h] [rbp-18h]
  __int64 v56; // [rsp+F0h] [rbp-10h]
  __int64 v57; // [rsp+F8h] [rbp-8h]
  int *v58; // [rsp+100h] [rbp+0h]
  __int64 v59; // [rsp+108h] [rbp+8h]
  int *v60; // [rsp+110h] [rbp+10h]
  __int64 v61; // [rsp+118h] [rbp+18h]
  int *v62; // [rsp+120h] [rbp+20h]
  __int64 v63; // [rsp+128h] [rbp+28h]
  int *v64; // [rsp+130h] [rbp+30h]
  __int64 v65; // [rsp+138h] [rbp+38h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+140h] [rbp+40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v67; // [rsp+150h] [rbp+50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v68; // [rsp+160h] [rbp+60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v69; // [rsp+170h] [rbp+70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v70; // [rsp+180h] [rbp+80h] BYREF
  int *v71; // [rsp+190h] [rbp+90h]
  __int64 v72; // [rsp+198h] [rbp+98h]
  int *v73; // [rsp+1A0h] [rbp+A0h]
  __int64 v74; // [rsp+1A8h] [rbp+A8h]
  struct _EVENT_DATA_DESCRIPTOR v75; // [rsp+1B0h] [rbp+B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v76; // [rsp+1C0h] [rbp+C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v77; // [rsp+1D0h] [rbp+D0h] BYREF
  int *v78; // [rsp+1E0h] [rbp+E0h]
  __int64 v79; // [rsp+1E8h] [rbp+E8h]
  int *v80; // [rsp+1F0h] [rbp+F0h]
  __int64 v81; // [rsp+1F8h] [rbp+F8h]
  int *v82; // [rsp+200h] [rbp+100h]
  __int64 v83; // [rsp+208h] [rbp+108h]
  int *v84; // [rsp+210h] [rbp+110h]
  __int64 v85; // [rsp+218h] [rbp+118h]
  __int64 v86; // [rsp+220h] [rbp+120h]
  __int64 v87; // [rsp+228h] [rbp+128h]
  int *v88; // [rsp+230h] [rbp+130h]
  __int64 v89; // [rsp+238h] [rbp+138h]
  int *v90; // [rsp+240h] [rbp+140h]
  __int64 v91; // [rsp+248h] [rbp+148h]
  int *v92; // [rsp+250h] [rbp+150h]
  __int64 v93; // [rsp+258h] [rbp+158h]
  int *v94; // [rsp+260h] [rbp+160h]
  __int64 v95; // [rsp+268h] [rbp+168h]
  int *v96; // [rsp+270h] [rbp+170h]
  __int64 v97; // [rsp+278h] [rbp+178h]
  int *v98; // [rsp+280h] [rbp+180h]
  __int64 v99; // [rsp+288h] [rbp+188h]
  int *v100; // [rsp+290h] [rbp+190h]
  __int64 v101; // [rsp+298h] [rbp+198h]
  int *v102; // [rsp+2A0h] [rbp+1A0h]
  __int64 v103; // [rsp+2A8h] [rbp+1A8h]
  int *v104; // [rsp+2B0h] [rbp+1B0h]
  __int64 v105; // [rsp+2B8h] [rbp+1B8h]
  int *v106; // [rsp+2C0h] [rbp+1C0h]
  __int64 v107; // [rsp+2C8h] [rbp+1C8h]
  int *v108; // [rsp+2D0h] [rbp+1D0h]
  __int64 v109; // [rsp+2D8h] [rbp+1D8h]
  int *v110; // [rsp+2E0h] [rbp+1E0h]
  __int64 v111; // [rsp+2E8h] [rbp+1E8h]
  int *v112; // [rsp+2F0h] [rbp+1F0h]
  __int64 v113; // [rsp+2F8h] [rbp+1F8h]
  int *v114; // [rsp+300h] [rbp+200h]
  __int64 v115; // [rsp+308h] [rbp+208h]
  int *v116; // [rsp+310h] [rbp+210h]
  __int64 v117; // [rsp+318h] [rbp+218h]

  if ( dword_1C005F810 > 5u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C005F810, 0x800000000002uLL) )
    {
      v22 = *(_DWORD *)(v5 + 788);
      v50 = v5 + 112;
      v52 = &v22;
      v23 = *(_DWORD *)(v5 + 652);
      v54 = &v23;
      v56 = v5 + 704;
      v24 = *(_DWORD *)(v5 + 416);
      v58 = &v24;
      v25 = *(_DWORD *)(v5 + 784);
      v60 = &v25;
      v26 = *(_DWORD *)(v5 + 700);
      v62 = &v26;
      v27 = *(_DWORD *)(v5 + 780);
      v64 = &v27;
      v51 = 16LL;
      v53 = 4LL;
      v55 = 4LL;
      v57 = 4LL;
      v59 = 4LL;
      v61 = 4LL;
      v63 = 4LL;
      v65 = 4LL;
      TlgCreateWsz(&pDesc, (LPCWSTR)(v5 + 204));
      TlgCreateWsz(&v67, *(LPCWSTR *)(v6 + 336));
      TlgCreateWsz(&v68, *(LPCWSTR *)(v7 + 344));
      TlgCreateWsz(&v69, *(LPCWSTR *)(v8 + 360));
      TlgCreateWsz(&v70, *(LPCWSTR *)(v9 + 368));
      v11 = *(_DWORD *)(v10 + 192);
      v12 = *(const WCHAR **)(v10 + 376);
      v71 = &v28;
      v29 = *(_DWORD *)(v10 + 196);
      v28 = v11;
      v73 = &v29;
      v72 = 4LL;
      v74 = 4LL;
      TlgCreateWsz(&v75, v12);
      TlgCreateWsz(&v76, *(LPCWSTR *)(v13 + 384));
      TlgCreateWsz(&v77, (LPCWSTR)(v14 + 708));
      v16 = *(_DWORD *)(v15 + 776);
      v78 = &v30;
      v31 = *(_QWORD *)(v15 + 608) >> 16;
      v80 = &v31;
      v30 = v16;
      v79 = 4LL;
      v81 = 4LL;
      v17 = *(_DWORD *)(v15 + 692);
      v32 = *(_QWORD *)(v15 + 616) >> 16;
      v82 = &v32;
      v33 = *(_QWORD *)(v15 + 624) >> 16;
      v84 = &v33;
      v18 = *(_DWORD *)(v15 + 600);
      v86 = v15 + 600;
      v34 = v18 & 1;
      v88 = &v34;
      v35 = (v18 >> 1) & 1;
      v36 = (v18 >> 2) & 1;
      v90 = &v35;
      v92 = &v36;
      v37 = *(_DWORD *)(v15 + 664);
      v94 = &v37;
      v38 = *(_DWORD *)(v15 + 656);
      v96 = &v38;
      v39 = *(_DWORD *)(v15 + 660);
      v98 = &v39;
      v100 = &v40;
      v41 = *(_DWORD *)(v15 + 680);
      v102 = &v41;
      v42 = *(_DWORD *)(v15 + 684);
      v104 = &v42;
      v19 = (unsigned __int16)*(_DWORD *)(v15 + 688);
      v106 = &v43;
      v44 = *(_DWORD *)(v15 + 696);
      v108 = &v44;
      v45 = *(_DWORD *)(v15 + 668);
      v83 = 4LL;
      v85 = 4LL;
      v87 = 4LL;
      v89 = 4LL;
      v91 = 4LL;
      v93 = 4LL;
      v95 = 4LL;
      v97 = 4LL;
      v99 = 4LL;
      v40 = a2;
      v101 = 4LL;
      v103 = 4LL;
      v105 = 4LL;
      v43 = v19 + (v17 << 16);
      v107 = 4LL;
      v109 = 4LL;
      v110 = &v45;
      v46 = dword_1C0060C18 - *(_DWORD *)(v15 + 672);
      v112 = &v46;
      v47 = *(_DWORD *)(v15 + 676);
      v114 = &v47;
      v116 = &v48;
      v111 = 4LL;
      v113 = 4LL;
      v115 = 4LL;
      v48 = a3;
      v117 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1C005F810, &unk_1C0041139, v21, v20, 0x28u, &pData);
    }
  }
}
