/*
 * XREFs of ?NdisTraceLoggingChecksumConfigOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@@Z @ 0x1C001532C
 * Callers:
 *     ?NdisTraceLoggingOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@1@Z @ 0x1C0014E98 (-NdisTraceLoggingOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@1@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0015A3C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0015A70 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 */

void __fastcall NdisTraceLoggingChecksumConfigOffloads(const struct _TlgProvider_t *a1, struct _NDIS_OFFLOAD *a2)
{
  __int64 v2; // rcx
  const GUID *v3; // r8
  __int64 v4; // r9
  unsigned int v5; // ecx
  char v6; // al
  unsigned int v7; // ecx
  char v8; // al
  unsigned int v9; // ecx
  char v10; // al
  unsigned int v11; // ecx
  char v12; // al
  char v13; // al
  const struct _TlgProvider_t *v14; // rcx
  char v15; // [rsp+30h] [rbp-D0h] BYREF
  char v16; // [rsp+31h] [rbp-CFh] BYREF
  char v17; // [rsp+32h] [rbp-CEh] BYREF
  char v18; // [rsp+33h] [rbp-CDh] BYREF
  char v19; // [rsp+34h] [rbp-CCh] BYREF
  char v20; // [rsp+35h] [rbp-CBh] BYREF
  char v21; // [rsp+36h] [rbp-CAh] BYREF
  char v22; // [rsp+37h] [rbp-C9h] BYREF
  char v23; // [rsp+38h] [rbp-C8h] BYREF
  char v24; // [rsp+39h] [rbp-C7h] BYREF
  char v25; // [rsp+3Ah] [rbp-C6h] BYREF
  char v26; // [rsp+3Bh] [rbp-C5h] BYREF
  char v27; // [rsp+3Ch] [rbp-C4h] BYREF
  char v28; // [rsp+3Dh] [rbp-C3h] BYREF
  char v29; // [rsp+3Eh] [rbp-C2h] BYREF
  char v30; // [rsp+3Fh] [rbp-C1h] BYREF
  char v31; // [rsp+40h] [rbp-C0h] BYREF
  char v32; // [rsp+41h] [rbp-BFh] BYREF
  int v33; // [rsp+44h] [rbp-BCh] BYREF
  int v34; // [rsp+48h] [rbp-B8h] BYREF
  int v35; // [rsp+4Ch] [rbp-B4h] BYREF
  int v36; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v38; // [rsp+80h] [rbp-80h]
  __int64 v39; // [rsp+88h] [rbp-78h]
  int *v40; // [rsp+90h] [rbp-70h]
  __int64 v41; // [rsp+98h] [rbp-68h]
  char *v42; // [rsp+A0h] [rbp-60h]
  __int64 v43; // [rsp+A8h] [rbp-58h]
  char *v44; // [rsp+B0h] [rbp-50h]
  __int64 v45; // [rsp+B8h] [rbp-48h]
  char *v46; // [rsp+C0h] [rbp-40h]
  __int64 v47; // [rsp+C8h] [rbp-38h]
  char *v48; // [rsp+D0h] [rbp-30h]
  __int64 v49; // [rsp+D8h] [rbp-28h]
  char *v50; // [rsp+E0h] [rbp-20h]
  __int64 v51; // [rsp+E8h] [rbp-18h]
  int *v52; // [rsp+F0h] [rbp-10h]
  __int64 v53; // [rsp+F8h] [rbp-8h]
  char *v54; // [rsp+100h] [rbp+0h]
  __int64 v55; // [rsp+108h] [rbp+8h]
  char *v56; // [rsp+110h] [rbp+10h]
  __int64 v57; // [rsp+118h] [rbp+18h]
  char *v58; // [rsp+120h] [rbp+20h]
  __int64 v59; // [rsp+128h] [rbp+28h]
  char *v60; // [rsp+130h] [rbp+30h]
  __int64 v61; // [rsp+138h] [rbp+38h]
  char *v62; // [rsp+140h] [rbp+40h]
  __int64 v63; // [rsp+148h] [rbp+48h]
  int *v64; // [rsp+150h] [rbp+50h]
  __int64 v65; // [rsp+158h] [rbp+58h]
  char *v66; // [rsp+160h] [rbp+60h]
  __int64 v67; // [rsp+168h] [rbp+68h]
  char *v68; // [rsp+170h] [rbp+70h]
  __int64 v69; // [rsp+178h] [rbp+78h]
  char *v70; // [rsp+180h] [rbp+80h]
  __int64 v71; // [rsp+188h] [rbp+88h]
  char *v72; // [rsp+190h] [rbp+90h]
  __int64 v73; // [rsp+198h] [rbp+98h]
  int *v74; // [rsp+1A0h] [rbp+A0h]
  __int64 v75; // [rsp+1A8h] [rbp+A8h]
  char *v76; // [rsp+1B0h] [rbp+B0h]
  __int64 v77; // [rsp+1B8h] [rbp+B8h]
  char *v78; // [rsp+1C0h] [rbp+C0h]
  __int64 v79; // [rsp+1C8h] [rbp+C8h]
  char *v80; // [rsp+1D0h] [rbp+D0h]
  __int64 v81; // [rsp+1D8h] [rbp+D8h]
  char *v82; // [rsp+1E0h] [rbp+E0h]
  __int64 v83; // [rsp+1E8h] [rbp+E8h]

  if ( (unsigned int)dword_1C0091010 > 5 )
  {
    if ( TlgKeywordOn(a1, 0x200000000000uLL) )
    {
      v39 = 16LL;
      v41 = 4LL;
      v38 = v2 + 4032;
      v5 = *(_DWORD *)(v4 + 8);
      v33 = *(_DWORD *)(v4 + 4);
      v40 = &v33;
      v6 = *(_BYTE *)(v4 + 8) & 3;
      v43 = 1LL;
      v15 = v6;
      v42 = &v15;
      v45 = 1LL;
      v16 = (v5 >> 2) & 3;
      v44 = &v16;
      v47 = 1LL;
      v17 = (v5 >> 4) & 3;
      v46 = &v17;
      v18 = (v5 >> 6) & 3;
      v19 = BYTE1(v5) & 3;
      v7 = *(_DWORD *)(v4 + 16);
      v48 = &v18;
      v50 = &v19;
      v34 = *(_DWORD *)(v4 + 12);
      v52 = &v34;
      v8 = *(_BYTE *)(v4 + 16) & 3;
      v49 = 1LL;
      v20 = v8;
      v54 = &v20;
      v51 = 1LL;
      v21 = (v7 >> 2) & 3;
      v56 = &v21;
      v53 = 4LL;
      v22 = (v7 >> 4) & 3;
      v58 = &v22;
      v23 = (v7 >> 6) & 3;
      v55 = 1LL;
      v60 = &v23;
      v62 = &v24;
      v57 = 1LL;
      v59 = 1LL;
      v61 = 1LL;
      v24 = BYTE1(v7) & 3;
      v9 = *(_DWORD *)(v4 + 24);
      v35 = *(_DWORD *)(v4 + 20);
      v64 = &v35;
      v10 = *(_BYTE *)(v4 + 24) & 3;
      v63 = 1LL;
      v25 = v10;
      v66 = &v25;
      v65 = 4LL;
      v26 = (v9 >> 2) & 3;
      v68 = &v26;
      v27 = (v9 >> 4) & 3;
      v28 = (v9 >> 6) & 3;
      v11 = *(_DWORD *)(v4 + 32);
      v70 = &v27;
      v72 = &v28;
      v36 = *(_DWORD *)(v4 + 28);
      v74 = &v36;
      v12 = *(_BYTE *)(v4 + 32) & 3;
      v67 = 1LL;
      v29 = v12;
      v76 = &v29;
      v69 = 1LL;
      v30 = (v11 >> 2) & 3;
      v78 = &v30;
      v13 = (v11 >> 4) & 3;
      v14 = (const struct _TlgProvider_t *)(v11 >> 6);
      v31 = v13;
      LOBYTE(v14) = (unsigned __int8)v14 & 3;
      v71 = 1LL;
      v80 = &v31;
      v82 = &v32;
      v73 = 1LL;
      v75 = 4LL;
      v77 = 1LL;
      v79 = 1LL;
      v81 = 1LL;
      v32 = (char)v14;
      v83 = 1LL;
      TlgWrite(v14, &unk_1C007FAD4, v3, (LPCGUID)v4, 0x19u, &pData);
    }
  }
}
