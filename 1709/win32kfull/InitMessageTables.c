/*
 * XREFs of InitMessageTables @ 0x1C0382CA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 InitMessageTables()
{
  __int64 v0; // rbp
  unsigned __int16 v1; // bx
  __int64 v2; // rcx
  unsigned __int16 v3; // ax
  __int64 v4; // rax
  __int64 v5; // r8
  _BYTE *v6; // rdx
  unsigned __int16 v7; // bx
  __int64 v8; // rcx
  unsigned __int16 v9; // ax
  __int64 v10; // rax
  __int64 v11; // r8
  _BYTE *v12; // rdx
  unsigned __int16 v13; // bx
  __int64 v14; // rcx
  unsigned __int16 v15; // ax
  __int64 v16; // rax
  __int64 v17; // r8
  _BYTE *v18; // rdx
  unsigned __int16 v19; // bx
  __int64 v20; // rcx
  unsigned __int16 v21; // ax
  __int64 v22; // rax
  __int64 v23; // r8
  _BYTE *v24; // rdx
  unsigned __int16 v25; // bx
  __int64 v26; // rcx
  unsigned __int16 v27; // ax
  __int64 v28; // rax
  __int64 v29; // r8
  _BYTE *v30; // rdx
  unsigned __int16 v31; // bx
  __int64 v32; // rcx
  unsigned __int16 v33; // ax
  __int64 v34; // rax
  __int64 v35; // r8
  _BYTE *v36; // rdx
  unsigned __int16 v37; // bx
  __int64 v38; // rcx
  unsigned __int16 v39; // ax
  __int64 v40; // rax
  __int64 v41; // r8
  _BYTE *v42; // rdx
  unsigned __int16 v43; // bx
  __int64 v44; // rcx
  unsigned __int16 v45; // ax
  __int64 v46; // rax
  __int64 v47; // r8
  _BYTE *v48; // rdx
  unsigned __int16 v49; // si
  __int64 v50; // rcx
  unsigned __int16 v51; // ax
  __int64 v52; // rax
  __int64 v53; // r9
  unsigned __int16 v54; // r8
  _BYTE *v55; // rdx
  unsigned __int16 v56; // di
  __int64 v57; // rcx
  unsigned __int16 v58; // ax
  __int64 v59; // rax
  __int64 v60; // r8
  _BYTE *v61; // rdx
  __int64 v62; // rcx
  unsigned __int16 v63; // ax
  __int64 v64; // rax
  __int64 v65; // r8
  _BYTE *v66; // rdx
  unsigned __int16 v67; // bx
  __int64 v68; // rcx
  unsigned __int16 v69; // ax
  __int64 v70; // rax
  __int64 v71; // r8
  _BYTE *v72; // rdx
  unsigned __int16 v73; // bx
  __int64 v74; // rcx
  unsigned __int16 v75; // ax
  __int64 v76; // rax
  __int64 v77; // r8
  _BYTE *v78; // rdx
  unsigned __int16 v79; // bx
  __int64 v80; // rcx
  unsigned __int16 v81; // ax
  __int64 result; // rax
  _BYTE *v83; // rdx

  LODWORD(v0) = 0;
  v1 = 51;
  LODWORD(v2) = 0;
  v3 = 51;
  LODWORD(gSharedInfo[67]) = 0;
  do
  {
    if ( (unsigned int)v3 > LODWORD(gSharedInfo[67]) )
      LODWORD(gSharedInfo[67]) = v3;
    v2 = (unsigned int)(v2 + 1);
    v3 = word_1C02DE680[v2];
  }
  while ( v3 );
  v4 = SharedAlloc((unsigned int)((LODWORD(gSharedInfo[67]) >> 3) + 1));
  gSharedInfo[68] = v4;
  if ( v4 )
  {
    LODWORD(v5) = 0;
    do
    {
      v5 = (unsigned int)(v5 + 1);
      v6 = (_BYTE *)(gSharedInfo[68] + ((unsigned __int64)v1 >> 3));
      *v6 |= 1 << (v1 & 7);
      v1 = word_1C02DE680[v5];
    }
    while ( v1 );
  }
  v7 = 6;
  LODWORD(v8) = 0;
  v9 = 6;
  LODWORD(gSharedInfo[69]) = 0;
  do
  {
    if ( (unsigned int)v9 > LODWORD(gSharedInfo[69]) )
      LODWORD(gSharedInfo[69]) = v9;
    v8 = (unsigned int)(v8 + 1);
    v9 = word_1C02DE5E0[v8];
  }
  while ( v9 );
  v10 = SharedAlloc((unsigned int)((LODWORD(gSharedInfo[69]) >> 3) + 1));
  gSharedInfo[70] = v10;
  if ( v10 )
  {
    LODWORD(v11) = 0;
    do
    {
      v11 = (unsigned int)(v11 + 1);
      v12 = (_BYTE *)(gSharedInfo[70] + ((unsigned __int64)v7 >> 3));
      *v12 |= 1 << (v7 & 7);
      v7 = word_1C02DE5E0[v11];
    }
    while ( v7 );
  }
  v13 = 57;
  LODWORD(v14) = 0;
  v15 = 57;
  LODWORD(gSharedInfo[25]) = 0;
  do
  {
    if ( (unsigned int)v15 > LODWORD(gSharedInfo[25]) )
      LODWORD(gSharedInfo[25]) = v15;
    v14 = (unsigned int)(v14 + 1);
    v15 = word_1C02DEA50[v14];
  }
  while ( v15 );
  v16 = SharedAlloc((unsigned int)((LODWORD(gSharedInfo[25]) >> 3) + 1));
  gSharedInfo[26] = v16;
  if ( v16 )
  {
    LODWORD(v17) = 0;
    do
    {
      v17 = (unsigned int)(v17 + 1);
      v18 = (_BYTE *)(gSharedInfo[26] + ((unsigned __int64)v13 >> 3));
      *v18 |= 1 << (v13 & 7);
      v13 = word_1C02DEA50[v17];
    }
    while ( v13 );
  }
  v19 = 1;
  LODWORD(v20) = 0;
  v21 = 1;
  LODWORD(gSharedInfo[5]) = 0;
  do
  {
    if ( (unsigned int)v21 > LODWORD(gSharedInfo[5]) )
      LODWORD(gSharedInfo[5]) = v21;
    v20 = (unsigned int)(v20 + 1);
    v21 = word_1C02DE9C0[v20];
  }
  while ( v21 );
  v22 = SharedAlloc((unsigned int)((LODWORD(gSharedInfo[5]) >> 3) + 1));
  gSharedInfo[6] = v22;
  if ( v22 )
  {
    LODWORD(v23) = 0;
    do
    {
      v23 = (unsigned int)(v23 + 1);
      v24 = (_BYTE *)(gSharedInfo[6] + ((unsigned __int64)v19 >> 3));
      *v24 |= 1 << (v19 & 7);
      v19 = word_1C02DE9C0[v23];
    }
    while ( v19 );
  }
  v25 = 129;
  LODWORD(v26) = 0;
  v27 = 129;
  LODWORD(gSharedInfo[9]) = 0;
  do
  {
    if ( (unsigned int)v27 > LODWORD(gSharedInfo[9]) )
      LODWORD(gSharedInfo[9]) = v27;
    v26 = (unsigned int)(v26 + 1);
    v27 = word_1C02DEA00[v26];
  }
  while ( v27 );
  v28 = SharedAlloc((unsigned int)((LODWORD(gSharedInfo[9]) >> 3) + 1));
  gSharedInfo[10] = v28;
  if ( v28 )
  {
    LODWORD(v29) = 0;
    do
    {
      v29 = (unsigned int)(v29 + 1);
      v30 = (_BYTE *)(gSharedInfo[10] + ((unsigned __int64)v25 >> 3));
      *v30 |= 1 << (v25 & 7);
      v25 = word_1C02DEA00[v29];
    }
    while ( v25 );
  }
  v31 = 15;
  LODWORD(v32) = 0;
  v33 = 15;
  LODWORD(gSharedInfo[11]) = 0;
  do
  {
    if ( (unsigned int)v33 > LODWORD(gSharedInfo[11]) )
      LODWORD(gSharedInfo[11]) = v33;
    v32 = (unsigned int)(v32 + 1);
    v33 = word_1C02DE9F0[v32];
  }
  while ( v33 );
  v34 = SharedAlloc((unsigned int)((LODWORD(gSharedInfo[11]) >> 3) + 1));
  gSharedInfo[12] = v34;
  if ( v34 )
  {
    LODWORD(v35) = 0;
    do
    {
      v35 = (unsigned int)(v35 + 1);
      v36 = (_BYTE *)(gSharedInfo[12] + ((unsigned __int64)v31 >> 3));
      *v36 |= 1 << (v31 & 7);
      v31 = word_1C02DE9F0[v35];
    }
    while ( v31 );
  }
  v37 = 369;
  LODWORD(v38) = 0;
  v39 = 369;
  LODWORD(gSharedInfo[33]) = 0;
  do
  {
    if ( (unsigned int)v39 > LODWORD(gSharedInfo[33]) )
      LODWORD(gSharedInfo[33]) = v39;
    v38 = (unsigned int)(v38 + 1);
    v39 = word_1C02DE988[v38];
  }
  while ( v39 );
  v40 = SharedAlloc((unsigned int)((LODWORD(gSharedInfo[33]) >> 3) + 1));
  gSharedInfo[34] = v40;
  if ( v40 )
  {
    LODWORD(v41) = 0;
    do
    {
      v41 = (unsigned int)(v41 + 1);
      v42 = (_BYTE *)(gSharedInfo[34] + ((unsigned __int64)v37 >> 3));
      *v42 |= 1 << (v37 & 7);
      v37 = word_1C02DE988[v41];
    }
    while ( v37 );
  }
  v43 = 132;
  LODWORD(v44) = 0;
  v45 = 132;
  LODWORD(gSharedInfo[19]) = 0;
  do
  {
    if ( (unsigned int)v45 > LODWORD(gSharedInfo[19]) )
      LODWORD(gSharedInfo[19]) = v45;
    v44 = (unsigned int)(v44 + 1);
    v45 = word_1C02DE940[v44];
  }
  while ( v45 );
  v46 = SharedAlloc((unsigned int)((LODWORD(gSharedInfo[19]) >> 3) + 1));
  gSharedInfo[20] = v46;
  if ( v46 )
  {
    LODWORD(v47) = 0;
    do
    {
      v47 = (unsigned int)(v47 + 1);
      v48 = (_BYTE *)(gSharedInfo[20] + ((unsigned __int64)v43 >> 3));
      *v48 |= 1 << (v43 & 7);
      v43 = word_1C02DE940[v47];
    }
    while ( v43 );
  }
  v49 = 398;
  LODWORD(v50) = 0;
  v51 = 398;
  LODWORD(gSharedInfo[29]) = 0;
  do
  {
    if ( (unsigned int)v51 > LODWORD(gSharedInfo[29]) )
      LODWORD(gSharedInfo[29]) = v51;
    v50 = (unsigned int)(v50 + 1);
    v51 = word_1C02DE880[v50];
  }
  while ( v51 );
  v52 = SharedAlloc((unsigned int)((LODWORD(gSharedInfo[29]) >> 3) + 1));
  gSharedInfo[30] = v52;
  if ( v52 )
  {
    LODWORD(v53) = 0;
    v54 = 398;
    do
    {
      v53 = (unsigned int)(v53 + 1);
      v55 = (_BYTE *)(gSharedInfo[30] + ((unsigned __int64)v54 >> 3));
      *v55 |= 1 << (v54 & 7);
      v54 = word_1C02DE880[v53];
    }
    while ( v54 );
  }
  v56 = 359;
  LODWORD(v57) = 0;
  v58 = 359;
  LODWORD(gSharedInfo[21]) = 0;
  do
  {
    if ( (unsigned int)v58 > LODWORD(gSharedInfo[21]) )
      LODWORD(gSharedInfo[21]) = v58;
    v57 = (unsigned int)(v57 + 1);
    v58 = word_1C02DE7D0[v57];
  }
  while ( v58 );
  v59 = SharedAlloc((unsigned int)((LODWORD(gSharedInfo[21]) >> 3) + 1));
  gSharedInfo[22] = v59;
  if ( v59 )
  {
    LODWORD(v60) = 0;
    do
    {
      v60 = (unsigned int)(v60 + 1);
      v61 = (_BYTE *)(gSharedInfo[22] + ((unsigned __int64)v56 >> 3));
      *v61 |= 1 << (v56 & 7);
      v56 = word_1C02DE7D0[v60];
    }
    while ( v56 );
  }
  LODWORD(v62) = 0;
  v63 = 398;
  LODWORD(gSharedInfo[23]) = 0;
  do
  {
    if ( (unsigned int)v63 > LODWORD(gSharedInfo[23]) )
      LODWORD(gSharedInfo[23]) = v63;
    v62 = (unsigned int)(v62 + 1);
    v63 = word_1C02DE880[v62];
  }
  while ( v63 );
  v64 = SharedAlloc((unsigned int)((LODWORD(gSharedInfo[23]) >> 3) + 1));
  gSharedInfo[24] = v64;
  if ( v64 )
  {
    LODWORD(v65) = 0;
    do
    {
      v65 = (unsigned int)(v65 + 1);
      v66 = (_BYTE *)(gSharedInfo[24] + ((unsigned __int64)v49 >> 3));
      *v66 |= 1 << (v49 & 7);
      v49 = word_1C02DE880[v65];
    }
    while ( v49 );
  }
  v67 = 198;
  LODWORD(v68) = 0;
  v69 = 198;
  LODWORD(gSharedInfo[27]) = 0;
  do
  {
    if ( (unsigned int)v69 > LODWORD(gSharedInfo[27]) )
      LODWORD(gSharedInfo[27]) = v69;
    v68 = (unsigned int)(v68 + 1);
    v69 = word_1C02DE710[v68];
  }
  while ( v69 );
  v70 = SharedAlloc((unsigned int)((LODWORD(gSharedInfo[27]) >> 3) + 1));
  gSharedInfo[28] = v70;
  if ( v70 )
  {
    LODWORD(v71) = 0;
    do
    {
      v71 = (unsigned int)(v71 + 1);
      v72 = (_BYTE *)(gSharedInfo[28] + ((unsigned __int64)v67 >> 3));
      *v72 |= 1 << (v67 & 7);
      v67 = word_1C02DE710[v71];
    }
    while ( v67 );
  }
  v73 = 20;
  LODWORD(v74) = 0;
  v75 = 20;
  LODWORD(gSharedInfo[35]) = 0;
  do
  {
    if ( (unsigned int)v75 > LODWORD(gSharedInfo[35]) )
      LODWORD(gSharedInfo[35]) = v75;
    v74 = (unsigned int)(v74 + 1);
    v75 = word_1C02DE6E8[v74];
  }
  while ( v75 );
  v76 = SharedAlloc((unsigned int)((LODWORD(gSharedInfo[35]) >> 3) + 1));
  gSharedInfo[36] = v76;
  if ( v76 )
  {
    LODWORD(v77) = 0;
    do
    {
      v77 = (unsigned int)(v77 + 1);
      v78 = (_BYTE *)(gSharedInfo[36] + ((unsigned __int64)v73 >> 3));
      *v78 |= 1 << (v73 & 7);
      v73 = word_1C02DE6E8[v77];
    }
    while ( v73 );
  }
  v79 = 2;
  LODWORD(v80) = 0;
  v81 = 2;
  LODWORD(gSharedInfo[37]) = 0;
  do
  {
    if ( (unsigned int)v81 > LODWORD(gSharedInfo[37]) )
      LODWORD(gSharedInfo[37]) = v81;
    v80 = (unsigned int)(v80 + 1);
    v81 = word_1C02DE6D8[v80];
  }
  while ( v81 );
  result = SharedAlloc((unsigned int)((LODWORD(gSharedInfo[37]) >> 3) + 1));
  gSharedInfo[38] = result;
  if ( result )
  {
    do
    {
      v0 = (unsigned int)(v0 + 1);
      v83 = (_BYTE *)(gSharedInfo[38] + ((unsigned __int64)v79 >> 3));
      result = v79 & 7;
      *v83 |= 1 << result;
      v79 = word_1C02DE6D8[v0];
    }
    while ( v79 );
  }
  return result;
}
