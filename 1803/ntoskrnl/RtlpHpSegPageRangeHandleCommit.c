/*
 * XREFs of RtlpHpSegPageRangeHandleCommit @ 0x140298B64
 * Callers:
 *     RtlpHpSegPageRangeCommit @ 0x140298980 (RtlpHpSegPageRangeCommit.c)
 *     RtlpHpSegPageRangeDecommit @ 0x140298A98 (RtlpHpSegPageRangeDecommit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpSegPageRangeHandleCommit(__int64 a1, __int64 a2, int *a3, _DWORD *a4, int a5)
{
  unsigned int v7; // edi
  char v8; // cl
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // r11
  unsigned __int64 v11; // r9
  unsigned int v12; // esi
  int v13; // eax
  unsigned int v14; // edx
  unsigned __int64 v15; // r14
  int v16; // ecx
  unsigned __int64 v17; // r14
  unsigned int v18; // ebp
  unsigned int v19; // r8d
  unsigned int v20; // r10d
  unsigned int v21; // edx
  int v22; // r10d
  unsigned int v23; // r8d
  int v24; // r10d
  int v25; // eax
  unsigned int v26; // eax
  int v27; // eax
  unsigned int v28; // r8d
  int v29; // r10d
  int v30; // eax

  v7 = 1 << *(_BYTE *)(a1 + 9);
  v8 = *(_BYTE *)(a1 + 9);
  v9 = (unsigned __int64)(unsigned int)*a3 >> v8;
  v10 = v9 << v8;
  v11 = a2 + 32 * v9;
  v12 = *a3 & (v7 - 1);
  v13 = -1;
  v14 = 0;
  v15 = 32 * ((unsigned __int64)(v12 + *a4 - 1) >> v8);
  v16 = -1;
  v17 = v11 + v15;
  v18 = ((v12 + *a4 - 1) & (v7 - 1)) + 1;
  if ( !v12 )
    goto LABEL_28;
  v19 = *(unsigned __int8 *)(v11 + 25);
  v20 = v7;
  if ( v11 == v17 )
    v20 = ((v12 + *a4 - 1) & (v7 - 1)) + 1;
  if ( a5 <= 1 && v19 < v20 )
  {
    v21 = v20;
    v12 = *(unsigned __int8 *)(v11 + 25);
LABEL_10:
    v22 = v10 + v20;
    v14 = v21 - v19;
    v16 = v10 + v12;
    v13 = v22;
    if ( v14 && a5 >= 1 )
    {
      *(_BYTE *)(v11 + 25) = v19 + v14;
      v13 = v22;
    }
    goto LABEL_27;
  }
  if ( a5 == 2 && v19 > v12 )
  {
    v21 = v12;
    v20 = *(unsigned __int8 *)(v11 + 25);
    goto LABEL_10;
  }
LABEL_27:
  while ( 1 )
  {
    v11 += 32LL;
    LODWORD(v10) = v7 + v10;
LABEL_28:
    if ( v11 >= v17 )
      break;
    v23 = *(unsigned __int8 *)(v11 + 25);
    v24 = 0;
    if ( a5 > 1 || v23 >= v7 )
    {
      if ( a5 != 2 || !*(_BYTE *)(v11 + 25) )
        goto LABEL_26;
      v27 = v10;
      v24 = -v23;
      if ( v16 != -1 )
        v27 = v16;
      v16 = v27;
      v26 = *(unsigned __int8 *)(v11 + 25);
    }
    else
    {
      v25 = v23 + v10;
      v24 = v7 - v23;
      if ( v16 != -1 )
        v25 = v16;
      v16 = v25;
      v26 = v7;
    }
    v13 = v10 + v26;
    if ( v24 && a5 >= 1 )
      *(_BYTE *)(v11 + 25) = v24 + v23;
LABEL_26:
    v14 += v24;
  }
  if ( v11 == v17 )
  {
    v28 = *(unsigned __int8 *)(v11 + 25);
    v29 = 0;
    if ( a5 <= 1 && v28 < v18 )
    {
      v30 = v28 + v10;
      v29 = v18 - v28;
      goto LABEL_36;
    }
    if ( a5 == 2 && *(_BYTE *)(v11 + 25) )
    {
      v30 = v10;
      v29 = -v28;
      v18 = *(unsigned __int8 *)(v11 + 25);
LABEL_36:
      if ( v16 != -1 )
        v30 = v16;
      v16 = v30;
      v13 = v18 + v10;
      if ( v29 && a5 >= 1 )
        *(_BYTE *)(v11 + 25) = v29 + v28;
    }
    v14 += v29;
  }
  if ( v14 )
  {
    *a3 = v16;
    *a4 = v13 - v16;
  }
  return v14;
}
