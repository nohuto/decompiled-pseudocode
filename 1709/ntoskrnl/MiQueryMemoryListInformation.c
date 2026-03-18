/*
 * XREFs of MiQueryMemoryListInformation @ 0x1400B8DC4
 * Callers:
 *     MmManagePartitionMemoryInformation @ 0x1404FC4EC (MmManagePartitionMemoryInformation.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiQueryMemoryListInformation(_QWORD *a1, unsigned __int64 *a2)
{
  unsigned int *v2; // r8
  unsigned __int64 v3; // r9
  __int64 v5; // r11
  _QWORD *v6; // rdx
  __int64 *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rax
  bool v13; // cc
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // r9
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // r8
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rdx
  unsigned __int64 *v29; // r10
  __int64 v30; // r9
  unsigned __int64 v31; // r8
  unsigned __int64 result; // rax
  unsigned __int64 v33; // rcx

  v2 = (unsigned int *)(a1 + 519);
  v3 = a1[722];
  *a2 = a1[264];
  v5 = 8LL;
  a2[1] = a1[272];
  a2[2] = a1[792];
  a2[3] = a1[800];
  a2[4] = a1[496];
  a2[21] = a1[806];
  v6 = a2 + 13;
  v7 = a1 + 288;
  do
  {
    v8 = *v7;
    v7 += 5;
    *(v6 - 8) = v8;
    v9 = *v2++;
    *v6++ = v9;
    --v5;
  }
  while ( v5 );
  v10 = *a2;
  if ( *a2 > v3 )
    *a2 = v3;
  v11 = 0LL;
  v12 = v3 - v10;
  v13 = v10 <= v3;
  v14 = a2[1];
  if ( v13 )
    v11 = v12;
  v15 = a2[1];
  if ( v14 > v11 )
    v15 = v11;
  v16 = 0LL;
  a2[1] = v15;
  v17 = v11 - v14;
  v13 = v14 <= v11;
  v18 = a2[2];
  v19 = v18;
  if ( v13 )
    v16 = v17;
  if ( v18 > v16 )
    v19 = v16;
  v20 = v16 - v18;
  v21 = 0LL;
  a2[2] = v19;
  v13 = v18 <= v16;
  v22 = a2[3];
  if ( v13 )
    v21 = v20;
  v23 = a2[3];
  if ( v22 > v21 )
    v23 = v21;
  v24 = 0LL;
  a2[3] = v23;
  v25 = v21 - v22;
  v13 = v22 <= v21;
  v26 = a2[4];
  if ( v13 )
    v24 = v25;
  v27 = a2[4];
  if ( v26 > v24 )
    v27 = v24;
  v28 = 0LL;
  a2[4] = v27;
  if ( v26 <= v24 )
    v28 = v24 - v26;
  if ( a2[21] < v19 )
    v19 = a2[21];
  a2[21] = v19;
  v29 = a2 + 5;
  v30 = 8LL;
  do
  {
    v31 = *v29;
    if ( *v29 > v28 )
      *v29 = v28;
    result = v28;
    v33 = v28 - v31;
    v28 = 0LL;
    ++v29;
    if ( v31 <= result )
      v28 = v33;
    --v30;
  }
  while ( v30 );
  return result;
}
