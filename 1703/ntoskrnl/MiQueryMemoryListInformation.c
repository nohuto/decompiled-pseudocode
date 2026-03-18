/*
 * XREFs of MiQueryMemoryListInformation @ 0x140020744
 * Callers:
 *     MiManagePartition @ 0x14043C484 (MiManagePartition.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiQueryMemoryListInformation(_QWORD *a1, unsigned __int64 *a2)
{
  unsigned int *v2; // r10
  unsigned __int64 v3; // r8
  _QWORD *v4; // r9
  __int64 v5; // r11
  unsigned __int64 v6; // rax
  __int64 *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // rcx
  unsigned __int64 *v20; // rdx
  __int64 v21; // rcx
  unsigned __int64 result; // rax

  v2 = (unsigned int *)(a1 + 503);
  v3 = a1[698];
  v4 = a2 + 13;
  *a2 = a1[248];
  v5 = 8LL;
  a2[1] = a1[256];
  a2[2] = a1[768];
  a2[3] = a1[776];
  a2[4] = a1[480];
  v6 = a1[782];
  v7 = a1 + 272;
  a2[21] = v6;
  do
  {
    v8 = *v7;
    v7 += 5;
    *(v4 - 8) = v8;
    v9 = *v2++;
    *v4++ = v9;
    --v5;
  }
  while ( v5 );
  if ( *a2 > v3 )
  {
    *a2 = v3;
    v10 = 0LL;
  }
  else
  {
    v10 = v3 - *a2;
  }
  v11 = a2[1];
  if ( v11 > v10 )
  {
    a2[1] = v10;
    v12 = 0LL;
  }
  else
  {
    v12 = v10 - v11;
  }
  v13 = a2[2];
  if ( v13 > v12 )
  {
    a2[2] = v12;
    v14 = 0LL;
  }
  else
  {
    v14 = v12 - v13;
  }
  v15 = a2[3];
  if ( v15 > v14 )
  {
    a2[3] = v14;
    v16 = 0LL;
  }
  else
  {
    v16 = v14 - v15;
  }
  v17 = a2[4];
  if ( v17 > v16 )
  {
    a2[4] = v16;
    v18 = 0LL;
  }
  else
  {
    v18 = v16 - v17;
  }
  v19 = a2[2];
  if ( a2[21] < v19 )
    v19 = a2[21];
  a2[21] = v19;
  v20 = a2 + 5;
  v21 = 8LL;
  do
  {
    result = *v20;
    if ( *v20 > v18 )
    {
      *v20 = v18;
      v18 = 0LL;
    }
    else
    {
      v18 -= result;
    }
    ++v20;
    --v21;
  }
  while ( v21 );
  return result;
}
