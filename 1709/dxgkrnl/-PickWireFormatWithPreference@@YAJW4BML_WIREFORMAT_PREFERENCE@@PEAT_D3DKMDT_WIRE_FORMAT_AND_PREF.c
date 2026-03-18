/*
 * XREFs of ?PickWireFormatWithPreference@@YAJW4BML_WIREFORMAT_PREFERENCE@@PEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@1@Z @ 0x1C00D11F4
 * Callers:
 *     ?BmlPickColorSpaceAndWireFormat@@YAJPEBUBML_VIDPN_PATH_ORDER@@W4DXGK_DIAG_CCD_BML_ORIGIN@@PEAVDMMVIDPN@@@Z @ 0x1C00D20AC (-BmlPickColorSpaceAndWireFormat@@YAJPEBUBML_VIDPN_PATH_ORDER@@W4DXGK_DIAG_CCD_BML_ORIGIN@@PEAVDM.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 */

__int64 __fastcall PickWireFormatWithPreference(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  __int64 v3; // rsi
  __int64 v6; // rax
  int *v7; // rdi
  __int64 v8; // rax
  int v9; // esi
  _BYTE *i; // rdx
  int v11; // ecx
  int v12; // ecx
  __int64 v13; // rcx
  int v14; // ecx
  __int64 v15; // rax
  _QWORD v17[3]; // [rsp+24h] [rbp-E4h] BYREF
  int v18; // [rsp+3Ch] [rbp-CCh]
  int v19; // [rsp+40h] [rbp-C8h]
  int v20; // [rsp+44h] [rbp-C4h]
  int v21; // [rsp+48h] [rbp-C0h]
  __int64 v22; // [rsp+4Ch] [rbp-BCh]
  int v23; // [rsp+54h] [rbp-B4h]
  int v24; // [rsp+58h] [rbp-B0h]
  int v25; // [rsp+5Ch] [rbp-ACh]
  int v26; // [rsp+60h] [rbp-A8h]
  int v27; // [rsp+64h] [rbp-A4h]
  int v28; // [rsp+68h] [rbp-A0h]
  int v29; // [rsp+6Ch] [rbp-9Ch]
  int v30; // [rsp+70h] [rbp-98h]
  int v31; // [rsp+74h] [rbp-94h]
  int v32; // [rsp+78h] [rbp-90h]
  __int64 v33; // [rsp+7Ch] [rbp-8Ch]
  __int64 v34; // [rsp+84h] [rbp-84h]
  int v35; // [rsp+8Ch] [rbp-7Ch]
  int v36; // [rsp+90h] [rbp-78h]
  int v37; // [rsp+94h] [rbp-74h]
  int v38; // [rsp+98h] [rbp-70h]
  int v39; // [rsp+9Ch] [rbp-6Ch]
  int v40; // [rsp+A0h] [rbp-68h]
  int v41; // [rsp+A4h] [rbp-64h]
  _DWORD v42[7]; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v43; // [rsp+C4h] [rbp-44h]
  __int64 v44; // [rsp+CCh] [rbp-3Ch]
  __int64 v45; // [rsp+D4h] [rbp-34h]
  int v46; // [rsp+DCh] [rbp-2Ch]
  int v47; // [rsp+E0h] [rbp-28h]
  int v48; // [rsp+E4h] [rbp-24h]
  int v49; // [rsp+E8h] [rbp-20h]
  int v50; // [rsp+ECh] [rbp-1Ch]
  int v51; // [rsp+F0h] [rbp-18h]
  __int64 v52; // [rsp+F4h] [rbp-14h]
  int v53; // [rsp+FCh] [rbp-Ch]
  int v54; // [rsp+100h] [rbp-8h]
  __int64 v55; // [rsp+104h] [rbp-4h]
  int v56; // [rsp+10Ch] [rbp+4h]
  int v57; // [rsp+110h] [rbp+8h]
  int v58; // [rsp+114h] [rbp+Ch]
  int v59; // [rsp+118h] [rbp+10h]
  int v60; // [rsp+11Ch] [rbp+14h]
  int v61; // [rsp+120h] [rbp+18h]
  int v62; // [rsp+124h] [rbp+1Ch]
  int v63; // [rsp+128h] [rbp+20h] BYREF
  __int64 v64; // [rsp+12Ch] [rbp+24h]
  int v65; // [rsp+134h] [rbp+2Ch]
  int v66; // [rsp+138h] [rbp+30h]
  int v67; // [rsp+13Ch] [rbp+34h]
  int v68; // [rsp+140h] [rbp+38h]
  int v69; // [rsp+144h] [rbp+3Ch]
  int v70; // [rsp+148h] [rbp+40h]
  int v71; // [rsp+14Ch] [rbp+44h]
  int v72; // [rsp+150h] [rbp+48h]
  int v73; // [rsp+154h] [rbp+4Ch]
  int v74; // [rsp+158h] [rbp+50h]
  int v75; // [rsp+15Ch] [rbp+54h]
  int v76; // [rsp+160h] [rbp+58h]
  __int64 v77; // [rsp+164h] [rbp+5Ch]
  int v78; // [rsp+16Ch] [rbp+64h]
  int v79; // [rsp+170h] [rbp+68h]
  int v80; // [rsp+174h] [rbp+6Ch]
  int v81; // [rsp+178h] [rbp+70h]
  int v82; // [rsp+17Ch] [rbp+74h]
  int v83; // [rsp+180h] [rbp+78h]
  __int64 v84; // [rsp+184h] [rbp+7Ch]
  int v85; // [rsp+18Ch] [rbp+84h]
  int v86; // [rsp+190h] [rbp+88h]
  int v87; // [rsp+194h] [rbp+8Ch]
  int v88; // [rsp+198h] [rbp+90h]
  int v89; // [rsp+19Ch] [rbp+94h]
  int v90; // [rsp+1A0h] [rbp+98h]
  int v91; // [rsp+1A4h] [rbp+9Ch]

  v3 = (int)a1;
  if ( *a3 )
  {
    v6 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v6 + 24) = 5201LL;
    WdLogEvent5_WdAssertion(v6);
  }
  v63 = 0;
  v64 = 4LL;
  v67 = 4;
  v71 = 4;
  v75 = 4;
  v70 = 2;
  v66 = 1;
  v65 = 8;
  v68 = 1;
  v69 = 8;
  v72 = 2;
  v73 = 8;
  v74 = 3;
  v76 = 3;
  v77 = 8LL;
  v78 = 2;
  v79 = 1;
  v80 = 2;
  v81 = 2;
  v82 = 2;
  v83 = 3;
  v84 = 2LL;
  v85 = 1;
  v86 = 1;
  v87 = 1;
  v88 = 2;
  v89 = 1;
  v90 = 3;
  v91 = 1;
  v17[2] = 8LL;
  v18 = 2;
  v19 = 1;
  v21 = 1;
  v22 = 0x100000008LL;
  v23 = 2;
  v24 = 2;
  v26 = 2;
  v27 = 8;
  v28 = 2;
  v29 = 2;
  v30 = 3;
  v32 = 3;
  v33 = 0x300000008LL;
  v34 = 2LL;
  v35 = 1;
  v36 = 1;
  v37 = 1;
  v38 = 2;
  v39 = 1;
  v40 = 3;
  v41 = 1;
  v42[1] = 2;
  v42[2] = 1;
  v42[3] = 2;
  v42[4] = 2;
  v42[5] = 2;
  v42[6] = 3;
  v43 = 2LL;
  v45 = 0x100000008LL;
  v47 = 1;
  v48 = 8;
  v49 = 2;
  v51 = 2;
  v52 = 0x300000008LL;
  HIDWORD(v17[0]) = 0;
  v17[1] = 4LL;
  v20 = 4;
  v25 = 4;
  v31 = 4;
  v42[0] = 0;
  v44 = 4LL;
  v46 = 4;
  v50 = 4;
  v59 = 2;
  v7 = 0LL;
  v53 = 4;
  v54 = 3;
  v55 = 8LL;
  v56 = 1;
  v57 = 1;
  v58 = 1;
  v60 = 1;
  v61 = 3;
  v62 = 1;
  switch ( (_DWORD)v3 )
  {
    case 0:
      goto LABEL_11;
    case 1:
      v7 = v42;
      goto LABEL_12;
    case 2:
      goto LABEL_11;
    case 3:
      v7 = (int *)v17 + 1;
      goto LABEL_12;
    case 4:
LABEL_11:
      v7 = &v63;
      goto LABEL_12;
  }
  v8 = WdLogNewEntry5_WdAssertion((unsigned int)(v3 - 3));
  *(_QWORD *)(v8 + 24) = v3;
  WdLogEvent5_WdAssertion(v8);
