/*
 * XREFs of ?PickWireFormatWithPreference@@YAJW4BML_WIREFORMAT_PREFERENCE@@PEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@11@Z @ 0x1C00AEC68
 * Callers:
 *     ?BmlPickColorSpaceAndWireFormat@@YAJPEBUBML_VIDPN_PATH_ORDER@@W4DXGK_DIAG_CCD_BML_ORIGIN@@PEAVDMMVIDPN@@@Z @ 0x1C00AE0C8 (-BmlPickColorSpaceAndWireFormat@@YAJPEBUBML_VIDPN_PATH_ORDER@@W4DXGK_DIAG_CCD_BML_ORIGIN@@PEAVDM.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 */

__int64 __fastcall PickWireFormatWithPreference(__int64 a1, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
  __int64 v5; // rsi
  int *v8; // rbx
  unsigned int v9; // eax
  __int64 v10; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  int v15; // [rsp+28h] [rbp-E0h] BYREF
  char v16; // [rsp+2Ch] [rbp-DCh]
  int v17; // [rsp+30h] [rbp-D8h]
  char v18; // [rsp+34h] [rbp-D4h]
  int v19; // [rsp+38h] [rbp-D0h]
  char v20; // [rsp+3Ch] [rbp-CCh]
  int v21; // [rsp+40h] [rbp-C8h]
  char v22; // [rsp+44h] [rbp-C4h]
  int v23; // [rsp+48h] [rbp-C0h]
  char v24; // [rsp+4Ch] [rbp-BCh]
  int v25; // [rsp+50h] [rbp-B8h]
  char v26; // [rsp+54h] [rbp-B4h]
  int v27; // [rsp+58h] [rbp-B0h]
  char v28; // [rsp+5Ch] [rbp-ACh]
  int v29; // [rsp+60h] [rbp-A8h]
  char v30; // [rsp+64h] [rbp-A4h]
  int v31; // [rsp+68h] [rbp-A0h]
  char v32; // [rsp+6Ch] [rbp-9Ch]
  int v33; // [rsp+70h] [rbp-98h]
  char v34; // [rsp+74h] [rbp-94h]
  int v35; // [rsp+78h] [rbp-90h]
  char v36; // [rsp+7Ch] [rbp-8Ch]
  int v37; // [rsp+80h] [rbp-88h]
  char v38; // [rsp+84h] [rbp-84h]
  int v39; // [rsp+88h] [rbp-80h]
  char v40; // [rsp+8Ch] [rbp-7Ch]
  int v41; // [rsp+90h] [rbp-78h]
  char v42; // [rsp+94h] [rbp-74h]
  int v43; // [rsp+98h] [rbp-70h]
  char v44; // [rsp+9Ch] [rbp-6Ch]
  int v45; // [rsp+A0h] [rbp-68h]
  char v46; // [rsp+A4h] [rbp-64h]
  int v47; // [rsp+A8h] [rbp-60h]
  char v48; // [rsp+ACh] [rbp-5Ch]
  int v49; // [rsp+B0h] [rbp-58h]
  char v50; // [rsp+B4h] [rbp-54h]
  int v51; // [rsp+B8h] [rbp-50h] BYREF
  char v52; // [rsp+BCh] [rbp-4Ch]
  int v53; // [rsp+C0h] [rbp-48h]
  char v54; // [rsp+C4h] [rbp-44h]
  int v55; // [rsp+C8h] [rbp-40h]
  char v56; // [rsp+CCh] [rbp-3Ch]
  int v57; // [rsp+D0h] [rbp-38h]
  char v58; // [rsp+D4h] [rbp-34h]
  int v59; // [rsp+D8h] [rbp-30h]
  char v60; // [rsp+DCh] [rbp-2Ch]
  int v61; // [rsp+E0h] [rbp-28h]
  char v62; // [rsp+E4h] [rbp-24h]
  int v63; // [rsp+E8h] [rbp-20h]
  char v64; // [rsp+ECh] [rbp-1Ch]
  int v65; // [rsp+F0h] [rbp-18h]
  char v66; // [rsp+F4h] [rbp-14h]
  int v67; // [rsp+F8h] [rbp-10h]
  char v68; // [rsp+FCh] [rbp-Ch]
  int v69; // [rsp+100h] [rbp-8h]
  char v70; // [rsp+104h] [rbp-4h]
  int v71; // [rsp+108h] [rbp+0h]
  char v72; // [rsp+10Ch] [rbp+4h]
  int v73; // [rsp+110h] [rbp+8h]
  char v74; // [rsp+114h] [rbp+Ch]
  int v75; // [rsp+118h] [rbp+10h]
  char v76; // [rsp+11Ch] [rbp+14h]
  int v77; // [rsp+120h] [rbp+18h]
  char v78; // [rsp+124h] [rbp+1Ch]
  int v79; // [rsp+128h] [rbp+20h]
  char v80; // [rsp+12Ch] [rbp+24h]
  int v81; // [rsp+130h] [rbp+28h]
  char v82; // [rsp+134h] [rbp+2Ch]
  __int64 v83; // [rsp+138h] [rbp+30h]
  __int64 v84; // [rsp+140h] [rbp+38h]
  int v85; // [rsp+148h] [rbp+40h] BYREF
  char v86; // [rsp+14Ch] [rbp+44h]
  int v87; // [rsp+150h] [rbp+48h]
  char v88; // [rsp+154h] [rbp+4Ch]
  int v89; // [rsp+158h] [rbp+50h]
  char v90; // [rsp+15Ch] [rbp+54h]
  int v91; // [rsp+160h] [rbp+58h]
  char v92; // [rsp+164h] [rbp+5Ch]
  int v93; // [rsp+168h] [rbp+60h]
  char v94; // [rsp+16Ch] [rbp+64h]
  int v95; // [rsp+170h] [rbp+68h]
  char v96; // [rsp+174h] [rbp+6Ch]
  int v97; // [rsp+178h] [rbp+70h]
  char v98; // [rsp+17Ch] [rbp+74h]
  int v99; // [rsp+180h] [rbp+78h]
  char v100; // [rsp+184h] [rbp+7Ch]
  int v101; // [rsp+188h] [rbp+80h]
  char v102; // [rsp+18Ch] [rbp+84h]
  int v103; // [rsp+190h] [rbp+88h]
  char v104; // [rsp+194h] [rbp+8Ch]
  int v105; // [rsp+198h] [rbp+90h]
  char v106; // [rsp+19Ch] [rbp+94h]
  int v107; // [rsp+1A0h] [rbp+98h]
  char v108; // [rsp+1A4h] [rbp+9Ch]
  int v109; // [rsp+1A8h] [rbp+A0h]
  char v110; // [rsp+1ACh] [rbp+A4h]
  int v111; // [rsp+1B0h] [rbp+A8h]
  char v112; // [rsp+1B4h] [rbp+ACh]
  int v113; // [rsp+1B8h] [rbp+B0h]
  char v114; // [rsp+1BCh] [rbp+B4h]
  int v115; // [rsp+1C0h] [rbp+B8h]
  char v116; // [rsp+1C4h] [rbp+BCh]
  __int64 v117; // [rsp+1C8h] [rbp+C0h]
  __int64 v118; // [rsp+1D0h] [rbp+C8h]

  v5 = (int)a1;
  if ( *a4 )
  {
    v12 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v12 + 24) = 5042LL;
    WdLogEvent5_WdAssertion(v12);
  }
  v16 = 0;
  v29 = 0x20000;
  v65 = 0x20000;
  v18 = 0;
  v20 = 0;
  v22 = 0;
  v28 = 0;
  v30 = 0;
  v32 = 0;
  v34 = 0;
  v36 = 0;
  v38 = 0;
  v40 = 0;
  v42 = 0;
  v44 = 0;
  v46 = 0;
  v48 = 0;
  v66 = 0;
  v68 = 0;
  v70 = 0;
  v72 = 0;
  v74 = 0;
  v76 = 0;
  v78 = 0;
  v80 = 0;
  v82 = 0;
  v83 = 0LL;
  v84 = 0LL;
  v86 = 0;
  v15 = 16;
  v17 = 32;
  v19 = 1024;
  v21 = 2048;
  v23 = 8;
  v24 = 1;
  v25 = 512;
  v26 = 1;
  v27 = 0x10000;
  v31 = 0x400000;
  v33 = 0x800000;
  v35 = 8;
  v37 = 512;
  v39 = 0x8000;
  v41 = 0x200000;
  v43 = 4;
  v45 = 256;
  v47 = 0x4000;
  v49 = 0x100000;
  v50 = 0;
  v51 = 16;
  v52 = 0;
  v53 = 32;
  v54 = 0;
  v55 = 8;
  v56 = 0;
  v57 = 1024;
  v58 = 0;
  v59 = 2048;
  v60 = 0;
  v61 = 512;
  v62 = 0;
  v63 = 0x10000;
  v64 = 0;
  v67 = 0x8000;
  v69 = 0x400000;
  v71 = 0x800000;
  v73 = 0x200000;
  v75 = 4;
  v77 = 256;
  v79 = 0x4000;
  v81 = 0x100000;
  v85 = 8;
  v87 = 512;
  v8 = 0LL;
  v91 = 0x200000;
  v88 = 0;
  v89 = 0x8000;
  v90 = 0;
  v92 = 0;
  v93 = 16;
  v94 = 0;
  v95 = 32;
  v96 = 0;
  v97 = 1024;
  v98 = 0;
  v99 = 2048;
  v100 = 0;
  v101 = 0x10000;
  v102 = 0;
  v103 = 0x20000;
  v104 = 0;
  v105 = 0x400000;
  v106 = 0;
  v107 = 0x800000;
  v108 = 0;
  v109 = 4;
  v110 = 0;
  v111 = 256;
  v112 = 0;
  v113 = 0x4000;
  v114 = 0;
  v115 = 0x100000;
  v116 = 0;
  v117 = 0LL;
  v118 = 0LL;
  if ( !(_DWORD)v5 )
  {
LABEL_10:
    v8 = &v15;
    goto LABEL_6;
  }
  if ( (_DWORD)v5 != 1 )
  {
    if ( (_DWORD)v5 != 2 )
    {
      if ( (_DWORD)v5 == 3 )
      {
        v8 = &v51;
        goto LABEL_6;
      }
      if ( (_DWORD)v5 != 4 )
      {
        v13 = WdLogNewEntry5_WdAssertion((unsigned int)(v5 - 3));
        *(_QWORD *)(v13 + 24) = v5;
        WdLogEvent5_WdAssertion(v13);
        goto LABEL_6;
      }
    }
    goto LABEL_10;
  }
  v8 = &v85;
LABEL_6:
  v9 = 0;
  while ( 1 )
  {
    v10 = (unsigned int)*v8;
    if ( ((unsigned int)v10 & *a2) != 0 && (!*((_BYTE *)v8 + 4) || ((unsigned int)v10 & *a3) != 0) )
      break;
    ++v9;
    v8 += 2;
    if ( v9 >= 0x12 )
      return 3221225473LL;
  }
  *a4 = v10;
  if ( (((_DWORD)v10 - 1) & (unsigned int)v10) != 0 )
  {
    v14 = WdLogNewEntry5_WdAssertion(v10);
    *(_QWORD *)(v14 + 24) = 5164LL;
    WdLogEvent5_WdAssertion(v14);
  }
  return 0LL;
}
