/*
 * XREFs of InitMessageTables @ 0x1C0388BC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 InitMessageTables()
{
  __int64 v0; // rbp
  unsigned __int16 v1; // di
  __int64 v2; // rdx
  unsigned __int16 v3; // ax
  unsigned int v4; // ecx
  __int64 v5; // rax
  __int64 v6; // r8
  _BYTE *v7; // rdx
  unsigned __int16 v8; // di
  __int64 v9; // rdx
  unsigned __int16 v10; // ax
  unsigned int v11; // ecx
  __int64 v12; // rax
  __int64 v13; // r8
  _BYTE *v14; // rdx
  unsigned __int16 v15; // di
  __int64 v16; // rdx
  unsigned __int16 v17; // ax
  unsigned int v18; // ecx
  __int64 v19; // rax
  __int64 v20; // r8
  _BYTE *v21; // rdx
  unsigned __int16 v22; // di
  __int64 v23; // rdx
  unsigned __int16 v24; // ax
  unsigned int v25; // ecx
  __int64 v26; // rax
  __int64 v27; // r8
  _BYTE *v28; // rdx
  unsigned __int16 v29; // di
  __int64 v30; // rdx
  unsigned __int16 v31; // ax
  unsigned int v32; // ecx
  __int64 v33; // rax
  __int64 v34; // r8
  _BYTE *v35; // rdx
  unsigned __int16 v36; // di
  __int64 v37; // rdx
  unsigned __int16 v38; // ax
  unsigned int v39; // ecx
  __int64 v40; // rax
  __int64 v41; // r8
  _BYTE *v42; // rdx
  unsigned __int16 v43; // di
  __int64 v44; // rdx
  unsigned __int16 v45; // ax
  unsigned int v46; // ecx
  __int64 v47; // rax
  __int64 v48; // r8
  _BYTE *v49; // rdx
  unsigned __int16 v50; // di
  __int64 v51; // rdx
  unsigned __int16 v52; // ax
  unsigned int v53; // ecx
  __int64 v54; // rax
  __int64 v55; // r8
  _BYTE *v56; // rdx
  unsigned __int16 v57; // si
  __int64 v58; // rdx
  unsigned __int16 v59; // ax
  unsigned int v60; // ecx
  __int64 v61; // rax
  __int64 v62; // r9
  unsigned __int16 v63; // r8
  _BYTE *v64; // rdx
  unsigned __int16 v65; // di
  __int64 v66; // rdx
  unsigned __int16 v67; // ax
  unsigned int v68; // ecx
  __int64 v69; // rax
  __int64 v70; // r8
  _BYTE *v71; // rdx
  __int64 v72; // rdx
  unsigned __int16 v73; // ax
  unsigned int v74; // ecx
  __int64 v75; // rax
  __int64 v76; // r8
  _BYTE *v77; // rdx
  unsigned __int16 v78; // di
  __int64 v79; // rdx
  unsigned __int16 v80; // ax
  unsigned int v81; // ecx
  __int64 v82; // rax
  __int64 v83; // r8
  _BYTE *v84; // rdx
  unsigned __int16 v85; // di
  __int64 v86; // rdx
  unsigned __int16 v87; // ax
  unsigned int v88; // ecx
  __int64 v89; // rax
  __int64 v90; // r8
  _BYTE *v91; // rdx
  unsigned __int16 v92; // di
  __int64 v93; // rdx
  unsigned __int16 v94; // ax
  unsigned int v95; // ecx
  __int64 result; // rax
  _BYTE *v97; // rdx

  LODWORD(v0) = 0;
  v1 = 51;
  LODWORD(v2) = 0;
  v3 = 51;
  LODWORD(gSharedInfo[67]) = 0;
  do
  {
    v4 = gSharedInfo[67];
    if ( v3 > v4 )
      v4 = v3;
    v2 = (unsigned int)(v2 + 1);
    LODWORD(gSharedInfo[67]) = v4;
    v3 = word_1C02E4550[v2];
  }
  while ( v3 );
  v5 = SharedAlloc((v4 >> 3) + 1);
  gSharedInfo[68] = v5;
  if ( v5 )
  {
    LODWORD(v6) = 0;
    do
    {
      v6 = (unsigned int)(v6 + 1);
      v7 = (_BYTE *)(gSharedInfo[68] + ((unsigned __int64)v1 >> 3));
      *v7 |= 1 << (v1 & 7);
      v1 = word_1C02E4550[v6];
    }
    while ( v1 );
  }
  v8 = 6;
  LODWORD(v9) = 0;
  v10 = 6;
  LODWORD(gSharedInfo[69]) = 0;
  do
  {
    v11 = gSharedInfo[69];
    if ( v10 > v11 )
      v11 = v10;
    v9 = (unsigned int)(v9 + 1);
    LODWORD(gSharedInfo[69]) = v11;
    v10 = word_1C02E44B0[v9];
  }
  while ( v10 );
  v12 = SharedAlloc((v11 >> 3) + 1);
  gSharedInfo[70] = v12;
  if ( v12 )
  {
    LODWORD(v13) = 0;
    do
    {
      v13 = (unsigned int)(v13 + 1);
      v14 = (_BYTE *)(gSharedInfo[70] + ((unsigned __int64)v8 >> 3));
      *v14 |= 1 << (v8 & 7);
      v8 = word_1C02E44B0[v13];
    }
    while ( v8 );
  }
  v15 = 57;
  LODWORD(v16) = 0;
  v17 = 57;
  LODWORD(gSharedInfo[25]) = 0;
  do
  {
    v18 = gSharedInfo[25];
    if ( v17 > v18 )
      v18 = v17;
    v16 = (unsigned int)(v16 + 1);
    LODWORD(gSharedInfo[25]) = v18;
    v17 = word_1C02E4920[v16];
  }
  while ( v17 );
  v19 = SharedAlloc((v18 >> 3) + 1);
  gSharedInfo[26] = v19;
  if ( v19 )
  {
    LODWORD(v20) = 0;
    do
    {
      v20 = (unsigned int)(v20 + 1);
      v21 = (_BYTE *)(gSharedInfo[26] + ((unsigned __int64)v15 >> 3));
      *v21 |= 1 << (v15 & 7);
      v15 = word_1C02E4920[v20];
    }
    while ( v15 );
  }
  v22 = 1;
  LODWORD(v23) = 0;
  v24 = 1;
  LODWORD(gSharedInfo[5]) = 0;
  do
  {
    v25 = gSharedInfo[5];
    if ( v24 > v25 )
      v25 = v24;
    v23 = (unsigned int)(v23 + 1);
    LODWORD(gSharedInfo[5]) = v25;
    v24 = word_1C02E4890[v23];
  }
  while ( v24 );
  v26 = SharedAlloc((v25 >> 3) + 1);
  gSharedInfo[6] = v26;
  if ( v26 )
  {
    LODWORD(v27) = 0;
    do
    {
      v27 = (unsigned int)(v27 + 1);
      v28 = (_BYTE *)(gSharedInfo[6] + ((unsigned __int64)v22 >> 3));
      *v28 |= 1 << (v22 & 7);
      v22 = word_1C02E4890[v27];
    }
    while ( v22 );
  }
  v29 = 129;
  LODWORD(v30) = 0;
  v31 = 129;
  LODWORD(gSharedInfo[9]) = 0;
  do
  {
    v32 = gSharedInfo[9];
    if ( v31 > v32 )
      v32 = v31;
    v30 = (unsigned int)(v30 + 1);
    LODWORD(gSharedInfo[9]) = v32;
    v31 = word_1C02E48D0[v30];
  }
  while ( v31 );
  v33 = SharedAlloc((v32 >> 3) + 1);
  gSharedInfo[10] = v33;
  if ( v33 )
  {
    LODWORD(v34) = 0;
    do
    {
      v34 = (unsigned int)(v34 + 1);
      v35 = (_BYTE *)(gSharedInfo[10] + ((unsigned __int64)v29 >> 3));
      *v35 |= 1 << (v29 & 7);
      v29 = word_1C02E48D0[v34];
    }
    while ( v29 );
  }
  v36 = 15;
  LODWORD(v37) = 0;
  v38 = 15;
  LODWORD(gSharedInfo[11]) = 0;
  do
  {
    v39 = gSharedInfo[11];
    if ( v38 > v39 )
      v39 = v38;
    v37 = (unsigned int)(v37 + 1);
    LODWORD(gSharedInfo[11]) = v39;
    v38 = word_1C02E48C0[v37];
  }
  while ( v38 );
  v40 = SharedAlloc((v39 >> 3) + 1);
  gSharedInfo[12] = v40;
  if ( v40 )
  {
    LODWORD(v41) = 0;
    do
    {
      v41 = (unsigned int)(v41 + 1);
      v42 = (_BYTE *)(gSharedInfo[12] + ((unsigned __int64)v36 >> 3));
      *v42 |= 1 << (v36 & 7);
      v36 = word_1C02E48C0[v41];
    }
    while ( v36 );
  }
  v43 = 369;
  LODWORD(v44) = 0;
  v45 = 369;
  LODWORD(gSharedInfo[33]) = 0;
  do
  {
    v46 = gSharedInfo[33];
    if ( v45 > v46 )
      v46 = v45;
    v44 = (unsigned int)(v44 + 1);
    LODWORD(gSharedInfo[33]) = v46;
    v45 = word_1C02E4858[v44];
  }
  while ( v45 );
  v47 = SharedAlloc((v46 >> 3) + 1);
  gSharedInfo[34] = v47;
  if ( v47 )
  {
    LODWORD(v48) = 0;
    do
    {
      v48 = (unsigned int)(v48 + 1);
      v49 = (_BYTE *)(gSharedInfo[34] + ((unsigned __int64)v43 >> 3));
      *v49 |= 1 << (v43 & 7);
      v43 = word_1C02E4858[v48];
    }
    while ( v43 );
  }
  v50 = 132;
  LODWORD(v51) = 0;
  v52 = 132;
  LODWORD(gSharedInfo[19]) = 0;
  do
  {
    v53 = gSharedInfo[19];
    if ( v52 > v53 )
      v53 = v52;
    v51 = (unsigned int)(v51 + 1);
    LODWORD(gSharedInfo[19]) = v53;
    v52 = word_1C02E4810[v51];
  }
  while ( v52 );
  v54 = SharedAlloc((v53 >> 3) + 1);
  gSharedInfo[20] = v54;
  if ( v54 )
  {
    LODWORD(v55) = 0;
    do
    {
      v55 = (unsigned int)(v55 + 1);
      v56 = (_BYTE *)(gSharedInfo[20] + ((unsigned __int64)v50 >> 3));
      *v56 |= 1 << (v50 & 7);
      v50 = word_1C02E4810[v55];
    }
    while ( v50 );
  }
  v57 = 398;
  LODWORD(v58) = 0;
  v59 = 398;
  LODWORD(gSharedInfo[29]) = 0;
  do
  {
    v60 = gSharedInfo[29];
    if ( v59 > v60 )
      v60 = v59;
    v58 = (unsigned int)(v58 + 1);
    LODWORD(gSharedInfo[29]) = v60;
    v59 = word_1C02E4750[v58];
  }
  while ( v59 );
  v61 = SharedAlloc((v60 >> 3) + 1);
  gSharedInfo[30] = v61;
  if ( v61 )
  {
    LODWORD(v62) = 0;
    v63 = 398;
    do
    {
      v62 = (unsigned int)(v62 + 1);
      v64 = (_BYTE *)(gSharedInfo[30] + ((unsigned __int64)v63 >> 3));
      *v64 |= 1 << (v63 & 7);
      v63 = word_1C02E4750[v62];
    }
    while ( v63 );
  }
  v65 = 359;
  LODWORD(v66) = 0;
  v67 = 359;
  LODWORD(gSharedInfo[21]) = 0;
  do
  {
    v68 = gSharedInfo[21];
    if ( v67 > v68 )
      v68 = v67;
    v66 = (unsigned int)(v66 + 1);
    LODWORD(gSharedInfo[21]) = v68;
    v67 = word_1C02E46A0[v66];
  }
  while ( v67 );
  v69 = SharedAlloc((v68 >> 3) + 1);
  gSharedInfo[22] = v69;
  if ( v69 )
  {
    LODWORD(v70) = 0;
    do
    {
      v70 = (unsigned int)(v70 + 1);
      v71 = (_BYTE *)(gSharedInfo[22] + ((unsigned __int64)v65 >> 3));
      *v71 |= 1 << (v65 & 7);
      v65 = word_1C02E46A0[v70];
    }
    while ( v65 );
  }
  LODWORD(v72) = 0;
  v73 = 398;
  LODWORD(gSharedInfo[23]) = 0;
  do
  {
    v74 = gSharedInfo[23];
    if ( v73 > v74 )
      v74 = v73;
    v72 = (unsigned int)(v72 + 1);
    LODWORD(gSharedInfo[23]) = v74;
    v73 = word_1C02E4750[v72];
  }
  while ( v73 );
  v75 = SharedAlloc((v74 >> 3) + 1);
  gSharedInfo[24] = v75;
  if ( v75 )
  {
    LODWORD(v76) = 0;
    do
    {
      v76 = (unsigned int)(v76 + 1);
      v77 = (_BYTE *)(gSharedInfo[24] + ((unsigned __int64)v57 >> 3));
      *v77 |= 1 << (v57 & 7);
      v57 = word_1C02E4750[v76];
    }
    while ( v57 );
  }
  v78 = 198;
  LODWORD(v79) = 0;
  v80 = 198;
  LODWORD(gSharedInfo[27]) = 0;
  do
  {
    v81 = gSharedInfo[27];
    if ( v80 > v81 )
      v81 = v80;
    v79 = (unsigned int)(v79 + 1);
    LODWORD(gSharedInfo[27]) = v81;
    v80 = word_1C02E45E0[v79];
  }
  while ( v80 );
  v82 = SharedAlloc((v81 >> 3) + 1);
  gSharedInfo[28] = v82;
  if ( v82 )
  {
    LODWORD(v83) = 0;
    do
    {
      v83 = (unsigned int)(v83 + 1);
      v84 = (_BYTE *)(gSharedInfo[28] + ((unsigned __int64)v78 >> 3));
      *v84 |= 1 << (v78 & 7);
      v78 = word_1C02E45E0[v83];
    }
    while ( v78 );
  }
  v85 = 20;
  LODWORD(v86) = 0;
  v87 = 20;
  LODWORD(gSharedInfo[35]) = 0;
  do
  {
    v88 = gSharedInfo[35];
    if ( v87 > v88 )
      v88 = v87;
    v86 = (unsigned int)(v86 + 1);
    LODWORD(gSharedInfo[35]) = v88;
    v87 = word_1C02E45B8[v86];
  }
  while ( v87 );
  v89 = SharedAlloc((v88 >> 3) + 1);
  gSharedInfo[36] = v89;
  if ( v89 )
  {
    LODWORD(v90) = 0;
    do
    {
      v90 = (unsigned int)(v90 + 1);
      v91 = (_BYTE *)(gSharedInfo[36] + ((unsigned __int64)v85 >> 3));
      *v91 |= 1 << (v85 & 7);
      v85 = word_1C02E45B8[v90];
    }
    while ( v85 );
  }
  v92 = 2;
  LODWORD(v93) = 0;
  v94 = 2;
  LODWORD(gSharedInfo[37]) = 0;
  do
  {
    v95 = gSharedInfo[37];
    if ( v94 > v95 )
      v95 = v94;
    v93 = (unsigned int)(v93 + 1);
    LODWORD(gSharedInfo[37]) = v95;
    v94 = word_1C02E45A8[v93];
  }
  while ( v94 );
  result = SharedAlloc((v95 >> 3) + 1);
  gSharedInfo[38] = result;
  if ( result )
  {
    do
    {
      v0 = (unsigned int)(v0 + 1);
      v97 = (_BYTE *)(gSharedInfo[38] + ((unsigned __int64)v92 >> 3));
      result = v92 & 7;
      *v97 |= 1 << result;
      v92 = word_1C02E45A8[v0];
    }
    while ( v92 );
  }
  return result;
}