LABEL_12:
  v9 = 0;
  for ( i = v7 + 1; ; i += 8 )
  {
    v11 = *((_DWORD *)i - 1);
    if ( !v11 )
      break;
    v12 = v11 - 1;
    if ( v12 )
    {
      v13 = (unsigned int)(v12 - 1);
      if ( (_DWORD)v13 )
      {
        if ( (_DWORD)v13 != 1 )
        {
          v15 = WdLogNewEntry5_WdAssertion(v13);
          *(_QWORD *)(v15 + 24) = v7[2 * v9];
          WdLogEvent5_WdAssertion(v15);
          return 3221225473LL;
        }
        if ( (*i & (unsigned __int8)(*a2 >> 20) & 0x3F) != 0 )
        {
          v14 = (*a3 ^ (v7[2 * v9 + 1] << 20)) & 0x3F00000;
          goto LABEL_29;
        }
      }
      else if ( (*i & (unsigned __int8)(*a2 >> 14) & 0x3F) != 0 )
      {
        v14 = (*a3 ^ (v7[2 * v9 + 1] << 14)) & 0xFC000;
        goto LABEL_29;
      }
    }
    else if ( (*i & (unsigned __int8)BYTE1(*a2) & 0x3F) != 0 )
    {
      v14 = (*a3 ^ (v7[2 * v9 + 1] << 8)) & 0x3F00;
      goto LABEL_29;
    }
LABEL_24:
    if ( (unsigned int)++v9 >= 0x10 )
      return 3221225473LL;
  }
  if ( (*i & (unsigned __int8)(*a2 >> 2) & 0x3F) == 0 )
    goto LABEL_24;
  v14 = (*a3 ^ (4 * v7[2 * v9 + 1])) & 0xFC;
LABEL_29:
  *a3 ^= v14;
  return 0LL;
}
