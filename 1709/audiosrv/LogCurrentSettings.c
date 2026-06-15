/*
 * XREFs of LogCurrentSettings @ 0x1800C96BC
 * Callers:
 *     ?SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAX_NPEAUIMMDevice@@PEAUIPropertyStore@@PEAGPEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x1800CB9CC (-SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAX_NPEAUIMMDevice@@PEAUIPropertyStore@@P.c)
 * Callees:
 *     _TlgWrite @ 0x180001690 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x18002C198 (_TlgCreateWsz.c)
 *     _TlgCreateSz @ 0x18002CF70 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     WPP_SF_SSDD_guid_DDDD_guid__guid_ @ 0x1800CD85C (WPP_SF_SSDD_guid_DDDD_guid__guid_.c)
 *     WPP_SF_SSDD_guid_DDD_guid_DDDDDD_guid_DD_guid__guid_ @ 0x1800CD9DC (WPP_SF_SSDD_guid_DDD_guid_DDDDDD_guid_DD_guid__guid_.c)
 */

CAudioDGProcess **__fastcall LogCurrentSettings(
        LPCSTR psz,
        __int64 a2,
        const WCHAR *a3,
        int a4,
        __int64 a5,
        int *a6,
        char a7,
        __int64 a8,
        int *a9)
{
  const WCHAR *v9; // r15
  int *v10; // rdi
  unsigned __int16 v11; // r12
  int v12; // r13d
  int v13; // r14d
  unsigned __int16 v14; // r11
  int v15; // ecx
  unsigned __int16 v16; // r10
  unsigned __int16 v17; // r11
  LPCGUID v18; // r8
  LPCGUID v19; // r9
  int v20; // ecx
  unsigned __int16 v21; // r10
  unsigned __int16 v22; // r11
  LPCGUID v23; // r8
  LPCGUID v24; // r9
  CAudioDGProcess *v25; // r14
  CAudioDGProcess **result; // rax
  int v27; // esi
  unsigned __int16 v28; // [rsp+C0h] [rbp-80h]
  unsigned __int16 v29; // [rsp+C2h] [rbp-7Eh]
  int v31; // [rsp+C8h] [rbp-78h] BYREF
  int v32; // [rsp+CCh] [rbp-74h] BYREF
  int v33; // [rsp+D0h] [rbp-70h] BYREF
  int v34; // [rsp+D4h] [rbp-6Ch] BYREF
  int v35; // [rsp+D8h] [rbp-68h] BYREF
  int v36; // [rsp+DCh] [rbp-64h] BYREF
  int v37; // [rsp+E0h] [rbp-60h] BYREF
  int v38; // [rsp+E4h] [rbp-5Ch] BYREF
  int v39; // [rsp+E8h] [rbp-58h] BYREF
  int v40; // [rsp+ECh] [rbp-54h] BYREF
  int v41; // [rsp+F0h] [rbp-50h] BYREF
  int v42; // [rsp+F4h] [rbp-4Ch] BYREF
  int v43; // [rsp+F8h] [rbp-48h]
  __int64 v44; // [rsp+100h] [rbp-40h]
  int v45; // [rsp+108h] [rbp-38h] BYREF
  int v46; // [rsp+10Ch] [rbp-34h] BYREF
  int v47; // [rsp+110h] [rbp-30h] BYREF
  int v48; // [rsp+114h] [rbp-2Ch] BYREF
  int v49; // [rsp+118h] [rbp-28h] BYREF
  int v50; // [rsp+11Ch] [rbp-24h] BYREF
  __int64 v51; // [rsp+120h] [rbp-20h]
  GUID v52; // [rsp+128h] [rbp-18h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+140h] [rbp+0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+160h] [rbp+20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v55; // [rsp+170h] [rbp+30h] BYREF
  int *v56; // [rsp+180h] [rbp+40h]
  __int64 v57; // [rsp+188h] [rbp+48h]
  int *v58; // [rsp+190h] [rbp+50h]
  __int64 v59; // [rsp+198h] [rbp+58h]
  _DWORD *v60; // [rsp+1A0h] [rbp+60h]
  __int64 v61; // [rsp+1A8h] [rbp+68h]
  int *v62; // [rsp+1B0h] [rbp+70h]
  __int64 v63; // [rsp+1B8h] [rbp+78h]
  int *v64; // [rsp+1C0h] [rbp+80h]
  __int64 v65; // [rsp+1C8h] [rbp+88h]
  int *v66; // [rsp+1D0h] [rbp+90h]
  __int64 v67; // [rsp+1D8h] [rbp+98h]
  __int64 v68; // [rsp+1E0h] [rbp+A0h]
  __int64 v69; // [rsp+1E8h] [rbp+A8h]
  char *v70; // [rsp+1F0h] [rbp+B0h]
  __int64 v71; // [rsp+1F8h] [rbp+B8h]
  int *v72; // [rsp+200h] [rbp+C0h]
  __int64 v73; // [rsp+208h] [rbp+C8h]
  int *v74; // [rsp+210h] [rbp+D0h]
  __int64 v75; // [rsp+218h] [rbp+D8h]
  int *v76; // [rsp+220h] [rbp+E0h]
  __int64 v77; // [rsp+228h] [rbp+E8h]
  int *v78; // [rsp+230h] [rbp+F0h]
  __int64 v79; // [rsp+238h] [rbp+F8h]
  int *v80; // [rsp+240h] [rbp+100h]
  __int64 v81; // [rsp+248h] [rbp+108h]
  GUID *v82; // [rsp+250h] [rbp+110h]
  __int64 v83; // [rsp+258h] [rbp+118h]
  int *v84; // [rsp+260h] [rbp+120h]
  __int64 v85; // [rsp+268h] [rbp+128h]
  int *v86; // [rsp+270h] [rbp+130h]
  __int64 v87; // [rsp+278h] [rbp+138h]
  _DWORD *v88; // [rsp+280h] [rbp+140h]
  __int64 v89; // [rsp+288h] [rbp+148h]
  _DWORD *v90; // [rsp+290h] [rbp+150h]
  __int64 v91; // [rsp+298h] [rbp+158h]
  int *v92; // [rsp+2A0h] [rbp+160h]
  __int64 v93; // [rsp+2A8h] [rbp+168h]
  int *v94; // [rsp+2B0h] [rbp+170h]
  __int64 v95; // [rsp+2B8h] [rbp+178h]
  _DWORD *v96; // [rsp+2C0h] [rbp+180h]
  __int64 v97; // [rsp+2C8h] [rbp+188h]
  int *v98; // [rsp+2D0h] [rbp+190h]
  __int64 v99; // [rsp+2D8h] [rbp+198h]
  int *v100; // [rsp+2E0h] [rbp+1A0h]
  __int64 v101; // [rsp+2E8h] [rbp+1A8h]
  int *v102; // [rsp+2F0h] [rbp+1B0h]
  __int64 v103; // [rsp+2F8h] [rbp+1B8h]
  int *v104; // [rsp+300h] [rbp+1C0h]
  __int64 v105; // [rsp+308h] [rbp+1C8h]
  _DWORD *v106; // [rsp+310h] [rbp+1D0h]
  __int64 v107; // [rsp+318h] [rbp+1D8h]
  _DWORD *v108; // [rsp+320h] [rbp+1E0h]
  __int64 v109; // [rsp+328h] [rbp+1E8h]

  v9 = L"n/a";
  v10 = a9;
  v51 = a5;
  v11 = 0;
  if ( a3 )
    v9 = a3;
  v44 = a2;
  v29 = 0;
  v12 = 0;
  v28 = 0;
  v43 = 0;
  v13 = 0;
  v52 = GUID_00000000_0000_0000_0000_000000000000;
  if ( a8 )
  {
    v11 = *(_WORD *)(a8 + 2);
    v12 = *(_DWORD *)(a8 + 4);
    v29 = *(_WORD *)(a8 + 14);
    if ( *(_WORD *)a8 == 0xFFFE )
    {
      v14 = *(_WORD *)(a8 + 18);
      v13 = *(_DWORD *)(a8 + 20);
      v52 = *(GUID *)(a8 + 24);
      v28 = v14;
      v43 = v13;
    }
  }
  if ( a9 )
  {
    if ( (unsigned int)hProvider > 4 )
    {
      TlgCreateSz(&pDesc, psz);
      TlgCreateWsz(&v55, v9);
      v15 = *a6;
      v56 = &v45;
      v46 = a6[15];
      v58 = &v46;
      v60 = a6 + 3;
      v47 = a6[2];
      v62 = &v47;
      v48 = a6[17];
      v64 = &v48;
      v49 = a4;
      v66 = &v49;
      v68 = v51;
      v70 = &a7;
      v50 = a6[16];
      v72 = &v50;
      v31 = a6[1];
      v74 = &v31;
      v32 = v11;
      v76 = &v32;
      v78 = &v33;
      v80 = &v34;
      v82 = &v52;
      v35 = v16;
      v84 = &v35;
      v36 = v17;
      v86 = &v36;
      v88 = a6 + 7;
      v90 = a6 + 11;
      v45 = v15;
      v57 = 4LL;
      v59 = 4LL;
      v61 = 16LL;
      v63 = 4LL;
      v65 = 4LL;
      v67 = 4LL;
      v69 = 16LL;
      v71 = 4LL;
      v73 = 4LL;
      v75 = 4LL;
      v77 = 4LL;
      v33 = v13;
      v79 = 4LL;
      v34 = v12;
      v81 = 4LL;
      v83 = 16LL;
      v85 = 4LL;
      v87 = 4LL;
      v89 = 16LL;
      v37 = *v10;
      v92 = &v37;
      v38 = v10[15];
      v94 = &v38;
      v96 = v10 + 3;
      v39 = v10[2];
      v98 = &v39;
      v40 = v10[17];
      v100 = &v40;
      v41 = v10[16];
      v102 = &v41;
      v42 = v10[1];
      v104 = &v42;
      v106 = v10 + 7;
      v108 = v10 + 11;
      v91 = 16LL;
      v93 = 4LL;
      v95 = 4LL;
      v97 = 16LL;
      v99 = 4LL;
      v101 = 4LL;
      v103 = 4LL;
      v105 = 4LL;
      v107 = 16LL;
      v109 = 16LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180111FBB, v18, v19, 0x1Fu, &pData);
    }
  }
  else if ( (unsigned int)hProvider > 4 )
  {
    TlgCreateSz(&pDesc, psz);
    TlgCreateWsz(&v55, v9);
    v20 = *a6;
    v56 = &v42;
    v41 = a6[15];
    v58 = &v41;
    v60 = a6 + 3;
    v40 = a6[2];
    v62 = &v40;
    v39 = a6[17];
    v64 = &v39;
    v38 = a4;
    v66 = &v38;
    v68 = v51;
    v70 = &a7;
    v37 = a6[16];
    v72 = &v37;
    v36 = a6[1];
    v74 = &v36;
    v35 = v11;
    v76 = &v35;
    v78 = &v34;
    v80 = &v33;
    v82 = &v52;
    v32 = v21;
    v84 = &v32;
    v31 = v22;
    v86 = &v31;
    v88 = a6 + 7;
    v90 = a6 + 11;
    v42 = v20;
    v57 = 4LL;
    v59 = 4LL;
    v61 = 16LL;
    v63 = 4LL;
    v65 = 4LL;
    v67 = 4LL;
    v69 = 16LL;
    v71 = 4LL;
    v73 = 4LL;
    v75 = 4LL;
    v77 = 4LL;
    v34 = v13;
    v79 = 4LL;
    v33 = v12;
    v81 = 4LL;
    v83 = 16LL;
    v85 = 4LL;
    v87 = 4LL;
    v89 = 16LL;
    v91 = 16LL;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180111E28, v23, v24, 0x16u, &pData);
  }
  v25 = WPP_GLOBAL_Control;
  result = &WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (CAudioDGProcess *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x1000) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
  {
    v27 = v44;
  }
  else
  {
    v27 = v44;
    WPP_SF_SSDD_guid_DDD_guid_DDDDDD_guid_DD_guid__guid_(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      v28,
      v29,
      v44,
      (__int64)(v9 + 17),
      *a6,
      a6[15],
      (__int64)(a6 + 3),
      a6[2],
      a6[17],
      a4,
      v51,
      a7,
      a6[16],
      a6[1],
      v11,
      v43,
      v12,
      (__int64)&v52,
      v29,
      v28,
      (__int64)(a6 + 7),
      (__int64)(a6 + 11));
    v25 = WPP_GLOBAL_Control;
    result = &WPP_GLOBAL_Control;
  }
  if ( v10
    && v25 != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_DWORD *)v25 + 7) & 0x1000) != 0
    && *((_BYTE *)v25 + 25) >= 4u )
  {
    return (CAudioDGProcess **)WPP_SF_SSDD_guid_DDDD_guid__guid_(
                                 *((_QWORD *)v25 + 2),
                                 (int)v10 + 12,
                                 (int)v9 + 34,
                                 v27,
                                 (__int64)(v9 + 17),
                                 *v10,
                                 v10[15],
                                 (__int64)(v10 + 3),
                                 v10[2],
                                 v10[17],
                                 v10[16],
                                 v10[1],
                                 (__int64)(v10 + 7),
                                 (__int64)(v10 + 11));
  }
  return result;
}
